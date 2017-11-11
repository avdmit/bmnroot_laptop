#include "BmnLANDRaw2Digit.h"
#include <fstream>
#include <iostream>
#include <TClonesArray.h>
#include <BmnTacquilaDigit.h>

#define LENGTH(x) (sizeof x / sizeof x[0])

namespace {
  bool istokenish(int a_c)
  {
    return isalnum(a_c) || '_' == a_c || '.' == a_c;
  }

  std::vector<std::string> tokenize(std::string const &a_str)
  {
    std::vector<std::string> result;
    unsigned i = 0;
    for (;;) {
      for (;;) {
	if (a_str.size() == i) {
	  return result;
	}
	if (istokenish(a_str.at(i))) {
	  break;
	}
	++i;
      }
      unsigned start = i;
      for (; i < a_str.size() && istokenish(a_str.at(i)); ++i);
      result.push_back(a_str.substr(start, i - start));
    }
  }
}

BmnLANDRaw2Digit::BmnLANDRaw2Digit(TString a_map_filename, TString
    a_clock_filename, TString a_tcal_filename, TString a_diff_sync_filename):
  m_tacq2det(),
  m_det2tacq(),
  m_ped(),
  m_tcal(),
  m_diff_sync(),
  m_c17(),
  m_builder()
{
  /*
   * Read mapping.
   */
  auto path = std::string(getenv("VMCWORKDIR")) + "/input/" +
    a_map_filename.Data();
  std::ifstream in(path.c_str());
  if (!in.is_open()) {
    std::cerr << __func__ << ": COULD NOT OPEN '" << path << "'!!!\n";
    return;
  }
  std::cout << __func__ << ": Reading mapping from '" << path << "'.\n";
  for (unsigned line_no = 1;; ++line_no) {
    /* Get one mapping spec. */
    int land_plane, land_bar, land_side;
    int tacq_crate, tacq_module, tacq_channel;
    int triplex_laniic, triplex_id;
    in
      >> land_plane >> land_bar >> land_side
      >> tacq_crate >> tacq_module >> tacq_channel
      >> triplex_laniic >> triplex_id;
    if (!in.good()) {
      break;
    }
    /* Verify input looks ok. */
    if (land_plane < 1 || land_plane > 6) {
      std::cerr << __func__ << ':' << line_no << ": INVALID LAND PLANE!!!\n";
      return;
    }
    if (land_bar < 1 || land_bar > 20) {
      std::cerr << __func__ << ':' << line_no << ": INVALID LAND BAR!!!\n";
      return;
    }
    if (land_side < 1 || land_side > 2) {
      std::cerr << __func__ << ':' << line_no << ": INVALID LAND SIDE!!!\n";
      return;
    }
    int tacq_module_max;
    if (1 == tacq_crate) {
      tacq_module_max = 10;
    } else if (2 == tacq_crate) {
      tacq_module_max = 6;
    } else {
      std::cerr << __func__ << ':' << line_no << ": INVALID TACQUILA CRATE!!!\n";
      return;
    }
    if (tacq_module < 1 || tacq_module > tacq_module_max) {
      std::cerr << __func__ << ':' << line_no <<
	": INVALID TACQUILA MODULE!!!\n";
      return;
    }
    if (tacq_channel < 1 || tacq_channel > 16) {
      std::cerr << __func__ << ':' << line_no <<
	": INVALID TACQUILA CHANNEL!!!\n";
      return;
    }
    /* Triplex info we don't care about. */
    auto &det = m_tacq2det[tacq_crate - 1][tacq_module - 1][tacq_channel - 1];
    det.plane = land_plane - 1;
    det.bar = land_bar - 1;
    det.side = land_side - 1;
    auto &tacq = m_det2tacq[land_plane - 1][land_bar - 1][land_side - 1];
    tacq.crate = tacq_crate - 1;
    tacq.module = tacq_module - 1;
    tacq.channel = tacq_channel - 1;
  }
  in.close();
  /*
   * Read clock file.
   * This file is generated by land02 calibration routines, and contains mainly
   * pedestals.
   */
  path = std::string(getenv("VMCWORKDIR")) + "/input/" +
    a_clock_filename.Data();
  in.open(path.c_str());
  if (!in.is_open()) {
    std::cerr << __func__ << ": COULD NOT OPEN '" << path << "'!!!\n";
    return;
  }
  std::cout << __func__ << ": Reading pedestals from '" << path << "'.\n";
  for (unsigned line_no = 1;; ++line_no) {
    std::string line;
    std::getline(in, line);
    if (!in.good()) {
      break;
    }
    int land_plane = -1;
    int land_bar = -1;
    int land_t = -1;
    auto const token = tokenize(line);
    if (token.size() < 7) {
      continue;
    }
    if (0 != token.at(0).compare("ENERGY_ZERO_NOISE")) {
      continue;
    }
    if (0 != token.at(1).compare("SIGNAL_ID")) {
      continue;
    }
    unsigned plane_ofs;
    if (0 == token.at(2).compare("N")) {
      plane_ofs = 0;
    } else if (0 == token.at(2).compare("V")) {
      plane_ofs = 5;
    } else {
      continue;
    }
    land_plane = strtol(token.at(3).c_str(), NULL, 10) + plane_ofs;
    land_bar = strtol(token.at(4).c_str(), NULL, 10);
    land_t = strtol(token.at(5).c_str(), NULL, 10);
    if (land_plane < 1 || land_plane > LAND_PLANE_N ||
	land_bar < 1 || land_bar > LAND_BAR_N ||
	land_t < 1 || land_t > LAND_SIDE_N) {
      continue;
    }
    float ped = strtod(token.at(6).c_str(), NULL);
    m_ped[land_plane - 1][land_bar - 1][land_t - 1] = ped;
  }
  in.close();
  /*
   * Read tcal file.
   * This file is also generated by land02 calibration routines, and contains
   * "point-wise" time calibration which is needed for Tacquila-like TDC:s.
   */
  path = std::string(getenv("VMCWORKDIR")) + "/input/" +
    a_tcal_filename.Data();
  in.open(path.c_str());
  if (!in.is_open()) {
    std::cerr << __func__ << ": COULD NOT OPEN '" << path << "'!!!\n";
    return;
  }
  std::cout << __func__ << ": Reading tcal from '" << path << "'.\n";
  for (unsigned line_no = 1;; ++line_no) {
    std::string line;
    std::getline(in, line);
    if (!in.good()) {
      break;
    }
    int land_plane = -1;
    int land_bar = -1;
    int land_tcal = -1;
    auto const token = tokenize(line);
    if (token.size() < 8) {
      continue;
    }
    if (0 != token.at(0).compare("TIME_CALIB_POINT")) {
      continue;
    }
    if (0 != token.at(1).compare("SIGNAL_ID")) {
      continue;
    }
    unsigned plane_ofs;
    if (0 == token.at(2).compare("N")) {
      plane_ofs = 0;
    } else if (0 == token.at(2).compare("V")) {
      plane_ofs = 5;
    } else {
      continue;
    }
    land_plane = strtol(token.at(3).c_str(), NULL, 10) + plane_ofs;
    land_bar = strtol(token.at(4).c_str(), NULL, 10);
    land_tcal = strtol(token.at(5).c_str(), NULL, 10);
    if (land_plane < 1 || land_plane > LAND_PLANE_N ||
	land_bar < 1 || land_bar > LAND_BAR_N) {
      continue;
    }
    unsigned tdc = strtod(token.at(6).c_str(), NULL);
    float t_ns = strtod(token.at(7).c_str(), NULL);
    int land_side = -1;
    switch (land_tcal) {
      case 1:
      case 5: land_side = 0; break;
      case 2:
      case 6: land_side = 1; break;
      default: break;
    }
    if (-1 == land_side) {
      continue;
    }
    auto const &tacq = m_det2tacq[land_plane - 1][land_bar - 1][land_side];
    int tacq_channel;
    switch (land_tcal) {
      case 1:
      case 2: tacq_channel = tacq.channel; break;
      case 5:
      case 6: tacq_channel = 16; break;
      default: break;
    }
    auto &tcal_vec = m_tcal[tacq.crate][tacq.module][tacq_channel];
    if (tcal_vec.size() > 0 && tcal_vec.back().tdc > tdc) {
      /* land02 dups channel-17 tcal for every channel. */
      if (16 != tacq_channel) {
	std::cerr << __func__ << ':' << path << ':' << line_no << ": OUT-OF-ORDER TCAL!!!\n";
      }
      continue;
    }
    tcal_vec.push_back(TCal(tdc, t_ns));
  }
  in.close();
  /*
   * Read time and energy calibration.
   * This file is generated by land02 calibration routines, and contains
   * one so-called diff and sync value for time and energy for both PMT:s in
   * one bar, e.g.:
   * t0'(bar=n) = t0(bar=n) + time_diff(bar=n) - time_sync(bar=n)
   * t1'(bar=n) = t1(bar=n) - time_diff(bar=n) - time_sync(bar=n)
   * q0'(bar=n) = q0(bar=n) * energy_diff(bar=n) * energy_sync(bar=n)
   * q1'(bar=n) = q1(bar=n) / energy_diff(bar=n) * energy_sync(bar=n)
   */
  path = std::string(getenv("VMCWORKDIR")) + "/input/" +
    a_diff_sync_filename.Data();
  in.open(path.c_str());
  if (!in.is_open()) {
    std::cerr << __func__ << ": COULD NOT OPEN '" << path << "'!!!\n";
    return;
  }
  std::cout << __func__ << ": Reading diff and sync from '" << path << "'.\n";
  for (unsigned line_no = 1;; ++line_no) {
    std::string line;
    std::getline(in, line);
    if (!in.good()) {
      break;
    }
    int land_plane = -1;
    int land_bar = -1;
    int land_t = -1;
    auto const token = tokenize(line);
    if (token.size() < 7) {
      continue;
    }
    char type;
    if (0 == token.at(0).compare("TIME_DIFF_OFFSET")) {
      type = 0;
    } else if (0 == token.at(0).compare("TIME_SYNC_OFFSET")) {
      type = 1;
    } else if (0 == token.at(0).compare("ENERGY_DIFF_OFFSET")) {
      type = 2;
    } else if (0 == token.at(0).compare("ENERGY_SYNC_OFFSET")) {
      type = 3;
    } else {
      continue;
    }
    if (0 != token.at(1).compare("SIGNAL_ID")) {
      continue;
    }
    unsigned plane_ofs;
    if (0 == token.at(2).compare("N")) {
      plane_ofs = 0;
    } else if (0 == token.at(2).compare("V")) {
      plane_ofs = 5;
    } else {
      continue;
    }
    land_plane = strtol(token.at(3).c_str(), NULL, 10) + plane_ofs;
    land_bar = strtol(token.at(4).c_str(), NULL, 10);
    if (land_plane < 1 || land_plane > LAND_PLANE_N ||
	land_bar < 1 || land_bar > LAND_BAR_N) {
      continue;
    }
    float value = strtod(token.at(5).c_str(), NULL);
    auto &diff_sync = m_diff_sync[land_plane - 1][land_bar - 1];
    switch (type) {
      case 0: diff_sync.time_diff = value; break;
      case 1: diff_sync.time_sync = value; break;
      case 2:
	      /* Damage from my old hacking days, is division still slow? */
	      diff_sync.energy_diff0 = value;
	      diff_sync.energy_diff1 = 1. / value;
	      break;
      case 3: diff_sync.energy_sync = value; break;
      default: abort(); /* Should not happen... */
    }
  }
  in.close();
}

void BmnLANDRaw2Digit::fillEvent(TClonesArray const *tacquila_array,
    TClonesArray *land_array)
{
  /* First clear and find common stop channels ("channel 17"). */
  for (size_t crate_i = 0; crate_i < LENGTH(m_c17); ++crate_i) {
    for (size_t module_i = 0; module_i < LENGTH(m_c17[crate_i]); ++module_i) {
      m_c17[crate_i][module_i] = nullptr;
    }
  }
  for (int i = 0; i < tacquila_array->GetEntriesFast(); i++) {
    auto *tacquila = reinterpret_cast<BmnTacquilaDigit *>(
	tacquila_array->At(i));
    /* And let's apply tcal while we're here... */
    SetTCal(*tacquila);
    if (16 == tacquila->GetChannel()) {
      m_c17[tacquila->GetGtb()][tacquila->GetModule()] = tacquila;
    }
  }
  /* Now let's clear and look at the normal channels 0..15. */
  for (size_t plane_i = 0; plane_i < LENGTH(m_builder); ++plane_i) {
    for (size_t bar_i = 0; bar_i < LENGTH(m_builder[plane_i]); ++bar_i) {
      for (size_t side_i = 0; side_i < LENGTH(m_builder[plane_i][bar_i]);
	  ++side_i) {
	m_builder[plane_i][bar_i][side_i] = nullptr;
      }
    }
  }
  /*
   * TODO: There's a better way to clear by comparing counters and only
   * clearing on a specific value of the counter, but whatever...
   */
  for (int i = 0; i < tacquila_array->GetEntriesFast(); i++) {
    auto *tacquila = reinterpret_cast<BmnTacquilaDigit *>(
	tacquila_array->At(i));
    if (16 == tacquila->GetChannel()) {
      continue;
    }
    auto *c17 = m_c17[tacquila->GetGtb()][tacquila->GetModule()];
    if (nullptr == c17) {
      std::cerr << __func__ << ": Missing channel17, corrupt data.\n";
      continue;
    }
    /*
     * For LAND @ JINR notes:
     * SAM is always on VME address 0x05000000, so SAM=5.
     * GTB 0 = Tacquila crate 0, same for 1.
     * The rest follows the mapping file.
     */
    unsigned int gtb_i = tacquila->GetGtb();
    if (gtb_i >= LENGTH(m_tacq2det)) {
      std::cerr << __func__ << ": Invalid GTB=" << gtb_i << ", corrupt data.\n";
      continue;
    }
    unsigned int module_i = tacquila->GetModule();
    if (module_i >= LENGTH(m_tacq2det[gtb_i])) {
      std::cerr << __func__ << ": Invalid module=" << module_i <<
	", corrupt data.\n";
      continue;
    }
    unsigned int channel_i = tacquila->GetChannel();
    if (channel_i >= LENGTH(m_tacq2det[gtb_i][module_i])) {
      std::cerr << __func__ << ": Invalid channel=" << channel_i <<
	", corrupt data.\n";
      continue;
    }
    auto const &pmt = m_tacq2det[gtb_i][module_i][channel_i];
    if (-1 == pmt.plane || -1 == pmt.bar || -1 == pmt.side) {
      /* Don't emit an error message, an unused channel could fire. */
      continue;
    }
    if (m_builder[pmt.plane][pmt.bar][pmt.side]) {
      /* Tacquila is not multi-hit, so we should never have a duplicate hit! */
      std::cerr << __func__ << ": Duplicate hit in LAND (crate=" << gtb_i <<
	",module=" << module_i << ",channel=" << channel_i << ";plane=" <<
	pmt.plane << ",bar=" << pmt.bar << ",side=" << pmt.side <<
	"), corrupt data.\n";
      continue;
    }
    tacquila->SetTDiff(*c17);
    m_builder[pmt.plane][pmt.bar][pmt.side] = tacquila;
    if (m_builder[pmt.plane][pmt.bar][1 - pmt.side]) {
      /* Aha, we have both sides of a bar! Muy excellente! */
      TClonesArray &ar_land = *land_array;
      auto const &tacquila0 = *m_builder[pmt.plane][pmt.bar][0];
      auto const &tacquila1 = *m_builder[pmt.plane][pmt.bar][1];
      auto const &diff_sync = m_diff_sync[pmt.plane][pmt.bar];
      Float_t time0 = tacquila0.GetTDiff() + diff_sync.time_diff -
	diff_sync.time_sync;
      Float_t time1 = tacquila1.GetTDiff() - diff_sync.time_diff -
	diff_sync.time_sync;
      Float_t energy0 = tacquila0.GetQdc() * diff_sync.energy_diff0 *
	diff_sync.energy_sync;
      Float_t energy1 = tacquila1.GetQdc() * diff_sync.energy_diff1 *
	diff_sync.energy_sync;
      new (ar_land[land_array->GetEntriesFast()])
	BmnLANDDigit(pmt.plane, pmt.bar, tacquila0, tacquila1, time0, time1,
	    energy0, energy1);
    }
  }
}

void BmnLANDRaw2Digit::SetTCal(BmnTacquilaDigit &a_tacquila)
{
  auto const &tcal_vec = m_tcal[a_tacquila.GetGtb()][a_tacquila.GetModule()][
    a_tacquila.GetChannel()];
  if (tcal_vec.size() < 2) {
    /* No useful calibration for this channel. */
    return;
  }
  /* Binary search through tcal. */
  int left = tcal_vec.size() / 2;
  int jump = left / 2;
  auto tdc = a_tacquila.GetTdc();
  for (;;) {
    if (left < 0) {
      left = 0;
      break;
    } else if (left + 1 >= tcal_vec.size()) {
      left = tcal_vec.size() - 2;
      break;
    }
    if (tdc < tcal_vec.at(left).tdc) {
      left -= jump;
    } else if (tdc > tcal_vec.at(left + 1).tdc) {
      left += jump;
    } else {
      break;
    }
    jump /= 2;
    if (jump < 1) {
      jump = 1;
    }
  }
  auto const &l = tcal_vec.at(left);
  auto const &r = tcal_vec.at(left + 1);
  float t = tdc > l.tdc ? tdc - l.tdc : 0;
  a_tacquila.SetTCal(t * (r.t_ns - l.t_ns) / (r.tdc - l.tdc) + l.t_ns);
}

ClassImp(BmnLANDRaw2Digit)

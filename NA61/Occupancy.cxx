//------------------------------------------------------------------------------------------------------------------------
// -------------------------------------------------------------------------
// -----                       Occupancy source file                      -----
// -------------------------------------------------------------------------

#include "Occupancy.h"

// -----   Default constructor   -------------------------------------------

Occupancy::Occupancy() {
}

// -----   Destructor   ----------------------------------------------------

Occupancy::~Occupancy() {
}

void Occupancy::Init() {
    nPointInTrack = 4;
    nParam = 4;
    fStripWidth = 1.25; //cm
    fStripLength.resize(3); //3 different size of strip
    for (Short_t it = 1; it <= fStripLength.size(); it++)
        fStripLength [it - 1] = it * 15; // 15, 30, 45 cm
    fMakeTH1D = kTRUE;
    fMergeResult = kFALSE;
    fGraphIn = new TGraph2D(nPointInTrack);
    CoordinateTOF = (779.542725 + 779.954529) / 2;
    fName = Form("XvsY (Z = %f)", CoordinateTOF);
    fTH2Dout = new TH2D(fName, fName, 6000, -750, 750, 4000, -1000, 1000);
    //    cout << fTH2Dout->GetNbinsX() << endl;
    //    cout << fTH2Dout->GetNbinsY() << endl;
    //    cout << fTH2Dout->GetNbinsZ() << endl;
}

//void Occupancy::line(double t, const double *p, double &x, double &y, double &z) {
//    // a parametric line is define from 6 parameters but 4 are independent
//    // x0,y0,z0,z1,y1,z1 which are the coordinates of two points on the line
//    // can choose z0 = 0 if line not parallel to x-y plane and z1 = 1;
//    x = p[0] + p[1] * t;
//    y = p[2] + p[3] * t;
//    z = t;
//}

struct SumDistance2 {
    // the TGraph is a data member of the object
    TGraph2D *fGraph;

    SumDistance2(TGraph2D *g) : fGraph(g) {
    }

    // calculate distance line-point

    double distance2(Double_t x, Double_t y, Double_t z, const Double_t *p) {
        using namespace ROOT::Math;
        // distance line point is D= | (xp-x0) cross  ux |
        // where ux is direction of line and x0 is a point in the line (like t = 0)
        XYZVector xp(x, y, z);
        XYZVector x0(p[0], p[2], 0.);
        XYZVector x1(p[0] + p[1], p[2] + p[3], 1.);
        XYZVector u = (x1 - x0).Unit();
        Double_t d2 = ((xp - x0).Cross(u)).Mag2();
        return d2;
    }

    // implementation of the function to be minimized

    Double_t operator()(const Double_t *par) {
        //            bool first = true;
        assert(fGraph != 0);
        Double_t * x = fGraph->GetX();
        Double_t * y = fGraph->GetY();
        Double_t * z = fGraph->GetZ();
        Int_t npoints = fGraph->GetN();
        Double_t sum = 0;
        for (Short_t i = 0; i < npoints; ++i) {
            Double_t d = distance2(x[i], y[i], z[i], par);
            sum += d;
        }
        return sum;
    }
};

Short_t Occupancy::ConvertDataToFit(std::vector<std::vector < Double_t >> InPoints) {

    fGraphIn->Clear();
    for (Short_t it = 0; it < InPoints.size(); it++)
        if (InPoints[it][2] != 0)
            fGraphIn->SetPoint(it, InPoints[it][0], InPoints[it][1], InPoints[it][2]);

    ROOT::Fit::Fitter fitter;
    // make the functor objet
    SumDistance2 sdist(fGraphIn);
    ROOT::Math::Functor fcn(sdist, nParam);
    // set the function and the initial parameter values
    Double_t pStart[nParam] = {1, 1, 1, 1};
    fitter.SetFCN(fcn, pStart);
    // set step sizes different than default ones (0.3 times parameter values)
    for (Short_t i = 0; i < fGraphIn->GetN(); ++i) fitter.Config().ParSettings(i).SetStepSize(0.01);

    Bool_t ok = fitter.FitFCN();
    if (!ok) {
        //        Error("line3Dfit", "Line3D Fit failed");
        //        assert(kFALSE);
        return 0;
    }
    const ROOT::Fit::FitResult & result = fitter.Result();
    //    std::cout << "Total final distance square " << result.MinFcnValue() << std::endl;
    //    result.Print(std::cout);
    //    return result.GetParams();
    ComputeTofZCoordinate(result.GetParams());


}

//Bool_t Occupancy::Main() {
//
//}

void Occupancy::ComputeTofZCoordinate(const Double_t * Params) {
    //    for (Short_t it = 0; it < nParam; it++) cout << Params[it] << endl;
    //    fz = CoordinateTOF;
    fx = Params[0] + Params[1] * CoordinateTOF;
    fy = Params[2] + Params[3] * CoordinateTOF;
    fTH2Dout->Fill(fx, fy);
}

TH2D* Occupancy::GetTH2Dout(Double_t TH_Entries) {
    //
    Double_t content;
    for (Int_t iBinX = 0; iBinX <= fTH2Dout->GetNbinsX(); iBinX++)
        for (Int_t iBinY = 0; iBinY <= fTH2Dout->GetNbinsY(); iBinY++) {
            content = fTH2Dout->GetBinContent(iBinX, iBinY) / TH_Entries;
            fTH2Dout->SetBinContent(iBinX, iBinY, content);
        }
    return fTH2Dout;
}

TH1D* Occupancy::GetTH2Dprofile(Short_t iLength) {
    TH1D * OutTH1D;
    //    if (fMakeTH1D) {
    TH1D *FirstProjection = fTH2Dout->ProjectionX("px1", 1000, 1000);
    TH1D *SecondProjection = fTH2Dout->ProjectionX("px2", 1001, 1001);
    OutTH1D = fTH2Dout->ProjectionX("px_CentralProjection", 1000, 1000);
    fMergeResult = OutTH1D->Add(FirstProjection, SecondProjection, 0.5, 0.5);
    cout << "111" << endl;
    //    OutTH1D = fOutProjection;
    cout << fStripWidth * fStripLength[iLength] << endl;
    OutTH1D->Scale(fStripWidth * fStripLength[iLength], "nosw2");
    fName = Form("px_CentralProjection (StripLength = %d)", (Int_t) fStripLength[iLength]);
    cout << fName << endl;
    OutTH1D->SetName(fName);
    cout << fMergeResult << endl;
    if (fMergeResult)
        return OutTH1D;
    else
        return NULL;
}

TGraph2D * Occupancy::Get2DGraph() {
    if (fGraphIn->GetN() != 0) return fGraphIn;
    else return NULL;
}
ClassImp(Occupancy)

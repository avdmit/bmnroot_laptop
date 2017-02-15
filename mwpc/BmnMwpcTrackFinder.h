// @(#)bmnroot/mwpc:$Id$
// Author: Pavel Batyuk (VBLHEP) <pavel.batyuk@jinr.ru> 2017-02-12

////////////////////////////////////////////////////////////////////////////////
//                                                                            //
// BmnMwpcTrackFinder                                                         //
//                                                                            //
//                                                                            //
// The algorithm serves for searching for track segments                      //
// in the MWPC of the BM@N experiment                                         //
//                                                                            //
////////////////////////////////////////////////////////////////////////////////

#ifndef BMNMWPCTRACKFINDER_H
#define BMNMWPCTRACKFINDER_H 1

#include <TMath.h>
#include <TNamed.h>
#include <TClonesArray.h>
#include <TString.h>
#include "FairTask.h"
#include "BmnMwpcTrack.h"
#include "BmnMwpcHit.h"
#include "BmnEnums.h"
#include "BmnMath.h"

using namespace std;
using namespace TMath;

class BmnMwpcTrackFinder : public FairTask {
public:

    BmnMwpcTrackFinder() {};
    BmnMwpcTrackFinder(Bool_t);
    virtual ~BmnMwpcTrackFinder();
    
    virtual InitStatus Init();

    virtual void Exec(Option_t* opt);

    virtual void Finish();
    
    BmnStatus FindSeeds(vector <BmnMwpcTrack>& cand);
    BmnStatus  FitSeeds(vector <BmnMwpcTrack> cand);
    BmnStatus CalculateTrackParamsLine(BmnMwpcTrack* tr);
    
     
private:
    Bool_t expData;
    UInt_t fEventNo; // event counter
    
    TString fInputBranchName;
    TString fOutputBranchName;
    
    /** Input array of MWPC hits **/
    TClonesArray* fBmnMwpcHitsArray;
    
    /** Output array of MWPC tracks **/
    TClonesArray* fBmnMwpcTracksArray; 
         
    ClassDef(BmnMwpcTrackFinder, 1)
};

#endif
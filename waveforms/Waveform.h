//------------------------------------------------------------------------------------------------------------------------
// -------------------------------------------------------------------------
// -----                         Waveform header file                    -----
// -------------------------------------------------------------------------


#ifndef WAVEFORM_H
#define WAVEFORM_H


#include <stdlib.h>
#include <stdio.h>
#include <fstream>
#include <istream>
#include <ostream>
#include <iostream>
#include <TMath.h>
#include <TClonesArray.h>
#include <vector>
#include <TGraph.h>
#include <TCanvas.h>
#include <TVectorT.h>
#include <TTree.h>
#include <float.h>
#include <TH2D.h>
#include <TF1.h>

using namespace std;

//------------------------------------------------------------------------------------------------------------------------

class Waveform {
public:

    /** Default constructor **/
    Waveform();

    /** Destructor **/
    virtual ~Waveform();

    void Init(Short_t, Bool_t, Bool_t, Bool_t);
    Bool_t Main(Char_t*, Int_t/*, TTree*/);
    void Draw();
    void NextFile();

    vector<TGraph*> GetGraphs() {
        return fGraphs;
    }

    vector<TH2D*> GetTimeVsAmp() {
        return TimeVsAmp;
    }

    vector<TH2D*> GetDeltaTimeVsAmp() {
        return DeltaTimeVsAmp;
    }

private:
    static const Short_t kMaxWavefoms = 4;
    TString fName;
    vector<TGraph*> fGraphs;
    vector<Double_t> kMaximum, kMinimum;
    //    vector<Double_t> kMaximumDif, kMinimumDif;
    Double_t maxTime, minTime, TimeDiff;
    TGraph * CiDif[kMaxWavefoms / 2];


    vector<TH2D*> DeltaTimeVsAmp;
    vector<TH2D*> TimeVsAmp;
    Short_t number_event1, number_event2, number_event3, number_event4, number_event5;
    Bool_t FirstRead, DiffSig, MakeTHs;
    Char_t name1[100], nameJPG[100], str1[256], str2[256];
    Short_t nFile;
    Short_t nPoints;
    //    Double_t C_T, C_AMP;
    //    vector<vector<Double_t>> C_Tvector;
    //    vector<vector<Double_t>> C_AMPvector;
    //    vector<vector<Double_t>> C_TvectorDiff;
    //    vector<vector<Double_t>> C_AMPvectorDiff;
    //        vector<Double_t> fMax, kMax;
    TTree fTree4Save;
    TClonesArray fArrayConteiner;

    void FindSecondMax();
    vector<TGraph*> DiffSignal(vector<TGraph*>, Double_t*, Double_t*);
    vector<Double_t> PreciseFindMax(vector<Double_t>);
    vector<Double_t> FindBaseLane();
    ClassDef(Waveform, 2)

};

//------------------------------------------------------------------------------------------------------------------------
#endif

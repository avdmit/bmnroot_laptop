//------------------------------------------------------------------------------------------------------------------------
// -------------------------------------------------------------------------
// -----                         Waveform header file                    -----
// -------------------------------------------------------------------------


#ifndef OCCUPANCY_H
#define OCCUPANCY_H


#include <TMath.h>
#include <TClonesArray.h>
#include <TTree.h>
#include <TVector3.h>
#include <stdlib.h>
#include <stdio.h>
#include <fstream>
#include <istream>
#include <ostream>
#include <iostream>
#include <vector>
#include <assert.h>
#include <TGraph2D.h>
#include <TVectorT.h>
#include <TH2.h>
#include <Math/Functor.h>
#include <TPolyLine3D.h>
#include <Math/Vector3D.h>
#include <Fit/Fitter.h>
//#include <TString.h>

using namespace std;

//------------------------------------------------------------------------------------------------------------------------

class Occupancy {
public:

    /** Default constructor **/
    Occupancy();

    /** Destructor **/
    virtual ~Occupancy();

    void Init();
    Short_t ConvertDataToFit(std::vector<std::vector < Double_t >>);

    TGraph2D* Get2DGraph();
    TH2D* GetTH2Dout(Double_t);
    TH1D* GetTH2Dprofile(Short_t);

    Short_t GetNStripLehgth() {
        return fStripLength.size();
    }
    //TH1D* GetTH1Dout() {
    //        return out;
    //    }

private:

    //    void line(double t, const double *p, double &x, double &y, double &z);
    TString fName;
    Short_t nPointInTrack, nParam;
    Double_t CoordinateTOF;
    Double_t fx, fy, fz;
    Double_t fStripWidth;
    vector<Double_t> fStripLength;
    Bool_t fMakeTH1D, fMergeResult;
    TGraph2D* fGraphIn;
    TH2D* fTH2Dout;
    //    TH1D* fOutProjection;
//    TH1D* out;

    //    TTree fInTree;

    void ComputeTofZCoordinate(const Double_t *);

    ClassDef(Occupancy, 1)

};

//------------------------------------------------------------------------------------------------------------------------
#endif

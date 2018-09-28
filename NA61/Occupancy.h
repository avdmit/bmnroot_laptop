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
#include <TGraph.h>
#include <TVectorT.h>

using namespace std;

//------------------------------------------------------------------------------------------------------------------------

class Occupancy {
public:

    /** Default constructor **/
    Occupancy();

    /** Destructor **/
    virtual ~Occupancy();

    void Init(TTree);
    //    Bool_t Main();


private:


    TTree fInTree;

    ClassDef(Occupancy, 1)

};

//------------------------------------------------------------------------------------------------------------------------
#endif

/*
 * To change this license header, choose License Headers in Project Properties.s
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   TmpContainer.cxx
 * Author: Aleksandr Dmitriev
 *
 * Created on September 21, 2018, 2:29 PM
 */

#ifndef TMPCONTAINER_H
#define TMPCONTAINER_H 1

#include <iostream>
#include <TNamed.h>
#include <TVector3.h>


using namespace std;

class TmpContainer : public TObject {
private:

    Double_t fpx;
    Double_t fpy;
    Double_t fpz;

    Double_t fx[4];
    Double_t fy[4];
    Double_t fz[4];

    Double_t fcharge;

public:

    /** Default constructor **/
    TmpContainer();

    /** Constructor to use **/
    TmpContainer(Double_t, Double_t, Double_t,
            Double_t, Double_t, Double_t,
            Double_t, Double_t, Double_t,
            Double_t, Double_t, Double_t,
            Double_t, Double_t, Double_t,
            Double_t);

    /** Destructor **/
    virtual ~TmpContainer();

    Double_t GetCharge() const {
        return fcharge;
    }

    TVector3 GetMomentaVector() const {
        return TVector3(fpx, fpy, fpz);
    }

    TVector3 GetPoints(Short_t nPoint); //from 0 to 3

    ClassDef(TmpContainer, 1);
};
#endif /* MPDMWPCCALCCONTAIN_H */


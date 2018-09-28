/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   TmpContainer.cxx
 * Author: Aleksandr Dmitriev
 *
 * Created on September 21, 2018, 2:29 PM
 */

#include "TmpContainer.h"

// -----   Default constructor   -------------------------------------------

TmpContainer::TmpContainer() {
}

TmpContainer::TmpContainer(Double_t ipx, Double_t ipy, Double_t ipz,
        Double_t ix, Double_t iy, Double_t iz,
        Double_t ix2, Double_t iy2, Double_t iz2,
        Double_t ix3, Double_t iy3, Double_t iz3,
        Double_t ix4, Double_t iy4, Double_t iz4,
        Double_t icharge) {

    fpx = ipx;
    fpy = ipy;
    fpz = ipz;

    fx[0] = ix;
    fy[0] = iy;
    fz[0] = iz;

    fx[1] = ix2;
    fy[1] = iy2;
    fz[1] = iz2;

    fx[2] = ix3;
    fy[2] = iy3;
    fz[2] = iz3;

    fx[3] = ix4;
    fy[3] = iy4;
    fz[3] = iz4;

    fcharge = icharge;
}

// -----   Destructor   ----------------------------------------------------

TmpContainer::~TmpContainer() {
}

TVector3 TmpContainer::GetPoints(Short_t nPoint) {
    return TVector3(fx[nPoint], fy[nPoint], fz[nPoint]);
}

ClassImp(TmpContainer)

//------------------------------------------------------------------------------------------------------------------------
// -------------------------------------------------------------------------
// -----                       Waveform source file                      -----
// -------------------------------------------------------------------------

#include "Waveform.h"

// -----   Default constructor   -------------------------------------------

Waveform::Waveform() {
}

// -----   Destructor   ----------------------------------------------------

Waveform::~Waveform() {
}

void Waveform::Init(Short_t nWaveforms, Bool_t Read_nPoints, Bool_t IsItDiffReading, Bool_t THsmake) {

    nFile = nWaveforms;
    DiffSig = IsItDiffReading;
    MakeTHs = THsmake;
    FirstRead = Read_nPoints;

    number_event1 = 0;
    number_event2 = 0;
    number_event3 = 0;
    number_event4 = 0;
    number_event5 = 0;


    if (DiffSig) {
        kMaximum.resize(nFile / 2);
        kMinimum.resize(nFile / 2);
        if (MakeTHs) {
            TimeVsAmp.resize(nFile / 2);
            DeltaTimeVsAmp.resize(nFile / 4);
        }

    } else {
        kMaximum.resize(nFile);
        kMinimum.resize(nFile);
        if (MakeTHs) {
            TimeVsAmp.resize(nFile);
            DeltaTimeVsAmp.resize(nFile / 2);
        }
    }

    maxTime = -57.; //fix according THs
    minTime = -63.; //fix according THs
    TimeDiff = 2; //fix according THs


    for (Short_t iter = 0; iter < TimeVsAmp.size(); iter++) {
        fName = Form("TimeVsAmp_%d", iter);
        TimeVsAmp[iter] = new TH2D(fName, fName, 300, 0, 300, 200, -80, -20);
    }
    for (Short_t iter = 0; iter < DeltaTimeVsAmp.size(); iter++) {
        fName = Form("DeltaTimeVsAmp_%d", iter);
        DeltaTimeVsAmp[iter] = new TH2D(fName, fName, 300, 0, 300, 200, -50, 50);
    }
}

void Waveform::NextFile() {

    if (number_event1 != 9)
        number_event1 = number_event1 + 1;
    else {
        if (number_event2 != 9) {
            number_event2 = number_event2 + 1;
            number_event1 = 0;
        } else {
            if (number_event3 != 9) {
                number_event3 = number_event3 + 1;
                number_event2 = 0;
                number_event1 = 0;
            } else {
                if (number_event4 != 9) {
                    number_event4 = number_event4 + 1;
                    number_event3 = 0;
                    number_event2 = 0;
                    number_event1 = 0;
                } else {
                    if (number_event5 != 9) {
                        number_event5 = number_event5 + 1;
                        number_event4 = 0;
                        number_event3 = 0;
                        number_event2 = 0;
                        number_event1 = 0;
                    }
                }
            }
        }
    }
}

Bool_t Waveform::Main(Char_t *fname, Int_t del_ev/*, TTree *treeout = NULL*/) {


    //    TString Name = "treeout";
    //    fTree4Save = new TTree(Name.Data(), Name.Data());
    //    cout << fTree4Save->GetName() << ";   " << fTree4Save ->GetTitle() << endl;
    //    //    Name = Form("Plane_%d", fNPlane);
    //    Name = "Container";
    //    fArrayConteiner = new TClonesArray("WaveformContainer");
    //    fTree4Save->Branch(Name.Data(), &fArrayConteiner);

    Double_t * C_T;
    Double_t * C_AMP;
    vector <ifstream> filesC(nFile);
    vector<TGraph*> Ci(nFile);
    vector<Double_t> baselane;

    for (Short_t iFile = 0; iFile < nFile; iFile++) {
        sprintf(name1, "%s/C%i--Trace--%d%d%d%d%d.txt", fname, iFile + 1, number_event5, number_event4, number_event3, number_event2, number_event1);
        sprintf(nameJPG, "%s_result/C%i--Trace--%d%d%d%d%d.jpg", fname, iFile + 1, number_event5, number_event4, number_event3, number_event2, number_event1);
        filesC[iFile].open(name1, ios::in);
        if (!filesC[iFile]) {
            printf("Data file \"%s\" in not exist.\t", name1);
            cout << endl;
            return kTRUE;
        }

        //вычитание шапки в файле
        if (FirstRead) {
            TString str_nPoints;
            for (Short_t iLine = 0; iLine < 6; iLine++)
                if (iLine == 1)
                    filesC[iFile] >> str_nPoints;
                else filesC[iFile].getline(str1, sizeof (str1));
            sscanf(&str_nPoints.Data()[strlen(str_nPoints.Data()) - 4], "%hd", &nPoints);
            FirstRead = kFALSE;
        } else
            for (Short_t iLine = 0; iLine < 5; iLine++)
                filesC[iFile].getline(str1, sizeof (str1));


        //пропуск
        for (Short_t iMiss = 0; iMiss < del_ev; iMiss++)
            filesC[iFile].getline(str1, sizeof (str1));


        Double_t CC1[nPoints - del_ev], CC2[nPoints - del_ev];
        Ci[iFile] = new TGraph(nPoints - del_ev, CC1, CC2); //граф в которую будем записывать дискретный сигнал
        C_T = Ci[iFile]->GetX(); //время
        C_AMP = Ci[iFile]->GetY(); //амплитуда
        Ci[iFile]->SetMarkerStyle(20 + iFile);
        Ci[iFile]->SetMarkerSize(1);
        Ci[iFile]->SetMarkerColor(2 + iFile);

        //чтение таблицы с файле
        //        cout << "nPoints = " << nPoints << endl;
        Double_t fMaximum, fMinimum;
        for (Int_t iPoint = del_ev; iPoint < nPoints; iPoint++) {
            fMaximum = DBL_MIN, fMinimum = DBL_MAX;
            filesC[iFile].getline(str1, sizeof (str1), ',');
            filesC[iFile].getline(str2, sizeof (str2));
            //            str1
            C_T[iPoint - del_ev] = atof(str1)*1000000000.;
            C_AMP[iPoint - del_ev] = atof(str2)* 1000.;
            //            if (C_T[iPoint - del_ev] < maxTime && C_T[iPoint - del_ev] > minTime) {
            if (fMaximum < C_AMP[iPoint - del_ev]&&!DiffSig) {
                fMaximum = C_AMP[iPoint - del_ev];
                kMaximum[iFile] = iPoint - del_ev;
                Ci[iFile]->SetMaximum(fMaximum);
            }
            if (fMinimum > C_AMP[iPoint - del_ev]&&!DiffSig) {
                fMinimum = C_AMP[iPoint - del_ev];
                kMinimum[iFile] = iPoint - del_ev;
                Ci[iFile]->SetMinimum(fMinimum);
                //                }
            }
        }
    }

    Int_t iEv = number_event5 * 10000 + number_event4 * 1000 + number_event3 * 100 + number_event2 * 10 + number_event1;
    if (iEv >= 99999) return kTRUE;
    //    cout << iEv << endl;
    if (iEv % 500 == 0) printf("Now read file ***_%d%d%d%d%d.txt \n", number_event5, number_event4, number_event3, number_event2, number_event1);

    for (Short_t iFile = 0; iFile < nFile; iFile++)
        filesC[iFile].close(); //закрытие файла


    fGraphs = DiffSignal(Ci, &kMaximum[0], &kMinimum[0]);


    FindSecondMax();
    baselane = FindBaseLane();
    PreciseFindMax(baselane);


    return kFALSE;

    //        FindBaseline();
    //        FindFront();
    //        FindIntegrall();
    //        FindCharge();

}

void Waveform::FindSecondMax() {
    Short_t nCheckDifferentMax = fGraphs.size() / 2;
    Bool_t Near;
    for (Short_t iCheck = 0; iCheck < nCheckDifferentMax; iCheck++) {
        Double_t tStart[fGraphs.size()], tStop[fGraphs.size()], ampStart[fGraphs.size()], ampStop[fGraphs.size()];
        fGraphs[2 * iCheck]->GetPoint(kMaximum[2 * iCheck], tStart[2 * iCheck], ampStart[2 * iCheck]);
        fGraphs[2 * iCheck + 1]->GetPoint(kMaximum[2 * iCheck + 1], tStop[2 * iCheck + 1], ampStop[2 * iCheck + 1]);
        Near = (TMath::Abs(tStart[2 * iCheck] - tStop[2 * iCheck + 1]) > 2) ? kFALSE : kTRUE;
        //        cout << "Near = " << Near << endl;
    }

    //        if (kMaximum[2 * iCheck])
    //        }

}

vector<TGraph*> Waveform::DiffSignal(vector<TGraph*> inVectorGraphs, Double_t *VecMax, Double_t * VecMin) {
    vector<TGraph*> outVectorGraphs(nFile / 2);

    if (DiffSig) {

        Double_t yAmp, yAmp2, xTime;
        Double_t fMaximum, fMinimum;

        for (Short_t iFile = 0; iFile < nFile; iFile += 2) {
            fMaximum = DBL_MIN, fMinimum = DBL_MAX;
            outVectorGraphs[iFile / 2] = new TGraph(* inVectorGraphs[iFile]);
            for (Short_t iN = 0; iN < inVectorGraphs[iFile]->GetN(); iN++) {
                inVectorGraphs[iFile]->GetPoint(iN, xTime, yAmp);
                inVectorGraphs[iFile + 1]->GetPoint(iN, xTime, yAmp2);
                outVectorGraphs[iFile / 2]->SetPoint(iN, xTime, yAmp - yAmp2);
                //                if (xTime < maxTime && xTime > minTime) {
                if (fMaximum < yAmp - yAmp2) {
                    fMaximum = yAmp - yAmp2;
                    *(VecMax + (iFile / 2)) = iN;
                    outVectorGraphs[iFile / 2]->SetMaximum(fMaximum);
                }
                if (fMinimum > yAmp - yAmp2) {
                    fMinimum = yAmp - yAmp2;
                    *(VecMin + (iFile / 2)) = iN;
                    outVectorGraphs[iFile / 2]->SetMinimum(fMinimum);
                }
            }
            //            cout << "fMaximum[" << iFile / 2 << "] = " << fMaximum << endl;
        }
        //        CiDif[0]->GetPoint(kMaximumDif[0], xTime, yAmp);
        //        CiDif[1]->GetPoint(kMaximumDif[1], yAmp2, yAmp);
        //        TimeVsAmp ->Fill(yAmp, xTime - yAmp2);
        return outVectorGraphs;
    } else return inVectorGraphs;
}

//

vector<Double_t> Waveform::FindBaseLane() {
    vector<Double_t> BaseLane(fGraphs.size());
    Double_t tStart[fGraphs.size()], tStop[fGraphs.size()], ampStart[fGraphs.size()], ampStop[fGraphs.size()];
    for (Short_t itGr = 0; itGr < fGraphs.size(); itGr++) {
        fName = Form("TF1_base_%d", itGr);
        fGraphs[itGr]->GetPoint(0, tStart[itGr], ampStart[itGr]);
        fGraphs[itGr]->GetPoint(125, tStop[itGr], ampStop[itGr]);
        TF1* test = new TF1(fName, "pol0", tStart[itGr], tStop[itGr]);
        test->SetLineColor(5);
        fGraphs[itGr]->Fit(fName, "RQ");
        BaseLane[itGr] = test->GetMaximum();
        //        cout << "Base[" << itGr << "] = " << BaseLane[itGr] << endl;
    }
    return BaseLane;
}

vector<Double_t> Waveform::PreciseFindMax(vector<Double_t> baselane) {
    vector<Double_t> VectorAmp(fGraphs.size());
    vector<Double_t> VectorTime(fGraphs.size());
    Double_t tMax[fGraphs.size()], tMin[fGraphs.size()], kMax[fGraphs.size()], kMin[fGraphs.size()];


    for (Short_t itGr = 0; itGr < fGraphs.size(); itGr++) {
        fName = Form("TF1_max_%d", itGr);
        fGraphs[itGr]->GetPoint(kMaximum[itGr], tMax[itGr], kMax[itGr]);
        fGraphs[itGr]->GetPoint(kMinimum[itGr], tMin[itGr], kMin[itGr]);
        TF1* test = new TF1(fName, "gaus", tMax[itGr] - 0.5, tMax[itGr] + 0.5);
        test->SetLineColor(3);
        fGraphs[itGr]->Fit(fName, "RQ+");
        VectorAmp[itGr] = test->GetMaximum() - baselane[itGr];
        VectorTime[itGr] = test->GetMaximumX();
        //        cout << "Amp[" << itGr << "] = " << VectorAmp[itGr] << endl;
        //        cout << "Time[" << itGr << "] = " << VectorTime[itGr] << endl;

        if (MakeTHs) {
            if (itGr % 2) {
                DeltaTimeVsAmp[(itGr % 2 - 1)]->Fill(VectorAmp[itGr], tMax[itGr - 1] - tMax[itGr]);
                cout << "tMax[itGr - 1] - tMax[itGr] = " << tMax[itGr - 1] - tMax[itGr] << endl;
            }
            TimeVsAmp[itGr]->Fill(VectorAmp[itGr], tMax[itGr]);
        }
    }
    return VectorAmp;
}


ClassImp(Waveform)

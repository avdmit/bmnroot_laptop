#include <vector>

#include "../run/bmnloadlibs.C"

void ComputeOccupancy(const char *fname = "/home/alex/cernbox_shared/NA61_szymon/PBtest.root", Long64_t nEvents = 0) {
#if ROOT_VERSION_CODE < ROOT_VERSION(5,99,99)
    gROOT->LoadMacro("$VMCWORKDIR/macro/run/bmnloadlibs.C");
#endif
    bmnloadlibs(); // load BmnRoot libraries



    TFile *_f_in = new TFile(fname, "READ");
    TTree *eveTree = (TTree *) _f_in->Get("tree");
    TH1I *eveTH = (TH1I *) _f_in->Get("events");
    //    cout << eveTH->GetEntries() << endl;
    //    TClonesArray* InputArrayConteiner = new TClonesArray("TmpContainer");
    //    TClonesArray* OutputArrayConteiner = new TClonesArray(/*выходной контейнер*/);

    TString namedir;
    namedir = "/home/alex/Documents/NA61/";
    namedir = namedir + "result";
    const Short_t dir_err = system("mkdir -p " + namedir);
    if (dir_err == -1) {
        printf("Error creating directory!");
        cout << endl;
        exit(1);
    }

    TString outName = namedir + "/compute.root";
    TFile *_f_out = new TFile(outName, "RECREATE");
    TList *histlist = new TList();
    //    TTree *_t_out = new TTree("cbmsim", "cbmsim");
    //    _t_out->Branch("ComputedOut", &OutputArrayConteiner);

    if (nEvents == 0)
        nEvents = eveTree->GetEntries();
    cout << nEvents << endl;

    Char_t xyz[3] = {'x', 'y', 'z'};
    TString fName;
    std::vector<std::vector < Double_t >> Points;
    Points.resize(4);
    for (Short_t it = 0; it < Points.size(); it++) {
        Points[it].resize(3);
        for (Short_t itSec = 0; itSec < Points[it].size(); itSec++) {
            if (it == 0) {
                fName = Form("%c", xyz[itSec]);
                eveTree->SetBranchAddress(fName, &Points[it][itSec]);
            } else {
                fName = Form("%c%d", xyz[itSec], it + 1);
                eveTree->SetBranchAddress(fName, &Points[it][itSec]);
            }
        }
    }
    TCanvas *c1 = new TCanvas("c1", "c1", 0, 0, 800, 600);
    c1->SetGridx();
    c1->SetGridy();
    TGraph2D* test;
    TH2D* TH2Dtest;
    //    TH1D* tmp;


    Occupancy * Compute;
    Compute = new Occupancy();
    Compute->Init();
    for (Int_t iEv = 0; iEv < nEvents; iEv++) {

        if (iEv % 10000 == 0) cout << "iEv #" << iEv << "\t " << ((Double_t) iEv / nEvents) * 100 << "%" << endl;
        eveTree->GetEntry(iEv);
        //        if (iEv > 440) {
        //            for (Short_t it = 0; it < Points.size(); it++)
        //                for (Short_t itSec = 0; itSec < Points[it].size(); itSec++)
        //                    if (it == 0) {
        //                        fName = Form("%c = ", xyz[itSec]);
        //                        cout << fName << Points[it][itSec] << endl;
        //                    } else {
        //                        fName = Form("%c%d = ", xyz[itSec], it + 1);
        //                        cout << fName << Points[it][itSec] << endl;
        //
        //                    }
        //            Char_t stop;
        //            stop = getchar();
        //            if (stop == 'q') exit(1);
        //        }
        /*const Double_t * parFit = */Compute->ConvertDataToFit(Points);
        //        test = Compute->Get2DGraph();
        //        if (test != NULL) {
        //            c1->cd(1)->SetGrid(1, 1);
        //            test->Draw("P0");


        //        Double_t X, Y, Z;
        //            Double_t *X = test->GetX();
        //            for (Short_t it = 0; it < test->GetN(); it++)
        //                cout << "X = " << X[it] << endl;
        //                    cout << "Y = " << Y << endl;
        //        cout << "Z = " << Z << endl;

        //            cout << "MaxX = " << test->GetXmax() << endl;
        //            cout << "MaxY = " << test->GetYmax() << endl;
        //            cout << "MaxZ = " << test->GetZmax() << endl;

        // draw the fitted line
        //            Short_t n = 100;
        //            Double_t t0 = test->GetZmin();
        //            Double_t dt = (test->GetZmax() - t0);
        //            TPolyLine3D *l = new TPolyLine3D(n);
        //            for (Short_t i = 0; i < n; ++i) {
        //                Double_t t = t0 + dt * i / n;
        //                Double_t x, y, z;
        //                //                x = parFit[0] + parFit[1] * t;
        //                //                y = parFit[2] + parFit[3] * t;
        //                //                z = t;
        //                line(t, parFit, x, y, z);
        //                l->SetPoint(i, x, y, z);
        //            }
        //            l->SetLineColor(kRed);

        //            c1->cd(1)->SetGrid(1, 1);
        //            test->Draw("p0");
        //            l->Draw("same");
        //            c1->Update();
        //        }


        //        show the points

        //        histlist->Add(test);

    }
    TH2Dtest = Compute->GetTH2Dout(eveTH->GetEntries());
    histlist->Add(TH2Dtest);



    std::vector<TH1D*> TH2DtestProjection;
    TH2DtestProjection.resize(Compute->GetNStripLehgth());
    for (Short_t it = 0; it < Compute->GetNStripLehgth(); it++) {
        TH2DtestProjection[it] = Compute->GetTH2Dprofile(it);
        cout << "out " << TH2DtestProjection[it]->GetName() << endl;
        histlist->Add(TH2DtestProjection[it]);
    }
    //    tmp = Compute->GetTH1Dout();
    //    histlist->Add(tmp);
    //    _t_out->Print();
    //    _t_out->Write();
    histlist->Write();
    _f_out->Close();
}

//void line(double t, const double *p, double &x, double &y, double &z) {
//    // a parametric line is define from 6 parameters but 4 are independent
//    // x0,y0,z0,z1,y1,z1 which are the coordinates of two points on the line
//    // can choose z0 = 0 if line not parallel to x-y plane and z1 = 1;
//    x = p[0] + p[1] * t;
//    y = p[2] + p[3] * t;
//    z = t;
//}
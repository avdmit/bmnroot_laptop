#include <vector>

#include "../run/bmnloadlibs.C"

void CutOccupancyFile(const char *fname = "/home/alex/Documents/NA61/result/compute.root", Long64_t nEvents = 0) {
#if ROOT_VERSION_CODE < ROOT_VERSION(5,99,99)
    gROOT->LoadMacro("$VMCWORKDIR/macro/run/bmnloadlibs.C");
#endif
    bmnloadlibs(); // load BmnRoot libraries



    TFile *_f_in = new TFile(fname, "READ");
    TList *histlist = new TList();
    //    TTree *eveTree = (TTree *) _f_in->Get("tree");

    //cut the TH1D
    std::vector<TH1D*> eveTH(3);
    TString fName;
    //    for (Short_t it = 0; it < 3; it++) {
    //        fName = Form("px_CentralProjection (StripLength = %d)", (it + 1) * 15);
    //        eveTH[it] = (TH1D *) _f_in->Get(fName);
    //        for (Short_t itTH = 0; itTH < eveTH[it]->GetNbinsX(); itTH++)
    //            //            content = fTH2Dout->GetBinContent(iBinX, iBinY) / TH_Entries;
    //            //        fTH2Dout->SetBinContent(iBinX, iBinY, content);
    //
    //            //            cout << eveTH[it]->GetBinContent(itTH) << endl;
    //            if (TMath::Abs(eveTH[it]->GetBinCenter(itTH) + 0.5) < 100)
    //                eveTH[it]->SetBinContent(itTH, 0);
    //        //                cout << it << "\t" << eveTH[it]->GetBinCenter(itTH)+0.5 << endl;
    //        //                Char_t stop;
    //        //                stop = getchar();
    //        //                if (stop == 'q') exit(1);
    //
    //        histlist->Add(eveTH[it]);
    //    }


    std::vector<Double_t> fStripLength(3);
    TH2D* eveTH2;
    fName = "XvsY (Z = 779.748627)";
    eveTH2 = (TH2D *) _f_in->Get(fName);
    Double_t WidthX = eveTH2->GetXaxis()->GetBinWidth(0);
    Double_t WidthY = eveTH2->GetYaxis()->GetBinWidth(0);
    if ((Int_t) (1.25 / WidthX) > 1)
        eveTH2->RebinX((Int_t) (1.25 / WidthX));
    if ((Int_t) (0.5 / WidthY))
        eveTH2->RebinY((Int_t) (0.5 / WidthY));
    WidthX = eveTH2->GetXaxis()->GetBinWidth(0);
    WidthY = eveTH2->GetYaxis()->GetBinWidth(0);

    for (Short_t it = 1; it <= fStripLength.size(); it++) {
        fStripLength [it - 1] = it * 15; // 15, 30, 45 cm
        fName = Form("Occupancy (StripLength = %d)", (Int_t) fStripLength[it - 1]);
        eveTH[it] = new TH1D(fName, fName, 1500 / WidthX, -750, 750);
        for (Short_t itX = 0; itX < eveTH2->GetNbinsX(); itX++)
            for (Short_t itY = 0; itY < eveTH2->GetNbinsY(); itY++) {
                if (TMath::Abs(eveTH2->GetYaxis()->GetBinCenter(itY)) <= fStripLength[it - 1] / 2) {
                    eveTH[it]->AddBinContent(itX, eveTH2->GetBinContent(itX, itY));
                    //                    cout << eveTH2->GetYaxis()->GetBinCenter(itY) << endl;
                    //                    eveTH[it]->SetBinContent()
                    //                cout << eveTH2->GetXaxis()->GetBinWidth(itX) << endl;
                    //                cout << eveTH2->GetYaxis()->GetBinWidth(itY) << endl;
                    //                    cout << eveTH2->GetBinContent(itX, itY) << endl;
                    //                    Char_t stop;
                    //                    stop = getchar();
                    //                    if (stop == 'q') exit(1);
                }
            }
        histlist->Add(eveTH[it]);
    }






    TString namedir;
    namedir = "/home/alex/Documents/NA61/";
    namedir = namedir + "result";
    const Short_t dir_err = system("mkdir -p " + namedir);
    if (dir_err == -1) {
        printf("Error creating directory!");
        cout << endl;
        exit(1);
    }
    TString outName = namedir + "/Occupancy.root";
    TFile *_f_out = new TFile(outName, "RECREATE");

    //    TTree *_t_out = new TTree("cbmsim", "cbmsim");
    //    _t_out->Branch("ComputedOut", &OutputArrayConteiner);



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
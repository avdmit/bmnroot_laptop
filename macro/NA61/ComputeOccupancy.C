#include "../run/bmnloadlibs.C"

void ComputeOccupancy(const char *fname = "/home/alex/Documents/NA61/PBtest.root") {
#if ROOT_VERSION_CODE < ROOT_VERSION(5,99,99)
    gROOT->LoadMacro("$VMCWORKDIR/macro/run/bmnloadlibs.C");
#endif
    bmnloadlibs(); // load BmnRoot libraries



    TFile *_f_in = new TFile(fname, "READ");
    TTree *eveTree = (TTree *) _f_in->Get("tree");

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
    TTree *_t_out = new TTree("cbmsim", "cbmsim");
    //    _t_out->Branch("ComputedOut", &OutputArrayConteiner);


    Long64_t nEvents = eveTree->GetEntries();
    cout << nEvents << endl;


    Double_t First[3], Second[3], Third[3], Fourth[3];
    eveTree->SetBranchAddress("x", &First[0]);
    eveTree->SetBranchAddress("y", &First[1]);
    eveTree->SetBranchAddress("z", &First[2]);
    eveTree->SetBranchAddress("x2", &Second[0]);
    eveTree->SetBranchAddress("y2", &Second[1]);
    eveTree->SetBranchAddress("z2", &Second[2]);
    eveTree->SetBranchAddress("x3", &Third[0]);
    eveTree->SetBranchAddress("y3", &Third[1]);
    eveTree->SetBranchAddress("z3", &Third[2]);
    eveTree->SetBranchAddress("x4", &Fourth[0]);
    eveTree->SetBranchAddress("y4", &Fourth[1]);
    eveTree->SetBranchAddress("z4", &Fourth[2]);
    for (Int_t iEv = 0; iEv < nEvents; iEv++) {

        //    Occupancy * Compute;
        //    Compute = new Occupancy();
        //    Compute->Init();
        eveTree->GetEntry(iEv);
        //        if (First[0] != Second[0] && First[0] != Third[0] && First[0] != Fourth[0]) {
        cout << "x = " << First[0] << endl;
        cout << "y = " << First[1] << endl;
        cout << "z = " << First[2] << endl;
        cout << endl;
        cout << "x2 = " << Second[0] << endl;
        cout << "y2 = " << Second[1] << endl;
        cout << "z2 = " << Second[2] << endl;
        cout << endl;
        cout << "x3 = " << Third[0] << endl;
        cout << "y3 = " << Third[1] << endl;
        cout << "z3 = " << Third[2] << endl;
        cout << endl;
        cout << "x4 = " << Fourth[0] << endl;
        cout << "y4 = " << Fourth[1] << endl;
        cout << "z4 = " << Fourth[2] << endl;


        Char_t stop;
        stop = getchar();
        if (stop == 'q') exit(1);
        //        }
    }
    _t_out->Print();
    _t_out->Write();
    _f_out->Close();
}
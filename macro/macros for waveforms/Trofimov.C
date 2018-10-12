#include "../run/bmnloadlibs.C"
#include <cstdlib>

void Trofimov(const char *fname = "/home/alex/Documents/university") {

#if ROOT_VERSION_CODE < ROOT_VERSION(5,99,99)
    gROOT->LoadMacro("$VMCWORKDIR/macro/run/bmnloadlibs.C");
#endif
    bmnloadlibs(); // load BmnRoot libraries


    TCanvas *c1 = new TCanvas("c1", "c1", 0, 0, 1000, 600);
    c1->Divide(1, 2);
    c1->SetGridx();
    c1->SetGridy();
    TString outname = "11.10.2018.root";

    TFile * hfile = new TFile(outname, "RECREATE"); //создание рутовского файла куда будет сохраняться гистограмма
    TList *histlist = new TList();

    //    histlist->Add(Hist_dt_rC1);
    TGraph* P_t;
    TGraph* S_t;
        TGraph* V _t;
        
    //    vector<TH2D*> TestTH2D;
    //    vector<TH2D*> SecondTestTH2D;



    //    Waveform * Wcalc;
    Wcalc = new Waveform();
    Wcalc -> Init(4, kTRUE, kTRUE, kTRUE);

    Bool_t StopOpen = kFALSE;
    //    Wcalc->Open();
    while (!StopOpen) {
        StopOpen = Wcalc -> Main("/home/alex/Documents/3stack_analog_1strip_extTrig_Dif", 0);

        test = Wcalc -> GetGraphs();
        for (Short_t iWF = 0; iWF < test.size(); iWF++) {
            c2->cd(iWF + 1)->SetGrid(1, 1);
            test[iWF]->Draw("AC*");
        }
        c2->Update();
        //        test = Wcalc -> GetGraphs2();
        //        for (Short_t iWF = 0; iWF < test.size(); iWF++) {
        //            c1->cd(iWF + 1)->SetGrid(1, 1);
        //            test[iWF]->Draw("AC*");
        //        }
        //        c1->Update();


        //            c1->cd(iWF + 1)->SetGrid(1, 1);
        //            Wcalc->GetGraph(iWF, kFALSE)->Draw("AC*");
        //        }
        //        c1->Update();
        //
        //        c2->cd(1)->SetGrid(1, 1);
        //        Wcalc->GetGraph(0, kTRUE) ->Draw("AC*");
        //        c2->cd(2)->SetGrid(1, 1);
        //        Wcalc->GetGraph(1, kTRUE) ->Draw("AC*");
        //        c2->Update();

        Wcalc -> NextFile();
        Char_t stop;
        stop = getchar();
        if (stop == 'q') break;

    }//while
    //    TH2D * test = Wcalc->GetTimeVsAmp();
    //    c1->cd(1);
    //    test->Draw();
    //    c1->Update();
    //        max0 = -999, max1 = -999, max2 = -999, max3 = -999;
    //        min0 = 999, min1 = 999, min2 = 999, min3 = 999;
    //
    //        for (i = 0; i < nStep; i++) {
    //            if (max0 < C1_AMP[i]) {
    //                max0 = C1_AMP[i];
    //                kmax0 = i;
    //            }
    //            if (max1 < C2_AMP[i]) {
    //                max1 = C2_AMP[i];
    //                kmax1 = i;
    //            }
    //            if (max2 < C3_AMP[i]) {
    //                max2 = C3_AMP[i];
    //                kmax2 = i;
    //            }
    //            if (max3 < C4_AMP[i]) {
    //                max3 = C4_AMP[i];
    //                kmax3 = i;
    //            }
    //            if (min0 > C1_AMP[i]) {
    //                min0 = C1_AMP[i];
    //                kmin0 = i;
    //            }
    //            if (min1 > C2_AMP[i]) {
    //                min1 = C2_AMP[i];
    //                kmin1 = i;
    //            }
    //            if (min2 > C3_AMP[i]) {
    //                min2 = C3_AMP[i];
    //                kmin2 = i;
    //            }
    //            if (min3 > C4_AMP[i]) {
    //                min3 = C4_AMP[i];
    //                kmin3 = i;
    //            }
    //
    //        }//определение максимальной аплитуды и номера максимума
    //        /////////////////////////////////
    //
    //        //cout << C1_T[kmax0] << endl;
    //        //cout << C2_T[kmax1] << endl;
    //        //cout << C3_T[kmax2] << endl;
    //        //cout << C4_T[kmax3] << endl;
    //
    //        if ((C1_T[kmax0] > -127 && C1_T[kmax0] < -118 && max0 > 34) || (C2_T[kmax1] > -127 && C2_T[kmax1] < -118 && max1 > 34) || (C3_T[kmax2] > -127 && C3_T[kmax2] < -118 && max2 > 34) || (C4_T[kmax3] > -127 && C4_T[kmax3] < -118 && max3 > 34)) {
    //            com_max = 0;
    //            com_min = 0;
    //
    //            if (max0 > max1)
    //                com_max = max0;
    //            else
    //                com_max = max1;
    //            if (com_max < max2)
    //                com_max = max2;
    //            if (com_max < max3)
    //                com_max = max3;
    //            /////////////////////////////////
    //            if (min0 < min1)
    //                com_min = min0;
    //            else
    //                com_min = min1;
    //            if (com_min > min2)
    //                com_min = min2;
    //            if (com_min > min3)
    //                com_min = min3;
    //            //cout << max << endl;
    //
    //            i = kmax0;
    //            while ((C1_AMP[kmax0] - base_lineC1) * 0.2 < C1_AMP[i]) {
    //                i--;
    //            }
    //            k0_l = i;
    //
    //            i = kmax0;
    //            while ((C1_AMP[kmax0] - base_lineC1) * 0.2 < C1_AMP[i]) {
    //                i++;
    //            }
    //            k0_r = i;
    //
    //            i = kmax1;
    //            while ((C2_AMP[kmax1] - base_lineC2) * 0.2 < C2_AMP[i]) {
    //                i--;
    //            }
    //            k1_l = i;
    //            i = kmax1;
    //            while ((C2_AMP[kmax1] - base_lineC2) * 0.2 < C2_AMP[i]) {
    //                i++;
    //            }
    //            k1_r = i;
    //
    //            i = kmax2;
    //            while ((C3_AMP[kmax2] - base_lineC3) * 0.2 < C3_AMP[i]) {
    //                i--;
    //            }
    //            k2_l = i;
    //            i = kmax2;
    //            while ((C3_AMP[kmax2] - base_lineC3) * 0.2 < C3_AMP[i]) {
    //                i++;
    //            }
    //            k2_r = i;
    //
    //            i = kmax3;
    //            while ((C4_AMP[kmax3] - base_lineC4) * 0.2 < C4_AMP[i]) {
    //                i--;
    //            }
    //            k3_l = i;
    //            i = kmax3;
    //            while ((C4_AMP[kmax3] - base_lineC4) * 0.2 < C4_AMP[i]) {
    //                i++;
    //            }
    //            k3_r = i;
    //
    //            TF1 *fl_C1 = new TF1("fl_C1", "pol1", C1_T[k0_l], C1_T[kmax0]);
    //            TF1 *fr_C1 = new TF1("fr_C1", "pol1", C1_T[kmax0], C1_T[k0_r]);
    //
    //            //cout << k1_l << endl;
    //
    //            TF1 *fl_C2 = new TF1("fl_C2", "pol1", C2_T[k1_l], C2_T[kmax1]);
    //            TF1 *fr_C2 = new TF1("fr_C2", "pol1", C2_T[kmax1], C2_T[k1_r]);
    //
    //            TF1 *fl_C3 = new TF1("fl_C3", "pol1", C3_T[k2_l], C3_T[kmax2]);
    //            TF1 *fr_C3 = new TF1("fr_C3", "pol1", C3_T[kmax2], C3_T[k2_r]);
    //
    //            TF1 *fl_C4 = new TF1("fl_C4", "pol1", C4_T[k3_l], C4_T[kmax3]);
    //            TF1 *fr_C4 = new TF1("fr_C4", "pol1", C4_T[kmax3], C4_T[k3_r]);
    //
    //            C1->Fit("fl_C1", "+RQ");
    //            C1->Fit("fr_C1", "+RQ");
    //
    //            C2->Fit("fl_C2", "+RQ");
    //            C2->Fit("fr_C2", "+RQ");
    //
    //            C3->Fit("fl_C3", "+RQ");
    //            C3->Fit("fr_C3", "+RQ");
    //
    //            C4->Fit("fl_C4", "+RQ");
    //            C4->Fit("fr_C4", "+RQ");
    //
    //            fl_C1_a = fl_C1->GetParameter(0);
    //            fl_C1_b = fl_C1->GetParameter(1);
    //            fl_C2_a = fl_C2->GetParameter(0);
    //            fl_C2_b = fl_C2->GetParameter(1);
    //            fl_C3_a = fl_C3->GetParameter(0);
    //            fl_C3_b = fl_C3->GetParameter(1);
    //            fl_C4_a = fl_C4->GetParameter(0);
    //            fl_C4_b = fl_C4->GetParameter(1);
    //
    //            fr_C1_a = fr_C1->GetParameter(0);
    //            fr_C1_b = fr_C1->GetParameter(1);
    //            fr_C2_a = fr_C2->GetParameter(0);
    //            fr_C2_b = fr_C2->GetParameter(1);
    //            fr_C3_a = fr_C3->GetParameter(0);
    //            fr_C3_b = fr_C3->GetParameter(1);
    //            fr_C4_a = fr_C4->GetParameter(0);
    //            fr_C4_b = fr_C4->GetParameter(1);
    //
    //            //cout << fl_C2_a << endl;
    //            //cout << fl_C2_b << endl;		 
    //
    //            dt_lC1 = (first_base_lineC1 - fl_C1_a) / fl_C1_b;
    //            dt_lC2 = (first_base_lineC2 - fl_C2_a) / fl_C2_b;
    //            dt_lC3 = (first_base_lineC3 - fl_C3_a) / fl_C3_b;
    //            dt_lC4 = (first_base_lineC4 - fl_C4_a) / fl_C4_b;
    //
    //            dt_rC1 = (sec_base_lineC1 - fr_C1_a) / fr_C1_b;
    //            dt_rC2 = (sec_base_lineC2 - fr_C2_a) / fr_C2_b;
    //            dt_rC3 = (sec_base_lineC3 - fr_C3_a) / fr_C3_b;
    //            dt_rC4 = (sec_base_lineC4 - fr_C4_a) / fr_C4_b;
    //
    //            //cout << dt_lC2 << endl;
    //            //getchar();
    //
    //            //for (i = 0; i < nStep; i++)
    //            //{
    //            //if (C1_T[i + 1] >= dt_lC1 && C1_T[i] < dt_lC1)
    //            //dt_lC1 = i;
    //            //if (C1_T[i + 1] > dt_rC1 && C1_T[i] <= dt_rC1)
    //            //dt_rC1 = i + 1;
    //            //if (C2_T[i + 1] >= dt_lC2 && C2_T[i] < dt_lC2)
    //            //dt_lC2 = i;
    //            //if (C2_T[i + 1] > dt_rC2 && C2_T[i] <= dt_rC2)
    //            //dt_rC2 = i + 1;
    //            //if (C3_T[i + 1] >= dt_lC3 && C3_T[i] < dt_lC3)
    //            //dt_lC3 = i;
    //            //if (C3_T[i + 1] > dt_rC3 && C3_T[i] <= dt_rC3)
    //            //dt_rC3 = i + 1;
    //            //if (C4_T[i + 1] >= dt_lC4 && C4_T[i] < dt_lC4)
    //            //dt_lC4 = i;
    //            //if (C4_T[i + 1] > dt_rC4 && C4_T[i] <= dt_rC4)
    //            //dt_rC4 = i + 1;
    //            //}
    //
    //            IntC1 = 0;
    //            IntC2 = 0;
    //            IntC3 = 0;
    //            IntC4 = 0;
    //            dt = C1_T[1] - C1_T[0];
    //            //cout << dt << endl;
    //
    //            for (i = 0; i < nStep; i++) {
    //                if (C1_T[i] >= dt_lC1 && C1_T[i] <= dt_rC1)
    //                    IntC1 += C1_AMP[i];
    //                if (C2_T[i] >= dt_lC2 && C2_T[i] <= dt_rC2)
    //                    IntC2 += C2_AMP[i];
    //                if (C3_T[i] >= dt_lC3 && C3_T[i] <= dt_rC3)
    //                    IntC3 += C3_AMP[i];
    //                if (C4_T[i] >= dt_lC4 && C4_T[i] <= dt_rC4)
    //                    IntC4 += C4_AMP[i];
    //            }
    //
    //            Charge_C1 = IntC1 * dt / (50 * K);
    //            Charge_C2 = IntC2 * dt / (50 * K);
    //            Charge_C3 = IntC3 * dt / (50 * K);
    //            Charge_C4 = IntC4 * dt / (50 * K);
    //
    //            if (C1_T[kmax0] > -130 && C1_T[kmax0] < -110 && max0 > 34) {
    //                Hist_AMP_C1->Fill(max0 - base_lineC1); //запись амплитуды в гистограмму
    //                Hist_dt_lC1 -> Fill(dt_lC1);
    //                Hist_dt_rC1 -> Fill(dt_rC1);
    //                Hist_IntC1 ->Fill(IntC1);
    //                Hist_Charge_C1 ->Fill(Charge_C1);
    //                Hist_dt_AMP_C1 ->Fill(max0 - base_lineC1, dt_lC1);
    //            }
    //
    //            if (C2_T[kmax1] > -130 && C2_T[kmax1] < -110 && max1 > 34) {
    //                Hist_AMP_C2->Fill(max1 - base_lineC2);
    //                Hist_dt_lC2 -> Fill(dt_lC2);
    //                Hist_dt_rC2 -> Fill(dt_rC2);
    //                Hist_IntC2 ->Fill(IntC2);
    //                Hist_Charge_C2 ->Fill(Charge_C2);
    //            }
    //
    //            if (C3_T[kmax2] > -130 && C3_T[kmax2] < -110 && max2 > 34) {
    //                Hist_AMP_C3->Fill(max2 - base_lineC3);
    //                Hist_dt_lC3 -> Fill(dt_lC3);
    //                Hist_dt_rC3 -> Fill(dt_rC3);
    //                Hist_IntC3 ->Fill(IntC3);
    //                Hist_Charge_C3 ->Fill(Charge_C3);
    //            }
    //
    //            if (C4_T[kmax3] > -130 && C4_T[kmax3] < -110 && max3 > 34) {
    //                Hist_AMP_C4->Fill(max3 - base_lineC4);
    //                Hist_dt_lC4 -> Fill(dt_lC4);
    //                Hist_dt_rC4 -> Fill(dt_rC4);
    //                Hist_IntC4 ->Fill(IntC4);
    //                Hist_Charge_C4 ->Fill(Charge_C4);
    //            }
    //
    //            //getchar();	
    //            //if (max0 < 15)
    //            //{	continue;	}
    //
    //            //for (i = k; ; i--)
    //            //{	if (C1_AMP[i] >= 0.8*max0 && C1_AMP[i-1] <= 0.8*max0)
    //            //	{	k_08 = i;	}
    //            //	if (C1_AMP[i] >= 0.2*max0 && C1_AMP[i - 1] <= 0.2*max0)
    //            //	{	k_02 = i - 1;
    //            //		break;
    //            //	}
    //            //}//определение номеров значений 0.2*max и 0.8*max
    //
    //            //if (k_02 < 0)
    //            //{	
    //            //	continue;
    //            //}
    //
    //            //TF1 *f1 = new TF1("f1", "pol1", C1_T[k_02], C1_T[k_08]);
    //            //f1->SetLineColor(4);
    //            //C1->Fit("f1", "RQ");
    //            //par0_pol1 = f1->GetParameter(0);
    //            //par1_pol1 = f1->GetParameter(1);//фитирование переднего фронта
    //
    //
    //
    //            //if (max0 / 4 < par0_pol0)
    //            //{
    //            //	continue;
    //            //}//отбрасывание событий с не ровным фронтом
    //            //for (i = k_02; i < k_08-1; i++)
    //            //{	diff[i] = (C1_AMP[i + 1] - C1_AMP[i]) / (C1_T[i + 1] - C1_T[i]);
    //            //	if (diff[i] < -2)
    //            //	{
    //            //		continue;
    //            //	}
    //            //}//отбрасывание событий с не ровным фронтом
    //
    //            //находжение AMP_p3
    //            //TF1 *f7 = new TF1("f7", "pol3", C1_T[k-4], C1_T[k+16]);
    //            //f7->SetLineColor(7);
    //            //C1->Fit("f7", "RQ");
    //            //max1 = f7->GetMaximum();
    //            //cout << max1 << endl;//находжение AMP_p3
    //
    //            //Время нарастания
    //            //dt_k02_08 = C1_T[k_08] - C1_T[k_02];
    //
    //            //интеграл
    //            //Int = 0;
    //            //for (i = k_02; i < nStep-1; i++)
    //            //{	if (C1_AMP[i] >= C1_AMP[k_02] && C1_AMP[i + 1] <= C1_AMP[k_02])
    //            //{	break;	}
    //            //else
    //            //{	tmp = 0;
    //            //tmp = C1_AMP[i - 1] + (C1_T[i - 1] + C1_T[i])*((C1_T[i] - C1_T[i - 1]) / 2);
    //            //Int = Int + tmp;
    //            //}
    //            //}
    //
    //            //интеграл №2
    //            //Int1 = 0;
    //            //for (i = k_02; i < nStep - 1; i++)
    //            //{	if (C1_AMP[i] >= C1_AMP[k_02] && C1_AMP[i + 1] <= C1_AMP[k_02])
    //            //{	break;	}
    //            //else
    //            //{	Int1 = Int1 + C1_AMP[i];	}
    //            //}
    //
    //            //Found_dt
    //            //Second file
    //            //k = 0;
    //            //for (i = 0; i < nStep - 1; i++)
    //            //{	// diff[i] = (C2_AMP[i + 1] - C2_AMP[i]) / (C2_T[i + 1] - C2_T[i]);
    //            //	if (C2_AMP[i]-C2_AMP[i+1]>150)
    //            //	{	k = i;
    //            //		break;
    //            //	}
    //            //}
    //
    //            //for (i = k; i < nStep - 1; i++)
    //            //{	// diff[i] = (C2_AMP[i + 1] - C2_AMP[i]) / (C2_T[i + 1] - C2_T[i]);
    //            //	if (C2_AMP[i] - C2_AMP[i + 1]>150)
    //            //	{	k_08 = i;	}
    //            //	else
    //            //		break;
    //            //}
    //            //for (i = k; i < nStep - 1; i++)
    //            //{	// diff[i] = (C2_AMP[i + 1] - C2_AMP[i]) / (C2_T[i + 1] - C2_T[i]);
    //            //if (diff[i] > -400)
    //            //{	k_08 = i;
    //            // break;
    //            //}
    //            //}
    //            //TF1 *f3 = new TF1("f3", "pol0", C2_T[0], C2_T[k-10]);
    //            //f3->SetLineColor(4);
    //            //C2->Fit("f3", "RQ");
    //            //par1_pol0 = f3->GetParameter(0);
    //            //if (par1_pol0 < -50)
    //            //{
    //            //	continue;
    //            //}
    //
    //            //TF1 *f4 = new TF1("f4", "pol1", C2_T[k], C2_T[k+4]);
    //            //f4->SetLineColor(1);
    //            //C2->Fit("f4", "RQ");
    //            //par2_pol1 = f4->GetParameter(0);
    //            //par3_pol1 = f4->GetParameter(1);//Second file
    //
    //            //Third file
    //            //k = 0;
    //            //for (i = 0; i < nStep - 1; i++)
    //            //{	// diff[i] = (C3_AMP[i + 1] - C3_AMP[i]) / (C3_T[i + 1] - C3_T[i]);
    //            //	if (C3_AMP[i] - C3_AMP[i + 1]>150)
    //            //if (diff[i] < -400)
    //            //	{	k = i;
    //            //		break;
    //            //	}
    //            //}
    //
    //            /* for (i = k; i < nStep - 1; i++)
    //            {	diff[i] = (C3_AMP[i + 1] - C3_AMP[i]) / (C3_T[i + 1] - C3_T[i]);
    //                    if (diff[i] > -400)
    //                    {	k_08 = i;
    //                            break;
    //                    }
    //            }*/
    //
    //            //TF1 *f5 = new TF1("f5", "pol0", C3_T[0], C3_T[k - 10]);
    //            //f5->SetLineColor(4);
    //            //C3->Fit("f5", "RQ");
    //            //par2_pol0 = f5->GetParameter(0);
    //            //if (par2_pol0 < -50)
    //            //{
    //            //	continue;
    //            //}
    //
    //            //TF1 *f6 = new TF1("f6", "pol1", C3_T[k], C3_T[k+4]);
    //            //f6->SetLineColor(1);
    //            //C3->Fit("f6", "RQ");
    //            //par4_pol1 = f6->GetParameter(0);
    //            //par5_pol1 = f6->GetParameter(1); //Third file
    //
    //            //x1 = (par0_pol0 - par0_pol1) / par1_pol1;
    //            //x2 = (par1_pol0 - par2_pol1) / par3_pol1;
    //            //x3 = (par2_pol0 - par4_pol1) / par5_pol1;
    //            //dt = ((x2 + x3) / 2) - x1;
    //            //Found_dt
    //
    //            //max = C1->GetMaximum();
    //            //cout << "Max = " << max << endl; getchar();
    //            //cout << "C1_T[k_02] = " << C1_T[k_02] << endl; getchar();
    //            //cout << "C1_T[k_08] = " << C1_T[k_08] << endl; getchar();
    //            //cout << "k = " << k << endl; getchar();
    //            //cout << "k_08 = " << k_08 << endl; getchar();
    //            //cout << "k_02 = " << k_02 << endl; getchar();
    //            //cout << "par0_pol1 = " << par0_pol1 << endl; getchar();
    //            //cout << "par1_pol1 = " << par1_pol1 << endl; getchar();
    //            //cout << "par_pol0 = " << par_pol0 << endl; getchar();
    //            //kross_C1 = (kmax0 < kmin0 && C1_T[kmin0] - C1_T[kmax0] < 1.5 && ((C1_AMP[kmax0] - base_lineC1) + (C1_AMP[kmin0] - base_lineC1)) <= 20 && (C1_AMP[kmax0] - base_lineC1) >= 25);
    //            //kross_C2 = (kmax1 < kmin1 && C2_T[kmin1] - C2_T[kmax1] < 1.5 && ((C2_AMP[kmax1] - base_lineC2) + (C2_AMP[kmin1] - base_lineC2)) <= 20 && (C2_AMP[kmax1] - base_lineC2) >= 25);
    //            //kross_C3 = (kmax2 < kmin2 && C3_T[kmin2] - C3_T[kmax2] < 1.5 && ((C3_AMP[kmax2] - base_lineC3) + (C3_AMP[kmin2] - base_lineC3)) <= 20 && (C3_AMP[kmax2] - base_lineC3) >= 25);
    //            //kross_C4 = (kmax3 < kmin3 && C4_T[kmin3] - C4_T[kmax3] < 1.5 && ((C4_AMP[kmax3] - base_lineC4) + (C4_AMP[kmin3] - base_lineC4)) <= 20 && (C4_AMP[kmax3] - base_lineC4) >= 25);
    //
    //            //c1->cd(1)->SetGrid(1,1);
    //            //C1->Draw("ACP");
    //            ////	f1->Draw("SAME");
    //            ////	f2->Draw("SAME");
    //            ////	f7->Draw("SAME");
    //            //C1->SetMaximum(com_max + 5);
    //            //C1->SetMinimum(com_min - 5);
    //
    //            //c1->cd(2)->SetGrid(1,1);
    //            //C2->Draw("ACP");
    //            ////	f3->Draw("SAME");
    //            ////	f4->Draw("SAME");
    //            //C2->SetMaximum(com_max + 5);
    //            //C2->SetMinimum(com_min - 5);
    //            //c1->cd(3)->SetGrid(1,1);
    //            //C3->Draw("ACP");
    //            ////	f5->Draw("SAME");
    //            ////	f6->Draw("SAME");
    //            //C3->SetMaximum(com_max + 5);
    //            //C3->SetMinimum(com_min - 5);
    //            ////c1->SetGrid(1,1);
    //            //c1->cd(4)->SetGrid(1,1);
    //            //C4->Draw("ACP");
    //            //C4->SetMaximum(com_max + 5);
    //            //C4->SetMinimum(com_min - 5);		
    //            //c1->Update();
    //
    //            //cout << "Ak0_l = " << C1_AMP[k0_l] << endl;
    //            //cout << "Ak0_r = " << C1_AMP[k0_r] << endl;
    //            //cout << "Tk0_l = " << C1_T[k0_l] << endl;
    //            //cout << "Tk0_r = " << C1_T[k0_r] << endl;
    //            //cout << " " << endl;
    //            //cout << "Ak1_l = " << C2_AMP[k1_l] << endl;
    //            //cout << "Ak1_r = " << C2_AMP[k1_r] << endl;
    //            //cout << "Tk1_l = " << C2_T[k1_l] << endl;
    //            //cout << "Tk1_r = " << C2_T[k1_r] << endl;
    //            //cout << " " << endl;
    //            //cout << "Ak2_l = " << C3_AMP[k2_l] << endl;
    //            //cout << "Ak2_r = " << C3_AMP[k2_r] << endl;
    //            //cout << "Tk2_l = " << C3_T[k2_l] << endl;
    //            //cout << "Tk2_r = " << C3_T[k2_r] << endl;
    //            //cout << " " << endl;
    //            //cout << "Ak3_l = " << C4_AMP[k3_l] << endl;
    //            //cout << "Ak3_r = " << C4_AMP[k3_r] << endl;
    //            //cout << "Tk3_l = " << C4_T[k3_l] << endl;
    //            //cout << "Tk3_r = " << C4_T[k3_r] << endl;
    //
    //            //cout << "base_lineC1 = " << base_lineC1 << endl;
    //            //cout << "base_lineC2 = " << base_lineC2 << endl;
    //            //cout << "base_lineC3 = " << base_lineC3 << endl;
    //            //cout << "base_lineC4 = " << base_lineC4 << endl;
    //            //cout << " " << endl;
    //            //cout << "first_base_lineC1 = " << first_base_lineC1 << endl;
    //            //cout << "first_base_lineC2 = " << first_base_lineC2 << endl;
    //            //cout << "first_base_lineC3 = " << first_base_lineC3 << endl;
    //            //cout << "first_base_lineC4 = " << first_base_lineC4 << endl;
    //            //cout << " " << endl;
    //            //cout << "sec_base_lineC1 = " << sec_base_lineC1 << endl;
    //            //cout << "sec_base_lineC2 = " << sec_base_lineC2 << endl;
    //            //cout << "sec_base_lineC3 = " << sec_base_lineC3 << endl;
    //            //cout << "sec_base_lineC4 = " << sec_base_lineC4 << endl;
    //            //getchar();
    //
    //            //Hist_AMP_C1->Fill(max0); //запись амплитуды в гистограмму
    //            //Hist_AMP_p3->Fill(max1);
    //            //Hist_dt_C1->Fill(kmax0);
    //            //Hist_AMP_C2->Fill(max1); 
    //            //Hist_dt_C2->Fill(kmax1);
    //            //Hist_AMP_C3->Fill(max2); 
    //            //Hist_dt_C3->Fill(kmax2);
    //            //Hist_AMP_C4->Fill(max3); 
    //            //Hist_dt_C4->Fill(kmax3);
    //
    //            //Hist_dt_AMP_C1->Fill(max0, kmax0);
    //            //Hist_dt_AMP_C2->Fill(max1, kmax1);
    //            //Hist_dt_AMP_C3->Fill(max2, kmax2);
    //            //Hist_dt_AMP_C4->Fill(max3, kmax3);
    //            //Hist_dt_AMP_p3->Fill(max1, dt);
    //            //Hist_dt_k02_08->Fill(dt_k02_08);
    //            //Hist_Int->Fill(Int);
    //            //Hist_dt_k02_08_AMP->Fill(max0, dt_k02_08);
    //            //Hist_dt_k02_08_AMP_p3->Fill(max1, dt_k02_08);
    //            //Hist_dt_k02_08_Int->Fill(Int, dt_k02_08);
    //            //Hist_AMP_Int->Fill(Int, max0);
    //            //Hist_AMP_p3_Int->Fill(Int, max1);
    //            //Hist_dt_k02_08_Int1->Fill(Int1, dt_k02_08);
    //            //Hist_AMP_Int1->Fill(Int1, max0);
    //            //Hist_AMP_p3_Int1->Fill(Int1, max1);
    //            //Hist_Int1->Fill(Int1);
    //            //Hist_AMP->Fit("landau");
    //
    //            //repead = 1;
    //
    //            fl_C1->~TF1();
    //            fr_C1->~TF1();
    //            fl_C2->~TF1();
    //            fr_C2->~TF1();
    //            fl_C3->~TF1();
    //            fr_C3->~TF1();
    //            fl_C4->~TF1();
    //            fr_C4->~TF1();
    TestTH2D = Wcalc -> GetDeltaTimeVsAmp();
    SecondTestTH2D = Wcalc -> GetTimeVsAmp();

    for (Short_t iter = 0; iter < TestTH2D.size(); iter++) {
        histlist->Add(TestTH2D[iter]);
    }
    for (Short_t iter = 0; iter < SecondTestTH2D.size(); iter++) {
        histlist->Add(SecondTestTH2D[iter]);
    }

    histlist->Write(); //рисование гистограммы
    hfile->Close(); //закрытие файла в который записали гистограмму
}






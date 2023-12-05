//#include "DataFormats/Math/interface/deltaR.h"
//#include "DataFormats/Math/interface/deltaPhi.h"
#include <vector>
#include <iostream>
#include <math.h>
#include "TH1F.h"
#include "TLorentzVector.h"
#include "TH1F.h"
#include "TH2F.h"
#include <TLatex.h>
#include <TAxis.h>
#include <TAttLine.h>
//#include "../jj_bkg/Events/run_01/jj_bkg.h"

void HZZ_plot_analysis_parton_vs_reco(){
  
  TFile *f0 = TFile::Open("/mnt/e/Madgraph/MG5_aMC_v3_4_0/HZZ_bkg/h_signal/Events/h_signal_beam_resolution.root");

  TFile *f00 = TFile::Open("/mnt/e/Madgraph/MG5_aMC_v3_4_0/HZZ_bkg/h_signal/Events/20_resol_10TeV/tag_1_delphes_events.root");
  //TFile *f0 = TFile::Open("/mnt/e/Madgraph/MG5_aMC_v3_4_0/HZZ_bkg/h_signal/Events/run_03/tag_1_delphes_events.root");
  //TFile *f0plus = TFile::Open("/mnt/e/Madgraph/MG5_aMC_v3_4_0/HZZ_bkg/h_signal/Events/run_plus/tag_2_delphes_events.root");
  //TFile *f0minus = TFile::Open("/mnt/e/Madgraph/MG5_aMC_v3_4_0/HZZ_bkg/h_signal/Events/run_minus/tag_3_delphes_events.root");
  
  
  
  
  
  
  TTree *s1 = (TTree*)f0->Get("Delphes");
  TTree *s11 = (TTree*)f00->Get("Delphes");
  //TTree *s1plus = (TTree*)f0plus->Get("Delphes");
  //TTree *s1minus = (TTree*)f0minus->Get("Delphes");
  
  
  
  

  TH1F *Higgs_mass_plot_signal_1 = new TH1F("Higgs_mass_signal_1","",50,-5,5);
  TH1F *Higgs_mass_plot_signal_parton_1 = new TH1F("Higgs_mass_signal_parton_1","",100,-10,10);
  TH1F *Higgs_mass_plot_signal_20_1 = new TH1F("Higgs_mass_signal_20_1","",100,-10,10);
  
	
  

  vector<double> countnumber_signal(10,0);
  vector<double> countnumber_signal_20(10,0);
  
	
  static constexpr Int_t kMaxForwardMuon = 4;
  
  float  ForwardMuon_PT[kMaxForwardMuon];   
  float  ForwardMuon_Eta[kMaxForwardMuon];
  float  ForwardMuon_Phi[kMaxForwardMuon];
  int    ForwardMuon_size;
  
  static constexpr Int_t kMaxKTjet = 6;
  float  KTjet_PT[kMaxKTjet];   
  float  KTjet_Eta[kMaxKTjet];   
  float  KTjet_Phi[kMaxKTjet];   
  float  KTjet_Mass[kMaxKTjet];  
  Int_t  KTjet_size;
  
  
  static constexpr Int_t kMaxMuon = 4;
  float  Muon_PT[kMaxMuon];   
  float  Muon_Eta[kMaxMuon];
  float  Muon_Phi[kMaxMuon];
  float  Muon_Mass[kMaxMuon];
  int    Muon_size;
  int    Electron_size;
  
  TBranch        *b_ForwardMuon_PT;
  TBranch        *b_ForwardMuon_Eta;
  TBranch        *b_ForwardMuon_Phi;
  TBranch        *b_ForwardMuon_size;
  
  TBranch        *b_KTjet_PT;
  TBranch        *b_KTjet_Eta;
  TBranch        *b_KTjet_Phi;
  TBranch        *b_KTjet_Mass;
  TBranch        *b_KTjet_size;
  TBranch        *b_KTjet_;
  
  TBranch        *b_Muon_PT;
  TBranch        *b_Muon_Eta;
  TBranch        *b_Muon_Phi;
  TBranch        *b_Muon_size;
  TBranch        *b_Electron_size;
  
  //t2->SetBranchAddress("ForwardMuon.PT", ForwardMuon_PT, &b_ForwardMuon_PT);
  //t2->SetBranchAddress("ForwardMuon.Eta", ForwardMuon_Eta, &b_ForwardMuon_Eta);
  //t2->SetBranchAddress("ForwardMuon.Phi", ForwardMuon_Phi, &b_ForwardMuon_Phi);
  //t2->SetBranchAddress("ForwardMuon_size", &ForwardMuon_size, &b_ForwardMuon_size);
  
  s1->SetBranchAddress("ForwardMuon.PT", ForwardMuon_PT, &b_ForwardMuon_PT);
  s1->SetBranchAddress("ForwardMuon.Eta", ForwardMuon_Eta, &b_ForwardMuon_Eta);
  s1->SetBranchAddress("ForwardMuon.Phi", ForwardMuon_Phi, &b_ForwardMuon_Phi);
  s1->SetBranchAddress("ForwardMuon_size", &ForwardMuon_size, &b_ForwardMuon_size);
  s1->SetBranchAddress("Muon_size", &Muon_size, &b_Muon_size);
  s1->SetBranchAddress("Electron_size", &Electron_size, &b_Electron_size);
  s1->SetBranchAddress("KTjet.PT", KTjet_PT, &b_KTjet_PT);
  s1->SetBranchAddress("KTjet.Eta", KTjet_Eta, &b_KTjet_Eta);
  s1->SetBranchAddress("KTjet.Phi", KTjet_Phi, &b_KTjet_Phi);
  s1->SetBranchAddress("KTjet.Mass", KTjet_Mass, &b_KTjet_Mass);
  s1->SetBranchAddress("KTjet_size", &KTjet_size, &b_KTjet_size);
  
  s11->SetBranchAddress("ForwardMuon.PT", ForwardMuon_PT, &b_ForwardMuon_PT);
  s11->SetBranchAddress("ForwardMuon.Eta", ForwardMuon_Eta, &b_ForwardMuon_Eta);
  s11->SetBranchAddress("ForwardMuon.Phi", ForwardMuon_Phi, &b_ForwardMuon_Phi);
  s11->SetBranchAddress("ForwardMuon_size", &ForwardMuon_size, &b_ForwardMuon_size);
  s11->SetBranchAddress("Muon_size", &Muon_size, &b_Muon_size);
  s11->SetBranchAddress("Electron_size", &Electron_size, &b_Electron_size);
  s11->SetBranchAddress("KTjet.PT", KTjet_PT, &b_KTjet_PT);
  s11->SetBranchAddress("KTjet.Eta", KTjet_Eta, &b_KTjet_Eta);
  s11->SetBranchAddress("KTjet.Phi", KTjet_Phi, &b_KTjet_Phi);
  s11->SetBranchAddress("KTjet.Mass", KTjet_Mass, &b_KTjet_Mass);
  s11->SetBranchAddress("KTjet_size", &KTjet_size, &b_KTjet_size);
   


  
  //define new variable for plot
  //double tempdR = 999.0;

  int entries0=s1->GetEntries();
  int entries00=s11->GetEntries();
  
  
  
  std::cout <<"entries0:"<<entries0<<std::endl;
  std::cout <<"entries00:"<<entries00<<std::endl;
  
  
  
  
  
  ////////////////////////10TeV Signal////////////////////////////////////////////////
  double weight_signal=0.0867/400000.0;
  for (int i=0; i<entries0; ++i){
    s1->GetEntry(i);
    
    TLorentzVector Initial;
    TLorentzVector Muon1;
    TLorentzVector Muon2;
    TLorentzVector Muon3;
    TLorentzVector Muon4;
    TLorentzVector KTjet1;
    TLorentzVector KTjet2;
    double Higgs_mass=-999;
    double Twomuon_PT=-999;
    double Muon_Emin=-999;
    double Muon_Ptmin=-999;
    Initial.SetPxPyPzE(0,0,0,10000);
    
    
    countnumber_signal[0] = countnumber_signal[0] + 1;

    // Apply cut
 
    
    // ForwardMuon_size == 2
    if(ForwardMuon_size != 2) {continue;}
    if(ForwardMuon_size == 2) {
        countnumber_signal[1]=countnumber_signal[1]+1;
        //if(i==3274){ std::cout <<"error3"<<std::endl;}
        Muon1.SetPtEtaPhiM(ForwardMuon_PT[0],ForwardMuon_Eta[0],ForwardMuon_Phi[0],0.1);
        Muon2.SetPtEtaPhiM(ForwardMuon_PT[1],ForwardMuon_Eta[1],ForwardMuon_Phi[1],0.1);
        
        
        
        if((ForwardMuon_Eta[0] > 0 && ForwardMuon_Eta[1]<0)||(ForwardMuon_Eta[1] > 0 && ForwardMuon_Eta[0]<0)){
            countnumber_signal[2]=countnumber_signal[2]+1;
            Higgs_mass=(Initial-Muon1-Muon2).M();
            Twomuon_PT=(Muon1+Muon2).Pt();
            //Higgs_mass_plot_signal->Fill(Higgs_mass);
            //ForwardMuon_Eta_plot_signal->Fill(Muon1.Eta());
            //ForwardMuon_E_plot_signal->Fill(Muon1.E());
            //ForwardMuon_PT_plot_signal->Fill(Muon1.Pt());
            //ForwardMuon_Eta_plot_signal->Fill(Muon2.Eta());
            //ForwardMuon_E_plot_signal->Fill(Muon2.E());
            //ForwardMuon_PT_plot_signal->Fill(Muon2.Pt());
            
            if(ForwardMuon_PT[0]>20 && ForwardMuon_PT[1]>20){
                countnumber_signal[3]=countnumber_signal[3]+1;
                //ForwardMuon_sumPT_plot_signal->Fill(Twomuon_PT,weight_signal);
            
                if(Twomuon_PT > 50){
                    countnumber_signal[4]=countnumber_signal[4]+1;
                    
                
                    if(Muon1.E() < Muon2.E()){Muon_Emin=Muon1.E();}
                    if(Muon1.E() > Muon2.E()){Muon_Emin=Muon2.E();}
                    
                    if(Muon1.E() < Muon2.E()){Muon_Emin=Muon1.E();Muon_Ptmin=Muon1.Pt(); }
                    if(Muon1.E() > Muon2.E()){Muon_Emin=Muon2.E();Muon_Ptmin=Muon2.Pt(); }
                    
                    Higgs_mass_plot_signal_1->Fill(Higgs_mass/1000.0,weight_signal);
                    
                    Higgs_mass_plot_signal_parton_1->Fill(125.0/1000.0,weight_signal);
                    if(Muon_Emin > 3000){
                        countnumber_signal[5]=countnumber_signal[5]+1;
                        
                        if(Muon_Ptmin<300){
                            countnumber_signal[6]=countnumber_signal[6]+1;
                        }
                        
                    }
                
                
                }
            
            }
            
        }
        

    } 
    
    
  
  }
  
  std::cout <<"pass0"<<std::endl;
  
  ////////////////////////10TeV Signal 20% resolution////////////////////////////////////////////////
  double weight_signal_20=0.0867/100000.0;
  for (int i=0; i<entries00; ++i){
    s11->GetEntry(i);
    
    TLorentzVector Initial;
    TLorentzVector Muon1;
    TLorentzVector Muon2;
    TLorentzVector Muon3;
    TLorentzVector Muon4;
    TLorentzVector KTjet1;
    TLorentzVector KTjet2;
    double Higgs_mass=-999;
    double Twomuon_PT=-999;
    double Muon_Emin=-999;
    double Muon_Ptmin=-999;
    Initial.SetPxPyPzE(0,0,0,10000);
    
    
    countnumber_signal_20[0] = countnumber_signal_20[0] + 1;

    // Apply cut
 
    
    // ForwardMuon_size == 2
    if(ForwardMuon_size != 2) {continue;}
    if(ForwardMuon_size == 2) {
        countnumber_signal_20[1]=countnumber_signal_20[1]+1;
        //if(i==3274){ std::cout <<"error3"<<std::endl;}
        Muon1.SetPtEtaPhiM(ForwardMuon_PT[0],ForwardMuon_Eta[0],ForwardMuon_Phi[0],0.1);
        Muon2.SetPtEtaPhiM(ForwardMuon_PT[1],ForwardMuon_Eta[1],ForwardMuon_Phi[1],0.1);
        
        
        
        if((ForwardMuon_Eta[0] > 0 && ForwardMuon_Eta[1]<0)||(ForwardMuon_Eta[1] > 0 && ForwardMuon_Eta[0]<0)){
            countnumber_signal_20[2]=countnumber_signal_20[2]+1;
            Higgs_mass=(Initial-Muon1-Muon2).M();
            Twomuon_PT=(Muon1+Muon2).Pt();
            
            
            if(ForwardMuon_PT[0]>20 && ForwardMuon_PT[1]>20){
                
            
                if(Twomuon_PT > 50){
                    
                    
                    Higgs_mass_plot_signal_20_1->Fill(Higgs_mass/1000.0,weight_signal_20);
                    
                    
                    
                
                
                }
            
            }
            
        }
        

    } 
    
    
  
  }
  
  std::cout <<"pass00"<<std::endl;
  
  
  
  
  // cutflow
  
  std::cout <<"Total_signal:"<<countnumber_signal[0]<<"->"<<countnumber_signal[0]/countnumber_signal[0]<<std::endl;
  std::cout <<"ForwardMuon=2_signal:"<<countnumber_signal[1]<<"->"<<countnumber_signal[1]/countnumber_signal[0]<<std::endl;
  std::cout <<"ForwardMuon_backtoback_signal:"<<countnumber_signal[2]<<"->"<<countnumber_signal[2]/countnumber_signal[0]<<std::endl;
  std::cout <<"PT>20_signal:"<<countnumber_signal[3]<<"->"<<countnumber_signal[3]/countnumber_signal[0]<<std::endl;
  std::cout <<"sumPT>50_signal:"<<countnumber_signal[4]<<"->"<<countnumber_signal[4]/countnumber_signal[0]<<std::endl;
  std::cout <<"E>3000_signal:"<<countnumber_signal[5]<<"->"<<countnumber_signal[5]/countnumber_signal[0]<<std::endl;
  std::cout <<"Pt<600_signal:"<<countnumber_signal[6]<<"->"<<countnumber_signal[6]/countnumber_signal[0]<<std::endl;
  
  
  
  
  
  // draw plot
  gStyle->SetPadLeftMargin(0.17); gStyle->SetPadBottomMargin(0.15);
  gStyle->SetPadRightMargin(0.05); 
  gStyle->SetTitleFont(132, "xyz"); 
  gStyle->SetLabelFont(132, "xyz"); 
  gStyle->SetTextFont(132); 
  
  TColor *mumua_color = new TColor(9001,0.317647, 0.654902, 0.752941); 
  TColor *ff_color = new TColor(9002,0.705882, 0.494118, 0.545098); 
  TColor *ww_color = new TColor(9003,0.1875, 0.54687, 0.347656); 
  
  
  
  TCanvas *c31 = new TCanvas();
  Higgs_mass_plot_signal_1->SetStats(0);
  Higgs_mass_plot_signal_1->SetLineColor(kRed-4);
  Higgs_mass_plot_signal_parton_1->SetLineColor(kRed-4);
  Higgs_mass_plot_signal_20_1->SetLineColor(46);

  Higgs_mass_plot_signal_parton_1->SetLineStyle(2);

  Higgs_mass_plot_signal_parton_1->SetLineWidth(3);
  Higgs_mass_plot_signal_1->SetLineWidth(3);
  Higgs_mass_plot_signal_20_1->SetLineWidth(2);
  
  Higgs_mass_plot_signal_1->GetXaxis()->SetTitle("M_{recoil}[TeV]");
  Higgs_mass_plot_signal_1->GetYaxis()->SetTitle("d#sigma/dM_{recoil}[pb/TeV]");
  Higgs_mass_plot_signal_1->GetXaxis()->SetTitleSize(0.07);
  Higgs_mass_plot_signal_1->GetYaxis()->SetTitleSize(0.07);
  Higgs_mass_plot_signal_1->GetXaxis()->SetLabelSize(0.06);
  Higgs_mass_plot_signal_1->GetYaxis()->SetLabelSize(0.06);
  Higgs_mass_plot_signal_1->GetXaxis()->SetTitleFont(132);
  Higgs_mass_plot_signal_1->GetYaxis()->SetTitleFont(132);
  Higgs_mass_plot_signal_1->GetXaxis()->SetRangeUser(-10,10);
  Higgs_mass_plot_signal_1->GetYaxis()->SetRangeUser(0.0001,0.5);
  
  //Higgs_mass_plot_mumu_bkg->DrawNormalized();
  Higgs_mass_plot_signal_1->Draw("HIST");
  Higgs_mass_plot_signal_parton_1->Draw("same" "HIST");
  Higgs_mass_plot_signal_20_1->Draw("same" "HIST");
  
  TLegend *l31 = new TLegend(0.70,0.65,0.95,0.90);
  l31->AddEntry(Higgs_mass_plot_signal_1,"#mu#muh (10%)","l");
  l31->AddEntry(Higgs_mass_plot_signal_20_1,"#mu#muh (20%)","l");
  l31->AddEntry(Higgs_mass_plot_signal_parton_1,"#mu#muh (parton)","l");
  l31->SetTextSize(0.05);
  l31->SetTextFont(132);
  l31->Draw();
  
  c31->SetLogy();
  c31->SetTickx();
  c31->SetTicky();
  c31->SetGridx();
  c31->SetGridy();
  c31->SaveAs("/mnt/e/Madgraph/MG5_aMC_v3_4_0/HZZ_bkg/plot_macro/output_plot/reco_level_morecut/parton_vs_reco/Higgs_mass_plot_signal.pdf");

  
  
}
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
//#include "../jj_bkg/Events/run_01/jj_bkg.h"

void parton_level_analysis_signal_higgs(){
  
  //TFile *f0 = TFile::Open("/mnt/e/Madgraph/MG5_aMC_v3_4_0/HZZ_bkg/h_signal/Events/h_signal_beam_resolution.root");
  //TFile *f0 = TFile::Open("/mnt/e/Madgraph/MG5_aMC_v3_4_0/HZZ_bkg/h_signal/Events/run_03/tag_1_delphes_events.root");
  //TFile *f0plus = TFile::Open("/mnt/e/Madgraph/MG5_aMC_v3_4_0/HZZ_bkg/h_signal/Events/run_plus/tag_2_delphes_events.root");
  //TFile *f0minus = TFile::Open("/mnt/e/Madgraph/MG5_aMC_v3_4_0/HZZ_bkg/h_signal/Events/run_minus/tag_3_delphes_events.root");
  TFile *f0 = TFile::Open("/mnt/e/Madgraph/MG5_aMC_v3_4_0/HZZ_bkg/h_signal/Events/run_03/unweighted_events.root");
  
  
  
  
  
  
  
  TTree *s1 = (TTree*)f0->Get("LHEF");
  //TTree *s1plus = (TTree*)f0plus->Get("Delphes");
  //TTree *s1minus = (TTree*)f0minus->Get("Delphes");
  
  
  

  //create histograms
  // TH1F *plotvariable_for_code = new TH1F("plot_name","plot_title",nbins,xlow,xup);
  TH1F *ForwardMuon_Eta_plot_signal = new TH1F("Forwardmuon_Eta_signal","",50,-8,8);
  TH1F *ForwardMuon_E_plot_signal = new TH1F("Forwardmuon_E_signal","",30,0,7000);
  TH1F *ForwardMuon_PT_plot_signal = new TH1F("Forwardmuon_PT_signal","",30,-10,2000);
  TH1F *ForwardMuon_sumPT_plot_signal = new TH1F("Forwardmuon_sumPT_signal","",30,-30,350);
  TH1F *ForwardMuon_Emin_plot_signal = new TH1F("Forwardmuon_Emin_signal","",30,0,7000);
  
  TH1F *Higgs_Pt_plot = new TH1F("Higgs_Pt_signal","",100,0,800);
  TH1F *Higgs_Eta_plot = new TH1F("Higgs_Eta_signal","",50,-11,11);
  TH1F *Higgs_Phi_plot = new TH1F("Higgs_Phi_signal","",50,-7,7);
  
  
  
  
  
  
  
  
  
  
  TH1F *Higgs_mass_plot_signal = new TH1F("Higgs_mass_signal","",40,-500,1500);
  
	
  

  vector<double> countnumber_signal(10,0);
  vector<double> countnumber_jj_bkg(10,0);
  vector<double> countnumber_ww_bkg(10,0);
  vector<double> countnumber_mumu_bkg(10,0);
  vector<double> countnumber_mumua_bkg(10,0);
  vector<double> countnumber_vmvm_bkg(10,0);
  vector<double> countnumber_ee_bkg(10,0);
	
  static constexpr Int_t kMaxParticle = 10;
  
  Int_t           Particle_PID[kMaxParticle];   //[Particle_]
  Int_t           Particle_Status[kMaxParticle];   //[Particle_]
  Double_t        Particle_E[kMaxParticle];   //[Particle_]
  Double_t        Particle_M[kMaxParticle];   //[Particle_]
  Double_t        Particle_PT[kMaxParticle];   //[Particle_]
  Double_t        Particle_Eta[kMaxParticle];   //[Particle_]
  Double_t        Particle_Phi[kMaxParticle];   //[Particle_]
  
  
  
  TBranch        *b_Particle_PID;   //!
  TBranch        *b_Particle_Status;   //!
  TBranch        *b_Particle_E;   //!
  TBranch        *b_Particle_M;   //!
  TBranch        *b_Particle_PT;   //!
  TBranch        *b_Particle_Eta;   //!
  TBranch        *b_Particle_Phi;   //!
  
  
  
  
  s1->SetBranchAddress("Particle.PID", Particle_PID, &b_Particle_PID);
  s1->SetBranchAddress("Particle.Status", Particle_Status, &b_Particle_Status);
  s1->SetBranchAddress("Particle.E", Particle_E, &b_Particle_E);
  s1->SetBranchAddress("Particle.M", Particle_M, &b_Particle_M);
  s1->SetBranchAddress("Particle.PT", Particle_PT, &b_Particle_PT);
  s1->SetBranchAddress("Particle.Eta", Particle_Eta, &b_Particle_Eta);
  s1->SetBranchAddress("Particle.Phi", Particle_Phi, &b_Particle_Phi);
  
  
  
  
  
  
  
  


  
  //define new variable for plot
  //double tempdR = 999.0;

  int entries0=s1->GetEntries();
  //int entries0plus=s1plus->GetEntries();
  //int entries0minus=s1minus->GetEntries();
  
  
  
  
  std::cout <<"entries0:"<<entries0<<std::endl;
  
  
  
  
  
  ////////////////////////10TeV Signal////////////////////////////////////////////////
  double weight_signal=0.0867/200000.0;
  for (int i=0; i<entries0; ++i){
    s1->GetEntry(i);
    
    TLorentzVector Initial;
    TLorentzVector Muon1;
    TLorentzVector Muon2;
    TLorentzVector Muon3;
    TLorentzVector Muon4;
    TLorentzVector Higgs;
    
    double Higgs_mass=-999;
    double Twomuon_PT=-999;
    double Muon_Emin=-999;
    Initial.SetPxPyPzE(0,0,0,10000);
    
    
    countnumber_signal[0] = countnumber_signal[0] + 1;

    // Apply cut
 
    
    // ForwardMuon_size == 2
    
    //if(ForwardMuon_size == 2) {
        countnumber_signal[1]=countnumber_signal[1]+1;
        
        Muon1.SetPtEtaPhiM(Particle_PT[2],Particle_Eta[2],Particle_Phi[2],0.1);
        Muon2.SetPtEtaPhiM(Particle_PT[3],Particle_Eta[3],Particle_Phi[3],0.1);
        Higgs.SetPtEtaPhiM(Particle_PT[4],Particle_Eta[4],Particle_Phi[4],125);
        
        Higgs_Pt_plot->Fill(Particle_PT[4],weight_signal);
        Higgs_Eta_plot->Fill(Particle_Eta[4],weight_signal);
        Higgs_Phi_plot->Fill(Particle_Phi[4],weight_signal);
        
        
        
        if(Particle_Eta[2]*Particle_Eta[3] < 0){
            countnumber_signal[2]=countnumber_signal[2]+1;
            Higgs_mass=(Initial-Muon1-Muon2).M();
            Twomuon_PT=(Muon1+Muon2).Pt();
            
            
            
            
            if(Particle_PT[2]>20 && Particle_PT[3]>20){
                countnumber_signal[3]=countnumber_signal[3]+1;
                ForwardMuon_sumPT_plot_signal->Fill(Twomuon_PT,weight_signal);
                ForwardMuon_E_plot_signal->Fill(Muon2.E(),weight_signal);
                ForwardMuon_PT_plot_signal->Fill(Muon2.Pt(),weight_signal);
                ForwardMuon_Eta_plot_signal->Fill(Muon2.Eta(),weight_signal);
                Higgs_mass_plot_signal->Fill(Higgs_mass,weight_signal);
                if(Muon1.E() < Muon2.E()){Muon_Emin=Muon1.E();}
                if(Muon1.E() > Muon2.E()){Muon_Emin=Muon2.E();}
                ForwardMuon_Emin_plot_signal->Fill(Muon_Emin,weight_signal);
                
                
                if(Twomuon_PT > 50){
                    countnumber_signal[4]=countnumber_signal[4]+1;
                    //ForwardMuon_E_plot_signal->Fill(Muon1.E(),weight_signal);
                    //ForwardMuon_PT_plot_signal->Fill(Muon1.Pt(),weight_signal);
                    //ForwardMuon_Eta_plot_signal->Fill(Muon1.Eta(),weight_signal);
                    
                
                    //if(Muon1.E() < Muon2.E()){Muon_Emin=Muon1.E();}
                    //if(Muon1.E() > Muon2.E()){Muon_Emin=Muon2.E();}
                    //ForwardMuon_Emin_plot_signal->Fill(Muon_Emin,weight_signal);
                    
                
                    if(Muon_Emin > 3000){
                        countnumber_signal[5]=countnumber_signal[5]+1;
                        //Higgs_mass_2_plot_signal->Fill(Higgs_mass,weight_signal);
                    }
                
                
                }
            
            }
            
        }
        
    //}
     
    
    
  
  }
  
  std::cout <<"pass0"<<std::endl;
  
  
  
  
  // cutflow
  
  std::cout <<"Total_signal:"<<countnumber_signal[0]<<"->"<<countnumber_signal[0]/countnumber_signal[0]<<std::endl;
  std::cout <<"ForwardMuon=2_signal:"<<countnumber_signal[1]<<"->"<<countnumber_signal[1]/countnumber_signal[0]<<std::endl;
  std::cout <<"ForwardMuon_backtoback_signal:"<<countnumber_signal[2]<<"->"<<countnumber_signal[2]/countnumber_signal[0]<<std::endl;
  std::cout <<"PT>20_signal:"<<countnumber_signal[3]<<"->"<<countnumber_signal[3]/countnumber_signal[0]<<std::endl;
  std::cout <<"sumPT>50_signal:"<<countnumber_signal[4]<<"->"<<countnumber_signal[4]/countnumber_signal[0]<<std::endl;
  std::cout <<"E>3000_signal:"<<countnumber_signal[5]<<"->"<<countnumber_signal[5]/countnumber_signal[0]<<std::endl;
  
  
  
  
  
  
  // draw plot
  gStyle->SetPadLeftMargin(0.15); gStyle->SetPadBottomMargin(0.15);
  gStyle->SetTitleFont(12, "xyz"); // 设置标题字体，xyz表示轴：X、Y和Z
  gStyle->SetLabelFont(12, "xyz"); // 设置标签字体
  gStyle->SetTextFont(12); // 设置文本字体
  
  
  TCanvas *c110 = new TCanvas();
  
  Higgs_Eta_plot->SetStats(0);
  Higgs_Eta_plot->SetLineColor(kRed-4);
  Higgs_Eta_plot->SetLineWidth(3);
  
  Higgs_Eta_plot->GetXaxis()->SetTitle("#eta(H)");
  Higgs_Eta_plot->GetYaxis()->SetTitle("d#sigma/d#eta(H)[pb]");
  Higgs_Eta_plot->GetXaxis()->SetTitleSize(0.05);
  Higgs_Eta_plot->GetYaxis()->SetTitleSize(0.05);
  Higgs_Eta_plot->GetXaxis()->SetLabelSize(0.04);
  Higgs_Eta_plot->GetYaxis()->SetLabelSize(0.04);
  Higgs_Eta_plot->GetXaxis()->SetTitleFont(132);
  Higgs_Eta_plot->GetYaxis()->SetTitleFont(132);
  //ForwardMuon_Eta_plot_signal->GetYaxis()->SetRangeUser(0.0001,1000);
  
  Higgs_Eta_plot->Draw("HIST");
  //ForwardMuon_Eta_plot_mumua_bkg->Draw("same" "HIST");
  //ForwardMuon_Eta_plot_mumu_bkg->Draw("same" "HIST");
  //ForwardMuon_Eta_plot_ff_bkg->Draw("same" "HIST");
  //ForwardMuon_Eta_plot_ww_bkg->Draw("same" "HIST");
  
  
  
  
  c110->SetLogy();
  c110->SetTickx();
  c110->SetTicky();
  c110->SetGridx();
  c110->SetGridy();
  c110->SaveAs("/mnt/e/Madgraph/MG5_aMC_v3_4_0/HZZ_bkg/plot_macro/output_plot/parton_level/Higgs_Eta_parton_signal_Higgs.pdf");
  
  
  
  
  TCanvas *c130 = new TCanvas();
  Higgs_Pt_plot->SetStats(0);
  Higgs_Pt_plot->SetLineColor(kRed-4);
  Higgs_Pt_plot->SetLineWidth(3);
  
  Higgs_Pt_plot->GetXaxis()->SetTitle("p_{T}(H)[GeV]");
  Higgs_Pt_plot->GetYaxis()->SetTitle("d#sigma/dp_{T}(H)[pb/GeV]");
  Higgs_Pt_plot->GetXaxis()->SetTitleSize(0.05);
  Higgs_Pt_plot->GetYaxis()->SetTitleSize(0.05);
  Higgs_Pt_plot->GetXaxis()->SetLabelSize(0.04);
  Higgs_Pt_plot->GetYaxis()->SetLabelSize(0.04);
  Higgs_Pt_plot->GetXaxis()->SetTitleFont(132);
  Higgs_Pt_plot->GetYaxis()->SetTitleFont(132);
  Higgs_Pt_plot->GetYaxis()->SetNdivisions(5);
  //ForwardMuon_Eta_plot_signal->GetYaxis()->SetRangeUser(0.0001,1000);
  
  Higgs_Pt_plot->Draw("HIST");
  //ForwardMuon_Eta_plot_mumua_bkg->Draw("same" "HIST");
  //ForwardMuon_Eta_plot_mumu_bkg->Draw("same" "HIST");
  //ForwardMuon_Eta_plot_ff_bkg->Draw("same" "HIST");
  //ForwardMuon_Eta_plot_ww_bkg->Draw("same" "HIST");
  
  
  
  
  c130->SetLogy();
  c130->SetTickx();
  c130->SetTicky();
  c130->SetGridx();
  c130->SetGridy();
  c130->SaveAs("/mnt/e/Madgraph/MG5_aMC_v3_4_0/HZZ_bkg/plot_macro/output_plot/parton_level/Higgs_Pt_parton_signal_Higgs.pdf");
  
  
  TCanvas *c140 = new TCanvas();
  Higgs_Phi_plot->SetStats(0);
  Higgs_Phi_plot->SetLineColor(kRed-4);
  Higgs_Phi_plot->SetLineWidth(3);
  
  Higgs_Phi_plot->GetXaxis()->SetTitle("#phi(H)");
  Higgs_Phi_plot->GetYaxis()->SetTitle("d#sigma/d#phi(H)[pb]");
  Higgs_Phi_plot->GetXaxis()->SetTitleSize(0.05);
  Higgs_Phi_plot->GetYaxis()->SetTitleSize(0.05);
  Higgs_Phi_plot->GetXaxis()->SetLabelSize(0.04);
  Higgs_Phi_plot->GetYaxis()->SetLabelSize(0.04);
  Higgs_Phi_plot->GetXaxis()->SetTitleFont(132);
  Higgs_Phi_plot->GetYaxis()->SetTitleFont(132);
  Higgs_Phi_plot->GetYaxis()->SetNdivisions(5);
  Higgs_Phi_plot->GetYaxis()->SetRangeUser(0.5e-5,6.0e-3);
  
  Higgs_Phi_plot->Draw("HIST");
  //ForwardMuon_Eta_plot_mumua_bkg->Draw("same" "HIST");
  //ForwardMuon_Eta_plot_mumu_bkg->Draw("same" "HIST");
  //ForwardMuon_Eta_plot_ff_bkg->Draw("same" "HIST");
  //ForwardMuon_Eta_plot_ww_bkg->Draw("same" "HIST");
  
  
  
  
  c140->SetLogy();
  c140->SetTickx();
  c140->SetTicky();
  c140->SetGridx();
  c140->SetGridy();
  c140->SaveAs("/mnt/e/Madgraph/MG5_aMC_v3_4_0/HZZ_bkg/plot_macro/output_plot/parton_level/Higgs_Phi_parton_signal_Higgs.pdf");
  
  
  //.> Higgs_Eta_plot.dat
  //Higgs_Eta_signal->Print("all");
  //.>
  //root parton_level_analysis_signal_higgs.C
  //root .> Higgs_Eta_plot.dat
  //Higgs_Eta_plot->Print("all");
  //root .>
  
  
}
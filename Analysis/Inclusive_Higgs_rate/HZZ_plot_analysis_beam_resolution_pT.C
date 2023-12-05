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

void HZZ_plot_analysis_beam_resolution_pT(){
  
  TFile *f0 = TFile::Open("/mnt/e/Madgraph/MG5_aMC_v3_4_0/HZZ_bkg/h_signal/Events/h_signal_beam_resolution.root");
  //TFile *f0 = TFile::Open("/mnt/e/Madgraph/MG5_aMC_v3_4_0/HZZ_bkg/h_signal/Events/run_03/tag_1_delphes_events.root");
  //TFile *f0plus = TFile::Open("/mnt/e/Madgraph/MG5_aMC_v3_4_0/HZZ_bkg/h_signal/Events/run_plus/tag_2_delphes_events.root");
  //TFile *f0minus = TFile::Open("/mnt/e/Madgraph/MG5_aMC_v3_4_0/HZZ_bkg/h_signal/Events/run_minus/tag_3_delphes_events.root");
  
  TFile *f1 = TFile::Open("/mnt/e/Madgraph/MG5_aMC_v3_4_0/HZZ_bkg/jj_bkg/Events/jj_bkg_beam_resolution.root");
  //TFile *f1 = TFile::Open("/mnt/e/Madgraph/MG5_aMC_v3_4_0/HZZ_bkg/jj_bkg/Events/run_03/tag_1_delphes_events.root");
  //TFile *f1plus = TFile::Open("/mnt/e/Madgraph/MG5_aMC_v3_4_0/HZZ_bkg/jj_bkg/Events/run_plus/tag_2_delphes_events.root");
  //TFile *f1minus = TFile::Open("/mnt/e/Madgraph/MG5_aMC_v3_4_0/HZZ_bkg/jj_bkg/Events/run_minus/tag_3_delphes_events.root");
  
  //TFile *f2 = TFile::Open("/mnt/e/Madgraph/MG5_aMC_v3_4_0/HZZ_bkg/ww_bkg/Events/ww_bkg_beam_resolution.root");
  TFile *f2 = TFile::Open("/mnt/e/Madgraph/MG5_aMC_v3_4_0/HZZ_bkg/ww_bkg/Events/10_TeV/tag_1_delphes_events.root");
  //TFile *f2plus = TFile::Open("/mnt/e/Madgraph/MG5_aMC_v3_4_0/HZZ_bkg/ww_bkg/Events/run_plus/tag_1_delphes_events.root");
  //TFile *f2minus = TFile::Open("/mnt/e/Madgraph/MG5_aMC_v3_4_0/HZZ_bkg/ww_bkg/Events/run_minus/tag_2_delphes_events.root");
  
  TFile *f3 = TFile::Open("/mnt/e/Madgraph/MG5_aMC_v3_4_0/HZZ_bkg/mumu_bkg/Events/mumu_bkg_beam_resolution.root");
  //TFile *f3 = TFile::Open("/mnt/e/Madgraph/MG5_aMC_v3_4_0/HZZ_bkg/mumu_bkg/Events/run_02/tag_1_delphes_events.root");
  //TFile *f3plus = TFile::Open("/mnt/e/Madgraph/MG5_aMC_v3_4_0/HZZ_bkg/mumu_bkg/Events/run_plus/tag_3_delphes_events.root");
  //TFile *f3minus = TFile::Open("/mnt/e/Madgraph/MG5_aMC_v3_4_0/HZZ_bkg/mumu_bkg/Events/run_minus/tag_4_delphes_events.root");
  
  TFile *f4 = TFile::Open("/mnt/e/Madgraph/MG5_aMC_v3_4_0/HZZ_bkg/mumua_bkg/Events/mumua_bkg_beam_resolution.root");
  //TFile *f4 = TFile::Open("/mnt/e/Madgraph/MG5_aMC_v3_4_0/HZZ_bkg/mumua_bkg/Events/run_04/tag_1_delphes_events.root");
  //TFile *f4plus = TFile::Open("/mnt/e/Madgraph/MG5_aMC_v3_4_0/HZZ_bkg/mumua_bkg/Events/run_plus/tag_1_delphes_events.root");
  //TFile *f4minus = TFile::Open("/mnt/e/Madgraph/MG5_aMC_v3_4_0/HZZ_bkg/mumua_bkg/Events/run_minus/tag_2_delphes_events.root");
  
  TFile *f5 = TFile::Open("/mnt/e/Madgraph/MG5_aMC_v3_4_0/HZZ_bkg/vmvm_bkg/Events/vmvm_bkg_beam_resolution.root");
  //TFile *f5 = TFile::Open("/mnt/e/Madgraph/MG5_aMC_v3_4_0/HZZ_bkg/vmvm_bkg/Events/run_02/tag_1_delphes_events.root");
  //TFile *f5plus = TFile::Open("/mnt/e/Madgraph/MG5_aMC_v3_4_0/HZZ_bkg/vmvm_bkg/Events/run_plus/tag_1_delphes_events.root");
  //TFile *f5minus = TFile::Open("/mnt/e/Madgraph/MG5_aMC_v3_4_0/HZZ_bkg/vmvm_bkg/Events/run_minus/tag_2_delphes_events.root");
  
  TFile *f6 = TFile::Open("/mnt/e/Madgraph/MG5_aMC_v3_4_0/HZZ_bkg/ee_bkg/Events/ee_bkg_beam_resolution.root");
  //TFile *f6 = TFile::Open("/mnt/e/Madgraph/MG5_aMC_v3_4_0/HZZ_bkg/ee_bkg/Events/run_02/tag_1_delphes_events.root");
  //TFile *f6plus = TFile::Open("/mnt/e/Madgraph/MG5_aMC_v3_4_0/HZZ_bkg/ee_bkg/Events/run_plus/tag_1_delphes_events.root");
  //TFile *f6minus = TFile::Open("/mnt/e/Madgraph/MG5_aMC_v3_4_0/HZZ_bkg/ee_bkg/Events/run_minus/tag_1_delphes_events.root");
  
  
  
  
  TTree *s1 = (TTree*)f0->Get("Delphes");
  //TTree *s1plus = (TTree*)f0plus->Get("Delphes");
  //TTree *s1minus = (TTree*)f0minus->Get("Delphes");
  
  TTree *b1 = (TTree*)f1->Get("Delphes");
  //TTree *b1plus = (TTree*)f1plus->Get("Delphes");
  //TTree *b1minus = (TTree*)f1minus->Get("Delphes");
  
  TTree *b2 = (TTree*)f2->Get("Delphes");
  //TTree *b2plus = (TTree*)f2plus->Get("Delphes");
  //TTree *b2minus = (TTree*)f2minus->Get("Delphes");
  
  TTree *b3 = (TTree*)f3->Get("Delphes");
  //TTree *b3plus = (TTree*)f3plus->Get("Delphes");
  //TTree *b3minus = (TTree*)f3minus->Get("Delphes");
  
  TTree *b4 = (TTree*)f4->Get("Delphes");
  //TTree *b4plus = (TTree*)f4plus->Get("Delphes");
  //TTree *b4minus = (TTree*)f4minus->Get("Delphes");
  
  TTree *b5 = (TTree*)f5->Get("Delphes");
  //TTree *b5plus = (TTree*)f5plus->Get("Delphes");
  //TTree *b5minus = (TTree*)f5minus->Get("Delphes");
  
  TTree *b6 = (TTree*)f6->Get("Delphes");
  //TTree *b6plus = (TTree*)f6plus->Get("Delphes");
  //TTree *b6minus = (TTree*)f6minus->Get("Delphes");
  

  //create histograms
  // TH1F *plotvariable_for_code = new TH1F("plot_name","plot_title",nbins,xlow,xup);
  //TH1F *ForwardMuon_Eta_plot_signal = new TH1F("Forwardmuon_Eta_signal","Forwardmuon_Eta_signal",100,-10,10);
  //TH1F *ForwardMuon_E_plot_signal = new TH1F("Forwardmuon_E_signal","Forwardmuon_E_signal",25,-10,8000);
  //TH1F *ForwardMuon_PT_plot_signal = new TH1F("Forwardmuon_PT_signal","Forwardmuon_PT_signal",25,-10,1000);
  TH1F *ForwardMuon_sumPT_plot_signal = new TH1F("Forwardmuon_sumPT_signal","Forwardmuon_sumPT_signal",50,0,250);
  //TH1F *ForwardMuon_Emin_plot_signal = new TH1F("Forwardmuon_Emin_signal","",25,-10,8000);
  //TH2F *ForwardMuon_E_2d_plot_signal = new TH2F("Forwardmuon_E_2d_signal","",50,-10,8000,50,-10,8000);
  
  /*TH1F *ForwardMuon_Eta_plot_mumu_bkg = new TH1F("Forwardmuon_Eta_mumu_bkg","Forwardmuon_Eta_mumu_bkg",50,-10,10);
  TH1F *ForwardMuon_E_plot_mumu_bkg = new TH1F("Forwardmuon_E_mumu_bkg","Forwardmuon_E_mumu_bkg",25,-10,10000);
  TH1F *ForwardMuon_PT_plot_mumu_bkg = new TH1F("Forwardmuon_PT_mumu_bkg","Forwardmuon_PT_mumu_bkg",25,-10,1000);
  TH1F *ForwardMuon_sumPT_plot_mumu_bkg = new TH1F("Forwardmuon_sumPT_mumu_bkg","Forwardmuon_sumPT_mumu_bkg",50,-10,350);*/
  
  /*TH1F *ForwardMuon_Eta_plot_jj_bkg = new TH1F("Forwardmuon_Eta_jj_bkg","Forwardmuon_Eta_jj_bkg",50,-10,10);
  TH1F *ForwardMuon_E_plot_jj_bkg = new TH1F("Forwardmuon_E_jj_bkg","Forwardmuon_E_jj_bkg",25,-10,8000);
  TH1F *ForwardMuon_PT_plot_jj_bkg = new TH1F("Forwardmuon_PT_jj_bkg","Forwardmuon_PT_jj_bkg",25,-10,1000);
  TH1F *ForwardMuon_sumPT_plot_jj_bkg = new TH1F("Forwardmuon_sumPT_jj_bkg","Forwardmuon_sumPT_jj_bkg",50,-10,250);*/
  
  //TH1F *ForwardMuon_Eta_plot_ww_bkg = new TH1F("Forwardmuon_Eta_ww_bkg","Forwardmuon_Eta_ww_bkg",100,-10,10);
  //TH1F *ForwardMuon_E_plot_ww_bkg = new TH1F("Forwardmuon_E_ww_bkg","Forwardmuon_E_ww_bkg",25,-10,8000);
  //TH1F *ForwardMuon_PT_plot_ww_bkg = new TH1F("Forwardmuon_PT_ww_bkg","Forwardmuon_PT_ww_bkg",25,-10,1000);
  TH1F *ForwardMuon_sumPT_plot_ww_bkg = new TH1F("Forwardmuon_sumPT_ww_bkg","Forwardmuon_sumPT_ww_bkg",50,0,250);
  
  //TH1F *ForwardMuon_Eta_plot_mumua_bkg = new TH1F("Forwardmuon_Eta_mumua_bkg","",100,-10,10);
  //TH1F *ForwardMuon_E_plot_mumua_bkg = new TH1F("Forwardmuon_E_mumua_bkg","",25,-10,8000);
  //TH1F *ForwardMuon_PT_plot_mumua_bkg = new TH1F("Forwardmuon_PT_mumua_bkg","",25,-10,1000);
  TH1F *ForwardMuon_sumPT_plot_mumua_bkg = new TH1F("Forwardmuon_sumPT_mumua_bkg","",50,0,250);
  
  /*TH1F *ForwardMuon_Eta_plot_vmvm_bkg = new TH1F("Forwardmuon_Eta_vmvm_bkg","Forwardmuon_Eta_vmvm_bkg",50,-10,10);
  TH1F *ForwardMuon_E_plot_vmvm_bkg = new TH1F("Forwardmuon_E_vmvm_bkg","Forwardmuon_E_vmvm_bkg",25,-10,8000);
  TH1F *ForwardMuon_PT_plot_vmvm_bkg = new TH1F("Forwardmuon_PT_vmvm_bkg","Forwardmuon_PT_vmvm_bkg",25,-10,1000);
  TH1F *ForwardMuon_sumPT_plot_vmvm_bkg = new TH1F("Forwardmuon_sumPT_vmvm_bkg","Forwardmuon_sumPT_vmvm_bkg",50,-10,250);
  
  TH1F *ForwardMuon_Eta_plot_ee_bkg = new TH1F("Forwardmuon_Eta_ee_bkg","Forwardmuon_Eta_ee_bkg",50,-10,10);
  TH1F *ForwardMuon_E_plot_ee_bkg = new TH1F("Forwardmuon_E_ee_bkg","Forwardmuon_E_ee_bkg",25,-10,8000);
  TH1F *ForwardMuon_PT_plot_ee_bkg = new TH1F("Forwardmuon_PT_ee_bkg","Forwardmuon_PT_ee_bkg",25,-10,1000);
  TH1F *ForwardMuon_sumPT_plot_ee_bkg = new TH1F("Forwardmuon_sumPT_ee_bkg","Forwardmuon_sumPT_ee_bkg",50,-10,250);*/
  
  
  //TH1F *ForwardMuon_Eta_plot_ff_bkg = new TH1F("Forwardmuon_Eta_ff_bkg","",50,-10,10);
  //TH1F *ForwardMuon_E_plot_ff_bkg = new TH1F("Forwardmuon_E_ff_bkg","",25,-10,10000);
  //TH1F *ForwardMuon_PT_plot_ff_bkg = new TH1F("Forwardmuon_PT_ff_bkg","",25,-10,1000);
  TH1F *ForwardMuon_sumPT_plot_ff_bkg = new TH1F("Forwardmuon_sumPT_ff_bkg","",50,0,250);
  //TH1F *ForwardMuon_Emin_plot_ff_bkg = new TH1F("Forwardmuon_Emin_ff_bkg","",25,-10,8000);
  
  
  
  
  
  //TH1F *Higgs_mass_plot_signal = new TH1F("Higgs_mass_signal","",50,-5000,5000);
  //TH1F *Higgs_mass_plot_jj_bkg = new TH1F("Higgs_mass_jj_bkg","Higgs_mass_jj_bkg",50,-5000,5000);
  //TH1F *Higgs_mass_plot_ww_bkg = new TH1F("Higgs_mass_ww_bkg","Higgs_mass_ww_bkg",50,-5000,5000);
  //TH1F *Higgs_mass_plot_mumu_bkg = new TH1F("Higgs_mass_mumu_bkg","Higgs_mass_mumu_bkg",50,-5000,5000);
  //TH1F *Higgs_mass_plot_mumua_bkg = new TH1F("Higgs_mass_mumua_bkg","",50,-5000,5000);
  //TH1F *Higgs_mass_plot_vmvm_bkg = new TH1F("Higgs_mass_vmvm_bkg","Higgs_mass_vmvm_bkg",50,-5000,5000);
  //TH1F *Higgs_mass_plot_ee_bkg = new TH1F("Higgs_mass_ee_bkg","Higgs_mass_ee_bkg",50,-5000,5000);
  
  //TH1F *Higgs_mass_plot_ff_bkg = new TH1F("Higgs_mass_ff_bkg","",50,-5000,5000);
  
  //TH1F *Higgs_mass_2_plot_signal = new TH1F("Higgs_mass_2_signal","",50,-5000,5000);
  
  //TH1F *Higgs_mass_2_plot_ff_bkg = new TH1F("Higgs_mass_2_ff_bkg","",50,-5000,5000);
  
	
  

  std::vector<double> countnumber_signal(10,0);
  std::vector<double> countnumber_jj_bkg(10,0);
  std::vector<double> countnumber_ww_bkg(10,0);
  std::vector<double> countnumber_mumu_bkg(10,0);
  std::vector<double> countnumber_mumua_bkg(10,0);
  std::vector<double> countnumber_vmvm_bkg(10,0);
  std::vector<double> countnumber_ee_bkg(10,0);
	
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
  
  /*s1plus->SetBranchAddress("ForwardMuon.PT", ForwardMuon_PT, &b_ForwardMuon_PT);
  s1plus->SetBranchAddress("ForwardMuon.Eta", ForwardMuon_Eta, &b_ForwardMuon_Eta);
  s1plus->SetBranchAddress("ForwardMuon.Phi", ForwardMuon_Phi, &b_ForwardMuon_Phi);
  s1plus->SetBranchAddress("ForwardMuon_size", &ForwardMuon_size, &b_ForwardMuon_size);
  s1plus->SetBranchAddress("Muon_size", &Muon_size, &b_Muon_size);
  s1plus->SetBranchAddress("Electron_size", &Electron_size, &b_Electron_size);
  s1plus->SetBranchAddress("KTjet.PT", KTjet_PT, &b_KTjet_PT);
  s1plus->SetBranchAddress("KTjet.Eta", KTjet_Eta, &b_KTjet_Eta);
  s1plus->SetBranchAddress("KTjet.Phi", KTjet_Phi, &b_KTjet_Phi);
  s1plus->SetBranchAddress("KTjet.Mass", KTjet_Mass, &b_KTjet_Mass);
  s1plus->SetBranchAddress("KTjet_size", &KTjet_size, &b_KTjet_size);
  
  s1minus->SetBranchAddress("ForwardMuon.PT", ForwardMuon_PT, &b_ForwardMuon_PT);
  s1minus->SetBranchAddress("ForwardMuon.Eta", ForwardMuon_Eta, &b_ForwardMuon_Eta);
  s1minus->SetBranchAddress("ForwardMuon.Phi", ForwardMuon_Phi, &b_ForwardMuon_Phi);
  s1minus->SetBranchAddress("ForwardMuon_size", &ForwardMuon_size, &b_ForwardMuon_size);
  s1minus->SetBranchAddress("Muon_size", &Muon_size, &b_Muon_size);
  s1minus->SetBranchAddress("Electron_size", &Electron_size, &b_Electron_size);
  s1minus->SetBranchAddress("KTjet.PT", KTjet_PT, &b_KTjet_PT);
  s1minus->SetBranchAddress("KTjet.Eta", KTjet_Eta, &b_KTjet_Eta);
  s1minus->SetBranchAddress("KTjet.Phi", KTjet_Phi, &b_KTjet_Phi);
  s1minus->SetBranchAddress("KTjet.Mass", KTjet_Mass, &b_KTjet_Mass);
  s1minus->SetBranchAddress("KTjet_size", &KTjet_size, &b_KTjet_size);*/
  
  b1->SetBranchAddress("ForwardMuon.PT", ForwardMuon_PT, &b_ForwardMuon_PT);
  b1->SetBranchAddress("ForwardMuon.Eta", ForwardMuon_Eta, &b_ForwardMuon_Eta);
  b1->SetBranchAddress("ForwardMuon.Phi", ForwardMuon_Phi, &b_ForwardMuon_Phi);
  b1->SetBranchAddress("ForwardMuon_size", &ForwardMuon_size, &b_ForwardMuon_size);
  b1->SetBranchAddress("Muon_size", &Muon_size, &b_Muon_size);
  b1->SetBranchAddress("Electron_size", &Electron_size, &b_Electron_size);
  b1->SetBranchAddress("KTjet.PT", KTjet_PT, &b_KTjet_PT);
  b1->SetBranchAddress("KTjet.Eta", KTjet_Eta, &b_KTjet_Eta);
  b1->SetBranchAddress("KTjet.Phi", KTjet_Phi, &b_KTjet_Phi);
  b1->SetBranchAddress("KTjet.Mass", KTjet_Mass, &b_KTjet_Mass);
  b1->SetBranchAddress("KTjet_size", &KTjet_size, &b_KTjet_size);
  
  /*b1plus->SetBranchAddress("ForwardMuon.PT", ForwardMuon_PT, &b_ForwardMuon_PT);
  b1plus->SetBranchAddress("ForwardMuon.Eta", ForwardMuon_Eta, &b_ForwardMuon_Eta);
  b1plus->SetBranchAddress("ForwardMuon.Phi", ForwardMuon_Phi, &b_ForwardMuon_Phi);
  b1plus->SetBranchAddress("ForwardMuon_size", &ForwardMuon_size, &b_ForwardMuon_size);
  b1plus->SetBranchAddress("Muon_size", &Muon_size, &b_Muon_size);
  b1plus->SetBranchAddress("Electron_size", &Electron_size, &b_Electron_size);
  b1plus->SetBranchAddress("KTjet.PT", KTjet_PT, &b_KTjet_PT);
  b1plus->SetBranchAddress("KTjet.Eta", KTjet_Eta, &b_KTjet_Eta);
  b1plus->SetBranchAddress("KTjet.Phi", KTjet_Phi, &b_KTjet_Phi);
  b1plus->SetBranchAddress("KTjet.Mass", KTjet_Mass, &b_KTjet_Mass);
  b1plus->SetBranchAddress("KTjet_size", &KTjet_size, &b_KTjet_size);
  
  b1minus->SetBranchAddress("ForwardMuon.PT", ForwardMuon_PT, &b_ForwardMuon_PT);
  b1minus->SetBranchAddress("ForwardMuon.Eta", ForwardMuon_Eta, &b_ForwardMuon_Eta);
  b1minus->SetBranchAddress("ForwardMuon.Phi", ForwardMuon_Phi, &b_ForwardMuon_Phi);
  b1minus->SetBranchAddress("ForwardMuon_size", &ForwardMuon_size, &b_ForwardMuon_size);
  b1minus->SetBranchAddress("Muon_size", &Muon_size, &b_Muon_size);
  b1minus->SetBranchAddress("Electron_size", &Electron_size, &b_Electron_size);
  b1minus->SetBranchAddress("KTjet.PT", KTjet_PT, &b_KTjet_PT);
  b1minus->SetBranchAddress("KTjet.Eta", KTjet_Eta, &b_KTjet_Eta);
  b1minus->SetBranchAddress("KTjet.Phi", KTjet_Phi, &b_KTjet_Phi);
  b1minus->SetBranchAddress("KTjet.Mass", KTjet_Mass, &b_KTjet_Mass);
  b1minus->SetBranchAddress("KTjet_size", &KTjet_size, &b_KTjet_size);*/
  
  b2->SetBranchAddress("ForwardMuon.PT", ForwardMuon_PT, &b_ForwardMuon_PT);
  b2->SetBranchAddress("ForwardMuon.Eta", ForwardMuon_Eta, &b_ForwardMuon_Eta);
  b2->SetBranchAddress("ForwardMuon.Phi", ForwardMuon_Phi, &b_ForwardMuon_Phi);
  b2->SetBranchAddress("ForwardMuon_size", &ForwardMuon_size, &b_ForwardMuon_size);
  b2->SetBranchAddress("Muon_size", &Muon_size, &b_Muon_size);
  b2->SetBranchAddress("Electron_size", &Electron_size, &b_Electron_size);
  b2->SetBranchAddress("KTjet.PT", KTjet_PT, &b_KTjet_PT);
  b2->SetBranchAddress("KTjet.Eta", KTjet_Eta, &b_KTjet_Eta);
  b2->SetBranchAddress("KTjet.Phi", KTjet_Phi, &b_KTjet_Phi);
  b2->SetBranchAddress("KTjet.Mass", KTjet_Mass, &b_KTjet_Mass);
  b2->SetBranchAddress("KTjet_size", &KTjet_size, &b_KTjet_size);
  
  /*b2plus->SetBranchAddress("ForwardMuon.PT", ForwardMuon_PT, &b_ForwardMuon_PT);
  b2plus->SetBranchAddress("ForwardMuon.Eta", ForwardMuon_Eta, &b_ForwardMuon_Eta);
  b2plus->SetBranchAddress("ForwardMuon.Phi", ForwardMuon_Phi, &b_ForwardMuon_Phi);
  b2plus->SetBranchAddress("ForwardMuon_size", &ForwardMuon_size, &b_ForwardMuon_size);
  b2plus->SetBranchAddress("Muon_size", &Muon_size, &b_Muon_size);
  b2plus->SetBranchAddress("Electron_size", &Electron_size, &b_Electron_size);
  b2plus->SetBranchAddress("KTjet.PT", KTjet_PT, &b_KTjet_PT);
  b2plus->SetBranchAddress("KTjet.Eta", KTjet_Eta, &b_KTjet_Eta);
  b2plus->SetBranchAddress("KTjet.Phi", KTjet_Phi, &b_KTjet_Phi);
  b2plus->SetBranchAddress("KTjet.Mass", KTjet_Mass, &b_KTjet_Mass);
  b2plus->SetBranchAddress("KTjet_size", &KTjet_size, &b_KTjet_size);
  
  b2minus->SetBranchAddress("ForwardMuon.PT", ForwardMuon_PT, &b_ForwardMuon_PT);
  b2minus->SetBranchAddress("ForwardMuon.Eta", ForwardMuon_Eta, &b_ForwardMuon_Eta);
  b2minus->SetBranchAddress("ForwardMuon.Phi", ForwardMuon_Phi, &b_ForwardMuon_Phi);
  b2minus->SetBranchAddress("ForwardMuon_size", &ForwardMuon_size, &b_ForwardMuon_size);
  b2minus->SetBranchAddress("Muon_size", &Muon_size, &b_Muon_size);
  b2minus->SetBranchAddress("Electron_size", &Electron_size, &b_Electron_size);
  b2minus->SetBranchAddress("KTjet.PT", KTjet_PT, &b_KTjet_PT);
  b2minus->SetBranchAddress("KTjet.Eta", KTjet_Eta, &b_KTjet_Eta);
  b2minus->SetBranchAddress("KTjet.Phi", KTjet_Phi, &b_KTjet_Phi);
  b2minus->SetBranchAddress("KTjet.Mass", KTjet_Mass, &b_KTjet_Mass);
  b2minus->SetBranchAddress("KTjet_size", &KTjet_size, &b_KTjet_size);*/
  
  b3->SetBranchAddress("ForwardMuon.PT", ForwardMuon_PT, &b_ForwardMuon_PT);
  b3->SetBranchAddress("ForwardMuon.Eta", ForwardMuon_Eta, &b_ForwardMuon_Eta);
  b3->SetBranchAddress("ForwardMuon.Phi", ForwardMuon_Phi, &b_ForwardMuon_Phi);
  b3->SetBranchAddress("ForwardMuon_size", &ForwardMuon_size, &b_ForwardMuon_size);
  b3->SetBranchAddress("Muon_size", &Muon_size, &b_Muon_size);
  b3->SetBranchAddress("Electron_size", &Electron_size, &b_Electron_size);
  b3->SetBranchAddress("KTjet.PT", KTjet_PT, &b_KTjet_PT);
  b3->SetBranchAddress("KTjet.Eta", KTjet_Eta, &b_KTjet_Eta);
  b3->SetBranchAddress("KTjet.Phi", KTjet_Phi, &b_KTjet_Phi);
  b3->SetBranchAddress("KTjet.Mass", KTjet_Mass, &b_KTjet_Mass);
  b3->SetBranchAddress("KTjet_size", &KTjet_size, &b_KTjet_size);
  
  /*b3plus->SetBranchAddress("ForwardMuon.PT", ForwardMuon_PT, &b_ForwardMuon_PT);
  b3plus->SetBranchAddress("ForwardMuon.Eta", ForwardMuon_Eta, &b_ForwardMuon_Eta);
  b3plus->SetBranchAddress("ForwardMuon.Phi", ForwardMuon_Phi, &b_ForwardMuon_Phi);
  b3plus->SetBranchAddress("ForwardMuon_size", &ForwardMuon_size, &b_ForwardMuon_size);
  b3plus->SetBranchAddress("Muon_size", &Muon_size, &b_Muon_size);
  b3plus->SetBranchAddress("Electron_size", &Electron_size, &b_Electron_size);
  b3plus->SetBranchAddress("KTjet.PT", KTjet_PT, &b_KTjet_PT);
  b3plus->SetBranchAddress("KTjet.Eta", KTjet_Eta, &b_KTjet_Eta);
  b3plus->SetBranchAddress("KTjet.Phi", KTjet_Phi, &b_KTjet_Phi);
  b3plus->SetBranchAddress("KTjet.Mass", KTjet_Mass, &b_KTjet_Mass);
  b3plus->SetBranchAddress("KTjet_size", &KTjet_size, &b_KTjet_size);
  
  b3minus->SetBranchAddress("ForwardMuon.PT", ForwardMuon_PT, &b_ForwardMuon_PT);
  b3minus->SetBranchAddress("ForwardMuon.Eta", ForwardMuon_Eta, &b_ForwardMuon_Eta);
  b3minus->SetBranchAddress("ForwardMuon.Phi", ForwardMuon_Phi, &b_ForwardMuon_Phi);
  b3minus->SetBranchAddress("ForwardMuon_size", &ForwardMuon_size, &b_ForwardMuon_size);
  b3minus->SetBranchAddress("Muon_size", &Muon_size, &b_Muon_size);
  b3minus->SetBranchAddress("Electron_size", &Electron_size, &b_Electron_size);
  b3minus->SetBranchAddress("KTjet.PT", KTjet_PT, &b_KTjet_PT);
  b3minus->SetBranchAddress("KTjet.Eta", KTjet_Eta, &b_KTjet_Eta);
  b3minus->SetBranchAddress("KTjet.Phi", KTjet_Phi, &b_KTjet_Phi);
  b3minus->SetBranchAddress("KTjet.Mass", KTjet_Mass, &b_KTjet_Mass);
  b3minus->SetBranchAddress("KTjet_size", &KTjet_size, &b_KTjet_size);*/
  
  b4->SetBranchAddress("ForwardMuon.PT", ForwardMuon_PT, &b_ForwardMuon_PT);
  b4->SetBranchAddress("ForwardMuon.Eta", ForwardMuon_Eta, &b_ForwardMuon_Eta);
  b4->SetBranchAddress("ForwardMuon.Phi", ForwardMuon_Phi, &b_ForwardMuon_Phi);
  b4->SetBranchAddress("ForwardMuon_size", &ForwardMuon_size, &b_ForwardMuon_size);
  b4->SetBranchAddress("Muon_size", &Muon_size, &b_Muon_size);
  b4->SetBranchAddress("Electron_size", &Electron_size, &b_Electron_size);
  b4->SetBranchAddress("KTjet.PT", KTjet_PT, &b_KTjet_PT);
  b4->SetBranchAddress("KTjet.Eta", KTjet_Eta, &b_KTjet_Eta);
  b4->SetBranchAddress("KTjet.Phi", KTjet_Phi, &b_KTjet_Phi);
  b4->SetBranchAddress("KTjet.Mass", KTjet_Mass, &b_KTjet_Mass);
  b4->SetBranchAddress("KTjet_size", &KTjet_size, &b_KTjet_size);
  
  /*b4plus->SetBranchAddress("ForwardMuon.PT", ForwardMuon_PT, &b_ForwardMuon_PT);
  b4plus->SetBranchAddress("ForwardMuon.Eta", ForwardMuon_Eta, &b_ForwardMuon_Eta);
  b4plus->SetBranchAddress("ForwardMuon.Phi", ForwardMuon_Phi, &b_ForwardMuon_Phi);
  b4plus->SetBranchAddress("ForwardMuon_size", &ForwardMuon_size, &b_ForwardMuon_size);
  b4plus->SetBranchAddress("Muon_size", &Muon_size, &b_Muon_size);
  b4plus->SetBranchAddress("Electron_size", &Electron_size, &b_Electron_size);
  b4plus->SetBranchAddress("KTjet.PT", KTjet_PT, &b_KTjet_PT);
  b4plus->SetBranchAddress("KTjet.Eta", KTjet_Eta, &b_KTjet_Eta);
  b4plus->SetBranchAddress("KTjet.Phi", KTjet_Phi, &b_KTjet_Phi);
  b4plus->SetBranchAddress("KTjet.Mass", KTjet_Mass, &b_KTjet_Mass);
  b4plus->SetBranchAddress("KTjet_size", &KTjet_size, &b_KTjet_size);
  
  b4minus->SetBranchAddress("ForwardMuon.PT", ForwardMuon_PT, &b_ForwardMuon_PT);
  b4minus->SetBranchAddress("ForwardMuon.Eta", ForwardMuon_Eta, &b_ForwardMuon_Eta);
  b4minus->SetBranchAddress("ForwardMuon.Phi", ForwardMuon_Phi, &b_ForwardMuon_Phi);
  b4minus->SetBranchAddress("ForwardMuon_size", &ForwardMuon_size, &b_ForwardMuon_size);
  b4minus->SetBranchAddress("Muon_size", &Muon_size, &b_Muon_size);
  b4minus->SetBranchAddress("Electron_size", &Electron_size, &b_Electron_size);
  b4minus->SetBranchAddress("KTjet.PT", KTjet_PT, &b_KTjet_PT);
  b4minus->SetBranchAddress("KTjet.Eta", KTjet_Eta, &b_KTjet_Eta);
  b4minus->SetBranchAddress("KTjet.Phi", KTjet_Phi, &b_KTjet_Phi);
  b4minus->SetBranchAddress("KTjet.Mass", KTjet_Mass, &b_KTjet_Mass);
  b4minus->SetBranchAddress("KTjet_size", &KTjet_size, &b_KTjet_size);*/
  
  b5->SetBranchAddress("ForwardMuon.PT", ForwardMuon_PT, &b_ForwardMuon_PT);
  b5->SetBranchAddress("ForwardMuon.Eta", ForwardMuon_Eta, &b_ForwardMuon_Eta);
  b5->SetBranchAddress("ForwardMuon.Phi", ForwardMuon_Phi, &b_ForwardMuon_Phi);
  b5->SetBranchAddress("ForwardMuon_size", &ForwardMuon_size, &b_ForwardMuon_size);
  b5->SetBranchAddress("Muon_size", &Muon_size, &b_Muon_size);
  
  /*b5plus->SetBranchAddress("ForwardMuon.PT", ForwardMuon_PT, &b_ForwardMuon_PT);
  b5plus->SetBranchAddress("ForwardMuon.Eta", ForwardMuon_Eta, &b_ForwardMuon_Eta);
  b5plus->SetBranchAddress("ForwardMuon.Phi", ForwardMuon_Phi, &b_ForwardMuon_Phi);
  b5plus->SetBranchAddress("ForwardMuon_size", &ForwardMuon_size, &b_ForwardMuon_size);
  b5plus->SetBranchAddress("Muon_size", &Muon_size, &b_Muon_size);
  
  b5minus->SetBranchAddress("ForwardMuon.PT", ForwardMuon_PT, &b_ForwardMuon_PT);
  b5minus->SetBranchAddress("ForwardMuon.Eta", ForwardMuon_Eta, &b_ForwardMuon_Eta);
  b5minus->SetBranchAddress("ForwardMuon.Phi", ForwardMuon_Phi, &b_ForwardMuon_Phi);
  b5minus->SetBranchAddress("ForwardMuon_size", &ForwardMuon_size, &b_ForwardMuon_size);
  b5minus->SetBranchAddress("Muon_size", &Muon_size, &b_Muon_size);*/
  
  b6->SetBranchAddress("ForwardMuon.PT", ForwardMuon_PT, &b_ForwardMuon_PT);
  b6->SetBranchAddress("ForwardMuon.Eta", ForwardMuon_Eta, &b_ForwardMuon_Eta);
  b6->SetBranchAddress("ForwardMuon.Phi", ForwardMuon_Phi, &b_ForwardMuon_Phi);
  b6->SetBranchAddress("ForwardMuon_size", &ForwardMuon_size, &b_ForwardMuon_size);
  b6->SetBranchAddress("Muon_size", &Muon_size, &b_Muon_size);
  
  /*b6plus->SetBranchAddress("ForwardMuon.PT", ForwardMuon_PT, &b_ForwardMuon_PT);
  b6plus->SetBranchAddress("ForwardMuon.Eta", ForwardMuon_Eta, &b_ForwardMuon_Eta);
  b6plus->SetBranchAddress("ForwardMuon.Phi", ForwardMuon_Phi, &b_ForwardMuon_Phi);
  b6plus->SetBranchAddress("ForwardMuon_size", &ForwardMuon_size, &b_ForwardMuon_size);
  b6plus->SetBranchAddress("Muon_size", &Muon_size, &b_Muon_size);
  
  b6minus->SetBranchAddress("ForwardMuon.PT", ForwardMuon_PT, &b_ForwardMuon_PT);
  b6minus->SetBranchAddress("ForwardMuon.Eta", ForwardMuon_Eta, &b_ForwardMuon_Eta);
  b6minus->SetBranchAddress("ForwardMuon.Phi", ForwardMuon_Phi, &b_ForwardMuon_Phi);
  b6minus->SetBranchAddress("ForwardMuon_size", &ForwardMuon_size, &b_ForwardMuon_size);
  b6minus->SetBranchAddress("Muon_size", &Muon_size, &b_Muon_size);*/
  
  
  
  


  
  //define new variable for plot
  //double tempdR = 999.0;

  int entries0=s1->GetEntries();
  //int entries0plus=s1plus->GetEntries();
  //int entries0minus=s1minus->GetEntries();
  
  int entries1=b1->GetEntries();
  //int entries1plus=b1plus->GetEntries();
  //int entries1minus=b1minus->GetEntries();
  
  int entries2=b2->GetEntries();
  //int entries2plus=b2plus->GetEntries();
  //int entries2minus=b2minus->GetEntries();
  
  int entries3=b3->GetEntries();
  //int entries3plus=b3plus->GetEntries();
  //int entries3minus=b3minus->GetEntries();
  
  int entries4=b4->GetEntries();
  //int entries4plus=b4plus->GetEntries();
  //int entries4minus=b4minus->GetEntries();
  
  int entries5=b5->GetEntries();
  //int entries5plus=b5plus->GetEntries();
  //int entries5minus=b5minus->GetEntries();
  
  int entries6=b6->GetEntries();
  //int entries6plus=b6plus->GetEntries();
  //int entries6minus=b6minus->GetEntries();
  
  
  std::cout <<"entries0:"<<entries0<<std::endl;
  std::cout <<"entries1:"<<entries1<<std::endl;
  std::cout <<"entries2:"<<entries2<<std::endl;
  std::cout <<"entries3:"<<entries3<<std::endl;
  std::cout <<"entries4:"<<entries4<<std::endl;
  std::cout <<"entries5:"<<entries5<<std::endl;
  std::cout <<"entries6:"<<entries6<<std::endl;
  
  
  
  
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
            
            
            if(ForwardMuon_PT[0]>20 && ForwardMuon_PT[1]>20){
                countnumber_signal[3]=countnumber_signal[3]+1;
                ForwardMuon_sumPT_plot_signal->Fill(Twomuon_PT,weight_signal);
            
                if(Twomuon_PT > 50){
                    countnumber_signal[4]=countnumber_signal[4]+1;
                    
                
                    if(Muon1.E() < Muon2.E()){Muon_Emin=Muon1.E();}
                    if(Muon1.E() > Muon2.E()){Muon_Emin=Muon2.E();}
                    //ForwardMuon_Emin_plot_signal->Fill(Muon_Emin,weight_signal);
                    //ForwardMuon_E_2d_plot_signal->Fill(Muon1.E(),Muon2.E(),weight_signal);
                
                    if(Muon_Emin > 3000){
                        countnumber_signal[5]=countnumber_signal[5]+1;
                        //Higgs_mass_2_plot_signal->Fill(Higgs_mass,weight_signal);
                    }
                
                
                }
            
            }
            
        }
        

    } 
    
    
  
  }
  
  std::cout <<"pass0"<<std::endl;
  
  
  
  //////////////////////////jj_bkg//////////////////////////////////////////////////////////////////////
  double weight_jj=2.058/400000.0;
  for (int i=0; i<entries1; ++i){
    b1->GetEntry(i);
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
    Initial.SetPxPyPzE(0,0,0,10000);
	  
    countnumber_jj_bkg[0]=countnumber_jj_bkg[0]+1;
    // Apply cut
    


    // Fill histogram

    
    
    // ForwardMuon_size == 2
    if(ForwardMuon_size == 2) {
        countnumber_jj_bkg[1]=countnumber_jj_bkg[1]+1;
        
        Muon1.SetPtEtaPhiM(ForwardMuon_PT[0],ForwardMuon_Eta[0],ForwardMuon_Phi[0],0.1);
        Muon2.SetPtEtaPhiM(ForwardMuon_PT[1],ForwardMuon_Eta[1],ForwardMuon_Phi[1],0.1);
        
        
        if((ForwardMuon_Eta[1] > 0 && ForwardMuon_Eta[0] < 0)||(ForwardMuon_Eta[0] > 0 && ForwardMuon_Eta[1] < 0)){
            countnumber_jj_bkg[2]=countnumber_jj_bkg[2]+1;
            Higgs_mass=(Initial-Muon1-Muon2).M();
            Twomuon_PT=(Muon1+Muon2).Pt();
            
            
            if(ForwardMuon_PT[0]>20 && ForwardMuon_PT[1]>20){
                countnumber_jj_bkg[3]=countnumber_jj_bkg[3]+1;
                
                
                ForwardMuon_sumPT_plot_ff_bkg->Fill(Twomuon_PT,weight_jj);
                if(Twomuon_PT > 50){
                    countnumber_jj_bkg[4]=countnumber_jj_bkg[4]+1;
                    
                    
                
                    if(Muon1.E() < Muon2.E()){Muon_Emin=Muon1.E();}
                    if(Muon1.E() > Muon2.E()){Muon_Emin=Muon2.E();}
                    
                    //ForwardMuon_Emin_plot_ff_bkg->Fill(Muon_Emin,weight_jj);
                    //ForwardMuon_E_2d_plot_total_bkg->Fill(Muon1.E(),Muon2.E(),weight_jj);
                
                    if(Muon_Emin > 3000){
                        countnumber_jj_bkg[5]=countnumber_jj_bkg[5]+1;
                        //Higgs_mass_2_plot_total_bkg->Fill(Higgs_mass,weight_jj);
                        
                    }
                }
            
            }
            
            
        }
        

    } 
    
    
       
    
  }
  std::cout <<"pass1"<<std::endl;
  //////////////////////////ww_bkg//////////////////////////////////////////////////////////////////////
  double weight_ww=0.9387/200000.0;
  for (int i=0; i<entries2; ++i){
    b2->GetEntry(i);
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
    Initial.SetPxPyPzE(0,0,0,10000);
	  
    countnumber_ww_bkg[0]=countnumber_ww_bkg[0]+1;
    // Apply cut
    


    // Fill histogram

    
    
    // ForwardMuon_size == 2
    if(ForwardMuon_size == 2) {
        countnumber_ww_bkg[1]=countnumber_ww_bkg[1]+1;
        
        Muon1.SetPtEtaPhiM(ForwardMuon_PT[0],ForwardMuon_Eta[0],ForwardMuon_Phi[0],0.1);
        Muon2.SetPtEtaPhiM(ForwardMuon_PT[1],ForwardMuon_Eta[1],ForwardMuon_Phi[1],0.1);
        
        
        if((ForwardMuon_Eta[1] > 0 && ForwardMuon_Eta[0] < 0)||(ForwardMuon_Eta[0] > 0 && ForwardMuon_Eta[1] < 0)){
            countnumber_ww_bkg[2]=countnumber_ww_bkg[2]+1;
            Higgs_mass=(Initial-Muon1-Muon2).M();
            Twomuon_PT=(Muon1+Muon2).Pt();
            
            
            if(ForwardMuon_PT[0]>20 && ForwardMuon_PT[1]>20){
                countnumber_ww_bkg[3]=countnumber_ww_bkg[3]+1;
                ForwardMuon_sumPT_plot_ww_bkg->Fill(Twomuon_PT,weight_ww);
                
                if(Twomuon_PT > 50){
                    countnumber_ww_bkg[4]=countnumber_ww_bkg[4]+1;
                    
                
                
                    if(Muon1.E() < Muon2.E()){Muon_Emin=Muon1.E();}
                    if(Muon1.E() > Muon2.E()){Muon_Emin=Muon2.E();}
                    //ForwardMuon_Emin_plot_total_bkg->Fill(Muon_Emin,weight_ww);
                    //ForwardMuon_E_2d_plot_total_bkg->Fill(Muon1.E(),Muon2.E(),weight_ww);
                
                    if(Muon_Emin > 3000){
                        countnumber_ww_bkg[5]=countnumber_ww_bkg[5]+1;
                        //Higgs_mass_2_plot_total_bkg->Fill(Higgs_mass,weight_ww);
                    }
                }
            
            }
            
            
            
        }
        

    } 
    
       
    
  }
  
  std::cout <<"pass2"<<std::endl;
  //////////////////////////mumu_bkg//////////////////////////////////////////////////////////////////////
  double weight_mumu=11150.0/400000.0;
  for (int i=0; i<entries3; ++i){
    b3->GetEntry(i);
    TLorentzVector Initial;
    TLorentzVector Muon1;
    TLorentzVector Muon2;
    TLorentzVector Muon3;
    TLorentzVector Muon4;
    TLorentzVector KTjet1;
    TLorentzVector KTjet2;
    double Higgs_mass=-999;
    double Twomuon_PT=-999;
    Initial.SetPxPyPzE(0,0,0,10000);
	  
    countnumber_mumu_bkg[0]=countnumber_mumu_bkg[0]+1;
    // Apply cut
    


    // Fill histogram

    
    
    // ForwardMuon_size == 2
    if(ForwardMuon_size == 2) {
        countnumber_mumu_bkg[1]=countnumber_mumu_bkg[1]+1;
        
        Muon1.SetPtEtaPhiM(ForwardMuon_PT[0],ForwardMuon_Eta[0],ForwardMuon_Phi[0],0.1);
        Muon2.SetPtEtaPhiM(ForwardMuon_PT[1],ForwardMuon_Eta[1],ForwardMuon_Phi[1],0.1);
        
        if((ForwardMuon_Eta[1] > 0 && ForwardMuon_Eta[0] < 0)||(ForwardMuon_Eta[0] > 0 && ForwardMuon_Eta[1] < 0)){
            countnumber_mumu_bkg[2]=countnumber_mumu_bkg[2]+1;
            Higgs_mass=(Initial-Muon1-Muon2).M();
            Twomuon_PT=(Muon1+Muon2).Pt();
            if(ForwardMuon_PT[0]>20 && ForwardMuon_PT[1]>20){
            
                countnumber_mumu_bkg[3]=countnumber_mumu_bkg[3]+1;
                
                
                
                if(Twomuon_PT < 35.0){
                    countnumber_mumu_bkg[4]=countnumber_mumu_bkg[4]+1;
                    //ForwardMuon_sumPT_plot_mumua_bkg->Fill(Twomuon_PT,weight_mumu);
                    
                
                }
                
                
                
            }
            
            
            
            
            
            
            
        }
        

    }   
       
    
  }
  
  std::cout <<"pass3"<<std::endl;
  
  //////////////////////////mumua_bkg//////////////////////////////////////////////////////////////////////
  double weight_mumua=754.8/400000.0;
  for (int i=0; i<entries4; ++i){
    b4->GetEntry(i);
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
    Initial.SetPxPyPzE(0,0,0,10000);
	  
    countnumber_mumua_bkg[0]=countnumber_mumua_bkg[0]+1;
    // Apply cut
    


    // Fill histogram

    
    
    // ForwardMuon_size == 2
    if(ForwardMuon_size == 2) {
        countnumber_mumua_bkg[1]=countnumber_mumua_bkg[1]+1;
        
        Muon1.SetPtEtaPhiM(ForwardMuon_PT[0],ForwardMuon_Eta[0],ForwardMuon_Phi[0],0.1);
        Muon2.SetPtEtaPhiM(ForwardMuon_PT[1],ForwardMuon_Eta[1],ForwardMuon_Phi[1],0.1);
        
        if((ForwardMuon_Eta[1] > 0 && ForwardMuon_Eta[0] < 0)||(ForwardMuon_Eta[0] > 0 && ForwardMuon_Eta[1] < 0)){
            countnumber_mumua_bkg[2]=countnumber_mumua_bkg[2]+1;
            Higgs_mass=(Initial-Muon1-Muon2).M();
            Twomuon_PT=(Muon1+Muon2).Pt();
            
            
            if(ForwardMuon_PT[0]>20 && ForwardMuon_PT[1]>20){
                countnumber_mumua_bkg[3]=countnumber_mumua_bkg[3]+1;
                if(Twomuon_PT >= 0){ForwardMuon_sumPT_plot_mumua_bkg->Fill(Twomuon_PT,weight_mumua);}
                
                //ForwardMuon_sumPT_plot_total_bkg->Fill(Twomuon_PT,weight_mumua);
                if(Twomuon_PT > 50){
                    countnumber_mumua_bkg[4]=countnumber_mumua_bkg[4]+1;
                    
                    
                    
                
                    if(Muon1.E() < Muon2.E()){Muon_Emin=Muon1.E();}
                    if(Muon1.E() > Muon2.E()){Muon_Emin=Muon2.E();}
                    //ForwardMuon_Emin_plot_total_bkg->Fill(Muon_Emin,weight_mumua);
                    //ForwardMuon_E_2d_plot_total_bkg->Fill(Muon1.E(),Muon2.E(),weight_mumua);
                
                    if(Muon_Emin > 3000){
                        countnumber_mumua_bkg[5]=countnumber_mumua_bkg[5]+1;
                        //Higgs_mass_2_plot_total_bkg->Fill(Higgs_mass,weight_mumua);
                    }
                }
            }
        }
        

    }   
       
    
  }
  
  std::cout <<"pass4"<<std::endl;
  
  
  //////////////////////////vmvm_bkg//////////////////////////////////////////////////////////////////////
  double weight_vmvm=16.8/400000.0;
  for (int i=0; i<entries5; ++i){
    b5->GetEntry(i);
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
    Initial.SetPxPyPzE(0,0,0,10000);
	  
    countnumber_vmvm_bkg[0]=countnumber_vmvm_bkg[0]+1;
    // Apply cut
    


    // Fill histogram

    
    
    // ForwardMuon_size == 2
    if(ForwardMuon_size == 2) {
        countnumber_vmvm_bkg[1]=countnumber_vmvm_bkg[1]+1;
        
        Muon1.SetPtEtaPhiM(ForwardMuon_PT[0],ForwardMuon_Eta[0],ForwardMuon_Phi[0],0.1);
        Muon2.SetPtEtaPhiM(ForwardMuon_PT[1],ForwardMuon_Eta[1],ForwardMuon_Phi[1],0.1);
        
        if((ForwardMuon_Eta[1] > 0 && ForwardMuon_Eta[0] < 0)||(ForwardMuon_Eta[0] > 0 && ForwardMuon_Eta[1] < 0)){
            countnumber_vmvm_bkg[2]=countnumber_vmvm_bkg[2]+1;
            Higgs_mass=(Initial-Muon1-Muon2).M();
            Twomuon_PT=(Muon1+Muon2).Pt();
            
            
            if(ForwardMuon_PT[0]>20 && ForwardMuon_PT[1]>20){
                countnumber_vmvm_bkg[3]=countnumber_vmvm_bkg[3]+1;
                
                
                ForwardMuon_sumPT_plot_ff_bkg->Fill(Twomuon_PT,weight_vmvm);
                if(Twomuon_PT > 50){
                    countnumber_vmvm_bkg[4]=countnumber_vmvm_bkg[4]+1;
                    
                    if(Muon1.E() < Muon2.E()){Muon_Emin=Muon1.E();}
                    if(Muon1.E() > Muon2.E()){Muon_Emin=Muon2.E();}
                    
                    //ForwardMuon_Emin_plot_ff_bkg->Fill(Muon_Emin,weight_vmvm);
                    //ForwardMuon_E_2d_plot_total_bkg->Fill(Muon1.E(),Muon2.E(),weight_vmvm);
                    
                    if(Muon_Emin > 3000){
                        countnumber_vmvm_bkg[5]=countnumber_vmvm_bkg[5]+1;
                        //Higgs_mass_2_plot_total_bkg->Fill(Higgs_mass,weight_vmvm);
                    }
            }
            
            }
            
        }
        

    }   
       
    
  }
  
  std::cout <<"pass5"<<std::endl;
  
  
  //////////////////////////ee_bkg//////////////////////////////////////////////////////////////////////
  double weight_ee=3.96/400000.0;
  for (int i=0; i<entries6; ++i){
    b6->GetEntry(i);
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
    Initial.SetPxPyPzE(0,0,0,10000);
	  
    countnumber_ee_bkg[0]=countnumber_ee_bkg[0]+1;
    // Apply cut
    


    // Fill histogram

    
    
    // ForwardMuon_size == 2
    if(ForwardMuon_size == 2) {
        countnumber_ee_bkg[1]=countnumber_ee_bkg[1]+1;
        
        Muon1.SetPtEtaPhiM(ForwardMuon_PT[0],ForwardMuon_Eta[0],ForwardMuon_Phi[0],0.1);
        Muon2.SetPtEtaPhiM(ForwardMuon_PT[1],ForwardMuon_Eta[1],ForwardMuon_Phi[1],0.1);
        
        if((ForwardMuon_Eta[1] > 0 && ForwardMuon_Eta[0] < 0)||(ForwardMuon_Eta[0] > 0 && ForwardMuon_Eta[1] < 0)){
            countnumber_ee_bkg[2]=countnumber_ee_bkg[2]+1;
            Higgs_mass=(Initial-Muon1-Muon2).M();
            Twomuon_PT=(Muon1+Muon2).Pt();
            
            
            if(ForwardMuon_PT[0]>20 && ForwardMuon_PT[1]>20){
                countnumber_ee_bkg[3]=countnumber_ee_bkg[3]+1;
                
                ForwardMuon_sumPT_plot_ff_bkg->Fill(Twomuon_PT,weight_ee);
                if(Twomuon_PT > 50){
                    countnumber_ee_bkg[4]=countnumber_ee_bkg[4]+1;
                    
                    
                
                    if(Muon1.E() < Muon2.E()){Muon_Emin=Muon1.E();}
                    if(Muon1.E() > Muon2.E()){Muon_Emin=Muon2.E();}
                    //ForwardMuon_Emin_plot_total_bkg->Fill(Muon_Emin,weight_ee);
                    //ForwardMuon_Emin_plot_ff_bkg->Fill(Muon_Emin,weight_ee);
                    //ForwardMuon_E_2d_plot_total_bkg->Fill(Muon1.E(),Muon2.E(),weight_ee);
                    
                    if(Muon_Emin > 3000){
                        countnumber_ee_bkg[5]=countnumber_ee_bkg[5]+1;
                        //Higgs_mass_2_plot_total_bkg->Fill(Higgs_mass,weight_ee);
                    }
                }
            
            }
        }
        

    }   
       
    
  }
  
  std::cout <<"pass6"<<std::endl;
  // cutflow
  
  std::cout <<"Total_signal:"<<countnumber_signal[0]<<"->"<<countnumber_signal[0]/countnumber_signal[0]<<std::endl;
  std::cout <<"ForwardMuon=2_signal:"<<countnumber_signal[1]<<"->"<<countnumber_signal[1]/countnumber_signal[0]<<std::endl;
  std::cout <<"ForwardMuon_backtoback_signal:"<<countnumber_signal[2]<<"->"<<countnumber_signal[2]/countnumber_signal[0]<<std::endl;
  std::cout <<"PT>20_signal:"<<countnumber_signal[3]<<"->"<<countnumber_signal[3]/countnumber_signal[0]<<std::endl;
  std::cout <<"sumPT>50_signal:"<<countnumber_signal[4]<<"->"<<countnumber_signal[4]/countnumber_signal[0]<<std::endl;
  std::cout <<"E>3000_signal:"<<countnumber_signal[5]<<"->"<<countnumber_signal[5]/countnumber_signal[0]<<std::endl;
  
  
  std::cout <<"Total_jj_bkg:"<<countnumber_jj_bkg[0]<<"->"<<countnumber_jj_bkg[0]/countnumber_jj_bkg[0]<<std::endl;
  std::cout <<"ForwardMuon=2_jj_bkg:"<<countnumber_jj_bkg[1]<<"->"<<countnumber_jj_bkg[1]/countnumber_jj_bkg[0]<<std::endl;
  std::cout <<"ForwardMuon_backtoback_jj_bkg:"<<countnumber_jj_bkg[2]<<"->"<<countnumber_jj_bkg[2]/countnumber_jj_bkg[0]<<std::endl;
  std::cout <<"PT>20_jj_bkg:"<<countnumber_jj_bkg[3]<<"->"<<countnumber_jj_bkg[3]/countnumber_jj_bkg[0]<<std::endl;
  std::cout <<"sumPT>50_jj_bkg:"<<countnumber_jj_bkg[4]<<"->"<<countnumber_jj_bkg[4]/countnumber_jj_bkg[0]<<std::endl;
  std::cout <<"E>3000_jj_bkg:"<<countnumber_jj_bkg[5]<<"->"<<countnumber_jj_bkg[5]/countnumber_jj_bkg[0]<<std::endl;
  
  
  std::cout <<"Total_ww_bkg:"<<countnumber_ww_bkg[0]<<"->"<<countnumber_ww_bkg[0]/countnumber_ww_bkg[0]<<std::endl;
  std::cout <<"ForwardMuon=2_ww_bkg:"<<countnumber_ww_bkg[1]<<"->"<<countnumber_ww_bkg[1]/countnumber_ww_bkg[0]<<std::endl;
  std::cout <<"ForwardMuon_backtoback_ww_bkg:"<<countnumber_ww_bkg[2]<<"->"<<countnumber_ww_bkg[2]/countnumber_ww_bkg[0]<<std::endl;
  std::cout <<"PT>20_ww_bkg:"<<countnumber_ww_bkg[3]<<"->"<<countnumber_ww_bkg[3]/countnumber_ww_bkg[0]<<std::endl;
  std::cout <<"sumPT>50_ww_bkg:"<<countnumber_ww_bkg[4]<<"->"<<countnumber_ww_bkg[4]/countnumber_ww_bkg[0]<<std::endl;
  std::cout <<"E>3000_ww_bkg:"<<countnumber_ww_bkg[5]<<"->"<<countnumber_ww_bkg[5]/countnumber_ww_bkg[0]<<std::endl;
  
  
  /*std::cout <<"Total_mumu_bkg:"<<countnumber_mumu_bkg[0]<<"->"<<countnumber_mumu_bkg[0]/countnumber_mumu_bkg[0]<<std::endl;
  std::cout <<"ForwardMuon=2_mumu_bkg:"<<countnumber_mumu_bkg[1]<<"->"<<countnumber_mumu_bkg[1]/countnumber_mumu_bkg[0]<<std::endl;
  std::cout <<"ForwardMuon_backtoback_mumu_bkg:"<<countnumber_mumu_bkg[2]<<"->"<<countnumber_mumu_bkg[2]/countnumber_mumu_bkg[0]<<std::endl;
  std::cout <<"sumPT>50_mumu_bkg:"<<countnumber_mumu_bkg[3]<<"->"<<countnumber_mumu_bkg[3]/countnumber_mumu_bkg[0]<<std::endl;*/
  
  
  std::cout <<"Total_mumua_bkg:"<<countnumber_mumua_bkg[0]<<"->"<<countnumber_mumua_bkg[0]/countnumber_mumua_bkg[0]<<std::endl;
  std::cout <<"ForwardMuon=2_mumua_bkg:"<<countnumber_mumua_bkg[1]<<"->"<<countnumber_mumua_bkg[1]/countnumber_mumua_bkg[0]<<std::endl;
  std::cout <<"ForwardMuon_backtoback_mumua_bkg:"<<countnumber_mumua_bkg[2]<<"->"<<countnumber_mumua_bkg[2]/countnumber_mumua_bkg[0]<<std::endl;
  std::cout <<"PT>20_mumua_bkg:"<<countnumber_mumua_bkg[3]<<"->"<<countnumber_mumua_bkg[3]/countnumber_mumua_bkg[0]<<std::endl;
  std::cout <<"sumPT>50_mumua_bkg:"<<countnumber_mumua_bkg[4]<<"->"<<countnumber_mumua_bkg[4]/countnumber_mumua_bkg[0]<<std::endl;
  std::cout <<"E>3000_mumua_bkg:"<<countnumber_mumua_bkg[5]<<"->"<<countnumber_mumua_bkg[5]/countnumber_mumua_bkg[0]<<std::endl;
  
  
  std::cout <<"Total_vmvm_bkg:"<<countnumber_vmvm_bkg[0]<<"->"<<countnumber_vmvm_bkg[0]/countnumber_vmvm_bkg[0]<<std::endl;
  std::cout <<"ForwardMuon=2_vmvm_bkg:"<<countnumber_vmvm_bkg[1]<<"->"<<countnumber_vmvm_bkg[1]/countnumber_vmvm_bkg[0]<<std::endl;
  std::cout <<"ForwardMuon_backtoback_vmvm_bkg:"<<countnumber_vmvm_bkg[2]<<"->"<<countnumber_vmvm_bkg[2]/countnumber_vmvm_bkg[0]<<std::endl;
  std::cout <<"PT>20_vmvm_bkg:"<<countnumber_vmvm_bkg[3]<<"->"<<countnumber_vmvm_bkg[3]/countnumber_vmvm_bkg[0]<<std::endl;
  std::cout <<"sumPT>50_vmvm_bkg:"<<countnumber_vmvm_bkg[4]<<"->"<<countnumber_vmvm_bkg[4]/countnumber_vmvm_bkg[0]<<std::endl;
  std::cout <<"E>3000_vmvm_bkg:"<<countnumber_vmvm_bkg[5]<<"->"<<countnumber_vmvm_bkg[5]/countnumber_vmvm_bkg[0]<<std::endl;
  
  
  std::cout <<"Total_ee_bkg:"<<countnumber_ee_bkg[0]<<"->"<<countnumber_ee_bkg[0]/countnumber_ee_bkg[0]<<std::endl;
  std::cout <<"ForwardMuon=2_ee_bkg:"<<countnumber_ee_bkg[1]<<"->"<<countnumber_ee_bkg[1]/countnumber_ee_bkg[0]<<std::endl;
  std::cout <<"ForwardMuon_backtoback_ee_bkg:"<<countnumber_ee_bkg[2]<<"->"<<countnumber_ee_bkg[2]/countnumber_ee_bkg[0]<<std::endl;
  std::cout <<"PT>20_ee_bkg:"<<countnumber_ee_bkg[3]<<"->"<<countnumber_ee_bkg[3]/countnumber_ee_bkg[0]<<std::endl;
  std::cout <<"sumPT>50_ee_bkg:"<<countnumber_ee_bkg[4]<<"->"<<countnumber_ee_bkg[4]/countnumber_ee_bkg[0]<<std::endl;
  std::cout <<"E>3000_ee_bkg:"<<countnumber_ee_bkg[5]<<"->"<<countnumber_ee_bkg[5]/countnumber_ee_bkg[0]<<std::endl;
  
  // compute significance
  double xs_b=2.058*countnumber_jj_bkg[5]/countnumber_jj_bkg[0] + 5.949*countnumber_ww_bkg[5]/countnumber_ww_bkg[0] + 897.6*countnumber_mumua_bkg[5]/countnumber_mumua_bkg[0] + 1.68*countnumber_vmvm_bkg[5]/countnumber_vmvm_bkg[0] + 3.96*countnumber_ee_bkg[5]/countnumber_ee_bkg[0]; 
  double xs_s=0.0867*countnumber_signal[5]/countnumber_signal[0];
  double B=xs_b*10000000;
  double S=xs_s*10000000;
  double delta_95=sqrt(B)/S*1.96/2;
  double delta_90=sqrt(B)/S*1.64/2;
  
  std::cout <<"xs_b:"<<xs_b<<std::endl;
  std::cout <<"xs_s:"<<xs_s<<std::endl;
  std::cout <<"#delta_{95%}:"<<delta_95<<std::endl;
  std::cout <<"#delta_{90%}:"<<delta_90<<std::endl;
  
  
  
  // draw plot
  gStyle->SetPadLeftMargin(0.17); gStyle->SetPadRightMargin(0.05); gStyle->SetPadBottomMargin(0.15);
  gStyle->SetTitleFont(132, "xyz"); 
  gStyle->SetLabelFont(132, "xyz"); 
  gStyle->SetTextFont(132); 
  
  TColor *mumua_color = new TColor(9001,0.317647, 0.654902, 0.752941); 
  TColor *ff_color = new TColor(9002,0.705882, 0.494118, 0.545098); 
  TColor *ww_color = new TColor(9003,0.1875, 0.54687, 0.347656); 
  
  
  TCanvas *c140 = new TCanvas();
  ForwardMuon_sumPT_plot_mumua_bkg->SetStats(0);
  ForwardMuon_sumPT_plot_signal->SetStats(0);
  ForwardMuon_sumPT_plot_signal->SetLineColor(kRed-4);
  ForwardMuon_sumPT_plot_ff_bkg->SetLineColor(9002);
  ForwardMuon_sumPT_plot_ww_bkg->SetLineColor(9003);
  ForwardMuon_sumPT_plot_mumua_bkg->SetLineColor(9001);

  ForwardMuon_sumPT_plot_ff_bkg->SetLineWidth(2);
  ForwardMuon_sumPT_plot_ww_bkg->SetLineWidth(2);
  ForwardMuon_sumPT_plot_mumua_bkg->SetLineWidth(2);
  ForwardMuon_sumPT_plot_signal->SetLineWidth(3);
  
  ForwardMuon_sumPT_plot_mumua_bkg->GetXaxis()->SetTitle("p_{T}(#mu#mu)[GeV]");
  ForwardMuon_sumPT_plot_mumua_bkg->GetYaxis()->SetTitle("d#sigma/dp_{T}(#mu#mu)[pb/GeV]");
  ForwardMuon_sumPT_plot_mumua_bkg->GetXaxis()->SetTitleSize(0.07);
  ForwardMuon_sumPT_plot_mumua_bkg->GetYaxis()->SetTitleSize(0.07);
  ForwardMuon_sumPT_plot_mumua_bkg->GetXaxis()->SetLabelSize(0.06);
  ForwardMuon_sumPT_plot_mumua_bkg->GetYaxis()->SetLabelSize(0.06);
  ForwardMuon_sumPT_plot_mumua_bkg->GetXaxis()->SetTitleFont(132);
  ForwardMuon_sumPT_plot_mumua_bkg->GetYaxis()->SetTitleFont(132);
  ForwardMuon_sumPT_plot_mumua_bkg->GetYaxis()->SetRangeUser(0.0001,1000);
  //ForwardMuon_sumPT_plot_mumua_bkg->GetXaxis()->SetRangeUser(-10,250);
  
  ForwardMuon_sumPT_plot_mumua_bkg->Draw("HIST");
  ForwardMuon_sumPT_plot_signal->Draw("same" "HIST");
  ForwardMuon_sumPT_plot_ff_bkg->Draw("same" "HIST");
  ForwardMuon_sumPT_plot_ww_bkg->Draw("same" "HIST");
  
  TLegend *l140 = new TLegend(0.76,0.65,0.95,0.90);
  l140->AddEntry(ForwardMuon_sumPT_plot_signal,"#mu#muh","l");
  l140->AddEntry(ForwardMuon_sumPT_plot_ff_bkg,"#mu#muff","l");
  l140->AddEntry(ForwardMuon_sumPT_plot_ww_bkg,"#mu#muww","l");
  l140->AddEntry(ForwardMuon_sumPT_plot_mumua_bkg,"#mu#mu#gamma","l");
  l140->SetTextFont(132);
  l140->SetTextSize(0.05);
  l140->Draw();
  
  
  c140->SetLogy();
  c140->SetTickx();
  c140->SetTicky();
  c140->SetGridx();
  c140->SetGridy();
  c140->SaveAs("/mnt/e/Madgraph/MG5_aMC_v3_4_0/HZZ_bkg/plot_macro/output_plot/ForwardMuon_sumPT.pdf");
  
  
  /*TCanvas *c21 = new TCanvas();
  ForwardMuon_Eta_plot_mumu_bkg->DrawNormalized();
  c21->SaveAs("/mnt/e/Madgraph/MG5_aMC_v3_4_0/HZZ_bkg/plot_macro/output_plot/ForwardMuon_Eta_mumu_bkg.png");
  
  TCanvas *c22 = new TCanvas();
  ForwardMuon_E_plot_mumu_bkg->DrawNormalized();
  c22->SaveAs("/mnt/e/Madgraph/MG5_aMC_v3_4_0/HZZ_bkg/plot_macro/output_plot/ForwardMuon_E_mumu_bkg.png");
  
  TCanvas *c23 = new TCanvas();
  ForwardMuon_PT_plot_mumu_bkg->DrawNormalized();
  c23->SaveAs("/mnt/e/Madgraph/MG5_aMC_v3_4_0/HZZ_bkg/plot_macro/output_plot/ForwardMuon_PT_mumu_bkg.png");*/
  
  
  
  
  
  

  
  
}
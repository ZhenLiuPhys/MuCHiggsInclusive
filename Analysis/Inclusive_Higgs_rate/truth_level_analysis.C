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

void truth_level_analysis(){
  
  //TFile *f0 = TFile::Open("/mnt/e/Madgraph/MG5_aMC_v3_4_0/HZZ_bkg/h_signal/Events/h_signal_beam_resolution.root");
  //TFile *f0 = TFile::Open("/mnt/e/Madgraph/MG5_aMC_v3_4_0/HZZ_bkg/h_signal/Events/run_03/tag_1_delphes_events.root");
  //TFile *f0plus = TFile::Open("/mnt/e/Madgraph/MG5_aMC_v3_4_0/HZZ_bkg/h_signal/Events/run_plus/tag_2_delphes_events.root");
  //TFile *f0minus = TFile::Open("/mnt/e/Madgraph/MG5_aMC_v3_4_0/HZZ_bkg/h_signal/Events/run_minus/tag_3_delphes_events.root");
  TFile *f0 = TFile::Open("/mnt/e/Madgraph/MG5_aMC_v3_4_0/HZZ_bkg/h_signal/Events/run_04/tag_5_pythia8_events.root");
  
  //TFile *f1 = TFile::Open("/mnt/e/Madgraph/MG5_aMC_v3_4_0/HZZ_bkg/jj_bkg/Events/jj_bkg_beam_resolution.root");
  //TFile *f1 = TFile::Open("/mnt/e/Madgraph/MG5_aMC_v3_4_0/HZZ_bkg/jj_bkg/Events/run_03/tag_1_delphes_events.root");
  //TFile *f1plus = TFile::Open("/mnt/e/Madgraph/MG5_aMC_v3_4_0/HZZ_bkg/jj_bkg/Events/run_plus/tag_2_delphes_events.root");
  //TFile *f1minus = TFile::Open("/mnt/e/Madgraph/MG5_aMC_v3_4_0/HZZ_bkg/jj_bkg/Events/run_minus/tag_3_delphes_events.root");
  TFile *f1 = TFile::Open("/mnt/e/Madgraph/MG5_aMC_v3_4_0/HZZ_bkg/jj_bkg/Events/run_03/unweighted_events.root");
  
  //TFile *f2 = TFile::Open("/mnt/e/Madgraph/MG5_aMC_v3_4_0/HZZ_bkg/ww_bkg/Events/ww_bkg_beam_resolution.root");
  //TFile *f2 = TFile::Open("/mnt/e/Madgraph/MG5_aMC_v3_4_0/HZZ_bkg/ww_bkg/Events/run_04/tag_1_delphes_events.root");
  //TFile *f2plus = TFile::Open("/mnt/e/Madgraph/MG5_aMC_v3_4_0/HZZ_bkg/ww_bkg/Events/run_plus/tag_1_delphes_events.root");
  //TFile *f2minus = TFile::Open("/mnt/e/Madgraph/MG5_aMC_v3_4_0/HZZ_bkg/ww_bkg/Events/run_minus/tag_2_delphes_events.root");
  TFile *f2 = TFile::Open("/mnt/e/Madgraph/MG5_aMC_v3_4_0/HZZ_bkg/ww_bkg/Events/10_TeV/unweighted_events.root");
  
  //TFile *f3 = TFile::Open("/mnt/e/Madgraph/MG5_aMC_v3_4_0/HZZ_bkg/mumu_bkg/Events/mumu_bkg_beam_resolution.root");
  //TFile *f3 = TFile::Open("/mnt/e/Madgraph/MG5_aMC_v3_4_0/HZZ_bkg/mumu_bkg/Events/run_02/tag_1_delphes_events.root");
  //TFile *f3plus = TFile::Open("/mnt/e/Madgraph/MG5_aMC_v3_4_0/HZZ_bkg/mumu_bkg/Events/run_plus/tag_3_delphes_events.root");
  //TFile *f3minus = TFile::Open("/mnt/e/Madgraph/MG5_aMC_v3_4_0/HZZ_bkg/mumu_bkg/Events/run_minus/tag_4_delphes_events.root");
  TFile *f3 = TFile::Open("/mnt/e/Madgraph/MG5_aMC_v3_4_0/HZZ_bkg/mumu_bkg/Events/run_03/tag_7_pythia8_events.root");
  
  //TFile *f4 = TFile::Open("/mnt/e/Madgraph/MG5_aMC_v3_4_0/HZZ_bkg/mumua_bkg/Events/mumua_bkg_beam_resolution.root");
  //TFile *f4 = TFile::Open("/mnt/e/Madgraph/MG5_aMC_v3_4_0/HZZ_bkg/mumua_bkg/Events/run_04/tag_1_delphes_events.root");
  //TFile *f4plus = TFile::Open("/mnt/e/Madgraph/MG5_aMC_v3_4_0/HZZ_bkg/mumua_bkg/Events/run_plus/tag_1_delphes_events.root");
  //TFile *f4minus = TFile::Open("/mnt/e/Madgraph/MG5_aMC_v3_4_0/HZZ_bkg/mumua_bkg/Events/run_minus/tag_2_delphes_events.root");
  TFile *f4 = TFile::Open("/mnt/e/Madgraph/MG5_aMC_v3_4_0/HZZ_bkg/mumua_bkg/Events/run_withshower/tag_1_pythia8_events.root");
  
  //TFile *f5 = TFile::Open("/mnt/e/Madgraph/MG5_aMC_v3_4_0/HZZ_bkg/vmvm_bkg/Events/vmvm_bkg_beam_resolution.root");
  //TFile *f5 = TFile::Open("/mnt/e/Madgraph/MG5_aMC_v3_4_0/HZZ_bkg/vmvm_bkg/Events/run_02/tag_1_delphes_events.root");
  //TFile *f5plus = TFile::Open("/mnt/e/Madgraph/MG5_aMC_v3_4_0/HZZ_bkg/vmvm_bkg/Events/run_plus/tag_1_delphes_events.root");
  //TFile *f5minus = TFile::Open("/mnt/e/Madgraph/MG5_aMC_v3_4_0/HZZ_bkg/vmvm_bkg/Events/run_minus/tag_2_delphes_events.root");
  TFile *f5 = TFile::Open("/mnt/e/Madgraph/MG5_aMC_v3_4_0/HZZ_bkg/vmvm_bkg/Events/run_02/unweighted_events.root");
  
  //TFile *f6 = TFile::Open("/mnt/e/Madgraph/MG5_aMC_v3_4_0/HZZ_bkg/ee_bkg/Events/ee_bkg_beam_resolution.root");
  //TFile *f6 = TFile::Open("/mnt/e/Madgraph/MG5_aMC_v3_4_0/HZZ_bkg/ee_bkg/Events/run_02/tag_1_delphes_events.root");
  //TFile *f6plus = TFile::Open("/mnt/e/Madgraph/MG5_aMC_v3_4_0/HZZ_bkg/ee_bkg/Events/run_plus/tag_1_delphes_events.root");
  //TFile *f6minus = TFile::Open("/mnt/e/Madgraph/MG5_aMC_v3_4_0/HZZ_bkg/ee_bkg/Events/run_minus/tag_1_delphes_events.root");
  TFile *f6 = TFile::Open("/mnt/e/Madgraph/MG5_aMC_v3_4_0/HZZ_bkg/ee_bkg/Events/run_02/unweighted_events.root");
  
  
  
  
  TTree *s1 = (TTree*)f0->Get("Events");
  //TTree *s1plus = (TTree*)f0plus->Get("Delphes");
  //TTree *s1minus = (TTree*)f0minus->Get("Delphes");
  
  TTree *b1 = (TTree*)f1->Get("LHEF");
  //TTree *b1plus = (TTree*)f1plus->Get("Delphes");
  //TTree *b1minus = (TTree*)f1minus->Get("Delphes");
  
  TTree *b2 = (TTree*)f2->Get("LHEF");
  //TTree *b2plus = (TTree*)f2plus->Get("Delphes");
  //TTree *b2minus = (TTree*)f2minus->Get("Delphes");
  
  TTree *b3 = (TTree*)f3->Get("Events");
  //TTree *b3plus = (TTree*)f3plus->Get("Delphes");
  //TTree *b3minus = (TTree*)f3minus->Get("Delphes");
  
  TTree *b4 = (TTree*)f4->Get("Events");
  //TTree *b4plus = (TTree*)f4plus->Get("Delphes");
  //TTree *b4minus = (TTree*)f4minus->Get("Delphes");
  
  TTree *b5 = (TTree*)f5->Get("LHEF");
  //TTree *b5plus = (TTree*)f5plus->Get("Delphes");
  //TTree *b5minus = (TTree*)f5minus->Get("Delphes");
  
  TTree *b6 = (TTree*)f6->Get("LHEF");
  //TTree *b6plus = (TTree*)f6plus->Get("Delphes");
  //TTree *b6minus = (TTree*)f6minus->Get("Delphes");
  

  //create histograms
  // TH1F *plotvariable_for_code = new TH1F("plot_name","plot_title",nbins,xlow,xup);
  TH1F *ForwardMuon_Eta_plot_signal = new TH1F("Forwardmuon_Eta_signal","",50,-8,8);
  TH1F *ForwardMuon_E_plot_signal = new TH1F("Forwardmuon_E_signal","",30,0,7000);
  TH1F *ForwardMuon_PT_plot_signal = new TH1F("Forwardmuon_PT_signal","",30,-10,2000);
  TH1F *ForwardMuon_sumPT_plot_signal = new TH1F("Forwardmuon_sumPT_signal","",30,-30,350);
  TH1F *ForwardMuon_Emin_plot_signal = new TH1F("Forwardmuon_Emin_signal","",30,0,7000);
  
  
  TH1F *ForwardMuon_Eta_plot_mumu_bkg = new TH1F("Forwardmuon_Eta_mumu_bkg","",50,-8,8);
  TH1F *ForwardMuon_E_plot_mumu_bkg = new TH1F("Forwardmuon_E_mumu_bkg","",30,0,7000);
  TH1F *ForwardMuon_PT_plot_mumu_bkg = new TH1F("Forwardmuon_PT_mumu_bkg","",30,-10,2000);
  TH1F *ForwardMuon_sumPT_plot_mumu_bkg = new TH1F("Forwardmuon_sumPT_mumu_bkg","",30,-30,350);
  TH1F *ForwardMuon_Emin_plot_mumu_bkg = new TH1F("Forwardmuon_Emin_mumu_bkg","",30,0,7000);
  
  /*TH1F *ForwardMuon_Eta_plot_jj_bkg = new TH1F("Forwardmuon_Eta_jj_bkg","Forwardmuon_Eta_jj_bkg",50,-10,10);
  TH1F *ForwardMuon_E_plot_jj_bkg = new TH1F("Forwardmuon_E_jj_bkg","Forwardmuon_E_jj_bkg",25,-10,8000);
  TH1F *ForwardMuon_PT_plot_jj_bkg = new TH1F("Forwardmuon_PT_jj_bkg","Forwardmuon_PT_jj_bkg",25,-10,1000);
  TH1F *ForwardMuon_sumPT_plot_jj_bkg = new TH1F("Forwardmuon_sumPT_jj_bkg","Forwardmuon_sumPT_jj_bkg",50,-10,250);*/
  
  TH1F *ForwardMuon_Eta_plot_ww_bkg = new TH1F("Forwardmuon_Eta_ww_bkg","",50,-8,8);
  TH1F *ForwardMuon_E_plot_ww_bkg = new TH1F("Forwardmuon_E_ww_bkg","",30,0,7000);
  TH1F *ForwardMuon_PT_plot_ww_bkg = new TH1F("Forwardmuon_PT_ww_bkg","",30,-10,2000);
  TH1F *ForwardMuon_sumPT_plot_ww_bkg = new TH1F("Forwardmuon_sumPT_ww_bkg","",30,-30,350);
  TH1F *ForwardMuon_Emin_plot_ww_bkg = new TH1F("Forwardmuon_Emin_ww_bkg","",30,0,7000);
  
  TH1F *ForwardMuon_Eta_plot_mumua_bkg = new TH1F("Forwardmuon_Eta_mumua_bkg","",50,-8,8);
  TH1F *ForwardMuon_E_plot_mumua_bkg = new TH1F("Forwardmuon_E_mumua_bkg","",30,0,7000);
  TH1F *ForwardMuon_PT_plot_mumua_bkg = new TH1F("Forwardmuon_PT_mumua_bkg","",30,-10,2000);
  TH1F *ForwardMuon_sumPT_plot_mumua_bkg = new TH1F("Forwardmuon_sumPT_mumua_bkg","",30,-30,350);
  TH1F *ForwardMuon_Emin_plot_mumua_bkg = new TH1F("Forwardmuon_Emin_mumua_bkg","",30,0,7000);
  
  /*TH1F *ForwardMuon_Eta_plot_vmvm_bkg = new TH1F("Forwardmuon_Eta_vmvm_bkg","Forwardmuon_Eta_vmvm_bkg",50,-10,10);
  TH1F *ForwardMuon_E_plot_vmvm_bkg = new TH1F("Forwardmuon_E_vmvm_bkg","Forwardmuon_E_vmvm_bkg",25,-10,8000);
  TH1F *ForwardMuon_PT_plot_vmvm_bkg = new TH1F("Forwardmuon_PT_vmvm_bkg","Forwardmuon_PT_vmvm_bkg",25,-10,1000);
  TH1F *ForwardMuon_sumPT_plot_vmvm_bkg = new TH1F("Forwardmuon_sumPT_vmvm_bkg","Forwardmuon_sumPT_vmvm_bkg",50,-10,250);
  
  TH1F *ForwardMuon_Eta_plot_ee_bkg = new TH1F("Forwardmuon_Eta_ee_bkg","Forwardmuon_Eta_ee_bkg",50,-10,10);
  TH1F *ForwardMuon_E_plot_ee_bkg = new TH1F("Forwardmuon_E_ee_bkg","Forwardmuon_E_ee_bkg",25,-10,8000);
  TH1F *ForwardMuon_PT_plot_ee_bkg = new TH1F("Forwardmuon_PT_ee_bkg","Forwardmuon_PT_ee_bkg",25,-10,1000);
  TH1F *ForwardMuon_sumPT_plot_ee_bkg = new TH1F("Forwardmuon_sumPT_ee_bkg","Forwardmuon_sumPT_ee_bkg",50,-10,250);*/
  
  //TH1F *ForwardMuon_Eta_plot_total_bkg = new TH1F("Forwardmuon_Eta_total_bkg","",100,-10,10);
  //TH1F *ForwardMuon_E_plot_total_bkg = new TH1F("Forwardmuon_E_total_bkg","",25,-10,10000);
  //TH1F *ForwardMuon_PT_plot_total_bkg = new TH1F("Forwardmuon_PT_total_bkg","",25,-10,1000);
  //TH1F *ForwardMuon_sumPT_plot_total_bkg = new TH1F("Forwardmuon_sumPT_total_bkg","",50,-10,250);
  //TH1F *ForwardMuon_Emin_plot_total_bkg = new TH1F("Forwardmuon_Emin_total_bkg","",25,-10,8000);
  //TH2F *ForwardMuon_E_2d_plot_total_bkg = new TH2F("Forwardmuon_E_2d_total_bkg","",50,-10,8000,50,-10,8000);
  
  
  TH1F *ForwardMuon_Eta_plot_ff_bkg = new TH1F("Forwardmuon_Eta_ff_bkg","",50,-8,8);
  TH1F *ForwardMuon_E_plot_ff_bkg = new TH1F("Forwardmuon_E_ff_bkg","",30,0,7000);
  TH1F *ForwardMuon_PT_plot_ff_bkg = new TH1F("Forwardmuon_PT_ff_bkg","",30,-10,2000);
  TH1F *ForwardMuon_sumPT_plot_ff_bkg = new TH1F("Forwardmuon_sumPT_ff_bkg","",30,-30,350);
  TH1F *ForwardMuon_Emin_plot_ff_bkg = new TH1F("Forwardmuon_Emin_ff_bkg","",30,0,7000);
  
  
  
  
  
  TH1F *Higgs_mass_plot_signal = new TH1F("Higgs_mass_signal","",40,-500,1500);
  //TH1F *Higgs_mass_plot_jj_bkg = new TH1F("Higgs_mass_jj_bkg","Higgs_mass_jj_bkg",50,-5000,5000);
  TH1F *Higgs_mass_plot_ww_bkg = new TH1F("Higgs_mass_ww_bkg","Higgs_mass_ww_bkg",40,-500,1500);
  //TH1F *Higgs_mass_plot_mumu_bkg = new TH1F("Higgs_mass_mumu_bkg","Higgs_mass_mumu_bkg",50,-5000,5000);
  TH1F *Higgs_mass_plot_mumua_bkg = new TH1F("Higgs_mass_mumua_bkg","",40,-500,1500);
  TH1F *Higgs_mass_plot_mumu_bkg = new TH1F("Higgs_mass_mumu_bkg","",40,-500,1500);
  //TH1F *Higgs_mass_plot_vmvm_bkg = new TH1F("Higgs_mass_vmvm_bkg","Higgs_mass_vmvm_bkg",50,-5000,5000);
  //TH1F *Higgs_mass_plot_ee_bkg = new TH1F("Higgs_mass_ee_bkg","Higgs_mass_ee_bkg",50,-5000,5000);
  //TH1F *Higgs_mass_plot_total_bkg = new TH1F("Higgs_mass_total_bkg","",50,-5000,5000);
  TH1F *Higgs_mass_plot_ff_bkg = new TH1F("Higgs_mass_ff_bkg","",40,-500,1500);
  
  //TH1F *Higgs_mass_2_plot_signal = new TH1F("Higgs_mass_2_signal","",50,-5000,5000);
  //TH1F *Higgs_mass_2_plot_total_bkg = new TH1F("Higgs_mass_2_total_bkg","",50,-5000,5000);
  //TH1F *Higgs_mass_2_plot_ff_bkg = new TH1F("Higgs_mass_2_ff_bkg","",50,-5000,5000);
  
	
  

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
  
  Int_t           Particle_pid[355];   //[Event_numberP]
  Double_t        Particle_px[355];   //[Event_numberP]
  Double_t        Particle_py[355];   //[Event_numberP]
  Double_t        Particle_pz[355];   //[Event_numberP]
  Double_t        Particle_energy[355];   //[Event_numberP]
  Double_t        Particle_mass[355];   //[Event_numberP]
  Int_t           Particle_status[355];   //[Event_numberP]
  
  
  TBranch        *b_Particle_PID;   //!
  TBranch        *b_Particle_Status;   //!
  TBranch        *b_Particle_E;   //!
  TBranch        *b_Particle_M;   //!
  TBranch        *b_Particle_PT;   //!
  TBranch        *b_Particle_Eta;   //!
  TBranch        *b_Particle_Phi;   //!
  
  TBranch        *b_Particle_pid;   //!
  TBranch        *b_Particle_px;   //!
  TBranch        *b_Particle_py;   //!
  TBranch        *b_Particle_pz;   //!
  TBranch        *b_Particle_energy;   //!
  TBranch        *b_Particle_mass;   //!
  TBranch        *b_Particle_status;   //!
  
  
  
  
  s1->SetBranchAddress("Particle_pid", Particle_pid, &b_Particle_pid);
  s1->SetBranchAddress("Particle_px", Particle_px, &b_Particle_px);
  s1->SetBranchAddress("Particle_py", Particle_py, &b_Particle_py);
  s1->SetBranchAddress("Particle_pz", Particle_pz, &b_Particle_pz);
  s1->SetBranchAddress("Particle_energy", Particle_energy, &b_Particle_energy);
  s1->SetBranchAddress("Particle_mass", Particle_mass, &b_Particle_mass);
  s1->SetBranchAddress("Particle_status", Particle_status, &b_Particle_status);
  
  
  
  b1->SetBranchAddress("Particle.PID", Particle_PID, &b_Particle_PID);
  b1->SetBranchAddress("Particle.Status", Particle_Status, &b_Particle_Status);
  b1->SetBranchAddress("Particle.E", Particle_E, &b_Particle_E);
  b1->SetBranchAddress("Particle.M", Particle_M, &b_Particle_M);
  b1->SetBranchAddress("Particle.PT", Particle_PT, &b_Particle_PT);
  b1->SetBranchAddress("Particle.Eta", Particle_Eta, &b_Particle_Eta);
  b1->SetBranchAddress("Particle.Phi", Particle_Phi, &b_Particle_Phi);
  
  b2->SetBranchAddress("Particle.PID", Particle_PID, &b_Particle_PID);
  b2->SetBranchAddress("Particle.Status", Particle_Status, &b_Particle_Status);
  b2->SetBranchAddress("Particle.E", Particle_E, &b_Particle_E);
  b2->SetBranchAddress("Particle.M", Particle_M, &b_Particle_M);
  b2->SetBranchAddress("Particle.PT", Particle_PT, &b_Particle_PT);
  b2->SetBranchAddress("Particle.Eta", Particle_Eta, &b_Particle_Eta);
  b2->SetBranchAddress("Particle.Phi", Particle_Phi, &b_Particle_Phi);
  
  b3->SetBranchAddress("Particle_pid", Particle_pid, &b_Particle_pid);
  b3->SetBranchAddress("Particle_px", Particle_px, &b_Particle_px);
  b3->SetBranchAddress("Particle_py", Particle_py, &b_Particle_py);
  b3->SetBranchAddress("Particle_pz", Particle_pz, &b_Particle_pz);
  b3->SetBranchAddress("Particle_energy", Particle_energy, &b_Particle_energy);
  b3->SetBranchAddress("Particle_mass", Particle_mass, &b_Particle_mass);
  b3->SetBranchAddress("Particle_status", Particle_status, &b_Particle_status);
  
  b4->SetBranchAddress("Particle_pid", Particle_pid, &b_Particle_pid);
  b4->SetBranchAddress("Particle_px", Particle_px, &b_Particle_px);
  b4->SetBranchAddress("Particle_py", Particle_py, &b_Particle_py);
  b4->SetBranchAddress("Particle_pz", Particle_pz, &b_Particle_pz);
  b4->SetBranchAddress("Particle_energy", Particle_energy, &b_Particle_energy);
  b4->SetBranchAddress("Particle_mass", Particle_mass, &b_Particle_mass);
  b4->SetBranchAddress("Particle_status", Particle_status, &b_Particle_status);
  
  b5->SetBranchAddress("Particle.PID", Particle_PID, &b_Particle_PID);
  b5->SetBranchAddress("Particle.Status", Particle_Status, &b_Particle_Status);
  b5->SetBranchAddress("Particle.E", Particle_E, &b_Particle_E);
  b5->SetBranchAddress("Particle.M", Particle_M, &b_Particle_M);
  b5->SetBranchAddress("Particle.PT", Particle_PT, &b_Particle_PT);
  b5->SetBranchAddress("Particle.Eta", Particle_Eta, &b_Particle_Eta);
  b5->SetBranchAddress("Particle.Phi", Particle_Phi, &b_Particle_Phi);
  
  b6->SetBranchAddress("Particle.PID", Particle_PID, &b_Particle_PID);
  b6->SetBranchAddress("Particle.Status", Particle_Status, &b_Particle_Status);
  b6->SetBranchAddress("Particle.E", Particle_E, &b_Particle_E);
  b6->SetBranchAddress("Particle.M", Particle_M, &b_Particle_M);
  b6->SetBranchAddress("Particle.PT", Particle_PT, &b_Particle_PT);
  b6->SetBranchAddress("Particle.Eta", Particle_Eta, &b_Particle_Eta);
  b6->SetBranchAddress("Particle.Phi", Particle_Phi, &b_Particle_Phi);
  
  
  
  


  
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
  double weight_signal=0.0867/200000.0;
  for (int i=0; i<entries0; ++i){
    s1->GetEntry(i);
    
    TLorentzVector Initial;
    TLorentzVector Muon1;
    TLorentzVector Muon2;
    TLorentzVector Muon3;
    TLorentzVector Muon4;
    TLorentzVector Muon_temp;
    
    double Higgs_mass=-999;
    double Twomuon_PT=-999;
    double Muon_Emin=-999;
    Initial.SetPxPyPzE(0,0,0,10000);
    
    
    countnumber_signal[0] = countnumber_signal[0] + 1;

    // Apply cut
 
    
    // ForwardMuon_size == 2
    for(int j=0; j<19;++j){
        if(Particle_pid[20-j]==-13){
            Muon_temp.SetPxPyPzE(Particle_px[20-j],Particle_py[20-j],Particle_pz[20-j],Particle_energy[20-j]);
            if(abs(Muon_temp.Eta())>2.5&&Muon_temp.E()>200.0){Muon1=Muon_temp; break;}
        }
    }
    for(int j=0; j<19;++j){
        if(Particle_pid[20-j]==13){
            Muon_temp.SetPxPyPzE(Particle_px[20-j],Particle_py[20-j],Particle_pz[20-j],Particle_energy[20-j]);
            if(abs(Muon_temp.Eta())>2.5&&Muon_temp.E()>200.0){Muon2=Muon_temp; break;}
        }
    }
    
    
    
    
    
    //Muon1.SetPxPyPzE(Particle_px[2],Particle_py[2],Particle_pz[2],Particle_energy[2]);
    //Muon2.SetPxPyPzE(Particle_px[3],Particle_py[3],Particle_pz[3],Particle_energy[3]);
    
    if(abs(Muon1.Eta())>2.5&&abs(Muon1.Eta())<8&&abs(Muon2.Eta())>2.5&&abs(Muon2.Eta())<8) {
        countnumber_signal[1]=countnumber_signal[1]+1;
        
        //Muon1.SetPxPyPzE(Particle_px[2],Particle_py[2],Particle_pz[2],Particle_energy[2]);
        //Muon2.SetPxPyPzE(Particle_px[3],Particle_py[3],Particle_pz[3],Particle_energy[3]);
        
        
        
        if(Muon1.Eta()*Muon2.Eta() < 0){
            countnumber_signal[2]=countnumber_signal[2]+1;
            Higgs_mass=(Initial-Muon1-Muon2).M();
            Twomuon_PT=(Muon1+Muon2).Pt();
            
            
            
            
            if(Muon1.Pt()>20 && Muon2.Pt()>20){
                countnumber_signal[3]=countnumber_signal[3]+1;
                ForwardMuon_sumPT_plot_signal->Fill(Twomuon_PT,weight_signal);
                ForwardMuon_E_plot_signal->Fill(Muon2.E(),weight_signal);
                //ForwardMuon_PT_plot_signal->Fill(Muon2.Pt(),weight_signal);
                ForwardMuon_Eta_plot_signal->Fill(Muon1.Eta(),weight_signal);
                ForwardMuon_Eta_plot_signal->Fill(Muon2.Eta(),weight_signal);
                Higgs_mass_plot_signal->Fill(Higgs_mass,weight_signal);
                if(Muon1.E() < Muon2.E()){Muon_Emin=Muon1.E(); ForwardMuon_PT_plot_signal->Fill(Muon1.Pt(),weight_signal);}
                if(Muon1.E() > Muon2.E()){Muon_Emin=Muon2.E(); ForwardMuon_PT_plot_signal->Fill(Muon2.Pt(),weight_signal);}
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
        
    }
     
    
    
  
  }
  
  std::cout <<"pass0"<<std::endl;
  
  
  
  //////////////////////////jj_bkg//////////////////////////////////////////////////////////////////////
  double weight_jj=2.058/200000.0;
  for (int i=0; i<entries1; ++i){
    b1->GetEntry(i);
    TLorentzVector Initial;
    TLorentzVector Muon1;
    TLorentzVector Muon2;
    TLorentzVector Muon3;
    TLorentzVector Muon4;
    
    int muon_plus=999;
    int muon_minus=999;
    double Higgs_mass=-999;
    double Twomuon_PT=-999;
    double Muon_Emin=-999;
    Initial.SetPxPyPzE(0,0,0,10000);
	  
    countnumber_jj_bkg[0]=countnumber_jj_bkg[0]+1;
    // Apply cut
    


    for (int j=1; j<10; ++j){
        if ((j >= 2) && (Particle_Status[j] == 1)){
            if(Particle_PID[j] == -13){muon_plus=j;}
            if(Particle_PID[j] == 13){muon_minus=j;}
        }
    }

    
    
    // ForwardMuon_size == 2
    Muon1.SetPtEtaPhiM(Particle_PT[muon_plus],Particle_Eta[muon_plus],Particle_Phi[muon_plus],0.1);
    Muon2.SetPtEtaPhiM(Particle_PT[muon_minus],Particle_Eta[muon_minus],Particle_Phi[muon_minus],0.1);
    if(abs(Muon1.Eta())>2.5&&abs(Muon1.Eta())<8&&abs(Muon2.Eta())>2.5&&abs(Muon2.Eta())<8) {
        countnumber_jj_bkg[1]=countnumber_jj_bkg[1]+1;
        
        Muon1.SetPtEtaPhiM(Particle_PT[muon_plus],Particle_Eta[muon_plus],Particle_Phi[muon_plus],0.1);
        Muon2.SetPtEtaPhiM(Particle_PT[muon_minus],Particle_Eta[muon_minus],Particle_Phi[muon_minus],0.1);
        
        
        if(Particle_Eta[muon_plus]*Particle_Eta[muon_minus] < 0){
            countnumber_jj_bkg[2]=countnumber_jj_bkg[2]+1;
            Higgs_mass=(Initial-Muon1-Muon2).M();
            Twomuon_PT=(Muon1+Muon2).Pt();
            //Higgs_mass_plot_jj_bkg->Fill(Higgs_mass);
            //ForwardMuon_Eta_plot_jj_bkg->Fill(Muon1.Eta());
            //ForwardMuon_E_plot_jj_bkg->Fill(Muon1.E());
            //ForwardMuon_PT_plot_jj_bkg->Fill(Muon1.Pt());
            //ForwardMuon_Eta_plot_jj_bkg->Fill(Muon2.Eta());
            //ForwardMuon_E_plot_jj_bkg->Fill(Muon2.E());
            //ForwardMuon_PT_plot_jj_bkg->Fill(Muon2.Pt());
            
            
            if(Particle_PT[muon_plus]>20 && Particle_PT[muon_minus]>20){
                countnumber_jj_bkg[3]=countnumber_jj_bkg[3]+1;
                
                ForwardMuon_sumPT_plot_ff_bkg->Fill(Twomuon_PT,weight_jj);
                ForwardMuon_E_plot_ff_bkg->Fill(Muon2.E(),weight_jj);
                //ForwardMuon_PT_plot_ff_bkg->Fill(Muon2.Pt(),weight_jj);
                ForwardMuon_Eta_plot_ff_bkg->Fill(Muon1.Eta(),weight_jj);
                ForwardMuon_Eta_plot_ff_bkg->Fill(Muon2.Eta(),weight_jj);
                Higgs_mass_plot_ff_bkg->Fill(Higgs_mass,weight_jj);
                
                if(Muon1.E() < Muon2.E()){Muon_Emin=Muon1.E(); ForwardMuon_PT_plot_ff_bkg->Fill(Muon1.Pt(),weight_jj);}
                if(Muon1.E() > Muon2.E()){Muon_Emin=Muon2.E(); ForwardMuon_PT_plot_ff_bkg->Fill(Muon2.Pt(),weight_jj);}
                ForwardMuon_Emin_plot_ff_bkg->Fill(Muon_Emin,weight_jj);
                //ForwardMuon_sumPT_plot_total_bkg->Fill(Twomuon_PT,weight_jj);
                
                
                
                if(Twomuon_PT > 50){
                    countnumber_jj_bkg[4]=countnumber_jj_bkg[4]+1;
                    
                    //ForwardMuon_E_plot_ff_bkg->Fill(Muon1.E(),weight_jj);
                    //ForwardMuon_PT_plot_ff_bkg->Fill(Muon1.Pt(),weight_jj);
                    //ForwardMuon_Eta_plot_ff_bkg->Fill(Muon1.Eta(),weight_jj);
                    //ForwardMuon_E_plot_ff_bkg->Fill(Muon2.E(),weight_jj);
                    //ForwardMuon_PT_plot_ff_bkg->Fill(Muon2.Pt(),weight_jj);
                    //ForwardMuon_Eta_plot_ff_bkg->Fill(Muon2.Eta(),weight_jj);
                    //Higgs_mass_plot_ff_bkg->Fill(Higgs_mass,weight_jj);
                    
                
                    
                    
                
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
    
    int muon_plus=999;
    int muon_minus=999;
    double Higgs_mass=-999;
    double Twomuon_PT=-999;
    double Muon_Emin=-999;
    Initial.SetPxPyPzE(0,0,0,10000);
	  
    countnumber_ww_bkg[0]=countnumber_ww_bkg[0]+1;
    // Apply cut
    


    for (int j=1; j<10; ++j){
        if ((j >= 2) && (Particle_Status[j] == 1)){
            if(Particle_PID[j] == -13){muon_plus=j;}
            if(Particle_PID[j] == 13){muon_minus=j;}
        }
    }

    
    
    // ForwardMuon_size == 2
    Muon1.SetPtEtaPhiM(Particle_PT[muon_plus],Particle_Eta[muon_plus],Particle_Phi[muon_plus],0.1);
    Muon2.SetPtEtaPhiM(Particle_PT[muon_minus],Particle_Eta[muon_minus],Particle_Phi[muon_minus],0.1);
    if(abs(Muon1.Eta())>2.5&&abs(Muon1.Eta())<8&&abs(Muon2.Eta())>2.5&&abs(Muon2.Eta())<8) {
        countnumber_ww_bkg[1]=countnumber_ww_bkg[1]+1;
        
        Muon1.SetPtEtaPhiM(Particle_PT[muon_plus],Particle_Eta[muon_plus],Particle_Phi[muon_plus],0.1);
        Muon2.SetPtEtaPhiM(Particle_PT[muon_minus],Particle_Eta[muon_minus],Particle_Phi[muon_minus],0.1);
        
        
        if(Particle_Eta[muon_plus]*Particle_Eta[muon_minus] < 0){
            countnumber_ww_bkg[2]=countnumber_ww_bkg[2]+1;
            Higgs_mass=(Initial-Muon1-Muon2).M();
            Twomuon_PT=(Muon1+Muon2).Pt();
            //Higgs_mass_plot_ww_bkg->Fill(Higgs_mass);
            //ForwardMuon_Eta_plot_ww_bkg->Fill(Muon1.Eta());
            //ForwardMuon_E_plot_ww_bkg->Fill(Muon1.E());
            //ForwardMuon_PT_plot_ww_bkg->Fill(Muon1.Pt());
            //ForwardMuon_Eta_plot_ww_bkg->Fill(Muon2.Eta());
            //ForwardMuon_E_plot_ww_bkg->Fill(Muon2.E());
            //ForwardMuon_PT_plot_ww_bkg->Fill(Muon2.Pt());
            
            
            if(Particle_PT[muon_plus]>20 && Particle_PT[muon_minus]>20){
                countnumber_ww_bkg[3]=countnumber_ww_bkg[3]+1;
                
                ForwardMuon_sumPT_plot_ww_bkg->Fill(Twomuon_PT,weight_ww);
                ForwardMuon_E_plot_ww_bkg->Fill(Muon2.E(),weight_ww);
                //ForwardMuon_PT_plot_ww_bkg->Fill(Muon2.Pt(),weight_ww);
                ForwardMuon_Eta_plot_ww_bkg->Fill(Muon1.Eta(),weight_ww);
                ForwardMuon_Eta_plot_ww_bkg->Fill(Muon2.Eta(),weight_ww);
                Higgs_mass_plot_ww_bkg->Fill(Higgs_mass,weight_ww);
                
                if(Muon1.E() < Muon2.E()){Muon_Emin=Muon1.E(); ForwardMuon_PT_plot_ww_bkg->Fill(Muon1.Pt(),weight_ww);}
                if(Muon1.E() > Muon2.E()){Muon_Emin=Muon2.E(); ForwardMuon_PT_plot_ww_bkg->Fill(Muon2.Pt(),weight_ww);}
                ForwardMuon_Emin_plot_ww_bkg->Fill(Muon_Emin,weight_ww);
                //ForwardMuon_sumPT_plot_total_bkg->Fill(Twomuon_PT,weight_jj);
                
                
                
                if(Twomuon_PT > 50){
                    countnumber_ww_bkg[4]=countnumber_ww_bkg[4]+1;
                    
                
                    
                
                    //if(Muon1.E() < Muon2.E()){Muon_Emin=Muon1.E();}
                    //if(Muon1.E() > Muon2.E()){Muon_Emin=Muon2.E();}
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
  double weight_mumu=11150.0/133333.0;
  for (int i=0; i<entries3; ++i){
    b3->GetEntry(i);
    TLorentzVector Initial;
    TLorentzVector Muon1;
    TLorentzVector Muon2;
    TLorentzVector Muon3;
    TLorentzVector Muon4;
    
    int muon_plus=999;
    int muon_minus=999;
    double Higgs_mass=-999;
    double Twomuon_PT=-999;
    double Muon_Emin=-999;
    Initial.SetPxPyPzE(0,0,0,10000);
    
    for (int j=2; j<50; ++j){
        if(Particle_status[2]==1&&Particle_status[3]==1){
            muon_plus=2;
            muon_minus=3;
            break;
        }
    
        if(Particle_status[j]==1 && Particle_status[j+1]==1 && Particle_status[j+2]==1){
            if(abs(Particle_pid[j])==13&&abs(Particle_pid[j+1])==13){
                muon_plus=j;
                muon_minus=j+1;
                break;
            }
            if(abs(Particle_pid[j])==13&&abs(Particle_pid[j+2])==13){
                muon_plus=j;
                muon_minus=j+2;
                break;
            }
            if(abs(Particle_pid[j+1])==13&&abs(Particle_pid[j+2])==13){
                muon_plus=j+1;
                muon_minus=j+2;
                break;
            }
        }
    }
    
	  
    countnumber_mumu_bkg[0]=countnumber_mumu_bkg[0]+1;
    // Apply cut
    
    

    
    
    // ForwardMuon_size == 2
    Muon1.SetPxPyPzE(Particle_px[muon_plus],Particle_py[muon_plus],Particle_pz[muon_plus],Particle_energy[muon_plus]);
    Muon2.SetPxPyPzE(Particle_px[muon_minus],Particle_py[muon_minus],Particle_pz[muon_minus],Particle_energy[muon_minus]);
    if(abs(Muon1.Eta())>2.5&&abs(Muon1.Eta())<8&&abs(Muon2.Eta())>2.5&&abs(Muon2.Eta())<8) {
        countnumber_mumu_bkg[1]=countnumber_mumu_bkg[1]+1;
        
        Muon1.SetPxPyPzE(Particle_px[muon_plus],Particle_py[muon_plus],Particle_pz[muon_plus],Particle_energy[muon_plus]);
        Muon2.SetPxPyPzE(Particle_px[muon_minus],Particle_py[muon_minus],Particle_pz[muon_minus],Particle_energy[muon_minus]);
        
        
        if(Muon1.Eta()*Muon2.Eta() < 0){
            countnumber_mumu_bkg[2]=countnumber_mumu_bkg[2]+1;
            Higgs_mass=(Initial-Muon1-Muon2).M();
            Twomuon_PT=(Muon1+Muon2).Pt();
            
            
            
            if(Muon1.Pt()>20 && Muon2.Pt()>20){
                    countnumber_mumu_bkg[3]=countnumber_mumu_bkg[3]+1;
                    
                    ForwardMuon_sumPT_plot_mumu_bkg->Fill(Twomuon_PT,weight_mumu);
                    ForwardMuon_E_plot_mumu_bkg->Fill(Muon2.E(),weight_mumu);
                    //ForwardMuon_PT_plot_mumu_bkg->Fill(Muon2.Pt(),weight_mumu);
                    ForwardMuon_Eta_plot_mumu_bkg->Fill(Muon1.Eta(),weight_mumu);
                    ForwardMuon_Eta_plot_mumu_bkg->Fill(Muon2.Eta(),weight_mumu);
                    Higgs_mass_plot_mumu_bkg->Fill(Higgs_mass,weight_mumu);
                
                    if(Muon1.E() < Muon2.E()){Muon_Emin=Muon1.E(); ForwardMuon_PT_plot_mumu_bkg->Fill(Muon1.Pt(),weight_mumu);}
                    if(Muon1.E() > Muon2.E()){Muon_Emin=Muon2.E(); ForwardMuon_PT_plot_mumu_bkg->Fill(Muon2.Pt(),weight_mumu);}
                    ForwardMuon_Emin_plot_mumu_bkg->Fill(Muon_Emin,weight_mumu);
                    //ForwardMuon_sumPT_plot_total_bkg->Fill(Twomuon_PT,weight_jj);
                
                    
            
                if(Twomuon_PT > 50){
                    countnumber_mumu_bkg[4]=countnumber_mumu_bkg[4]+1;
                
                
                }
            
            
            
            
            }
        }
        

    }   
       
    
  }
  
  std::cout <<"pass3"<<std::endl; 
  
  //////////////////////////mumua_bkg//////////////////////////////////////////////////////////////////////
  double weight_mumua=754.8/286000.0;
  for (int i=0; i<entries4; ++i){
    b4->GetEntry(i);
    
    TLorentzVector Initial;
    TLorentzVector Muon1;
    TLorentzVector Muon2;
    TLorentzVector Muon3;
    TLorentzVector Muon4;
    
    int muon_plus=999;
    int muon_minus=999;
    double Higgs_mass=-999;
    double Twomuon_PT=-999;
    double Muon_Emin=-999;
    Initial.SetPxPyPzE(0,0,0,10000);
    
    for (int j=2; j<50; ++j){
        if(Particle_status[j]==1 && Particle_status[j+1]==1 && Particle_status[j+2]==1){
            if(abs(Particle_pid[j])==13&&abs(Particle_pid[j+1])==13){
                muon_plus=j;
                muon_minus=j+1;
                break;
            }
            if(abs(Particle_pid[j])==13&&abs(Particle_pid[j+2])==13){
                muon_plus=j;
                muon_minus=j+2;
                break;
            }
            if(abs(Particle_pid[j+1])==13&&abs(Particle_pid[j+2])==13){
                muon_plus=j+1;
                muon_minus=j+2;
                break;
            }
        }
    }
    
	  
    countnumber_mumua_bkg[0]=countnumber_mumua_bkg[0]+1;
    // Apply cut
    


    
    
    
    // ForwardMuon_size == 2
    Muon1.SetPxPyPzE(Particle_px[muon_plus],Particle_py[muon_plus],Particle_pz[muon_plus],Particle_energy[muon_plus]);
    Muon2.SetPxPyPzE(Particle_px[muon_minus],Particle_py[muon_minus],Particle_pz[muon_minus],Particle_energy[muon_minus]);
    if(abs(Muon1.Eta())>2.5&&abs(Muon1.Eta())<8&&abs(Muon2.Eta())>2.5&&abs(Muon2.Eta())<8) {
        countnumber_mumua_bkg[1]=countnumber_mumua_bkg[1]+1;
        
        Muon1.SetPxPyPzE(Particle_px[muon_plus],Particle_py[muon_plus],Particle_pz[muon_plus],Particle_energy[muon_plus]);
        Muon2.SetPxPyPzE(Particle_px[muon_minus],Particle_py[muon_minus],Particle_pz[muon_minus],Particle_energy[muon_minus]);
        
        
        if(Muon1.Eta()*Muon2.Eta() < 0){
            countnumber_mumua_bkg[2]=countnumber_mumua_bkg[2]+1;
            Higgs_mass=(Initial-Muon1-Muon2).M();
            Twomuon_PT=(Muon1+Muon2).Pt();
            //Higgs_mass_plot_mumua_bkg->Fill(Higgs_mass);
            //ForwardMuon_Eta_plot_mumua_bkg->Fill(Muon1.Eta());
            //ForwardMuon_E_plot_mumua_bkg->Fill(Muon1.E());
            //ForwardMuon_PT_plot_mumua_bkg->Fill(Muon1.Pt());
            //ForwardMuon_Eta_plot_mumua_bkg->Fill(Muon2.Eta());
            //ForwardMuon_E_plot_mumua_bkg->Fill(Muon2.E());
            //ForwardMuon_PT_plot_mumua_bkg->Fill(Muon2.Pt());
            
            
            if(Muon1.Pt()>20 && Muon2.Pt()>20){
                countnumber_mumua_bkg[3]=countnumber_mumua_bkg[3]+1;
                
                ForwardMuon_sumPT_plot_mumua_bkg->Fill(Twomuon_PT,weight_mumua);
                ForwardMuon_E_plot_mumua_bkg->Fill(Muon2.E(),weight_mumua);
                //ForwardMuon_PT_plot_mumua_bkg->Fill(Muon2.Pt(),weight_mumua);
                ForwardMuon_Eta_plot_mumua_bkg->Fill(Muon1.Eta(),weight_mumua);
                ForwardMuon_Eta_plot_mumua_bkg->Fill(Muon2.Eta(),weight_mumua);
                Higgs_mass_plot_mumua_bkg->Fill(Higgs_mass,weight_mumua);
                
                if(Muon1.E() < Muon2.E()){Muon_Emin=Muon1.E(); ForwardMuon_PT_plot_mumua_bkg->Fill(Muon1.Pt(),weight_mumua);}
                if(Muon1.E() > Muon2.E()){Muon_Emin=Muon2.E(); ForwardMuon_PT_plot_mumua_bkg->Fill(Muon2.Pt(),weight_mumua);}
                ForwardMuon_Emin_plot_mumua_bkg->Fill(Muon_Emin,weight_mumua);
                //ForwardMuon_sumPT_plot_total_bkg->Fill(Twomuon_PT,weight_jj);
                
                
                if(Twomuon_PT > 50){
                    countnumber_mumua_bkg[4]=countnumber_mumua_bkg[4]+1;
                    
                    
                
                    
                
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
  double weight_vmvm=16.8/200000.0;
  for (int i=0; i<entries5; ++i){
    b5->GetEntry(i);
    TLorentzVector Initial;
    TLorentzVector Muon1;
    TLorentzVector Muon2;
    TLorentzVector Muon3;
    TLorentzVector Muon4;
    
    int muon_plus=999;
    int muon_minus=999;
    double Higgs_mass=-999;
    double Twomuon_PT=-999;
    double Muon_Emin=-999;
    Initial.SetPxPyPzE(0,0,0,10000);
	  
    countnumber_vmvm_bkg[0]=countnumber_vmvm_bkg[0]+1;
    // Apply cut
    


    for (int j=1; j<10; ++j){
        if ((j >= 2) && (Particle_Status[j] == 1)){
            if(Particle_PID[j] == -13){muon_plus=j;}
            if(Particle_PID[j] == 13){muon_minus=j;}
        }
    }
    muon_plus=3;
    muon_minus=4;
    
    // ForwardMuon_size == 2
    Muon1.SetPtEtaPhiM(Particle_PT[muon_plus],Particle_Eta[muon_plus],Particle_Phi[muon_plus],0.1);
    Muon2.SetPtEtaPhiM(Particle_PT[muon_minus],Particle_Eta[muon_minus],Particle_Phi[muon_minus],0.1);
    if(abs(Muon1.Eta())>2.5&&abs(Muon1.Eta())<8&&abs(Muon2.Eta())>2.5&&abs(Muon2.Eta())<8) {
    
        countnumber_vmvm_bkg[1]=countnumber_vmvm_bkg[1]+1;
        
        Muon1.SetPtEtaPhiM(Particle_PT[muon_plus],Particle_Eta[muon_plus],Particle_Phi[muon_plus],0.1);
        Muon2.SetPtEtaPhiM(Particle_PT[muon_minus],Particle_Eta[muon_minus],Particle_Phi[muon_minus],0.1);
        
        if(Particle_Eta[muon_plus]*Particle_Eta[muon_minus] < 0){
            countnumber_vmvm_bkg[2]=countnumber_vmvm_bkg[2]+1;
            Higgs_mass=(Initial-Muon1-Muon2).M();
            Twomuon_PT=(Muon1+Muon2).Pt();
            
            
            
            if(Particle_PT[muon_plus]>20 && Particle_PT[muon_minus]>20){
                countnumber_vmvm_bkg[3]=countnumber_vmvm_bkg[3]+1;
                
                ForwardMuon_sumPT_plot_ff_bkg->Fill(Twomuon_PT,weight_vmvm);
                ForwardMuon_E_plot_ff_bkg->Fill(Muon2.E(),weight_vmvm);
                //ForwardMuon_PT_plot_ff_bkg->Fill(Muon2.Pt(),weight_vmvm);
                ForwardMuon_Eta_plot_ff_bkg->Fill(Muon1.Eta(),weight_vmvm);
                ForwardMuon_Eta_plot_ff_bkg->Fill(Muon2.Eta(),weight_vmvm);
                Higgs_mass_plot_ff_bkg->Fill(Higgs_mass,weight_vmvm);
                
                if(Muon1.E() < Muon2.E()){Muon_Emin=Muon1.E(); ForwardMuon_PT_plot_ff_bkg->Fill(Muon1.Pt(),weight_vmvm);}
                if(Muon1.E() > Muon2.E()){Muon_Emin=Muon2.E(); ForwardMuon_PT_plot_ff_bkg->Fill(Muon2.Pt(),weight_vmvm);}
                ForwardMuon_Emin_plot_ff_bkg->Fill(Muon_Emin,weight_vmvm);
                
                //ForwardMuon_sumPT_plot_total_bkg->Fill(Twomuon_PT,weight_vmvm);
                //ForwardMuon_sumPT_plot_ff_bkg->Fill(Twomuon_PT,weight_vmvm);
                if(Twomuon_PT > 50){
                    countnumber_vmvm_bkg[4]=countnumber_vmvm_bkg[4]+1;
                    
                    
                
                    
                    
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
  double weight_ee=3.96/200000.0;
  for (int i=0; i<entries6; ++i){
    b6->GetEntry(i);
    TLorentzVector Initial;
    TLorentzVector Muon1;
    TLorentzVector Muon2;
    TLorentzVector Muon3;
    TLorentzVector Muon4;
    
    int muon_plus=999;
    int muon_minus=999;
    double Higgs_mass=-999;
    double Twomuon_PT=-999;
    double Muon_Emin=-999;
    Initial.SetPxPyPzE(0,0,0,10000);
	  
    countnumber_ee_bkg[0]=countnumber_ee_bkg[0]+1;
    // Apply cut
    


    for (int j=1; j<10; ++j){
        if ((j >= 2) && (Particle_Status[j] == 1)){
            if(Particle_PID[j] == -13){muon_plus=j;}
            if(Particle_PID[j] == 13){muon_minus=j;}
        }
    }
    muon_plus=2;
    muon_minus=3;
    
    
    // ForwardMuon_size == 2
    Muon1.SetPtEtaPhiM(Particle_PT[muon_plus],Particle_Eta[muon_plus],Particle_Phi[muon_plus],0.1);
    Muon2.SetPtEtaPhiM(Particle_PT[muon_minus],Particle_Eta[muon_minus],Particle_Phi[muon_minus],0.1);
    if(abs(Muon1.Eta())>2.5&&abs(Muon1.Eta())<8&&abs(Muon2.Eta())>2.5&&abs(Muon2.Eta())<8) {
        countnumber_ee_bkg[1]=countnumber_ee_bkg[1]+1;
        
        Muon1.SetPtEtaPhiM(Particle_PT[muon_plus],Particle_Eta[muon_plus],Particle_Phi[muon_plus],0.1);
        Muon2.SetPtEtaPhiM(Particle_PT[muon_minus],Particle_Eta[muon_minus],Particle_Phi[muon_minus],0.1);
        
        if(Particle_Eta[muon_plus]*Particle_Eta[muon_minus] < 0){
            countnumber_ee_bkg[2]=countnumber_ee_bkg[2]+1;
            Higgs_mass=(Initial-Muon1-Muon2).M();
            Twomuon_PT=(Muon1+Muon2).Pt();
            //Higgs_mass_plot_mumua_bkg->Fill(Higgs_mass);
            //ForwardMuon_Eta_plot_mumua_bkg->Fill(Muon1.Eta());
            //ForwardMuon_E_plot_mumua_bkg->Fill(Muon1.E());
            //ForwardMuon_PT_plot_mumua_bkg->Fill(Muon1.Pt());
            //ForwardMuon_Eta_plot_mumua_bkg->Fill(Muon2.Eta());
            //ForwardMuon_E_plot_mumua_bkg->Fill(Muon2.E());
            //ForwardMuon_PT_plot_mumua_bkg->Fill(Muon2.Pt());
             
            
            if(Particle_PT[muon_plus]>20 && Particle_PT[muon_minus]>20){
                countnumber_ee_bkg[3]=countnumber_ee_bkg[3]+1;
                
                
                ForwardMuon_sumPT_plot_ff_bkg->Fill(Twomuon_PT,weight_ee);
                ForwardMuon_E_plot_ff_bkg->Fill(Muon2.E(),weight_ee);
                //ForwardMuon_PT_plot_ff_bkg->Fill(Muon2.Pt(),weight_ee);
                ForwardMuon_Eta_plot_ff_bkg->Fill(Muon1.Eta(),weight_ee);
                ForwardMuon_Eta_plot_ff_bkg->Fill(Muon2.Eta(),weight_ee);
                Higgs_mass_plot_ff_bkg->Fill(Higgs_mass,weight_ee);
                
                if(Muon1.E() < Muon2.E()){Muon_Emin=Muon1.E(); ForwardMuon_PT_plot_ff_bkg->Fill(Muon1.Pt(),weight_ee);}
                if(Muon1.E() > Muon2.E()){Muon_Emin=Muon2.E(); ForwardMuon_PT_plot_ff_bkg->Fill(Muon2.Pt(),weight_ee);}
                ForwardMuon_Emin_plot_ff_bkg->Fill(Muon_Emin,weight_ee);
               
                
                if(Twomuon_PT > 50){
                    countnumber_ee_bkg[4]=countnumber_ee_bkg[4]+1;
                    
                    
                    
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
  
  
  std::cout <<"Total_mumu_bkg:"<<countnumber_mumu_bkg[0]<<"->"<<countnumber_mumu_bkg[0]/countnumber_mumu_bkg[0]<<std::endl;
  std::cout <<"ForwardMuon=2_mumu_bkg:"<<countnumber_mumu_bkg[1]<<"->"<<countnumber_mumu_bkg[1]/countnumber_mumu_bkg[0]<<std::endl;
  std::cout <<"ForwardMuon_backtoback_mumu_bkg:"<<countnumber_mumu_bkg[2]<<"->"<<countnumber_mumu_bkg[2]/countnumber_mumu_bkg[0]<<std::endl;
  std::cout <<"PT>20_mumu_bkg:"<<countnumber_mumu_bkg[3]<<"->"<<countnumber_mumu_bkg[3]/countnumber_mumu_bkg[0]<<std::endl;
  
  
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
  /*double xs_b=2.058*countnumber_jj_bkg[5]/countnumber_jj_bkg[0] + 5.949*countnumber_ww_bkg[5]/countnumber_ww_bkg[0] + 897.6*countnumber_mumua_bkg[5]/countnumber_mumua_bkg[0] + 1.68*countnumber_vmvm_bkg[5]/countnumber_vmvm_bkg[0] + 3.96*countnumber_ee_bkg[5]/countnumber_ee_bkg[0]; 
  double xs_s=0.0867*countnumber_signal[5]/countnumber_signal[0];
  double B=xs_b*10000000;
  double S=xs_s*10000000;
  double delta_95=sqrt(B)/S*1.96/2;
  double delta_90=sqrt(B)/S*1.64/2;
  
  std::cout <<"xs_b:"<<xs_b<<std::endl;
  std::cout <<"xs_s:"<<xs_s<<std::endl;
  std::cout <<"#delta_{95%}:"<<delta_95<<std::endl;
  std::cout <<"#delta_{90%}:"<<delta_90<<std::endl;*/
  
  
  
  // draw plot
  gStyle->SetPadLeftMargin(0.15); gStyle->SetPadBottomMargin(0.15);
  gStyle->SetTitleFont(132, "xyz"); 
  gStyle->SetLabelFont(132, "xyz"); 
  gStyle->SetTextFont(132); 
  
  TColor *mumua_color = new TColor(9001,0.317647, 0.654902, 0.752941); 
  TColor *ff_color = new TColor(9002,0.705882, 0.494118, 0.545098); 
  TColor *ww_color = new TColor(9003,0.1875, 0.54687, 0.347656); 

  TCanvas *c110 = new TCanvas();
  ForwardMuon_Eta_plot_mumua_bkg->SetStats(0);
  ForwardMuon_Eta_plot_signal->SetStats(0);
  ForwardMuon_Eta_plot_signal->SetLineColor(kRed-4);
  ForwardMuon_Eta_plot_ff_bkg->SetLineColor(9002);
  ForwardMuon_Eta_plot_ww_bkg->SetLineColor(9003);
  ForwardMuon_Eta_plot_mumua_bkg->SetLineColor(9001);
  ForwardMuon_Eta_plot_mumu_bkg->SetLineColor(8);
  
  ForwardMuon_Eta_plot_ff_bkg->SetLineWidth(2);
  ForwardMuon_Eta_plot_ww_bkg->SetLineWidth(2);
  ForwardMuon_Eta_plot_mumua_bkg->SetLineWidth(2);
  ForwardMuon_Eta_plot_mumu_bkg->SetLineWidth(2);
  ForwardMuon_Eta_plot_signal->SetLineWidth(3);
  
  ForwardMuon_Eta_plot_signal->GetXaxis()->SetTitle("#eta(#mu)");
  ForwardMuon_Eta_plot_signal->GetYaxis()->SetTitle("d#sigma/d#eta(#mu)[pb]");
  ForwardMuon_Eta_plot_signal->GetXaxis()->SetTitleSize(0.05);
  ForwardMuon_Eta_plot_signal->GetYaxis()->SetTitleSize(0.05);
  ForwardMuon_Eta_plot_signal->GetXaxis()->SetLabelSize(0.04);
  ForwardMuon_Eta_plot_signal->GetYaxis()->SetLabelSize(0.04);
  ForwardMuon_Eta_plot_signal->GetXaxis()->SetTitleFont(132);
  ForwardMuon_Eta_plot_signal->GetYaxis()->SetTitleFont(132);
  ForwardMuon_Eta_plot_signal->GetYaxis()->SetRangeUser(0.0001,1000);
  
  ForwardMuon_Eta_plot_signal->Draw("HIST");
  ForwardMuon_Eta_plot_mumua_bkg->Draw("same" "HIST");
  ForwardMuon_Eta_plot_mumu_bkg->Draw("same" "HIST");
  ForwardMuon_Eta_plot_ff_bkg->Draw("same" "HIST");
  ForwardMuon_Eta_plot_ww_bkg->Draw("same" "HIST");
  
  TLegend *l110 = new TLegend(0.72,0.72,0.9,0.9);
  l110->AddEntry(ForwardMuon_Eta_plot_signal,"#mu#muh","l");
  l110->AddEntry(ForwardMuon_Eta_plot_ff_bkg,"#mu#muff","l");
  l110->AddEntry(ForwardMuon_Eta_plot_ww_bkg,"#mu#muww","l");
  l110->AddEntry(ForwardMuon_Eta_plot_mumua_bkg,"#mu#mu#gamma","l");
  l110->AddEntry(ForwardMuon_Eta_plot_mumu_bkg,"#mu#mu","l");
  l110->SetTextFont(132);
  l110->Draw();
  
  
  c110->SetLogy();
  c110->SetTickx();
  c110->SetTicky();
  c110->SetGridx();
  c110->SetGridy();
  c110->SaveAs("/mnt/e/Madgraph/MG5_aMC_v3_4_0/HZZ_bkg/plot_macro/output_plot/truth_level/ForwardMuon_Eta_truth.pdf");
  
  
  TCanvas *c120 = new TCanvas();
  
  ForwardMuon_E_plot_mumua_bkg->SetStats(0);
  ForwardMuon_E_plot_signal->SetStats(0);
  ForwardMuon_E_plot_signal->SetLineColor(kRed-4);
  ForwardMuon_E_plot_ff_bkg->SetLineColor(9002);
  ForwardMuon_E_plot_ww_bkg->SetLineColor(9003);
  ForwardMuon_E_plot_mumua_bkg->SetLineColor(9001);
  ForwardMuon_E_plot_mumu_bkg->SetLineColor(8);
  
  ForwardMuon_E_plot_ff_bkg->SetLineWidth(2);
  ForwardMuon_E_plot_ww_bkg->SetLineWidth(2);
  ForwardMuon_E_plot_mumua_bkg->SetLineWidth(2);
  ForwardMuon_E_plot_mumu_bkg->SetLineWidth(2);
  ForwardMuon_E_plot_signal->SetLineWidth(3);
  
  ForwardMuon_E_plot_signal->GetXaxis()->SetTitle("E(#mu^{-})[GeV]");
  ForwardMuon_E_plot_signal->GetYaxis()->SetTitle("d#sigma/dE(#mu^{-})[pb/GeV]");
  ForwardMuon_E_plot_signal->GetXaxis()->SetTitleSize(0.05);
  ForwardMuon_E_plot_signal->GetYaxis()->SetTitleSize(0.05);
  ForwardMuon_E_plot_signal->GetXaxis()->SetLabelSize(0.04);
  ForwardMuon_E_plot_signal->GetYaxis()->SetLabelSize(0.04);
  ForwardMuon_E_plot_signal->GetXaxis()->SetTitleFont(132);
  ForwardMuon_E_plot_signal->GetYaxis()->SetTitleFont(132);
  ForwardMuon_E_plot_signal->GetYaxis()->SetRangeUser(0.0001,2000);
  
  ForwardMuon_E_plot_signal->Draw("HIST");
  ForwardMuon_E_plot_mumua_bkg->Draw("same" "HIST");
  ForwardMuon_E_plot_mumu_bkg->Draw("same" "HIST");
  ForwardMuon_E_plot_ff_bkg->Draw("same" "HIST");
  ForwardMuon_E_plot_ww_bkg->Draw("same" "HIST");
  
  TLegend *l120 = new TLegend(0.72,0.72,0.9,0.9);
  l120->AddEntry(ForwardMuon_E_plot_signal,"#mu#muh","l");
  l120->AddEntry(ForwardMuon_E_plot_ff_bkg,"#mu#muff","l");
  l120->AddEntry(ForwardMuon_E_plot_ww_bkg,"#mu#muww","l");
  l120->AddEntry(ForwardMuon_E_plot_mumua_bkg,"#mu#mu#gamma","l");
  l120->AddEntry(ForwardMuon_E_plot_mumu_bkg,"#mu#mu","l");
  l120->SetTextFont(132);
  l120->Draw();
  
  c120->SetLogy();
  c120->SetTickx();
  c120->SetTicky();
  c120->SetGridx();
  c120->SetGridy();
  c120->SaveAs("/mnt/e/Madgraph/MG5_aMC_v3_4_0/HZZ_bkg/plot_macro/output_plot/truth_level/ForwardMuon_E_truth.png");
  
  TCanvas *c130 = new TCanvas();
  ForwardMuon_PT_plot_mumua_bkg->SetStats(0);
  ForwardMuon_PT_plot_signal->SetStats(0);
  ForwardMuon_PT_plot_signal->SetLineColor(kRed-4);
  ForwardMuon_PT_plot_ff_bkg->SetLineColor(9002);
  ForwardMuon_PT_plot_ww_bkg->SetLineColor(9003);
  ForwardMuon_PT_plot_mumua_bkg->SetLineColor(9001);
  ForwardMuon_PT_plot_mumu_bkg->SetLineColor(8);
  
  ForwardMuon_PT_plot_ff_bkg->SetLineWidth(2);
  ForwardMuon_PT_plot_ww_bkg->SetLineWidth(2);
  ForwardMuon_PT_plot_mumua_bkg->SetLineWidth(2);
  ForwardMuon_PT_plot_mumu_bkg->SetLineWidth(2);
  ForwardMuon_PT_plot_signal->SetLineWidth(3);
  
  ForwardMuon_PT_plot_signal->GetXaxis()->SetTitle("p_{T,min}(#mu)[GeV]");
  ForwardMuon_PT_plot_signal->GetYaxis()->SetTitle("d#sigma/dp_{T,min}(#mu)[pb/GeV]");
  ForwardMuon_PT_plot_signal->GetXaxis()->SetTitleSize(0.05);
  ForwardMuon_PT_plot_signal->GetYaxis()->SetTitleSize(0.05);
  ForwardMuon_PT_plot_signal->GetXaxis()->SetLabelSize(0.04);
  ForwardMuon_PT_plot_signal->GetYaxis()->SetLabelSize(0.04);
  ForwardMuon_PT_plot_signal->GetXaxis()->SetTitleFont(132);
  ForwardMuon_PT_plot_signal->GetYaxis()->SetTitleFont(132);
  ForwardMuon_PT_plot_signal->GetYaxis()->SetRangeUser(0.0001,1000);
  

  ForwardMuon_PT_plot_signal->Draw("HIST");
  ForwardMuon_PT_plot_mumua_bkg->Draw("same" "HIST");
  ForwardMuon_PT_plot_mumu_bkg->Draw("same" "HIST");
  ForwardMuon_PT_plot_ff_bkg->Draw("same" "HIST");
  ForwardMuon_PT_plot_ww_bkg->Draw("same" "HIST");
  
  
  TLegend *l130 = new TLegend(0.72,0.72,0.9,0.9);
  l130->AddEntry(ForwardMuon_PT_plot_signal,"#mu#muh","l");
  l130->AddEntry(ForwardMuon_PT_plot_ff_bkg,"#mu#muff","l");
  l130->AddEntry(ForwardMuon_PT_plot_ww_bkg,"#mu#muww","l");
  l130->AddEntry(ForwardMuon_PT_plot_mumua_bkg,"#mu#mu#gamma","l");
  l130->AddEntry(ForwardMuon_PT_plot_mumu_bkg,"#mu#mu","l");
  l130->SetTextFont(132);
  l130->Draw();
  
  
  c130->SetLogy();
  c130->SetTickx();
  c130->SetTicky();
  c130->SetGridx();
  c130->SetGridy();
  
  c130->SaveAs("/mnt/e/Madgraph/MG5_aMC_v3_4_0/HZZ_bkg/plot_macro/output_plot/truth_level/ForwardMuon_PT_truth.png");
  
  
  TCanvas *c140 = new TCanvas();
  ForwardMuon_sumPT_plot_mumua_bkg->SetStats(0);
  ForwardMuon_sumPT_plot_mumu_bkg->SetStats(0);
  ForwardMuon_sumPT_plot_signal->SetStats(0);
  ForwardMuon_sumPT_plot_signal->SetLineColor(kRed-4);
  ForwardMuon_sumPT_plot_ff_bkg->SetLineColor(9002);
  ForwardMuon_sumPT_plot_ww_bkg->SetLineColor(9003);
  ForwardMuon_sumPT_plot_mumua_bkg->SetLineColor(9001);
  ForwardMuon_sumPT_plot_mumu_bkg->SetLineColor(8);
  
  ForwardMuon_sumPT_plot_ff_bkg->SetLineWidth(2);
  ForwardMuon_sumPT_plot_ww_bkg->SetLineWidth(2);
  ForwardMuon_sumPT_plot_mumua_bkg->SetLineWidth(2);
  ForwardMuon_sumPT_plot_mumu_bkg->SetLineWidth(2);
  ForwardMuon_sumPT_plot_signal->SetLineWidth(3);
  
  ForwardMuon_sumPT_plot_signal->GetXaxis()->SetTitle("p_{T}(#mu#mu)[GeV]");
  ForwardMuon_sumPT_plot_signal->GetYaxis()->SetTitle("d#sigma/dp_{T}(#mu#mu)[pb/GeV]");
  ForwardMuon_sumPT_plot_signal->GetXaxis()->SetTitleSize(0.05);
  ForwardMuon_sumPT_plot_signal->GetYaxis()->SetTitleSize(0.05);
  ForwardMuon_sumPT_plot_signal->GetXaxis()->SetLabelSize(0.04);
  ForwardMuon_sumPT_plot_signal->GetYaxis()->SetLabelSize(0.04);
  ForwardMuon_sumPT_plot_signal->GetXaxis()->SetTitleFont(132);
  ForwardMuon_sumPT_plot_signal->GetYaxis()->SetTitleFont(132);
  ForwardMuon_sumPT_plot_signal->GetYaxis()->SetRangeUser(0.0001,2000);
  
  ForwardMuon_sumPT_plot_signal->Draw("HIST");
  ForwardMuon_sumPT_plot_mumu_bkg->Draw("same" "HIST");
  ForwardMuon_sumPT_plot_mumua_bkg->Draw("same" "HIST");
  ForwardMuon_sumPT_plot_ff_bkg->Draw("same" "HIST");
  ForwardMuon_sumPT_plot_ww_bkg->Draw("same" "HIST");
  
  TLegend *l140 = new TLegend(0.72,0.72,0.9,0.9);
  l140->AddEntry(ForwardMuon_sumPT_plot_signal,"#mu#muh","l");
  l140->AddEntry(ForwardMuon_sumPT_plot_ff_bkg,"#mu#muff","l");
  l140->AddEntry(ForwardMuon_sumPT_plot_ww_bkg,"#mu#muww","l");
  l140->AddEntry(ForwardMuon_sumPT_plot_mumua_bkg,"#mu#mu#gamma","l");
  l140->AddEntry(ForwardMuon_sumPT_plot_mumu_bkg,"#mu#mu","l");
  l140->SetTextFont(132);
  l140->Draw();
  
  
  c140->SetLogy();
  c140->SetTickx();
  c140->SetTicky();
  c140->SetGridx();
  c140->SetGridy();
  c140->SaveAs("/mnt/e/Madgraph/MG5_aMC_v3_4_0/HZZ_bkg/plot_macro/output_plot/truth_level/ForwardMuon_sumPT_truth.pdf");
  
  
  
  TCanvas *c3 = new TCanvas();
  Higgs_mass_plot_mumu_bkg->SetStats(0);
  Higgs_mass_plot_signal->SetStats(0);
  Higgs_mass_plot_signal->SetLineColor(kRed-4);
  Higgs_mass_plot_ff_bkg->SetLineColor(9002);
  Higgs_mass_plot_ww_bkg->SetLineColor(9003);
  Higgs_mass_plot_mumua_bkg->SetLineColor(9001);
  Higgs_mass_plot_mumu_bkg->SetLineColor(8);
  
  Higgs_mass_plot_ff_bkg->SetLineWidth(2);
  Higgs_mass_plot_ww_bkg->SetLineWidth(2);
  Higgs_mass_plot_mumua_bkg->SetLineWidth(2);
  Higgs_mass_plot_mumu_bkg->SetLineWidth(2);
  Higgs_mass_plot_signal->SetLineWidth(3);
  
  Higgs_mass_plot_signal->GetXaxis()->SetTitle("M_{recoil}[GeV]");
  Higgs_mass_plot_signal->GetYaxis()->SetTitle("d#sigma/dM_{recoil}[pb/GeV]");
  Higgs_mass_plot_signal->GetXaxis()->SetTitleSize(0.05);
  Higgs_mass_plot_signal->GetYaxis()->SetTitleSize(0.05);
  Higgs_mass_plot_signal->GetXaxis()->SetLabelSize(0.04);
  Higgs_mass_plot_signal->GetYaxis()->SetLabelSize(0.04);
  Higgs_mass_plot_signal->GetXaxis()->SetTitleFont(132);
  Higgs_mass_plot_signal->GetYaxis()->SetTitleFont(132);
  Higgs_mass_plot_signal->GetYaxis()->SetRangeUser(0.0001,1000);
  
  
  Higgs_mass_plot_signal->Draw("HIST");
  Higgs_mass_plot_mumu_bkg->Draw("same" "HIST");
  Higgs_mass_plot_mumua_bkg->Draw("same" "HIST");
  Higgs_mass_plot_ff_bkg->Draw("same" "HIST");
  Higgs_mass_plot_ww_bkg->Draw("same" "HIST");
  
  
  TLegend *l3 = new TLegend(0.72,0.72,0.9,0.9);
  l3->AddEntry(Higgs_mass_plot_signal,"#mu#muh","l");
  l3->AddEntry(Higgs_mass_plot_ff_bkg,"#mu#muff","l");
  l3->AddEntry(Higgs_mass_plot_ww_bkg,"#mu#muww","l");
  l3->AddEntry(Higgs_mass_plot_mumua_bkg,"#mu#mu#gamma","l");
  l3->AddEntry(Higgs_mass_plot_mumu_bkg,"#mu#mu","l");
  l3->SetTextFont(132);
  l3->Draw();
  
  c3->SetLogy();
  c3->SetTickx();
  c3->SetTicky();
  c3->SetGridx();
  c3->SetGridy();
  c3->SaveAs("/mnt/e/Madgraph/MG5_aMC_v3_4_0/HZZ_bkg/plot_macro/output_plot/truth_level/Higgs_mass_truth.pdf");
  
  
  
  
  
  
  TCanvas *c10 = new TCanvas();
  
  ForwardMuon_Emin_plot_mumua_bkg->SetStats(0);
  ForwardMuon_Emin_plot_signal->SetStats(0);
  ForwardMuon_Emin_plot_signal->SetLineColor(kRed-4);
  ForwardMuon_Emin_plot_ff_bkg->SetLineColor(9002);
  ForwardMuon_Emin_plot_ww_bkg->SetLineColor(9003);
  ForwardMuon_Emin_plot_mumua_bkg->SetLineColor(9001);
  ForwardMuon_Emin_plot_mumu_bkg->SetLineColor(8);
  
  ForwardMuon_Emin_plot_ff_bkg->SetLineWidth(2);
  ForwardMuon_Emin_plot_ww_bkg->SetLineWidth(2);
  ForwardMuon_Emin_plot_mumua_bkg->SetLineWidth(2);
  ForwardMuon_Emin_plot_mumu_bkg->SetLineWidth(2);
  ForwardMuon_Emin_plot_signal->SetLineWidth(3);
  
  ForwardMuon_Emin_plot_signal->GetXaxis()->SetTitle("E_{min}(#mu)[GeV]");
  ForwardMuon_Emin_plot_signal->GetYaxis()->SetTitle("d#sigma/dE_{min}(#mu)[pb/GeV]");
  ForwardMuon_Emin_plot_signal->GetXaxis()->SetTitleSize(0.05);
  ForwardMuon_Emin_plot_signal->GetYaxis()->SetTitleSize(0.05);
  ForwardMuon_Emin_plot_signal->GetXaxis()->SetLabelSize(0.04);
  ForwardMuon_Emin_plot_signal->GetYaxis()->SetLabelSize(0.04);
  ForwardMuon_Emin_plot_signal->GetXaxis()->SetTitleFont(132);
  ForwardMuon_Emin_plot_signal->GetYaxis()->SetTitleFont(132);
  ForwardMuon_Emin_plot_signal->GetYaxis()->SetRangeUser(0.0001,1000);
  
  
  ForwardMuon_Emin_plot_signal->Draw("HIST");
  ForwardMuon_Emin_plot_mumua_bkg->Draw("same" "HIST");
  ForwardMuon_Emin_plot_mumu_bkg->Draw("same" "HIST");
  ForwardMuon_Emin_plot_ff_bkg->Draw("same" "HIST");
  ForwardMuon_Emin_plot_ww_bkg->Draw("same" "HIST");
  
  
  TLegend *l10 = new TLegend(0.72,0.72,0.9,0.9);
  l10->AddEntry(ForwardMuon_Emin_plot_signal,"#mu#muh","l");
  l10->AddEntry(ForwardMuon_Emin_plot_ff_bkg,"#mu#muff","l");
  l10->AddEntry(ForwardMuon_Emin_plot_ww_bkg,"#mu#muww","l");
  l10->AddEntry(ForwardMuon_Emin_plot_mumua_bkg,"#mu#mu#gamma","l");
  l10->AddEntry(ForwardMuon_Emin_plot_mumu_bkg,"#mu#mu","l");
  l10->SetTextFont(132);
  l10->Draw();
  
  c10->SetLogy();
  c10->SetTickx();
  c10->SetTicky();
  c10->SetGridx();
  c10->SetGridy();
  c10->SaveAs("/mnt/e/Madgraph/MG5_aMC_v3_4_0/HZZ_bkg/plot_macro/output_plot/truth_level/ForwardMuon_Emin_truth.pdf");
  
  
  
  

  
  
}
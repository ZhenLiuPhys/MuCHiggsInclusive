//#include "DataFormats/Math/interface/deltaR.h"
//#include "DataFormats/Math/interface/deltaPhi.h"
#include <vector>
#include <iostream>
#include <math.h>
#include "TH1F.h"
#include "TLorentzVector.h"
#include "TH1F.h"
#include <TLatex.h>
//#include "../jj_bkg/Events/run_01/jj_bkg.h"

void compare_mumu_mumua(){
  
  //TFile *f0 = TFile::Open("/mnt/e/Madgraph/MG5_aMC_v3_4_0/HZZ_bkg/h_signal/Events/h_signal_beam_resolution.root");
  //TFile *f0 = TFile::Open("/mnt/e/Madgraph/MG5_aMC_v3_4_0/HZZ_bkg/h_signal/Events/run_03/tag_1_delphes_events.root");
  //TFile *f0plus = TFile::Open("/mnt/e/Madgraph/MG5_aMC_v3_4_0/HZZ_bkg/h_signal/Events/run_plus/tag_2_delphes_events.root");
  //TFile *f0minus = TFile::Open("/mnt/e/Madgraph/MG5_aMC_v3_4_0/HZZ_bkg/h_signal/Events/run_minus/tag_3_delphes_events.root");
  
  //TFile *f1 = TFile::Open("/mnt/e/Madgraph/MG5_aMC_v3_4_0/HZZ_bkg/jj_bkg/Events/jj_bkg_beam_resolution.root");
  //TFile *f1 = TFile::Open("/mnt/e/Madgraph/MG5_aMC_v3_4_0/HZZ_bkg/jj_bkg/Events/run_03/tag_1_delphes_events.root");
  //TFile *f1plus = TFile::Open("/mnt/e/Madgraph/MG5_aMC_v3_4_0/HZZ_bkg/jj_bkg/Events/run_plus/tag_2_delphes_events.root");
  //TFile *f1minus = TFile::Open("/mnt/e/Madgraph/MG5_aMC_v3_4_0/HZZ_bkg/jj_bkg/Events/run_minus/tag_3_delphes_events.root");
  
  //TFile *f2 = TFile::Open("/mnt/e/Madgraph/MG5_aMC_v3_4_0/HZZ_bkg/ww_bkg/Events/ww_bkg_beam_resolution.root");
  //TFile *f2 = TFile::Open("/mnt/e/Madgraph/MG5_aMC_v3_4_0/HZZ_bkg/ww_bkg/Events/run_04/tag_1_delphes_events.root");
  //TFile *f2plus = TFile::Open("/mnt/e/Madgraph/MG5_aMC_v3_4_0/HZZ_bkg/ww_bkg/Events/run_plus/tag_1_delphes_events.root");
  //TFile *f2minus = TFile::Open("/mnt/e/Madgraph/MG5_aMC_v3_4_0/HZZ_bkg/ww_bkg/Events/run_minus/tag_2_delphes_events.root");
  
  TFile *f3 = TFile::Open("/mnt/e/Madgraph/MG5_aMC_v3_4_0/HZZ_bkg/mumu_bkg/Events/mumu_bkg_beam_resolution.root");
  //TFile *f3 = TFile::Open("/mnt/e/Madgraph/MG5_aMC_v3_4_0/HZZ_bkg/mumu_bkg/Events/run_03/tag_7_delphes_events.root");
  //TFile *f3plus = TFile::Open("/mnt/e/Madgraph/MG5_aMC_v3_4_0/HZZ_bkg/mumu_bkg/Events/run_plus/tag_3_delphes_events.root");
  //TFile *f3minus = TFile::Open("/mnt/e/Madgraph/MG5_aMC_v3_4_0/HZZ_bkg/mumu_bkg/Events/run_minus/tag_4_delphes_events.root");
  
  TFile *f4 = TFile::Open("/mnt/e/Madgraph/MG5_aMC_v3_4_0/HZZ_bkg/mumua_bkg/Events/mumua_bkg_beam_resolution.root");
  //TFile *f4 = TFile::Open("/mnt/e/Madgraph/MG5_aMC_v3_4_0/HZZ_bkg/mumua_bkg/Events/run_05/tag_2_delphes_events.root");
  //TFile *f4 = TFile::Open("/mnt/e/Madgraph/MG5_aMC_v3_4_0/HZZ_bkg/mumua_bkg/Events/run_withshower/tag_1_delphes_events.root");
  //TFile *f4plus = TFile::Open("/mnt/e/Madgraph/MG5_aMC_v3_4_0/HZZ_bkg/mumua_bkg/Events/run_plus/tag_1_delphes_events.root");
  //TFile *f4minus = TFile::Open("/mnt/e/Madgraph/MG5_aMC_v3_4_0/HZZ_bkg/mumua_bkg/Events/run_minus/tag_2_delphes_events.root");
  
  //TFile *f5 = TFile::Open("/mnt/e/Madgraph/MG5_aMC_v3_4_0/HZZ_bkg/vmvm_bkg/Events/vmvm_bkg_beam_resolution.root");
  //TFile *f5 = TFile::Open("/mnt/e/Madgraph/MG5_aMC_v3_4_0/HZZ_bkg/vmvm_bkg/Events/run_02/tag_1_delphes_events.root");
  //TFile *f5plus = TFile::Open("/mnt/e/Madgraph/MG5_aMC_v3_4_0/HZZ_bkg/vmvm_bkg/Events/run_plus/tag_1_delphes_events.root");
  //TFile *f5minus = TFile::Open("/mnt/e/Madgraph/MG5_aMC_v3_4_0/HZZ_bkg/vmvm_bkg/Events/run_minus/tag_2_delphes_events.root");
  
  //TFile *f6 = TFile::Open("/mnt/e/Madgraph/MG5_aMC_v3_4_0/HZZ_bkg/ee_bkg/Events/ee_bkg_beam_resolution.root");
  //TFile *f6 = TFile::Open("/mnt/e/Madgraph/MG5_aMC_v3_4_0/HZZ_bkg/ee_bkg/Events/run_02/tag_1_delphes_events.root");
  //TFile *f6plus = TFile::Open("/mnt/e/Madgraph/MG5_aMC_v3_4_0/HZZ_bkg/ee_bkg/Events/run_plus/tag_1_delphes_events.root");
  //TFile *f6minus = TFile::Open("/mnt/e/Madgraph/MG5_aMC_v3_4_0/HZZ_bkg/ee_bkg/Events/run_minus/tag_1_delphes_events.root");
  
  
  
  
  
  
  TTree *b3 = (TTree*)f3->Get("Delphes");
  //TTree *b3plus = (TTree*)f3plus->Get("Delphes");
  //TTree *b3minus = (TTree*)f3minus->Get("Delphes");
  
  TTree *b4 = (TTree*)f4->Get("Delphes");
  //TTree *b4plus = (TTree*)f4plus->Get("Delphes");
  //TTree *b4minus = (TTree*)f4minus->Get("Delphes");
  
  
  

  //create histograms
  // TH1F *plotvariable_for_code = new TH1F("plot_name","plot_title",nbins,xlow,xup);
  
  
  TH1F *ForwardMuon_Eta_plot_mumu_bkg = new TH1F("Forwardmuon_Eta_mumu_bkg","Forwardmuon_Eta_mumu_bkg",50,-10,10);
  TH1F *ForwardMuon_E_plot_mumu_bkg = new TH1F("Forwardmuon_E_mumu_bkg","Forwardmuon_E_mumu_bkg",25,-10,10000);
  TH1F *ForwardMuon_PT_plot_mumu_bkg = new TH1F("Forwardmuon_PT_mumu_bkg","Forwardmuon_PT_mumu_bkg",25,-10,1000);
  TH1F *ForwardMuon_sumPT_plot_mumu_bkg = new TH1F("Forwardmuon_sumPT_mumu_bkg","",50,0,250);
  
  
  TH1F *ForwardMuon_Eta_plot_mumua_bkg = new TH1F("Forwardmuon_Eta_mumua_bkg","Forwardmuon_Eta_mumua_bkg",50,-10,10);
  TH1F *ForwardMuon_E_plot_mumua_bkg = new TH1F("Forwardmuon_E_mumua_bkg","Forwardmuon_E_mumua_bkg",25,-10,10000);
  TH1F *ForwardMuon_PT_plot_mumua_bkg = new TH1F("Forwardmuon_PT_mumua_bkg","Forwardmuon_PT_mumua_bkg",25,-10,1000);
  TH1F *ForwardMuon_sumPT_plot_mumua_bkg = new TH1F("Forwardmuon_sumPT_mumua_bkg","sumPT_mumua_bkg",50,0,250);
  
  
  
  
  
  
  TH1F *Higgs_mass_plot_mumu_bkg = new TH1F("Higgs_mass_mumu_bkg","Higgs_mass_mumu_bkg",50,-5000,5000);
  TH1F *Higgs_mass_plot_mumua_bkg = new TH1F("Higgs_mass_mumua_bkg","Higgs_mass_mumua_bkg",50,-5000,5000);
  
  
	
  

  
  vector<double> countnumber_mumu_bkg(10,0);
  vector<double> countnumber_mumua_bkg(10,0);
  
	
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
  
  
  
 


  
  //define new variable for plot
  //double tempdR = 999.0;

  
  
  int entries3=b3->GetEntries();
  //int entries3plus=b3plus->GetEntries();
  //int entries3minus=b3minus->GetEntries();
  
  int entries4=b4->GetEntries();
  //int entries4plus=b4plus->GetEntries();
  //int entries4minus=b4minus->GetEntries();
  
  
  
  
  std::cout <<"entries3:"<<entries3<<std::endl;
  std::cout <<"entries4:"<<entries4<<std::endl;
  
  
  
  
  
  
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
                //Higgs_mass_plot_mumu_bkg->Fill(Higgs_mass);
                //ForwardMuon_Eta_plot_mumu_bkg->Fill(Muon1.Eta());
                //ForwardMuon_E_plot_mumu_bkg->Fill(Muon1.E());
                //ForwardMuon_PT_plot_mumu_bkg->Fill(Muon1.Pt());
                //ForwardMuon_Eta_plot_mumu_bkg->Fill(Muon2.Eta());
                //ForwardMuon_E_plot_mumu_bkg->Fill(Muon2.E());
                //ForwardMuon_PT_plot_mumu_bkg->Fill(Muon2.Pt());
                ForwardMuon_sumPT_plot_mumu_bkg->Fill(Twomuon_PT,weight_mumu);
                
                
                if(Twomuon_PT > 50){
                    countnumber_mumu_bkg[4]=countnumber_mumu_bkg[4]+1;
                    ForwardMuon_E_plot_mumu_bkg->Fill(Muon1.E());
                    ForwardMuon_PT_plot_mumu_bkg->Fill(Muon1.Pt());
                    ForwardMuon_Eta_plot_mumu_bkg->Fill(Muon1.Eta());
                    ForwardMuon_E_plot_mumu_bkg->Fill(Muon2.E());
                    ForwardMuon_PT_plot_mumu_bkg->Fill(Muon2.Pt());
                    ForwardMuon_Eta_plot_mumu_bkg->Fill(Muon2.Eta());
                    Higgs_mass_plot_mumu_bkg->Fill(Higgs_mass);
                    //ForwardMuon_sumPT_plot_mumu_bkg->Fill(Twomuon_PT);
                
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
                //Higgs_mass_plot_mumua_bkg->Fill(Higgs_mass);
                //ForwardMuon_Eta_plot_mumua_bkg->Fill(Muon1.Eta());
                //ForwardMuon_E_plot_mumua_bkg->Fill(Muon1.E());
                //ForwardMuon_PT_plot_mumua_bkg->Fill(Muon1.Pt());
                //ForwardMuon_Eta_plot_mumua_bkg->Fill(Muon2.Eta());
                //ForwardMuon_E_plot_mumua_bkg->Fill(Muon2.E());
                //ForwardMuon_PT_plot_mumua_bkg->Fill(Muon2.Pt());
                ForwardMuon_sumPT_plot_mumua_bkg->Fill(Twomuon_PT,weight_mumua);
                
                
                if(Twomuon_PT > 50){
                    countnumber_mumua_bkg[4]=countnumber_mumua_bkg[4]+1;
                    ForwardMuon_E_plot_mumua_bkg->Fill(Muon1.E());
                    ForwardMuon_PT_plot_mumua_bkg->Fill(Muon1.Pt());
                    ForwardMuon_Eta_plot_mumua_bkg->Fill(Muon1.Eta());
                    ForwardMuon_E_plot_mumua_bkg->Fill(Muon2.E());
                    ForwardMuon_PT_plot_mumua_bkg->Fill(Muon2.Pt());
                    ForwardMuon_Eta_plot_mumua_bkg->Fill(Muon2.Eta());
                    Higgs_mass_plot_mumua_bkg->Fill(Higgs_mass);
                    //ForwardMuon_sumPT_plot_mumua_bkg->Fill(Twomuon_PT);
                
                
                }
                
            }
            
            
        }
        

    }   
       
    
  }
  
  std::cout <<"pass4"<<std::endl;
  
  
  
  // cutflow
  
  
  
  
  std::cout <<"Total_mumu_bkg:"<<countnumber_mumu_bkg[0]<<"->"<<countnumber_mumu_bkg[0]/countnumber_mumu_bkg[0]<<std::endl;
  std::cout <<"ForwardMuon=2_mumu_bkg:"<<countnumber_mumu_bkg[1]<<"->"<<countnumber_mumu_bkg[1]/countnumber_mumu_bkg[0]<<std::endl;
  std::cout <<"ForwardMuon_backtoback_mumu_bkg:"<<countnumber_mumu_bkg[2]<<"->"<<countnumber_mumu_bkg[2]/countnumber_mumu_bkg[0]<<std::endl;
  std::cout <<"PT>20_mumu_bkg:"<<countnumber_mumu_bkg[3]<<"->"<<countnumber_mumu_bkg[3]/countnumber_mumu_bkg[0]<<std::endl;
  std::cout <<"sumPT>50_mumu_bkg:"<<countnumber_mumu_bkg[4]<<"->"<<countnumber_mumu_bkg[4]/countnumber_mumu_bkg[0]<<std::endl;
  
  
  std::cout <<"Total_mumua_bkg:"<<countnumber_mumua_bkg[0]<<"->"<<countnumber_mumua_bkg[0]/countnumber_mumua_bkg[0]<<std::endl;
  std::cout <<"ForwardMuon=2_mumua_bkg:"<<countnumber_mumua_bkg[1]<<"->"<<countnumber_mumua_bkg[1]/countnumber_mumua_bkg[0]<<std::endl;
  std::cout <<"ForwardMuon_backtoback_mumua_bkg:"<<countnumber_mumua_bkg[2]<<"->"<<countnumber_mumua_bkg[2]/countnumber_mumua_bkg[0]<<std::endl;
  std::cout <<"PT>20_mumua_bkg:"<<countnumber_mumua_bkg[3]<<"->"<<countnumber_mumua_bkg[3]/countnumber_mumua_bkg[0]<<std::endl;
  std::cout <<"sumPT>50_mumua_bkg:"<<countnumber_mumua_bkg[4]<<"->"<<countnumber_mumua_bkg[4]/countnumber_mumua_bkg[0]<<std::endl;
  
  
  
  
  
  
  // draw plot
  gStyle->SetPadLeftMargin(0.17); gStyle->SetPadRightMargin(0.05); gStyle->SetPadBottomMargin(0.15);
  gStyle->SetTitleFont(132, "xyz"); 
  gStyle->SetLabelFont(132, "xyz"); 
  gStyle->SetTextFont(132); 
  
  TColor *mumua_color = new TColor(9001,0.317647, 0.654902, 0.752941); 
  TColor *ff_color = new TColor(9002,0.705882, 0.494118, 0.545098); 
  TColor *ww_color = new TColor(9003,0.1875, 0.54687, 0.347656); 
  
  
  
  
  
  TCanvas *c4 = new TCanvas();
  ForwardMuon_sumPT_plot_mumu_bkg->SetStats(0);
  ForwardMuon_sumPT_plot_mumua_bkg->SetStats(0);
  ForwardMuon_sumPT_plot_mumu_bkg->SetLineColor(8);
  ForwardMuon_sumPT_plot_mumua_bkg->SetLineColor(9001);
  ForwardMuon_sumPT_plot_mumu_bkg->SetLineWidth(2);
  ForwardMuon_sumPT_plot_mumua_bkg->SetLineWidth(2);
  
  ForwardMuon_sumPT_plot_mumu_bkg->GetXaxis()->SetTitle("p_{T}(#mu#mu)[GeV]");
  ForwardMuon_sumPT_plot_mumu_bkg->GetYaxis()->SetTitle("d#sigma/dp_{T}(#mu#mu)[pb/GeV]");
  ForwardMuon_sumPT_plot_mumu_bkg->GetXaxis()->SetTitleSize(0.07);
  ForwardMuon_sumPT_plot_mumu_bkg->GetYaxis()->SetTitleSize(0.07);
  ForwardMuon_sumPT_plot_mumu_bkg->GetXaxis()->SetLabelSize(0.06);
  ForwardMuon_sumPT_plot_mumu_bkg->GetYaxis()->SetLabelSize(0.06);
  ForwardMuon_sumPT_plot_mumu_bkg->GetXaxis()->SetRangeUser(-10,250);
  ForwardMuon_sumPT_plot_mumu_bkg->GetYaxis()->SetRangeUser(0.01,1000);
  
  ForwardMuon_sumPT_plot_mumu_bkg->Draw("HIST");
  ForwardMuon_sumPT_plot_mumua_bkg->Draw("same" "HIST");
  
  TLegend *l4 = new TLegend(0.75,0.75,0.95,0.9);
  l4->AddEntry(ForwardMuon_sumPT_plot_mumu_bkg,"#mu#mu","l");
  l4->AddEntry(ForwardMuon_sumPT_plot_mumua_bkg,"#mu#mu#gamma","l");
  l4->SetTextFont(132);
  l4->SetTextSize(0.05);
  l4->Draw();
  
  c4->SetLogy();
  c4->SetTickx();
  c4->SetTicky();
  c4->SetGridx();
  //c4->SetGridy();
  
  
  c4->SaveAs("/mnt/e/Madgraph/MG5_aMC_v3_4_0/HZZ_bkg/plot_macro/output_plot/SumPT_mumu_mumua.pdf");
  
  /*TCanvas *c1 = new TCanvas();
  AllResolved_onShellWboson_Pt->DrawNormalized();
  AllResolved_onShellZboson_Pt->DrawNormalized("same");
  c1->SaveAs("/afs/cern.ch/user/l/lipe/private/HHtoWWgg/CMSSW_10_2_22/src/GEN-SIM-analyzer/GenAnalyzer/Plotting-Macro/makeplot/node1/AK4onShellWboson_Pt.png");
  
  */
  
}
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

void compare_mumu_mumua_truth(){
  
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
  
  //TFile *f3 = TFile::Open("/mnt/e/Madgraph/MG5_aMC_v3_4_0/HZZ_bkg/mumu_bkg/Events/mumu_bkg_beam_resolution.root");
  //TFile *f3 = TFile::Open("/mnt/e/Madgraph/MG5_aMC_v3_4_0/HZZ_bkg/mumu_bkg/Events/run_03/tag_7_delphes_events.root");
  //TFile *f3 = TFile::Open("/mnt/e/Madgraph/MG5_aMC_v3_4_0/HZZ_bkg/mumu_bkg/Events/run_03/tag_7_pythia8_events.root");
  TFile *f3 = TFile::Open("/mnt/e/Madgraph/MG5_aMC_v3_4_0/HZZ_bkg/mumu_bkg/Events/10_TeV_1000000/tag_1_pythia8_events.root");
  //TFile *f4 = TFile::Open("/mnt/e/Madgraph/MG5_aMC_v3_4_0/HZZ_bkg/mumua_bkg/Events/mumua_bkg_beam_resolution.root");
  //TFile *f4 = TFile::Open("/mnt/e/Madgraph/MG5_aMC_v3_4_0/HZZ_bkg/mumua_bkg/Events/run_05/tag_2_delphes_events.root");
  //TFile *f4 = TFile::Open("/mnt/e/Madgraph/MG5_aMC_v3_4_0/HZZ_bkg/mumua_bkg/Events/run_withshower/tag_1_delphes_events.root");
  //TFile *f4plus = TFile::Open("/mnt/e/Madgraph/MG5_aMC_v3_4_0/HZZ_bkg/mumua_bkg/Events/run_plus/tag_1_delphes_events.root");
  //TFile *f4minus = TFile::Open("/mnt/e/Madgraph/MG5_aMC_v3_4_0/HZZ_bkg/mumua_bkg/Events/run_minus/tag_2_delphes_events.root");
  TFile *f4 = TFile::Open("/mnt/e/Madgraph/MG5_aMC_v3_4_0/HZZ_bkg/mumua_bkg/Events/run_withshower/tag_1_pythia8_events.root");
  
  //TFile *f5 = TFile::Open("/mnt/e/Madgraph/MG5_aMC_v3_4_0/HZZ_bkg/vmvm_bkg/Events/vmvm_bkg_beam_resolution.root");
  //TFile *f5 = TFile::Open("/mnt/e/Madgraph/MG5_aMC_v3_4_0/HZZ_bkg/vmvm_bkg/Events/run_02/tag_1_delphes_events.root");
  //TFile *f5plus = TFile::Open("/mnt/e/Madgraph/MG5_aMC_v3_4_0/HZZ_bkg/vmvm_bkg/Events/run_plus/tag_1_delphes_events.root");
  //TFile *f5minus = TFile::Open("/mnt/e/Madgraph/MG5_aMC_v3_4_0/HZZ_bkg/vmvm_bkg/Events/run_minus/tag_2_delphes_events.root");
  
  //TFile *f6 = TFile::Open("/mnt/e/Madgraph/MG5_aMC_v3_4_0/HZZ_bkg/ee_bkg/Events/ee_bkg_beam_resolution.root");
  //TFile *f6 = TFile::Open("/mnt/e/Madgraph/MG5_aMC_v3_4_0/HZZ_bkg/ee_bkg/Events/run_02/tag_1_delphes_events.root");
  //TFile *f6plus = TFile::Open("/mnt/e/Madgraph/MG5_aMC_v3_4_0/HZZ_bkg/ee_bkg/Events/run_plus/tag_1_delphes_events.root");
  //TFile *f6minus = TFile::Open("/mnt/e/Madgraph/MG5_aMC_v3_4_0/HZZ_bkg/ee_bkg/Events/run_minus/tag_1_delphes_events.root");
  
  
  
  
  
  
  TTree *b3 = (TTree*)f3->Get("Events");
  //TTree *b3plus = (TTree*)f3plus->Get("Delphes");
  //TTree *b3minus = (TTree*)f3minus->Get("Delphes");
  
  TTree *b4 = (TTree*)f4->Get("Events");
  //TTree *b4plus = (TTree*)f4plus->Get("Delphes");
  //TTree *b4minus = (TTree*)f4minus->Get("Delphes");
  
  
  

  //create histograms
  // TH1F *plotvariable_for_code = new TH1F("plot_name","plot_title",nbins,xlow,xup);
  
  
  
  TH1F *ForwardMuon_sumPT_plot_mumu_bkg = new TH1F("Forwardmuon_sumPT_mumu_bkg","",50,0,80);
  
  TH1F *ForwardMuon_sumPT_plot_mumua_bkg = new TH1F("Forwardmuon_sumPT_mumua_bkg","",50,0,80);



  //TH1F *ForwardMuon_sumPT_plot_mumu_bkg = new TH1F("Forwardmuon_sumPT_mumu_bkg","",50,0,10);
  
  //TH1F *ForwardMuon_sumPT_plot_mumua_bkg = new TH1F("Forwardmuon_sumPT_mumua_bkg","",50,0,10);
  
  
  
  
  
	
  

  
  vector<double> countnumber_mumu_bkg(10,0);
  vector<double> countnumber_mumua_bkg(10,0);
  
	
  static constexpr Int_t kMaxForwardMuon = 4;
  
  Int_t           Particle_pid[355];   //[Event_numberP]
  Double_t        Particle_px[355];   //[Event_numberP]
  Double_t        Particle_py[355];   //[Event_numberP]
  Double_t        Particle_pz[355];   //[Event_numberP]
  Double_t        Particle_energy[355];   //[Event_numberP]
  Double_t        Particle_mass[355];   //[Event_numberP]
  Int_t           Particle_status[355];   //[Event_numberP]
  
  TBranch        *b_Particle_pid;   //!
  TBranch        *b_Particle_px;   //!
  TBranch        *b_Particle_py;   //!
  TBranch        *b_Particle_pz;   //!
  TBranch        *b_Particle_energy;   //!
  TBranch        *b_Particle_mass;   //!
  TBranch        *b_Particle_status;   //!
  
  
  
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
  //double weight_mumu=11150.0/133333.0;
  double weight_mumu=11150.0/1000000.0;
  for (int i=0; i<entries3; ++i){
    b3->GetEntry(i);
    int particle_length = b3->GetLeaf("Particle_status")->GetLen();
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
    
    for (int j=2; j<particle_length-1; ++j){
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
                    
                
                    
            
                if(Twomuon_PT > 50){
                    countnumber_mumu_bkg[4]=countnumber_mumu_bkg[4]+1;
                
                
                }
            
            
            
            
            }
        }
        

    }   
       
    
  }
  
  std::cout <<"pass3"<<std::endl; 
  
  //////////////////////////mumua_bkg//////////////////////////////////////////////////////////////////////
  //double weight_mumua=754.8/286000.0;
  double weight_mumua=754.8/200000.0;
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
            
            
            
            if(Muon1.Pt()>20 && Muon2.Pt()>20){
                countnumber_mumua_bkg[3]=countnumber_mumua_bkg[3]+1;
                
                ForwardMuon_sumPT_plot_mumua_bkg->Fill(Twomuon_PT,weight_mumua);
                
                
                
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
  //ForwardMuon_sumPT_plot_mumu_bkg->GetXaxis()->SetRangeUser(0,150);
  ForwardMuon_sumPT_plot_mumu_bkg->GetYaxis()->SetRangeUser(0.05,1000);
  
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
  
  c4->SaveAs("/mnt/e/Madgraph/MG5_aMC_v3_4_0/HZZ_bkg/plot_macro/output_plot/truth_level/SumPT_mumu_mumua_truth.pdf");
  //c4->SaveAs("/mnt/e/Madgraph/MG5_aMC_v3_4_0/HZZ_bkg/plot_macro/output_plot/truth_level/SumPT_mumu_mumua_truth_zoom_in.pdf");
  
  
  
}
{
//=========Macro generated from canvas: C/C	
//=========  (Thu Sep 11 16:44:12 2014) by ROOT version5.34/20
  TCanvas *C = new TCanvas("C", "C", 0, 0, 800, 700);
  C->SetFillColor(0);
  C->SetBorderMode(0);
  C->SetFrameFillStyle(0);
  C->SetFrameBorderMode(0);
  
  // ------------>Primitives in pad: pad1
  TPad *pad1 = new TPad("pad1", "pad1",0,0.275,1,1);
  pad1->Draw();
  pad1->cd();
  //pad1->Range(0.4125,0.138068,1.2875,4.580473);
  pad1->SetFillColor(0);
  pad1->SetBorderMode(0);
  pad1->SetBorderSize(2);
  pad1->SetBottomMargin(0.02);
  pad1->SetTopMargin(0.08);
  pad1->SetLeftMargin(0.12);
  pad1->SetRightMargin(0.03);
  pad1->SetFrameBorderMode(0);
  pad1->SetFrameBorderMode(0);
  pad1->SetFillColor(0);
  pad1->SetBorderMode(0);
  pad1->SetTickx();
  pad1->SetTicky();
  
  Double_t xAxis33[5] = {0.5, 0.6, 0.75, 0.9, 1.2}; 
   
  TH1F *Data_INC_1D_2mu_Box = new TH1F("Data_INC_1D_2mu_Box","",4, xAxis33);
  Data_INC_1D_2mu_Box->SetBinContent(1,66);
  Data_INC_1D_2mu_Box->SetBinContent(2,43);
  Data_INC_1D_2mu_Box->SetBinContent(3,39);
  Data_INC_1D_2mu_Box->SetBinContent(4,27);
  Data_INC_1D_2mu_Box->SetBinError(1,8.124038);
  Data_INC_1D_2mu_Box->SetBinError(2,6.557439);
  Data_INC_1D_2mu_Box->SetBinError(3,6.244998);
  Data_INC_1D_2mu_Box->SetBinError(4,5.196152);
  Data_INC_1D_2mu_Box->SetMinimum(0.0);
  Data_INC_1D_2mu_Box->SetMaximum(132);
  Data_INC_1D_2mu_Box->SetEntries(175);
  Data_INC_1D_2mu_Box->SetStats(0);
  Data_INC_1D_2mu_Box->SetFillColor(1);
  Data_INC_1D_2mu_Box->SetMarkerStyle(20);
  Data_INC_1D_2mu_Box->SetLabelSize(0);
  Data_INC_1D_2mu_Box->GetXaxis()->SetLabelOffset(999);

   Data_INC_1D_2mu_Box->SetYTitle("Events / bin");
   Data_INC_1D_2mu_Box->SetMarkerSize(0.7);
   Data_INC_1D_2mu_Box->SetMarkerColor(kBlack);
   Data_INC_1D_2mu_Box->SetLineWidth(2);
   Data_INC_1D_2mu_Box->SetLineColor(kBlack);
   Data_INC_1D_2mu_Box->GetXaxis()->SetTitle("RSQ");
   Data_INC_1D_2mu_Box->GetXaxis()->SetRange(1,4);
   Data_INC_1D_2mu_Box->GetXaxis()->SetLabelFont(42);
   Data_INC_1D_2mu_Box->GetXaxis()->SetLabelSize(0.035);
   Data_INC_1D_2mu_Box->GetXaxis()->SetTitleSize(0.035);
   Data_INC_1D_2mu_Box->GetXaxis()->SetTitleFont(42);
   Data_INC_1D_2mu_Box->GetYaxis()->SetLabelFont(42);
   Data_INC_1D_2mu_Box->GetYaxis()->SetLabelSize(0.05);
   Data_INC_1D_2mu_Box->GetYaxis()->SetTitleSize(0.0815);
   Data_INC_1D_2mu_Box->GetYaxis()->SetTitleOffset(0.65);
   Data_INC_1D_2mu_Box->GetYaxis()->SetTitleFont(42);
   Data_INC_1D_2mu_Box->GetZaxis()->SetLabelFont(42);
   Data_INC_1D_2mu_Box->GetZaxis()->SetLabelSize(0.035);
   Data_INC_1D_2mu_Box->GetZaxis()->SetTitleSize(0.035);
   Data_INC_1D_2mu_Box->GetZaxis()->SetTitleFont(42);
   Data_INC_1D_2mu_Box->Draw("pe");
   
  Double_t xAxis34[5] = {0.5, 0.6, 0.75, 0.9, 1.2}; 
   
   TH1F *TT_INC_1D_2mu_Box__17 = new TH1F("TT_INC_1D_2mu_Box__17","",4, xAxis34);
   TT_INC_1D_2mu_Box__17->SetBinContent(1,50.59721);
   TT_INC_1D_2mu_Box__17->SetBinContent(2,49.28106);
   TT_INC_1D_2mu_Box__17->SetBinContent(3,30.17629);
   TT_INC_1D_2mu_Box__17->SetBinContent(4,21.11689);
   TT_INC_1D_2mu_Box__17->SetBinError(1,1.653109);
   TT_INC_1D_2mu_Box__17->SetBinError(2,1.659922);
   TT_INC_1D_2mu_Box__17->SetBinError(3,1.286442);
   TT_INC_1D_2mu_Box__17->SetBinError(4,1.023055);
   TT_INC_1D_2mu_Box__17->SetEntries(4082);
   TT_INC_1D_2mu_Box__17->SetDirectory(0);
   TT_INC_1D_2mu_Box__17->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ffcccc");
   TT_INC_1D_2mu_Box__17->SetFillColor(ci);

   ci = TColor::GetColor("#ffcccc");
   TT_INC_1D_2mu_Box__17->SetLineColor(ci);
   TT_INC_1D_2mu_Box__17->SetLineWidth(2);
   TT_INC_1D_2mu_Box__17->GetXaxis()->SetTitle("RSQ");
   TT_INC_1D_2mu_Box__17->GetXaxis()->SetRange(1,4);
   TT_INC_1D_2mu_Box__17->GetXaxis()->SetLabelFont(42);
   TT_INC_1D_2mu_Box__17->GetXaxis()->SetLabelSize(0.035);
   TT_INC_1D_2mu_Box__17->GetXaxis()->SetTitleSize(0.035);
   TT_INC_1D_2mu_Box__17->GetXaxis()->SetTitleFont(42);
   TT_INC_1D_2mu_Box__17->GetYaxis()->SetLabelFont(42);
   TT_INC_1D_2mu_Box__17->GetYaxis()->SetLabelSize(0.035);
   TT_INC_1D_2mu_Box__17->GetYaxis()->SetTitleSize(0.035);
   TT_INC_1D_2mu_Box__17->GetYaxis()->SetTitleFont(42);
   TT_INC_1D_2mu_Box__17->GetZaxis()->SetLabelFont(42);
   TT_INC_1D_2mu_Box__17->GetZaxis()->SetLabelSize(0.035);
   TT_INC_1D_2mu_Box__17->GetZaxis()->SetTitleSize(0.035);
   TT_INC_1D_2mu_Box__17->GetZaxis()->SetTitleFont(42);
   TT_INC_1D_2mu_Box__17->Draw("E2same");
   Double_t xAxis35[5] = {0.5, 0.6, 0.75, 0.9, 1.2}; 
   
   TH1F *h2clone__18 = new TH1F("h2clone__18","TT_INC_1D_2mu_Box",4, xAxis35);
   h2clone__18->SetBinContent(1,50.59721);
   h2clone__18->SetBinContent(2,49.28106);
   h2clone__18->SetBinContent(3,30.17629);
   h2clone__18->SetBinContent(4,21.11689);
   h2clone__18->SetBinError(1,1.653109);
   h2clone__18->SetBinError(2,1.659922);
   h2clone__18->SetBinError(3,1.286442);
   h2clone__18->SetBinError(4,1.023055);
   h2clone__18->SetEntries(4082);
   h2clone__18->SetDirectory(0);

   ci = TColor::GetColor("#ff0000");
   h2clone__18->SetLineColor(ci);
   h2clone__18->SetLineWidth(2);
   h2clone__18->GetXaxis()->SetRange(1,4);
   h2clone__18->GetXaxis()->SetLabelFont(42);
   h2clone__18->GetXaxis()->SetLabelSize(0.035);
   h2clone__18->GetXaxis()->SetTitleSize(0.035);
   h2clone__18->GetXaxis()->SetTitleFont(42);
   h2clone__18->GetYaxis()->SetLabelFont(42);
   h2clone__18->GetYaxis()->SetLabelSize(0.035);
   h2clone__18->GetYaxis()->SetTitleSize(0.035);
   h2clone__18->GetYaxis()->SetTitleFont(42);
   h2clone__18->GetZaxis()->SetLabelFont(42);
   h2clone__18->GetZaxis()->SetLabelSize(0.035);
   h2clone__18->GetZaxis()->SetTitleSize(0.035);
   h2clone__18->GetZaxis()->SetTitleFont(42);
   h2clone__18->Draw("hist same");
   Double_t xAxis36[5] = {0.5, 0.6, 0.75, 0.9, 1.2}; 
   
   TH1F *Data_INC_1D_2mu_Box_copy = new TH1F("Data_INC_1D_2mu_Box_copy","",4, xAxis36);
   Data_INC_1D_2mu_Box_copy->SetBinContent(1,66);
   Data_INC_1D_2mu_Box_copy->SetBinContent(2,43);
   Data_INC_1D_2mu_Box_copy->SetBinContent(3,39);
   Data_INC_1D_2mu_Box_copy->SetBinContent(4,27);
   Data_INC_1D_2mu_Box_copy->SetBinError(1,8.124038);
   Data_INC_1D_2mu_Box_copy->SetBinError(2,6.557439);
   Data_INC_1D_2mu_Box_copy->SetBinError(3,6.244998);
   Data_INC_1D_2mu_Box_copy->SetBinError(4,5.196152);
   Data_INC_1D_2mu_Box_copy->SetMinimum(4.018767);
   Data_INC_1D_2mu_Box_copy->SetMaximum(132);
   Data_INC_1D_2mu_Box_copy->SetEntries(175);
   Data_INC_1D_2mu_Box_copy->SetStats(0);
   Data_INC_1D_2mu_Box_copy->SetFillColor(1);
   Data_INC_1D_2mu_Box_copy->SetMarkerStyle(20);
   Data_INC_1D_2mu_Box_copy->SetMarkerSize(0.3);
   Data_INC_1D_2mu_Box_copy->GetXaxis()->SetTitle("RSQ");
   Data_INC_1D_2mu_Box_copy->GetXaxis()->SetRange(1,4);
   Data_INC_1D_2mu_Box_copy->GetXaxis()->SetLabelFont(42);
   Data_INC_1D_2mu_Box_copy->GetXaxis()->SetLabelSize(0.035);
   Data_INC_1D_2mu_Box_copy->GetXaxis()->SetTitleSize(0.035);
   Data_INC_1D_2mu_Box_copy->GetXaxis()->SetTitleFont(42);
   Data_INC_1D_2mu_Box_copy->GetYaxis()->SetLabelFont(42);
   Data_INC_1D_2mu_Box_copy->GetYaxis()->SetLabelSize(0.035);
   Data_INC_1D_2mu_Box_copy->GetYaxis()->SetTitleSize(0.035);
   Data_INC_1D_2mu_Box_copy->GetYaxis()->SetTitleFont(42);
   Data_INC_1D_2mu_Box_copy->GetZaxis()->SetLabelFont(42);
   Data_INC_1D_2mu_Box_copy->GetZaxis()->SetLabelSize(0.035);
   Data_INC_1D_2mu_Box_copy->GetZaxis()->SetTitleSize(0.035);
   Data_INC_1D_2mu_Box_copy->GetZaxis()->SetTitleFont(42);
   Data_INC_1D_2mu_Box->Draw("pesame");
   pad1->Modified();
   
   TLegend *leg = new TLegend(0.65,0.45,0.96,0.91,NULL,"brNDC");
  leg->SetBorderSize(0);
  leg->SetTextFont(42);
  leg->SetTextSize(0.05);
  leg->SetTextAlign(12);
  leg->SetLineColor(1);
  leg->SetLineStyle(1);
  leg->SetLineWidth(1);
  leg->SetFillColor(0);
  leg->SetFillStyle(1001);
  
   TLegendEntry *entry=leg->AddEntry("Data_INC_1D_2mu_Box"," Data","lep");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.3);
   entry->SetTextFont(42);
   entry=leg->AddEntry("TT_INC_1D_2mu_Box"," SM simulation","lf");

   ci = TColor::GetColor("#ffcccc");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   
   
   float lumix = 0.96;
   float lumiy = 0.935;
   float lumifont = 42;
   
   float cmsx = 0.24;
   float cmsy = 0.85;
   TString CMSText = "CMS";
   float cmsTextFont   = 61;  // default is helvetic-bold
   float extrax = cmsx + 0.045;
   float extray = cmsy - 0.04;
   TString extraText   = "Preliminary";
   float extraTextFont = 52;  // default is helvetica-italics
   // ratio of "CMS" and extra text size
   float extraOverCmsTextSize  = 0.76;
   float cmsSize = 0.06;
   TString lumiText = "18.8 fb^{-1} (8 TeV)";
   TLatex latex;
   latex.SetNDC();
   latex.SetTextAngle(0);
   latex.SetTextColor(kBlack);    
   float extraTextSize = extraOverCmsTextSize*cmsSize;
   latex.SetTextFont(lumifont);
   latex.SetTextAlign(31); 
   latex.SetTextSize(cmsSize);    
   latex.DrawLatex(lumix, lumiy,lumiText);

   latex.SetTextFont(cmsTextFont);
   latex.SetTextAlign(31); 
   latex.SetTextSize(cmsSize);
   latex.DrawLatex(cmsx, cmsy, CMSText);
   
   latex.SetTextFont(extraTextFont);
   latex.SetTextAlign(31); 
   latex.SetTextSize(extraTextSize);
   //latex.DrawLatex(extrax, extray, extraText);
  
   //New Label
   latex.SetTextFont(52);
   latex.SetTextAlign(31); 
   latex.SetTextSize(0.05);
   latex.SetLineWidth(2);
   latex.DrawLatex(0.45,0.78,"Z(#mu#mu)b control sample");
   
    gPad->RedrawAxis();
   C->cd();
// ------------>Primitives in pad: pad2
   pad2 = new TPad("pad2", "pad2",0,0.005,1,0.265);
   pad2->Draw();
   pad2->cd();
   pad2->Range(0.4125,-1.027628,1.2875,3.082884);
   pad2->SetFillColor(0);
   pad2->SetBorderMode(0);
   pad2->SetBorderSize(2);
   pad2->SetGridy();
   pad2->SetTopMargin(0.05);
   pad2->SetBottomMargin(0.35);
   pad2->SetFrameBorderMode(0);
   pad2->SetFrameBorderMode(0);
   pad2->SetRightMargin(0.03);
   pad2->SetLeftMargin(0.12);
   pad2->SetTickx();
   pad2->SetTicky();
   
   Double_t xAxis37[5] = {0.5, 0.6, 0.75, 0.9, 1.2}; 
   
   TH1F *RATIO = new TH1F("RATIO","",4, xAxis37);
   RATIO->SetBinContent(1,1.30442);
   RATIO->SetBinContent(2,0.8725461);
   RATIO->SetBinContent(3,1.292405);
   RATIO->SetBinContent(4,1.278597);
   RATIO->SetBinError(1,0.160563);
   RATIO->SetBinError(2,0.133062);
   RATIO->SetBinError(3,0.2069505);
   RATIO->SetBinError(4,0.2460662);
   RATIO->SetMinimum(0);
   RATIO->SetMaximum(3.0);
   RATIO->GetXaxis()->SetLabelOffset(0.025);
   RATIO->GetYaxis()->SetNdivisions(10503, true);
   RATIO->SetEntries(4);
   RATIO->SetStats(0);

   ci = TColor::GetColor("#ffcccc");
    RATIO->GetXaxis()->SetTitle("R^{2}");
   RATIO->GetXaxis()->SetLabelFont(42);
   RATIO->GetXaxis()->SetLabelSize(0.15);
   RATIO->GetXaxis()->SetTitleSize(0.21);
   RATIO->GetXaxis()->SetTitleOffset(0.755);
   RATIO->GetXaxis()->SetLabelOffset(0.035);
   RATIO->GetXaxis()->SetTitleFont(42);
   RATIO->GetYaxis()->SetTitle("Data/Bkg");
   RATIO->GetYaxis()->CenterTitle(true);
   RATIO->GetYaxis()->SetLabelFont(42);
   RATIO->GetYaxis()->SetLabelSize(0.13);
   RATIO->GetYaxis()->SetTitleSize(0.15);
   RATIO->GetYaxis()->SetTitleOffset(0.3);
   RATIO->GetYaxis()->SetTitleFont(42);
   RATIO->GetZaxis()->SetLabelFont(42);
   RATIO->GetZaxis()->SetLabelSize(0.035);
   RATIO->GetZaxis()->SetTitleSize(0.035);
   RATIO->GetZaxis()->SetTitleFont(42);
    RATIO->SetLineColor(kBlack);
   RATIO->Draw("pe");
   Double_t xAxis38[5] = {0.5, 0.6, 0.75, 0.9, 1.2}; 
   
   TH1F *RATIO2__19 = new TH1F("RATIO2__19","",4, xAxis38);
   RATIO2__19->SetBinContent(1,1);
   RATIO2__19->SetBinContent(2,1);
   RATIO2__19->SetBinContent(3,1);
   RATIO2__19->SetBinContent(4,1);
   RATIO2__19->SetBinError(1,0.03267194);
   RATIO2__19->SetBinError(2,0.03368276);
   RATIO2__19->SetBinError(3,0.04263089);
   RATIO2__19->SetBinError(4,0.04844725);
   RATIO2__19->SetMinimum(0);
   RATIO2__19->SetMaximum(3.05);
   RATIO2__19->SetEntries(4);
   RATIO2__19->SetDirectory(0);
   RATIO2__19->SetStats(0);

   ci = TColor::GetColor("#ffcccc");
   RATIO2__19->SetFillColor(ci);

   ci = TColor::GetColor("#ffcccc");
   RATIO2__19->SetLineColor(ci);
   RATIO2__19->SetLineWidth(2);
   RATIO2__19->GetXaxis()->SetTitle("R^{2}");
   RATIO2__19->GetXaxis()->SetLabelFont(42);
   RATIO2__19->GetXaxis()->SetLabelSize(0.1);
   RATIO2__19->GetXaxis()->SetTitleSize(0.11);
   RATIO2__19->GetXaxis()->SetTitleOffset(0.88);
   RATIO2__19->GetXaxis()->SetTitleFont(42);
   RATIO2__19->GetYaxis()->SetTitle("Ratio");
   RATIO2__19->GetYaxis()->SetLabelFont(42);
   RATIO2__19->GetYaxis()->SetLabelSize(0.08);
   RATIO2__19->GetYaxis()->SetTitleSize(0.035);
   RATIO2__19->GetYaxis()->SetTitleOffset(0.35);
   RATIO2__19->GetYaxis()->SetTitleFont(42);
   RATIO2__19->GetZaxis()->SetLabelFont(42);
   RATIO2__19->GetZaxis()->SetLabelSize(0.035);
   RATIO2__19->GetZaxis()->SetTitleSize(0.035);
   RATIO2__19->GetZaxis()->SetTitleFont(42);
   RATIO2__19->Draw("e2 same");
   Double_t xAxis39[5] = {0.5, 0.6, 0.75, 0.9, 1.2}; 
   
   TH1F *ratio2clone__20 = new TH1F("ratio2clone__20","",4, xAxis39);
   ratio2clone__20->SetBinContent(1,1);
   ratio2clone__20->SetBinContent(2,1);
   ratio2clone__20->SetBinContent(3,1);
   ratio2clone__20->SetBinContent(4,1);
   ratio2clone__20->SetBinError(1,0.03267194);
   ratio2clone__20->SetBinError(2,0.03368276);
   ratio2clone__20->SetBinError(3,0.04263089);
   ratio2clone__20->SetBinError(4,0.04844725);
   ratio2clone__20->SetMinimum(0);
   ratio2clone__20->SetMaximum(3.05);
   ratio2clone__20->SetEntries(4);
   ratio2clone__20->SetDirectory(0);
   ratio2clone__20->SetStats(0);

   ci = TColor::GetColor("#ff0000");
   ratio2clone__20->SetLineColor(ci);
   ratio2clone__20->SetLineWidth(2);
   ratio2clone__20->GetXaxis()->SetTitle("R^{2}");
   ratio2clone__20->GetXaxis()->SetLabelFont(42);
   ratio2clone__20->GetXaxis()->SetLabelSize(0.1);
   ratio2clone__20->GetXaxis()->SetTitleSize(0.11);
   ratio2clone__20->GetXaxis()->SetTitleOffset(0.88);
   ratio2clone__20->GetXaxis()->SetTitleFont(42);
   ratio2clone__20->GetYaxis()->SetTitle("Ratio");
   ratio2clone__20->GetYaxis()->SetLabelFont(42);
   ratio2clone__20->GetYaxis()->SetLabelSize(0.08);
   ratio2clone__20->GetYaxis()->SetTitleSize(0.035);
   ratio2clone__20->GetYaxis()->SetTitleOffset(0.35);
   ratio2clone__20->GetYaxis()->SetTitleFont(42);
   ratio2clone__20->GetZaxis()->SetLabelFont(42);
   ratio2clone__20->GetZaxis()->SetLabelSize(0.035);
   ratio2clone__20->GetZaxis()->SetTitleSize(0.035);
   ratio2clone__20->GetZaxis()->SetTitleFont(42);
   ratio2clone__20->Draw("hist same");
   Double_t xAxis40[5] = {0.5, 0.6, 0.75, 0.9, 1.2}; 
   
   TH1F *RATIO_V2 = new TH1F("RATIO_V2","",4, xAxis40);
   RATIO_V2->SetBinContent(1,1.30442);
   RATIO_V2->SetBinContent(2,0.8725461);
   RATIO_V2->SetBinContent(3,1.292405);
   RATIO_V2->SetBinContent(4,1.278597);
   RATIO_V2->SetBinError(1,0.160563);
   RATIO_V2->SetBinError(2,0.133062);
   RATIO_V2->SetBinError(3,0.2069505);
   RATIO_V2->SetBinError(4,0.2460662);
   RATIO_V2->SetMinimum(0);
   RATIO_V2->SetMaximum(3.05);
   RATIO_V2->SetEntries(4);
   RATIO_V2->SetStats(0);

   ci = TColor::GetColor("#ffcccc");
   RATIO_V2->SetFillColor(ci);
   RATIO_V2->SetLineWidth(2);
   RATIO_V2->SetMarkerStyle(20);
   RATIO_V2->SetMarkerSize(0.3);
   RATIO_V2->GetXaxis()->SetTitle("R^{2}");
   RATIO_V2->GetXaxis()->SetRange(1,4);
   RATIO_V2->GetXaxis()->CenterTitle(true);
   RATIO_V2->GetXaxis()->SetLabelFont(42);
   RATIO_V2->GetXaxis()->SetLabelSize(0.1);
   RATIO_V2->GetXaxis()->SetTitleSize(0.11);
   RATIO_V2->GetXaxis()->SetTitleOffset(0.88);
   RATIO_V2->GetXaxis()->SetTitleFont(42);
   RATIO_V2->GetYaxis()->SetTitle("Ratio");
   RATIO_V2->GetYaxis()->CenterTitle(true);
   RATIO_V2->GetYaxis()->SetLabelFont(42);
   RATIO_V2->GetYaxis()->SetLabelSize(0.08);
   RATIO_V2->GetYaxis()->SetTitleSize(0.11);
   RATIO_V2->GetYaxis()->SetTitleOffset(0.45);
   RATIO_V2->GetYaxis()->SetTitleFont(42);
   RATIO_V2->GetZaxis()->SetLabelFont(42);
   RATIO_V2->GetZaxis()->SetLabelSize(0.035);
   RATIO_V2->GetZaxis()->SetTitleSize(0.035);
   RATIO_V2->GetZaxis()->SetTitleFont(42);
   RATIO_V2->SetLineColor(kBlack);
   RATIO_V2->Draw("pesame");
   RATIO_V2->SetMarkerSize(0.6);
   RATIO_V2->Draw("pesame");
   gPad->RedrawAxis();
   pad2->Modified();
   C->cd();
   C->Modified();
   C->cd();
   C->SetSelected(C);
   C->SaveAs("MC_CP_2Mu1LbZ_Sep.pdf");
}

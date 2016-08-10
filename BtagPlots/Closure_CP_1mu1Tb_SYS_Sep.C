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
  pad1->SetLeftMargin(0.14);
  pad1->SetRightMargin(0.03);
  pad1->SetFrameBorderMode(0);
  pad1->SetFrameBorderMode(0);
  pad1->SetFillColor(0);
  pad1->SetBorderMode(0);
  pad1->SetTickx();
  pad1->SetTicky();

   Double_t xAxis9[5] = {0.5, 0.6, 0.75, 0.9, 1.2}; 
   
   TH1F *Data_INC_1D_1mu_Box = new TH1F("Data_INC_1D_1mu_Box","",4, xAxis9);
   Data_INC_1D_1mu_Box->SetBinContent(1,978);
   Data_INC_1D_1mu_Box->SetBinContent(2,921);
   Data_INC_1D_1mu_Box->SetBinContent(3,639);
   Data_INC_1D_1mu_Box->SetBinContent(4,382);
   Data_INC_1D_1mu_Box->SetBinError(1,31.27299);
   Data_INC_1D_1mu_Box->SetBinError(2,30.34798);
   Data_INC_1D_1mu_Box->SetBinError(3,25.27845);
   Data_INC_1D_1mu_Box->SetBinError(4,19.54482);
   Data_INC_1D_1mu_Box->SetMinimum(0.0);
   Data_INC_1D_1mu_Box->SetMaximum(2200);
   Data_INC_1D_1mu_Box->SetEntries(2920);
   Data_INC_1D_1mu_Box->SetStats(0);
   Data_INC_1D_1mu_Box->SetFillColor(1);
   Data_INC_1D_1mu_Box->SetMarkerStyle(20);
   Data_INC_1D_1mu_Box->SetLabelSize(0);
   Data_INC_1D_1mu_Box->GetXaxis()->SetLabelOffset(999);
  
   Data_INC_1D_1mu_Box->SetYTitle("Events / bin");
   Data_INC_1D_1mu_Box->SetMarkerSize(0.7);
   Data_INC_1D_1mu_Box->SetMarkerColor(kBlack);
   Data_INC_1D_1mu_Box->SetLineWidth(2);
   Data_INC_1D_1mu_Box->SetLineColor(kBlack);
   Data_INC_1D_1mu_Box->GetXaxis()->SetTitle("RSQ");
   Data_INC_1D_1mu_Box->GetXaxis()->SetRange(1,4);
   Data_INC_1D_1mu_Box->GetXaxis()->SetLabelFont(42);
   Data_INC_1D_1mu_Box->GetXaxis()->SetLabelSize(0.035);
   Data_INC_1D_1mu_Box->GetXaxis()->SetTitleSize(0.035);
   Data_INC_1D_1mu_Box->GetXaxis()->SetTitleFont(42);
   Data_INC_1D_1mu_Box->GetYaxis()->SetLabelFont(42);
   Data_INC_1D_1mu_Box->GetYaxis()->SetLabelSize(0.05);
   Data_INC_1D_1mu_Box->GetYaxis()->SetTitleSize(0.0815);
   Data_INC_1D_1mu_Box->GetYaxis()->SetTitleOffset(0.8);
   Data_INC_1D_1mu_Box->GetYaxis()->SetTitleFont(42);
   Data_INC_1D_1mu_Box->GetZaxis()->SetLabelFont(42);
   Data_INC_1D_1mu_Box->GetZaxis()->SetLabelSize(0.035);
   Data_INC_1D_1mu_Box->GetZaxis()->SetTitleSize(0.035);
   Data_INC_1D_1mu_Box->GetZaxis()->SetTitleFont(42);
   Data_INC_1D_1mu_Box->Draw("pe");
   
   Double_t xAxis10[5] = {0.5, 0.6, 0.75, 0.9, 1.2}; 
   
   TH1F *Data_INC_1D_2mu_Box__5 = new TH1F("Data_INC_1D_2mu_Box__5","",4, xAxis10);
   Data_INC_1D_2mu_Box__5->SetBinContent(1,1143.998);
   Data_INC_1D_2mu_Box__5->SetBinContent(2,927.0475);
   Data_INC_1D_2mu_Box__5->SetBinContent(3,710.5127);
   Data_INC_1D_2mu_Box__5->SetBinContent(4,623.764);
   Data_INC_1D_2mu_Box__5->SetBinError(1,264.4529);
   Data_INC_1D_2mu_Box__5->SetBinError(2,227.3283);
   Data_INC_1D_2mu_Box__5->SetBinError(3,225.4987);
   Data_INC_1D_2mu_Box__5->SetBinError(4,350.8745);
   Data_INC_1D_2mu_Box__5->SetEntries(249.6367);
   Data_INC_1D_2mu_Box__5->SetDirectory(0);
   Data_INC_1D_2mu_Box__5->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ffcccc");
   Data_INC_1D_2mu_Box__5->SetFillColor(ci);

   ci = TColor::GetColor("#ffcccc");
   Data_INC_1D_2mu_Box__5->SetLineColor(ci);
   Data_INC_1D_2mu_Box__5->SetLineWidth(2);
   Data_INC_1D_2mu_Box__5->GetXaxis()->SetTitle("RSQ");
   Data_INC_1D_2mu_Box__5->GetXaxis()->SetRange(1,4);
   Data_INC_1D_2mu_Box__5->GetXaxis()->SetLabelFont(42);
   Data_INC_1D_2mu_Box__5->GetXaxis()->SetLabelSize(0.035);
   Data_INC_1D_2mu_Box__5->GetXaxis()->SetTitleSize(0.035);
   Data_INC_1D_2mu_Box__5->GetXaxis()->SetTitleFont(42);
   Data_INC_1D_2mu_Box__5->GetYaxis()->SetLabelFont(42);
   Data_INC_1D_2mu_Box__5->GetYaxis()->SetLabelSize(0.035);
   Data_INC_1D_2mu_Box__5->GetYaxis()->SetTitleSize(0.035);
   Data_INC_1D_2mu_Box__5->GetYaxis()->SetTitleFont(42);
   Data_INC_1D_2mu_Box__5->GetZaxis()->SetLabelFont(42);
   Data_INC_1D_2mu_Box__5->GetZaxis()->SetLabelSize(0.035);
   Data_INC_1D_2mu_Box__5->GetZaxis()->SetTitleSize(0.035);
   Data_INC_1D_2mu_Box__5->GetZaxis()->SetTitleFont(42);
   Data_INC_1D_2mu_Box__5->Draw("E2same");
   Double_t xAxis11[5] = {0.5, 0.6, 0.75, 0.9, 1.2}; 
   
   TH1F *h2clone__6 = new TH1F("h2clone__6","Data_INC_1D_2mu_Box",4, xAxis11);
   h2clone__6->SetBinContent(1,1143.998);
   h2clone__6->SetBinContent(2,927.0475);
   h2clone__6->SetBinContent(3,710.5127);
   h2clone__6->SetBinContent(4,623.764);
   h2clone__6->SetBinError(1,264.4529);
   h2clone__6->SetBinError(2,227.3283);
   h2clone__6->SetBinError(3,225.4987);
   h2clone__6->SetBinError(4,350.8745);
   h2clone__6->SetEntries(249.6367);
   h2clone__6->SetDirectory(0);

   ci = TColor::GetColor("#ff0000");
   h2clone__6->SetLineColor(ci);
   h2clone__6->SetLineWidth(2);
   h2clone__6->GetXaxis()->SetRange(1,4);
   h2clone__6->GetXaxis()->SetLabelFont(42);
   h2clone__6->GetXaxis()->SetLabelSize(0.035);
   h2clone__6->GetXaxis()->SetTitleSize(0.035);
   h2clone__6->GetXaxis()->SetTitleFont(42);
   h2clone__6->GetYaxis()->SetLabelFont(42);
   h2clone__6->GetYaxis()->SetLabelSize(0.035);
   h2clone__6->GetYaxis()->SetTitleSize(0.035);
   h2clone__6->GetYaxis()->SetTitleFont(42);
   h2clone__6->GetZaxis()->SetLabelFont(42);
   h2clone__6->GetZaxis()->SetLabelSize(0.035);
   h2clone__6->GetZaxis()->SetTitleSize(0.035);
   h2clone__6->GetZaxis()->SetTitleFont(42);
   h2clone__6->Draw("hist same");
   Double_t xAxis12[5] = {0.5, 0.6, 0.75, 0.9, 1.2}; 
   
   TH1F *Data_INC_1D_1mu_Box_copy = new TH1F("Data_INC_1D_1mu_Box_copy","",4, xAxis12);
   Data_INC_1D_1mu_Box_copy->SetBinContent(1,978);
   Data_INC_1D_1mu_Box_copy->SetBinContent(2,921);
   Data_INC_1D_1mu_Box_copy->SetBinContent(3,639);
   Data_INC_1D_1mu_Box_copy->SetBinContent(4,382);
   Data_INC_1D_1mu_Box_copy->SetBinError(1,31.27299);
   Data_INC_1D_1mu_Box_copy->SetBinError(2,30.34798);
   Data_INC_1D_1mu_Box_copy->SetBinError(3,25.27845);
   Data_INC_1D_1mu_Box_copy->SetBinError(4,19.54482);
   Data_INC_1D_1mu_Box_copy->SetMinimum(54.57791);
   Data_INC_1D_1mu_Box_copy->SetMaximum(1956);
   Data_INC_1D_1mu_Box_copy->SetEntries(2920);
   Data_INC_1D_1mu_Box_copy->SetStats(0);
   Data_INC_1D_1mu_Box_copy->SetFillColor(1);
   Data_INC_1D_1mu_Box_copy->SetMarkerStyle(20);
   Data_INC_1D_1mu_Box_copy->SetMarkerSize(0.7);
   Data_INC_1D_1mu_Box_copy->SetLineWidth(2);
   Data_INC_1D_1mu_Box_copy->GetXaxis()->SetTitle("RSQ");
   Data_INC_1D_1mu_Box_copy->GetXaxis()->SetRange(1,4);
   Data_INC_1D_1mu_Box_copy->GetXaxis()->SetLabelFont(42);
   Data_INC_1D_1mu_Box_copy->GetXaxis()->SetLabelSize(0.035);
   Data_INC_1D_1mu_Box_copy->GetXaxis()->SetTitleSize(0.035);
   Data_INC_1D_1mu_Box_copy->GetXaxis()->SetTitleFont(42);
   Data_INC_1D_1mu_Box_copy->GetYaxis()->SetLabelFont(42);
   Data_INC_1D_1mu_Box_copy->GetYaxis()->SetLabelSize(0.035);
   Data_INC_1D_1mu_Box_copy->GetYaxis()->SetTitleSize(0.035);
   Data_INC_1D_1mu_Box_copy->GetYaxis()->SetTitleFont(42);
   Data_INC_1D_1mu_Box_copy->GetZaxis()->SetLabelFont(42);
   Data_INC_1D_1mu_Box_copy->GetZaxis()->SetLabelSize(0.035);
   Data_INC_1D_1mu_Box_copy->GetZaxis()->SetTitleSize(0.035);
   Data_INC_1D_1mu_Box_copy->GetZaxis()->SetTitleFont(42);
   Data_INC_1D_1mu_Box_copy->SetLineColor(kBlack);
   Data_INC_1D_1mu_Box->Draw("pesame");
   pad1->Modified();
   
   TLegend *leg = new TLegend(0.7,0.45,0.96,0.91,NULL,"brNDC");
  leg->SetBorderSize(0);
  leg->SetTextFont(42);
  leg->SetTextSize(0.05);
  leg->SetTextAlign(12);
  leg->SetLineColor(1);
  leg->SetLineStyle(1);
  leg->SetLineWidth(1);
  leg->SetFillColor(0);
  leg->SetFillStyle(1001);
  

   TLegendEntry *entry=leg->AddEntry("Data_INC_1D_1mu_Box"," Data","lep");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.3);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Data_INC_1D_2mu_Box"," Bkg. pred.","lf");

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
   latex.DrawLatex(cmsx+0.02, cmsy, CMSText);
   
   latex.SetTextFont(extraTextFont);
   latex.SetTextAlign(31); 
   latex.SetTextSize(extraTextSize);
   //latex.DrawLatex(extrax, extray, extraText);

   //New Label
   latex.SetTextFont(52);
   latex.SetTextAlign(31); 
   latex.SetTextSize(0.05);
   latex.SetLineWidth(2);
   latex.DrawLatex(0.422,0.79,"1#mub control sample");
   
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
   pad2->SetLeftMargin(0.14);
   pad2->SetTickx();
   pad2->SetTicky();

   
   Double_t xAxis13[5] = {0.5, 0.6, 0.75, 0.9, 1.2}; 
   
   TH1F *RATIO = new TH1F("RATIO","",4, xAxis13);
   RATIO->SetBinContent(1,0.8548965);
   RATIO->SetBinContent(2,0.9934766);
   RATIO->SetBinContent(3,0.8993506);
   RATIO->SetBinContent(4,0.6124111);
   RATIO->SetBinError(1,0.02733657);
   RATIO->SetBinError(2,0.03273617);
   RATIO->SetBinError(3,0.03557776);
   RATIO->SetBinError(4,0.03133368);
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
   
   Double_t xAxis14[5] = {0.5, 0.6, 0.75, 0.9, 1.2}; 
   
   TH1F *RATIO2__7 = new TH1F("RATIO2__7","",4, xAxis14);
   RATIO2__7->SetBinContent(1,1);
   RATIO2__7->SetBinContent(2,1);
   RATIO2__7->SetBinContent(3,1);
   RATIO2__7->SetBinContent(4,1);
   RATIO2__7->SetBinError(1,0.2311655);
   RATIO2__7->SetBinError(2,0.2452175);
   RATIO2__7->SetBinError(3,0.3173746);
   RATIO2__7->SetBinError(4,0.5625116);
   RATIO2__7->SetMinimum(0);
   RATIO2__7->SetMaximum(3.05);
   RATIO2__7->SetEntries(4);
   RATIO2__7->SetDirectory(0);
   RATIO2__7->SetStats(0);

   ci = TColor::GetColor("#ffcccc");
   RATIO2__7->SetFillColor(ci);

   ci = TColor::GetColor("#ffcccc");
   RATIO2__7->SetLineColor(ci);
   RATIO2__7->SetLineWidth(2);
   RATIO2__7->GetXaxis()->SetTitle("R^{2}");
   RATIO2__7->GetXaxis()->SetLabelFont(42);
   RATIO2__7->GetXaxis()->SetLabelSize(0.1);
   RATIO2__7->GetXaxis()->SetTitleSize(0.11);
   RATIO2__7->GetXaxis()->SetTitleOffset(0.88);
   RATIO2__7->GetXaxis()->SetTitleFont(42);
   RATIO2__7->GetYaxis()->SetTitle("Ratio");
   RATIO2__7->GetYaxis()->SetLabelFont(42);
   RATIO2__7->GetYaxis()->SetLabelSize(0.08);
   RATIO2__7->GetYaxis()->SetTitleSize(0.035);
   RATIO2__7->GetYaxis()->SetTitleOffset(0.35);
   RATIO2__7->GetYaxis()->SetTitleFont(42);
   RATIO2__7->GetZaxis()->SetLabelFont(42);
   RATIO2__7->GetZaxis()->SetLabelSize(0.035);
   RATIO2__7->GetZaxis()->SetTitleSize(0.035);
   RATIO2__7->GetZaxis()->SetTitleFont(42);
   RATIO2__7->Draw("e2 same");
   Double_t xAxis15[5] = {0.5, 0.6, 0.75, 0.9, 1.2}; 
   
   TH1F *ratio2clone__8 = new TH1F("ratio2clone__8","",4, xAxis15);
   ratio2clone__8->SetBinContent(1,1);
   ratio2clone__8->SetBinContent(2,1);
   ratio2clone__8->SetBinContent(3,1);
   ratio2clone__8->SetBinContent(4,1);
   ratio2clone__8->SetBinError(1,0.2311655);
   ratio2clone__8->SetBinError(2,0.2452175);
   ratio2clone__8->SetBinError(3,0.3173746);
   ratio2clone__8->SetBinError(4,0.5625116);
   ratio2clone__8->SetMinimum(0);
   ratio2clone__8->SetMaximum(3.05);
   ratio2clone__8->SetEntries(4);
   ratio2clone__8->SetDirectory(0);
   ratio2clone__8->SetStats(0);

   ci = TColor::GetColor("#ff0000");
   ratio2clone__8->SetLineColor(ci);
   ratio2clone__8->SetLineWidth(2);
   ratio2clone__8->GetXaxis()->SetTitle("R^{2}");
   ratio2clone__8->GetXaxis()->SetLabelFont(42);
   ratio2clone__8->GetXaxis()->SetLabelSize(0.1);
   ratio2clone__8->GetXaxis()->SetTitleSize(0.11);
   ratio2clone__8->GetXaxis()->SetTitleOffset(0.88);
   ratio2clone__8->GetXaxis()->SetTitleFont(42);
   ratio2clone__8->GetYaxis()->SetTitle("Ratio");
   ratio2clone__8->GetYaxis()->SetLabelFont(42);
   ratio2clone__8->GetYaxis()->SetLabelSize(0.08);
   ratio2clone__8->GetYaxis()->SetTitleSize(0.035);
   ratio2clone__8->GetYaxis()->SetTitleOffset(0.35);
   ratio2clone__8->GetYaxis()->SetTitleFont(42);
   ratio2clone__8->GetZaxis()->SetLabelFont(42);
   ratio2clone__8->GetZaxis()->SetLabelSize(0.035);
   ratio2clone__8->GetZaxis()->SetTitleSize(0.035);
   ratio2clone__8->GetZaxis()->SetTitleFont(42);
   ratio2clone__8->Draw("hist same");
   Double_t xAxis16[5] = {0.5, 0.6, 0.75, 0.9, 1.2}; 
   
   
   TH1F *RATIO_V2 = new TH1F("RATIO_V2","",4, xAxis16);
   RATIO_V2->SetBinContent(1,0.8548965);
   RATIO_V2->SetBinContent(2,0.9934766);
   RATIO_V2->SetBinContent(3,0.8993506);
   RATIO_V2->SetBinContent(4,0.6124111);
   RATIO_V2->SetBinError(1,0.02733657);
   RATIO_V2->SetBinError(2,0.03273617);
   RATIO_V2->SetBinError(3,0.03557776);
   RATIO_V2->SetBinError(4,0.03133368);
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
   RATIO_V2->SetMarkerStyle(20);
   RATIO_V2->Draw("pesame");
   RATIO_V2->Draw("pesame");
   RATIO_V2->SetMarkerSize(0.6);
   RATIO_V2->Draw("pesame");
   gPad->RedrawAxis();
   pad2->Modified();
   C->cd();
   C->Modified();
   C->cd();
   C->SetSelected(C);
   C->SaveAs("Closure_CP_1mu1Tb_SYS_Sep.pdf");
}

{
//=========Macro generated from canvas: C/C	
//=========  (Thu Sep 11 16:52:46 2014) by ROOT version5.34/20
  
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
   
   Double_t xAxis1[5] = {0.5, 0.6, 0.75, 0.9, 1.2}; 
   
   TH1F *Data_INC_1D_0mu_Box = new TH1F("Data_INC_1D_0mu_Box","",4, xAxis1);
   Data_INC_1D_0mu_Box->SetBinContent(1,760);
   Data_INC_1D_0mu_Box->SetBinContent(2,807);
   Data_INC_1D_0mu_Box->SetBinContent(3,469);
   Data_INC_1D_0mu_Box->SetBinContent(4,246);
   Data_INC_1D_0mu_Box->SetBinError(1,27.5681);
   Data_INC_1D_0mu_Box->SetBinError(2,28.40775);
   Data_INC_1D_0mu_Box->SetBinError(3,21.65641);
   Data_INC_1D_0mu_Box->SetBinError(4,15.68439);
   Data_INC_1D_0mu_Box->SetMinimum(0.0);
   Data_INC_1D_0mu_Box->SetMaximum(1520);
   Data_INC_1D_0mu_Box->SetEntries(2282);
   Data_INC_1D_0mu_Box->SetStats(0);
   Data_INC_1D_0mu_Box->SetFillColor(1);
   Data_INC_1D_0mu_Box->SetMarkerStyle(20);
   Data_INC_1D_0mu_Box->SetLabelSize(0);
   Data_INC_1D_0mu_Box->GetXaxis()->SetLabelOffset(999);
    
   
   Data_INC_1D_0mu_Box->SetYTitle("Events / bin");
   Data_INC_1D_0mu_Box->SetMarkerSize(0.7);
   Data_INC_1D_0mu_Box->SetMarkerColor(kBlack);
   Data_INC_1D_0mu_Box->SetLineWidth(2);
   Data_INC_1D_0mu_Box->SetLineColor(kBlack);
   Data_INC_1D_0mu_Box->GetXaxis()->SetTitle("RSQ");
   Data_INC_1D_0mu_Box->GetXaxis()->SetRange(1,4);
   Data_INC_1D_0mu_Box->GetXaxis()->SetLabelFont(42);
   Data_INC_1D_0mu_Box->GetXaxis()->SetLabelSize(0.035);
   Data_INC_1D_0mu_Box->GetXaxis()->SetTitleSize(0.035);
   Data_INC_1D_0mu_Box->GetXaxis()->SetTitleFont(42);
   Data_INC_1D_0mu_Box->GetYaxis()->SetLabelFont(42);
   Data_INC_1D_0mu_Box->GetYaxis()->SetLabelSize(0.05);
   Data_INC_1D_0mu_Box->GetYaxis()->SetTitleSize(0.0815);
   Data_INC_1D_0mu_Box->GetYaxis()->SetTitleOffset(0.75);
   Data_INC_1D_0mu_Box->GetYaxis()->SetTitleFont(42);
   Data_INC_1D_0mu_Box->GetZaxis()->SetLabelFont(42);
   Data_INC_1D_0mu_Box->GetZaxis()->SetLabelSize(0.035);
   Data_INC_1D_0mu_Box->GetZaxis()->SetTitleSize(0.035);
   Data_INC_1D_0mu_Box->GetZaxis()->SetTitleFont(42);
   Data_INC_1D_0mu_Box->Draw("pe");
   

   Double_t xAxis2[5] = {0.5, 0.6, 0.75, 0.9, 1.2}; 
   
   TH1F *Data_INC_1D_2mu_Box__1 = new TH1F("Data_INC_1D_2mu_Box__1","",4, xAxis2);
   Data_INC_1D_2mu_Box__1->SetBinContent(1,841.3146);
   Data_INC_1D_2mu_Box__1->SetBinContent(2,609.5146);
   Data_INC_1D_2mu_Box__1->SetBinContent(3,461.1015);
   Data_INC_1D_2mu_Box__1->SetBinContent(4,318.6688);
   Data_INC_1D_2mu_Box__1->SetBinError(1,113.7163);
   Data_INC_1D_2mu_Box__1->SetBinError(2,120.4503);
   Data_INC_1D_2mu_Box__1->SetBinError(3,100.9763);
   Data_INC_1D_2mu_Box__1->SetBinError(4,93.47897);
   Data_INC_1D_2mu_Box__1->SetEntries(321.6516);
   Data_INC_1D_2mu_Box__1->SetDirectory(0);
   Data_INC_1D_2mu_Box__1->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ffcccc");
   Data_INC_1D_2mu_Box__1->SetFillColor(ci);

   ci = TColor::GetColor("#ffcccc");
   Data_INC_1D_2mu_Box__1->SetLineColor(ci);
   Data_INC_1D_2mu_Box__1->SetLineWidth(2);
   Data_INC_1D_2mu_Box__1->GetXaxis()->SetTitle("RSQ");
   Data_INC_1D_2mu_Box__1->GetXaxis()->SetRange(1,4);
   Data_INC_1D_2mu_Box__1->GetXaxis()->SetLabelFont(42);
   Data_INC_1D_2mu_Box__1->GetXaxis()->SetLabelSize(0.035);
   Data_INC_1D_2mu_Box__1->GetXaxis()->SetTitleSize(0.035);
   Data_INC_1D_2mu_Box__1->GetXaxis()->SetTitleFont(42);
   Data_INC_1D_2mu_Box__1->GetYaxis()->SetLabelFont(42);
   Data_INC_1D_2mu_Box__1->GetYaxis()->SetLabelSize(0.035);
   Data_INC_1D_2mu_Box__1->GetYaxis()->SetTitleSize(0.035);
   Data_INC_1D_2mu_Box__1->GetYaxis()->SetTitleFont(42);
   Data_INC_1D_2mu_Box__1->GetZaxis()->SetLabelFont(42);
   Data_INC_1D_2mu_Box__1->GetZaxis()->SetLabelSize(0.035);
   Data_INC_1D_2mu_Box__1->GetZaxis()->SetTitleSize(0.035);
   Data_INC_1D_2mu_Box__1->GetZaxis()->SetTitleFont(42);
   Data_INC_1D_2mu_Box__1->Draw("E2same");
   Double_t xAxis3[5] = {0.5, 0.6, 0.75, 0.9, 1.2}; 
   
   TH1F *h2clone__2 = new TH1F("h2clone__2","Data_INC_1D_2mu_Box",4, xAxis3);
   h2clone__2->SetBinContent(1,841.3146);
   h2clone__2->SetBinContent(2,609.5146);
   h2clone__2->SetBinContent(3,461.1015);
   h2clone__2->SetBinContent(4,318.6688);
   h2clone__2->SetBinError(1,113.7163);
   h2clone__2->SetBinError(2,120.4503);
   h2clone__2->SetBinError(3,100.9763);
   h2clone__2->SetBinError(4,93.47897);
   h2clone__2->SetEntries(321.6516);
   h2clone__2->SetDirectory(0);

   ci = TColor::GetColor("#ff0000");
   h2clone__2->SetLineColor(ci);
   h2clone__2->SetLineWidth(2);
   h2clone__2->GetXaxis()->SetRange(1,4);
   h2clone__2->GetXaxis()->SetLabelFont(42);
   h2clone__2->GetXaxis()->SetLabelSize(0.035);
   h2clone__2->GetXaxis()->SetTitleSize(0.035);
   h2clone__2->GetXaxis()->SetTitleFont(42);
   h2clone__2->GetYaxis()->SetLabelFont(42);
   h2clone__2->GetYaxis()->SetLabelSize(0.035);
   h2clone__2->GetYaxis()->SetTitleSize(0.035);
   h2clone__2->GetYaxis()->SetTitleFont(42);
   h2clone__2->GetZaxis()->SetLabelFont(42);
   h2clone__2->GetZaxis()->SetLabelSize(0.035);
   h2clone__2->GetZaxis()->SetTitleSize(0.035);
   h2clone__2->GetZaxis()->SetTitleFont(42);
   h2clone__2->Draw("hist same");
   Double_t xAxis4[5] = {0.5, 0.6, 0.75, 0.9, 1.2}; 
   
   TH1F *Data_INC_1D_0mu_Box_copy = new TH1F("Data_INC_1D_0mu_Box_copy","",4, xAxis4);
   Data_INC_1D_0mu_Box_copy->SetBinContent(1,760);
   Data_INC_1D_0mu_Box_copy->SetBinContent(2,807);
   Data_INC_1D_0mu_Box_copy->SetBinContent(3,469);
   Data_INC_1D_0mu_Box_copy->SetBinContent(4,246);
   Data_INC_1D_0mu_Box_copy->SetBinError(1,27.5681);
   Data_INC_1D_0mu_Box_copy->SetBinError(2,28.40775);
   Data_INC_1D_0mu_Box_copy->SetBinError(3,21.65641);
   Data_INC_1D_0mu_Box_copy->SetBinError(4,15.68439);
   Data_INC_1D_0mu_Box_copy->SetMinimum(45.03796);
   Data_INC_1D_0mu_Box_copy->SetMaximum(1520);
   Data_INC_1D_0mu_Box_copy->SetEntries(2282);
   Data_INC_1D_0mu_Box_copy->SetStats(0);
   Data_INC_1D_0mu_Box_copy->SetFillColor(1);
   Data_INC_1D_0mu_Box_copy->SetMarkerStyle(20);
   Data_INC_1D_0mu_Box_copy->SetMarkerSize(0.3);
   Data_INC_1D_0mu_Box_copy->GetXaxis()->SetTitle("RSQ");
   Data_INC_1D_0mu_Box_copy->GetXaxis()->SetRange(1,4);
   Data_INC_1D_0mu_Box_copy->GetXaxis()->SetLabelFont(42);
   Data_INC_1D_0mu_Box_copy->GetXaxis()->SetLabelSize(0.035);
   Data_INC_1D_0mu_Box_copy->GetXaxis()->SetTitleSize(0.035);
   Data_INC_1D_0mu_Box_copy->GetXaxis()->SetTitleFont(42);
   Data_INC_1D_0mu_Box_copy->GetYaxis()->SetLabelFont(42);
   Data_INC_1D_0mu_Box_copy->GetYaxis()->SetLabelSize(0.035);
   Data_INC_1D_0mu_Box_copy->GetYaxis()->SetTitleSize(0.035);
   Data_INC_1D_0mu_Box_copy->GetYaxis()->SetTitleFont(42);
   Data_INC_1D_0mu_Box_copy->GetZaxis()->SetLabelFont(42);
   Data_INC_1D_0mu_Box_copy->GetZaxis()->SetLabelSize(0.035);
   Data_INC_1D_0mu_Box_copy->GetZaxis()->SetTitleSize(0.035);
   Data_INC_1D_0mu_Box_copy->GetZaxis()->SetTitleFont(42);
    Data_INC_1D_0mu_Box_copy->SetMarkerSize(0.7);
   Data_INC_1D_0mu_Box_copy->SetMarkerColor(kBlack);
   Data_INC_1D_0mu_Box_copy->SetLineWidth(2);
   Data_INC_1D_0mu_Box_copy->SetLineColor(kBlack);
   Data_INC_1D_0mu_Box->Draw("pesame");
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

   TLegendEntry *entry=leg->AddEntry("Data_INC_1D_0mu_Box"," Data","lep");
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
   latex.DrawLatex(0.429,0.79,"0#mub search sample");

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

   Double_t xAxis5[5] = {0.5, 0.6, 0.75, 0.9, 1.2}; 
   
   TH1F *RATIO = new TH1F("RATIO","",4, xAxis5);
   RATIO->SetBinContent(1,0.9033481);
   RATIO->SetBinContent(2,1.324004);
   RATIO->SetBinContent(3,1.01713);
   RATIO->SetBinContent(4,0.7719614);
   RATIO->SetBinError(1,0.03276788);
   RATIO->SetBinError(2,0.04660716);
   RATIO->SetBinError(3,0.04696668);
   RATIO->SetBinError(4,0.04921846);
   
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
   Double_t xAxis6[5] = {0.5, 0.6, 0.75, 0.9, 1.2}; 
   
   TH1F *RATIO2__3 = new TH1F("RATIO2__3","",4, xAxis6);
   RATIO2__3->SetBinContent(1,1);
   RATIO2__3->SetBinContent(2,1);
   RATIO2__3->SetBinContent(3,1);
   RATIO2__3->SetBinContent(4,1);
   RATIO2__3->SetBinError(1,0.135165);
   RATIO2__3->SetBinError(2,0.1976167);
   RATIO2__3->SetBinError(3,0.2189894);
   RATIO2__3->SetBinError(4,0.2933421);
   RATIO2__3->SetMinimum(0);
   RATIO2__3->SetMaximum(3.05);
   RATIO2__3->SetEntries(4);
   RATIO2__3->SetDirectory(0);
   RATIO2__3->SetStats(0);

   ci = TColor::GetColor("#ffcccc");
   RATIO2__3->SetFillColor(ci);

   ci = TColor::GetColor("#ffcccc");
   RATIO2__3->SetLineColor(ci);
   RATIO2__3->SetLineWidth(2);
   RATIO2__3->GetXaxis()->SetTitle("R^{2}");
   RATIO2__3->GetXaxis()->SetLabelFont(42);
   RATIO2__3->GetXaxis()->SetLabelSize(0.1);
   RATIO2__3->GetXaxis()->SetTitleSize(0.11);
   RATIO2__3->GetXaxis()->SetTitleOffset(0.88);
   RATIO2__3->GetXaxis()->SetTitleFont(42);
   RATIO2__3->GetYaxis()->SetTitle("Ratio");
   RATIO2__3->GetYaxis()->SetLabelFont(42);
   RATIO2__3->GetYaxis()->SetLabelSize(0.08);
   RATIO2__3->GetYaxis()->SetTitleSize(0.035);
   RATIO2__3->GetYaxis()->SetTitleOffset(0.35);
   RATIO2__3->GetYaxis()->SetTitleFont(42);
   RATIO2__3->GetZaxis()->SetLabelFont(42);
   RATIO2__3->GetZaxis()->SetLabelSize(0.035);
   RATIO2__3->GetZaxis()->SetTitleSize(0.035);
   RATIO2__3->GetZaxis()->SetTitleFont(42);
   RATIO2__3->Draw("e2 same");
   Double_t xAxis7[5] = {0.5, 0.6, 0.75, 0.9, 1.2}; 
   
   TH1F *ratio2clone__4 = new TH1F("ratio2clone__4","",4, xAxis7);
   ratio2clone__4->SetBinContent(1,1);
   ratio2clone__4->SetBinContent(2,1);
   ratio2clone__4->SetBinContent(3,1);
   ratio2clone__4->SetBinContent(4,1);
   ratio2clone__4->SetBinError(1,0.135165);
   ratio2clone__4->SetBinError(2,0.1976167);
   ratio2clone__4->SetBinError(3,0.2189894);
   ratio2clone__4->SetBinError(4,0.2933421);
   ratio2clone__4->SetMinimum(0);
   ratio2clone__4->SetMaximum(3.05);
   ratio2clone__4->SetEntries(4);
   ratio2clone__4->SetDirectory(0);
   ratio2clone__4->SetStats(0);

   ci = TColor::GetColor("#ff0000");
   ratio2clone__4->SetLineColor(ci);
   ratio2clone__4->SetLineWidth(2);
   ratio2clone__4->GetXaxis()->SetTitle("R^{2}");
   ratio2clone__4->GetXaxis()->SetLabelFont(42);
   ratio2clone__4->GetXaxis()->SetLabelSize(0.1);
   ratio2clone__4->GetXaxis()->SetTitleSize(0.11);
   ratio2clone__4->GetXaxis()->SetTitleOffset(0.88);
   ratio2clone__4->GetXaxis()->SetTitleFont(42);
   ratio2clone__4->GetYaxis()->SetTitle("Ratio");
   ratio2clone__4->GetYaxis()->SetLabelFont(42);
   ratio2clone__4->GetYaxis()->SetLabelSize(0.08);
   ratio2clone__4->GetYaxis()->SetTitleSize(0.035);
   ratio2clone__4->GetYaxis()->SetTitleOffset(0.35);
   ratio2clone__4->GetYaxis()->SetTitleFont(42);
   ratio2clone__4->GetZaxis()->SetLabelFont(42);
   ratio2clone__4->GetZaxis()->SetLabelSize(0.035);
   ratio2clone__4->GetZaxis()->SetTitleSize(0.035);
   ratio2clone__4->GetZaxis()->SetTitleFont(42);
   ratio2clone__4->Draw("hist same");
   Double_t xAxis8[5] = {0.5, 0.6, 0.75, 0.9, 1.2}; 
   

   TH1F *RATIO_V2 = new TH1F("RATIO_V2","",4, xAxis8);
   RATIO_V2->SetBinContent(1,0.9033481);
   RATIO_V2->SetBinContent(2,1.324004);
   RATIO_V2->SetBinContent(3,1.01713);
   RATIO_V2->SetBinContent(4,0.7719614);
   RATIO_V2->SetBinError(1,0.03276788);
   RATIO_V2->SetBinError(2,0.04660716);
   RATIO_V2->SetBinError(3,0.04696668);
   RATIO_V2->SetBinError(4,0.04921846);
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
   C->SaveAs("Bkg_0mu1TbEXC_CP.pdf");
}

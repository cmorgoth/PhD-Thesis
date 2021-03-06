{
//=========Macro generated from canvas: C/C	
//=========  (Tue Jul 22 03:20:15 2014) by ROOT version5.34/11
   TCanvas *C = new TCanvas("C", "C	",0,0,400,500);
   C->SetHighLightColor(2);
   C->Range(0,0,1,1);
   C->SetFillColor(0);
   C->SetBorderMode(0);
   C->SetBorderSize(2);
   C->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "pad1",0,0.25,1,1);
   pad1->Draw();
   pad1->cd();
   pad1->Range(0.4125,1.367698,1.2875,55.40359);
   pad1->SetFillColor(0);
   pad1->SetBorderMode(0);
   pad1->SetBorderSize(2);
   pad1->SetBottomMargin(0);
   pad1->SetFrameBorderMode(0);
   pad1->SetFrameBorderMode(0);
   Double_t xAxis17[5] = {0.5, 0.575, 0.65, 0.75, 1.2}; 
   
   TH1F *Data_cat2_1D_0mu_Box = new TH1F("Data_cat2_1D_0mu_Box","",4, xAxis17);
   Data_cat2_1D_0mu_Box->SetBinContent(1,25);
   Data_cat2_1D_0mu_Box->SetBinContent(2,13);
   Data_cat2_1D_0mu_Box->SetBinContent(3,9);
   Data_cat2_1D_0mu_Box->SetBinContent(4,7);
   Data_cat2_1D_0mu_Box->SetBinError(1,5);
   Data_cat2_1D_0mu_Box->SetBinError(2,3.605551);
   Data_cat2_1D_0mu_Box->SetBinError(3,3);
   Data_cat2_1D_0mu_Box->SetBinError(4,2.645751);
   Data_cat2_1D_0mu_Box->SetMinimum(1.367698);
   Data_cat2_1D_0mu_Box->SetMaximum(50);
   Data_cat2_1D_0mu_Box->SetEntries(54);
   Data_cat2_1D_0mu_Box->SetStats(0);
   Data_cat2_1D_0mu_Box->SetFillColor(1);
   Data_cat2_1D_0mu_Box->SetMarkerStyle(20);
   Data_cat2_1D_0mu_Box->SetMarkerSize(0.3);
   Data_cat2_1D_0mu_Box->GetXaxis()->SetTitle("RSQ");
   Data_cat2_1D_0mu_Box->GetXaxis()->SetRange(1,4);
   Data_cat2_1D_0mu_Box->GetXaxis()->SetLabelFont(42);
   Data_cat2_1D_0mu_Box->GetXaxis()->SetLabelSize(0.035);
   Data_cat2_1D_0mu_Box->GetXaxis()->SetTitleSize(0.035);
   Data_cat2_1D_0mu_Box->GetXaxis()->SetTitleFont(42);
   Data_cat2_1D_0mu_Box->GetYaxis()->SetLabelFont(42);
   Data_cat2_1D_0mu_Box->GetYaxis()->SetLabelSize(0.035);
   Data_cat2_1D_0mu_Box->GetYaxis()->SetTitleSize(0.035);
   Data_cat2_1D_0mu_Box->GetYaxis()->SetTitleFont(42);
   Data_cat2_1D_0mu_Box->GetZaxis()->SetLabelFont(42);
   Data_cat2_1D_0mu_Box->GetZaxis()->SetLabelSize(0.035);
   Data_cat2_1D_0mu_Box->GetZaxis()->SetTitleSize(0.035);
   Data_cat2_1D_0mu_Box->GetZaxis()->SetTitleFont(42);
   Data_cat2_1D_0mu_Box->Draw("pe");
   Double_t xAxis18[5] = {0.5, 0.575, 0.65, 0.75, 1.2}; 
   
   TH1F *TT_L_cat2_1D_0mu_Box__9 = new TH1F("TT_L_cat2_1D_0mu_Box__9","",4, xAxis18);
   TT_L_cat2_1D_0mu_Box__9->SetBinContent(1,20.91584);
   TT_L_cat2_1D_0mu_Box__9->SetBinContent(2,12.98131);
   TT_L_cat2_1D_0mu_Box__9->SetBinContent(3,10.54724);
   TT_L_cat2_1D_0mu_Box__9->SetBinContent(4,9.555617);
   TT_L_cat2_1D_0mu_Box__9->SetBinError(1,4.299068);
   TT_L_cat2_1D_0mu_Box__9->SetBinError(2,1.053107);
   TT_L_cat2_1D_0mu_Box__9->SetBinError(3,1.81102);
   TT_L_cat2_1D_0mu_Box__9->SetBinError(4,2.717129);
   TT_L_cat2_1D_0mu_Box__9->SetEntries(907);
   TT_L_cat2_1D_0mu_Box__9->SetDirectory(0);
   TT_L_cat2_1D_0mu_Box__9->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#ffcccc");
   TT_L_cat2_1D_0mu_Box__9->SetFillColor(ci);

   ci = TColor::GetColor("#ffcccc");
   TT_L_cat2_1D_0mu_Box__9->SetLineColor(ci);
   TT_L_cat2_1D_0mu_Box__9->SetLineWidth(2);
   TT_L_cat2_1D_0mu_Box__9->GetXaxis()->SetTitle("RSQ");
   TT_L_cat2_1D_0mu_Box__9->GetXaxis()->SetRange(1,4);
   TT_L_cat2_1D_0mu_Box__9->GetXaxis()->SetLabelFont(42);
   TT_L_cat2_1D_0mu_Box__9->GetXaxis()->SetLabelSize(0.035);
   TT_L_cat2_1D_0mu_Box__9->GetXaxis()->SetTitleSize(0.035);
   TT_L_cat2_1D_0mu_Box__9->GetXaxis()->SetTitleFont(42);
   TT_L_cat2_1D_0mu_Box__9->GetYaxis()->SetLabelFont(42);
   TT_L_cat2_1D_0mu_Box__9->GetYaxis()->SetLabelSize(0.035);
   TT_L_cat2_1D_0mu_Box__9->GetYaxis()->SetTitleSize(0.035);
   TT_L_cat2_1D_0mu_Box__9->GetYaxis()->SetTitleFont(42);
   TT_L_cat2_1D_0mu_Box__9->GetZaxis()->SetLabelFont(42);
   TT_L_cat2_1D_0mu_Box__9->GetZaxis()->SetLabelSize(0.035);
   TT_L_cat2_1D_0mu_Box__9->GetZaxis()->SetTitleSize(0.035);
   TT_L_cat2_1D_0mu_Box__9->GetZaxis()->SetTitleFont(42);
   TT_L_cat2_1D_0mu_Box__9->Draw("E2same");
   Double_t xAxis19[5] = {0.5, 0.575, 0.65, 0.75, 1.2}; 
   
   TH1F *h2clone__10 = new TH1F("h2clone__10","TT_L_cat2_1D_0mu_Box",4, xAxis19);
   h2clone__10->SetBinContent(1,20.91584);
   h2clone__10->SetBinContent(2,12.98131);
   h2clone__10->SetBinContent(3,10.54724);
   h2clone__10->SetBinContent(4,9.555617);
   h2clone__10->SetBinError(1,4.299068);
   h2clone__10->SetBinError(2,1.053107);
   h2clone__10->SetBinError(3,1.81102);
   h2clone__10->SetBinError(4,2.717129);
   h2clone__10->SetEntries(907);
   h2clone__10->SetDirectory(0);

   ci = TColor::GetColor("#ff0000");
   h2clone__10->SetLineColor(ci);
   h2clone__10->SetLineWidth(2);
   h2clone__10->GetXaxis()->SetRange(1,4);
   h2clone__10->GetXaxis()->SetLabelFont(42);
   h2clone__10->GetXaxis()->SetLabelSize(0.035);
   h2clone__10->GetXaxis()->SetTitleSize(0.035);
   h2clone__10->GetXaxis()->SetTitleFont(42);
   h2clone__10->GetYaxis()->SetLabelFont(42);
   h2clone__10->GetYaxis()->SetLabelSize(0.035);
   h2clone__10->GetYaxis()->SetTitleSize(0.035);
   h2clone__10->GetYaxis()->SetTitleFont(42);
   h2clone__10->GetZaxis()->SetLabelFont(42);
   h2clone__10->GetZaxis()->SetLabelSize(0.035);
   h2clone__10->GetZaxis()->SetTitleSize(0.035);
   h2clone__10->GetZaxis()->SetTitleFont(42);
   h2clone__10->Draw("hist same");
   Double_t xAxis20[5] = {0.5, 0.575, 0.65, 0.75, 1.2}; 
   
   TH1F *Data_cat2_1D_0mu_Box = new TH1F("Data_cat2_1D_0mu_Box","",4, xAxis20);
   Data_cat2_1D_0mu_Box->SetBinContent(1,25);
   Data_cat2_1D_0mu_Box->SetBinContent(2,13);
   Data_cat2_1D_0mu_Box->SetBinContent(3,9);
   Data_cat2_1D_0mu_Box->SetBinContent(4,7);
   Data_cat2_1D_0mu_Box->SetBinError(1,5);
   Data_cat2_1D_0mu_Box->SetBinError(2,3.605551);
   Data_cat2_1D_0mu_Box->SetBinError(3,3);
   Data_cat2_1D_0mu_Box->SetBinError(4,2.645751);
   Data_cat2_1D_0mu_Box->SetMinimum(1.367698);
   Data_cat2_1D_0mu_Box->SetMaximum(50);
   Data_cat2_1D_0mu_Box->SetEntries(54);
   Data_cat2_1D_0mu_Box->SetStats(0);
   Data_cat2_1D_0mu_Box->SetFillColor(1);
   Data_cat2_1D_0mu_Box->SetMarkerStyle(20);
   Data_cat2_1D_0mu_Box->SetMarkerSize(0.3);
   Data_cat2_1D_0mu_Box->GetXaxis()->SetTitle("RSQ");
   Data_cat2_1D_0mu_Box->GetXaxis()->SetRange(1,4);
   Data_cat2_1D_0mu_Box->GetXaxis()->SetLabelFont(42);
   Data_cat2_1D_0mu_Box->GetXaxis()->SetLabelSize(0.035);
   Data_cat2_1D_0mu_Box->GetXaxis()->SetTitleSize(0.035);
   Data_cat2_1D_0mu_Box->GetXaxis()->SetTitleFont(42);
   Data_cat2_1D_0mu_Box->GetYaxis()->SetLabelFont(42);
   Data_cat2_1D_0mu_Box->GetYaxis()->SetLabelSize(0.035);
   Data_cat2_1D_0mu_Box->GetYaxis()->SetTitleSize(0.035);
   Data_cat2_1D_0mu_Box->GetYaxis()->SetTitleFont(42);
   Data_cat2_1D_0mu_Box->GetZaxis()->SetLabelFont(42);
   Data_cat2_1D_0mu_Box->GetZaxis()->SetLabelSize(0.035);
   Data_cat2_1D_0mu_Box->GetZaxis()->SetTitleSize(0.035);
   Data_cat2_1D_0mu_Box->GetZaxis()->SetTitleFont(42);
   Data_cat2_1D_0mu_Box->Draw("pesame");
   pad1->Modified();
   C->cd();
   
   TLegend *leg = new TLegend(0.675,0.83,0.89,0.92,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.018);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Data_cat2_1D_0mu_Box","R^{2} Data  0#mu-2b","lep");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.3);
   entry->SetTextFont(42);
   entry=leg->AddEntry("TT_L_cat2_1D_0mu_Box","R^{2} BKg Pred 0#mu-2b","lf");

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
   TLatex *   tex = new TLatex(0.22,0.95,"CMS Preliminary:");
tex->SetNDC();
   tex->SetTextAlign(22);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.42,0.95,"#sqrt{s} = 8 TeV,");
tex->SetNDC();
   tex->SetTextAlign(22);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.62,0.95,"#int L dt = 18.836 fb^{-1}");
tex->SetNDC();
   tex->SetTextAlign(22);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
  
// ------------>Primitives in pad: pad2
   pad2 = new TPad("pad2", "pad2",0,0,1,0.25);
   pad2->Draw();
   pad2->cd();
   pad2->Range(0,0,1,1);
   pad2->SetFillColor(0);
   pad2->SetBorderMode(0);
   pad2->SetBorderSize(2);
   pad2->SetGridy();
   pad2->SetTopMargin(0.008);
   pad2->SetBottomMargin(0.25);
   pad2->SetFrameBorderMode(0);
   Double_t xAxis21[5] = {0.5, 0.575, 0.65, 0.75, 1.2}; 
   
   TH1F *RATIO = new TH1F("RATIO","",4, xAxis21);
   RATIO->SetBinContent(1,1.195266);
   RATIO->SetBinContent(2,1.00144);
   RATIO->SetBinContent(3,0.8533041);
   RATIO->SetBinContent(4,0.7325534);
   RATIO->SetBinError(1,0.2390533);
   RATIO->SetBinError(2,0.2777495);
   RATIO->SetBinError(3,0.2844347);
   RATIO->SetBinError(4,0.2768792);
   RATIO->SetMinimum(0);
   RATIO->SetMaximum(3.05);
   RATIO->SetEntries(4);
   RATIO->SetStats(0);

   ci = TColor::GetColor("#ffcccc");
   RATIO->SetFillColor(ci);
   RATIO->SetLineWidth(2);
   RATIO->SetMarkerStyle(20);
   RATIO->SetMarkerSize(0.3);
   RATIO->GetXaxis()->SetTitle("R^{2}");
   RATIO->GetXaxis()->SetRange(1,4);
   RATIO->GetXaxis()->SetLabelFont(42);
   RATIO->GetXaxis()->SetLabelSize(0.1);
   RATIO->GetXaxis()->SetTitleSize(0.11);
   RATIO->GetXaxis()->SetTitleOffset(0.88);
   RATIO->GetXaxis()->SetTitleFont(42);
   RATIO->GetYaxis()->SetTitle("Ratio");
   RATIO->GetYaxis()->SetLabelFont(42);
   RATIO->GetYaxis()->SetLabelSize(0.08);
   RATIO->GetYaxis()->SetTitleSize(0.11);
   RATIO->GetYaxis()->SetTitleOffset(0.35);
   RATIO->GetYaxis()->SetTitleFont(42);
   RATIO->GetZaxis()->SetLabelFont(42);
   RATIO->GetZaxis()->SetLabelSize(0.035);
   RATIO->GetZaxis()->SetTitleSize(0.035);
   RATIO->GetZaxis()->SetTitleFont(42);
   RATIO->Draw("pe");
   Double_t xAxis22[5] = {0.5, 0.575, 0.65, 0.75, 1.2}; 
   
   TH1F *RATIO2__11 = new TH1F("RATIO2__11","",4, xAxis22);
   RATIO2__11->SetBinContent(1,1);
   RATIO2__11->SetBinContent(2,1);
   RATIO2__11->SetBinContent(3,1);
   RATIO2__11->SetBinContent(4,1);
   RATIO2__11->SetBinError(1,0.2055413);
   RATIO2__11->SetBinError(2,0.08112484);
   RATIO2__11->SetBinError(3,0.1717057);
   RATIO2__11->SetBinError(4,0.2843488);
   RATIO2__11->SetMinimum(0);
   RATIO2__11->SetMaximum(3.05);
   RATIO2__11->SetEntries(4);
   RATIO2__11->SetDirectory(0);
   RATIO2__11->SetStats(0);

   ci = TColor::GetColor("#ffcccc");
   RATIO2__11->SetFillColor(ci);

   ci = TColor::GetColor("#ffcccc");
   RATIO2__11->SetLineColor(ci);
   RATIO2__11->SetLineWidth(2);
   RATIO2__11->GetXaxis()->SetTitle("R^{2}");
   RATIO2__11->GetXaxis()->SetLabelFont(42);
   RATIO2__11->GetXaxis()->SetLabelSize(0.1);
   RATIO2__11->GetXaxis()->SetTitleSize(0.11);
   RATIO2__11->GetXaxis()->SetTitleOffset(0.88);
   RATIO2__11->GetXaxis()->SetTitleFont(42);
   RATIO2__11->GetYaxis()->SetTitle("Ratio");
   RATIO2__11->GetYaxis()->SetLabelFont(42);
   RATIO2__11->GetYaxis()->SetLabelSize(0.08);
   RATIO2__11->GetYaxis()->SetTitleSize(0.11);
   RATIO2__11->GetYaxis()->SetTitleOffset(0.35);
   RATIO2__11->GetYaxis()->SetTitleFont(42);
   RATIO2__11->GetZaxis()->SetLabelFont(42);
   RATIO2__11->GetZaxis()->SetLabelSize(0.035);
   RATIO2__11->GetZaxis()->SetTitleSize(0.035);
   RATIO2__11->GetZaxis()->SetTitleFont(42);
   RATIO2__11->Draw("e2 same");
   Double_t xAxis23[5] = {0.5, 0.575, 0.65, 0.75, 1.2}; 
   
   TH1F *ratio2clone__12 = new TH1F("ratio2clone__12","",4, xAxis23);
   ratio2clone__12->SetBinContent(1,1);
   ratio2clone__12->SetBinContent(2,1);
   ratio2clone__12->SetBinContent(3,1);
   ratio2clone__12->SetBinContent(4,1);
   ratio2clone__12->SetBinError(1,0.2055413);
   ratio2clone__12->SetBinError(2,0.08112484);
   ratio2clone__12->SetBinError(3,0.1717057);
   ratio2clone__12->SetBinError(4,0.2843488);
   ratio2clone__12->SetMinimum(0);
   ratio2clone__12->SetMaximum(3.05);
   ratio2clone__12->SetEntries(4);
   ratio2clone__12->SetDirectory(0);
   ratio2clone__12->SetStats(0);

   ci = TColor::GetColor("#ff0000");
   ratio2clone__12->SetLineColor(ci);
   ratio2clone__12->SetLineWidth(2);
   ratio2clone__12->GetXaxis()->SetTitle("R^{2}");
   ratio2clone__12->GetXaxis()->SetLabelFont(42);
   ratio2clone__12->GetXaxis()->SetLabelSize(0.1);
   ratio2clone__12->GetXaxis()->SetTitleSize(0.11);
   ratio2clone__12->GetXaxis()->SetTitleOffset(0.88);
   ratio2clone__12->GetXaxis()->SetTitleFont(42);
   ratio2clone__12->GetYaxis()->SetTitle("Ratio");
   ratio2clone__12->GetYaxis()->SetLabelFont(42);
   ratio2clone__12->GetYaxis()->SetLabelSize(0.08);
   ratio2clone__12->GetYaxis()->SetTitleSize(0.11);
   ratio2clone__12->GetYaxis()->SetTitleOffset(0.35);
   ratio2clone__12->GetYaxis()->SetTitleFont(42);
   ratio2clone__12->GetZaxis()->SetLabelFont(42);
   ratio2clone__12->GetZaxis()->SetLabelSize(0.035);
   ratio2clone__12->GetZaxis()->SetTitleSize(0.035);
   ratio2clone__12->GetZaxis()->SetTitleFont(42);
   ratio2clone__12->Draw("hist same");
   Double_t xAxis24[5] = {0.5, 0.575, 0.65, 0.75, 1.2}; 
   
   TH1F *RATIO = new TH1F("RATIO","",4, xAxis24);
   RATIO->SetBinContent(1,1.195266);
   RATIO->SetBinContent(2,1.00144);
   RATIO->SetBinContent(3,0.8533041);
   RATIO->SetBinContent(4,0.7325534);
   RATIO->SetBinError(1,0.2390533);
   RATIO->SetBinError(2,0.2777495);
   RATIO->SetBinError(3,0.2844347);
   RATIO->SetBinError(4,0.2768792);
   RATIO->SetMinimum(0);
   RATIO->SetMaximum(3.05);
   RATIO->SetEntries(4);
   RATIO->SetStats(0);

   ci = TColor::GetColor("#ffcccc");
   RATIO->SetFillColor(ci);
   RATIO->SetLineWidth(2);
   RATIO->SetMarkerStyle(20);
   RATIO->SetMarkerSize(0.3);
   RATIO->GetXaxis()->SetTitle("R^{2}");
   RATIO->GetXaxis()->SetRange(1,4);
   RATIO->GetXaxis()->SetLabelFont(42);
   RATIO->GetXaxis()->SetLabelSize(0.1);
   RATIO->GetXaxis()->SetTitleSize(0.11);
   RATIO->GetXaxis()->SetTitleOffset(0.88);
   RATIO->GetXaxis()->SetTitleFont(42);
   RATIO->GetYaxis()->SetTitle("Ratio");
   RATIO->GetYaxis()->SetLabelFont(42);
   RATIO->GetYaxis()->SetLabelSize(0.08);
   RATIO->GetYaxis()->SetTitleSize(0.11);
   RATIO->GetYaxis()->SetTitleOffset(0.35);
   RATIO->GetYaxis()->SetTitleFont(42);
   RATIO->GetZaxis()->SetLabelFont(42);
   RATIO->GetZaxis()->SetLabelSize(0.035);
   RATIO->GetZaxis()->SetTitleSize(0.035);
   RATIO->GetZaxis()->SetTitleFont(42);
   RATIO->Draw("pesame");
   pad2->Modified();
   C->cd();
   C->Modified();
   C->cd();
   C->SetSelected(C);
}

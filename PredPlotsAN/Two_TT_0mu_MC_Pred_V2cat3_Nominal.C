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
   pad1->Range(0.4125,0.9359056,1.2875,26.56268);
   pad1->SetFillColor(0);
   pad1->SetBorderMode(0);
   pad1->SetBorderSize(2);
   pad1->SetBottomMargin(0);
   pad1->SetFrameBorderMode(0);
   pad1->SetFrameBorderMode(0);
   Double_t xAxis33[5] = {0.5, 0.575, 0.65, 0.75, 1.2}; 
   
   TH1F *Data_cat3_1D_0mu_Box = new TH1F("Data_cat3_1D_0mu_Box","",4, xAxis33);
   Data_cat3_1D_0mu_Box->SetBinContent(1,12);
   Data_cat3_1D_0mu_Box->SetBinContent(2,8);
   Data_cat3_1D_0mu_Box->SetBinContent(3,6);
   Data_cat3_1D_0mu_Box->SetBinContent(4,5);
   Data_cat3_1D_0mu_Box->SetBinError(1,3.464102);
   Data_cat3_1D_0mu_Box->SetBinError(2,2.828427);
   Data_cat3_1D_0mu_Box->SetBinError(3,2.44949);
   Data_cat3_1D_0mu_Box->SetBinError(4,2.236068);
   Data_cat3_1D_0mu_Box->SetMinimum(0.9359056);
   Data_cat3_1D_0mu_Box->SetMaximum(24);
   Data_cat3_1D_0mu_Box->SetEntries(31);
   Data_cat3_1D_0mu_Box->SetStats(0);
   Data_cat3_1D_0mu_Box->SetFillColor(1);
   Data_cat3_1D_0mu_Box->SetMarkerStyle(20);
   Data_cat3_1D_0mu_Box->SetMarkerSize(0.3);
   Data_cat3_1D_0mu_Box->GetXaxis()->SetTitle("RSQ");
   Data_cat3_1D_0mu_Box->GetXaxis()->SetRange(1,4);
   Data_cat3_1D_0mu_Box->GetXaxis()->SetLabelFont(42);
   Data_cat3_1D_0mu_Box->GetXaxis()->SetLabelSize(0.035);
   Data_cat3_1D_0mu_Box->GetXaxis()->SetTitleSize(0.035);
   Data_cat3_1D_0mu_Box->GetXaxis()->SetTitleFont(42);
   Data_cat3_1D_0mu_Box->GetYaxis()->SetLabelFont(42);
   Data_cat3_1D_0mu_Box->GetYaxis()->SetLabelSize(0.035);
   Data_cat3_1D_0mu_Box->GetYaxis()->SetTitleSize(0.035);
   Data_cat3_1D_0mu_Box->GetYaxis()->SetTitleFont(42);
   Data_cat3_1D_0mu_Box->GetZaxis()->SetLabelFont(42);
   Data_cat3_1D_0mu_Box->GetZaxis()->SetLabelSize(0.035);
   Data_cat3_1D_0mu_Box->GetZaxis()->SetTitleSize(0.035);
   Data_cat3_1D_0mu_Box->GetZaxis()->SetTitleFont(42);
   Data_cat3_1D_0mu_Box->Draw("pe");
   Double_t xAxis34[5] = {0.5, 0.575, 0.65, 0.75, 1.2}; 
   
   TH1F *TT_L_cat3_1D_0mu_Box__17 = new TH1F("TT_L_cat3_1D_0mu_Box__17","",4, xAxis34);
   TT_L_cat3_1D_0mu_Box__17->SetBinContent(1,11.14857);
   TT_L_cat3_1D_0mu_Box__17->SetBinContent(2,9.064366);
   TT_L_cat3_1D_0mu_Box__17->SetBinContent(3,5.1205);
   TT_L_cat3_1D_0mu_Box__17->SetBinContent(4,5.666566);
   TT_L_cat3_1D_0mu_Box__17->SetBinError(1,1.383209);
   TT_L_cat3_1D_0mu_Box__17->SetBinError(2,1.45618);
   TT_L_cat3_1D_0mu_Box__17->SetBinError(3,1.110698);
   TT_L_cat3_1D_0mu_Box__17->SetBinError(4,0.9870378);
   TT_L_cat3_1D_0mu_Box__17->SetEntries(499);
   TT_L_cat3_1D_0mu_Box__17->SetDirectory(0);
   TT_L_cat3_1D_0mu_Box__17->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#ffcccc");
   TT_L_cat3_1D_0mu_Box__17->SetFillColor(ci);

   ci = TColor::GetColor("#ffcccc");
   TT_L_cat3_1D_0mu_Box__17->SetLineColor(ci);
   TT_L_cat3_1D_0mu_Box__17->SetLineWidth(2);
   TT_L_cat3_1D_0mu_Box__17->GetXaxis()->SetTitle("RSQ");
   TT_L_cat3_1D_0mu_Box__17->GetXaxis()->SetRange(1,4);
   TT_L_cat3_1D_0mu_Box__17->GetXaxis()->SetLabelFont(42);
   TT_L_cat3_1D_0mu_Box__17->GetXaxis()->SetLabelSize(0.035);
   TT_L_cat3_1D_0mu_Box__17->GetXaxis()->SetTitleSize(0.035);
   TT_L_cat3_1D_0mu_Box__17->GetXaxis()->SetTitleFont(42);
   TT_L_cat3_1D_0mu_Box__17->GetYaxis()->SetLabelFont(42);
   TT_L_cat3_1D_0mu_Box__17->GetYaxis()->SetLabelSize(0.035);
   TT_L_cat3_1D_0mu_Box__17->GetYaxis()->SetTitleSize(0.035);
   TT_L_cat3_1D_0mu_Box__17->GetYaxis()->SetTitleFont(42);
   TT_L_cat3_1D_0mu_Box__17->GetZaxis()->SetLabelFont(42);
   TT_L_cat3_1D_0mu_Box__17->GetZaxis()->SetLabelSize(0.035);
   TT_L_cat3_1D_0mu_Box__17->GetZaxis()->SetTitleSize(0.035);
   TT_L_cat3_1D_0mu_Box__17->GetZaxis()->SetTitleFont(42);
   TT_L_cat3_1D_0mu_Box__17->Draw("E2same");
   Double_t xAxis35[5] = {0.5, 0.575, 0.65, 0.75, 1.2}; 
   
   TH1F *h2clone__18 = new TH1F("h2clone__18","TT_L_cat3_1D_0mu_Box",4, xAxis35);
   h2clone__18->SetBinContent(1,11.14857);
   h2clone__18->SetBinContent(2,9.064366);
   h2clone__18->SetBinContent(3,5.1205);
   h2clone__18->SetBinContent(4,5.666566);
   h2clone__18->SetBinError(1,1.383209);
   h2clone__18->SetBinError(2,1.45618);
   h2clone__18->SetBinError(3,1.110698);
   h2clone__18->SetBinError(4,0.9870378);
   h2clone__18->SetEntries(499);
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
   Double_t xAxis36[5] = {0.5, 0.575, 0.65, 0.75, 1.2}; 
   
   TH1F *Data_cat3_1D_0mu_Box = new TH1F("Data_cat3_1D_0mu_Box","",4, xAxis36);
   Data_cat3_1D_0mu_Box->SetBinContent(1,12);
   Data_cat3_1D_0mu_Box->SetBinContent(2,8);
   Data_cat3_1D_0mu_Box->SetBinContent(3,6);
   Data_cat3_1D_0mu_Box->SetBinContent(4,5);
   Data_cat3_1D_0mu_Box->SetBinError(1,3.464102);
   Data_cat3_1D_0mu_Box->SetBinError(2,2.828427);
   Data_cat3_1D_0mu_Box->SetBinError(3,2.44949);
   Data_cat3_1D_0mu_Box->SetBinError(4,2.236068);
   Data_cat3_1D_0mu_Box->SetMinimum(0.9359056);
   Data_cat3_1D_0mu_Box->SetMaximum(24);
   Data_cat3_1D_0mu_Box->SetEntries(31);
   Data_cat3_1D_0mu_Box->SetStats(0);
   Data_cat3_1D_0mu_Box->SetFillColor(1);
   Data_cat3_1D_0mu_Box->SetMarkerStyle(20);
   Data_cat3_1D_0mu_Box->SetMarkerSize(0.3);
   Data_cat3_1D_0mu_Box->GetXaxis()->SetTitle("RSQ");
   Data_cat3_1D_0mu_Box->GetXaxis()->SetRange(1,4);
   Data_cat3_1D_0mu_Box->GetXaxis()->SetLabelFont(42);
   Data_cat3_1D_0mu_Box->GetXaxis()->SetLabelSize(0.035);
   Data_cat3_1D_0mu_Box->GetXaxis()->SetTitleSize(0.035);
   Data_cat3_1D_0mu_Box->GetXaxis()->SetTitleFont(42);
   Data_cat3_1D_0mu_Box->GetYaxis()->SetLabelFont(42);
   Data_cat3_1D_0mu_Box->GetYaxis()->SetLabelSize(0.035);
   Data_cat3_1D_0mu_Box->GetYaxis()->SetTitleSize(0.035);
   Data_cat3_1D_0mu_Box->GetYaxis()->SetTitleFont(42);
   Data_cat3_1D_0mu_Box->GetZaxis()->SetLabelFont(42);
   Data_cat3_1D_0mu_Box->GetZaxis()->SetLabelSize(0.035);
   Data_cat3_1D_0mu_Box->GetZaxis()->SetTitleSize(0.035);
   Data_cat3_1D_0mu_Box->GetZaxis()->SetTitleFont(42);
   Data_cat3_1D_0mu_Box->Draw("pesame");
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
   TLegendEntry *entry=leg->AddEntry("Data_cat3_1D_0mu_Box","R^{2} Data  0#mu-2b","lep");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.3);
   entry->SetTextFont(42);
   entry=leg->AddEntry("TT_L_cat3_1D_0mu_Box","R^{2} BKg Pred 0#mu-2b","lf");

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
   Double_t xAxis37[5] = {0.5, 0.575, 0.65, 0.75, 1.2}; 
   
   TH1F *RATIO = new TH1F("RATIO","",4, xAxis37);
   RATIO->SetBinContent(1,1.076372);
   RATIO->SetBinContent(2,0.8825769);
   RATIO->SetBinContent(3,1.171761);
   RATIO->SetBinContent(4,0.8823686);
   RATIO->SetBinError(1,0.3107217);
   RATIO->SetBinError(2,0.312038);
   RATIO->SetBinError(3,0.4783693);
   RATIO->SetBinError(4,0.3946072);
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
   Double_t xAxis38[5] = {0.5, 0.575, 0.65, 0.75, 1.2}; 
   
   TH1F *RATIO2__19 = new TH1F("RATIO2__19","",4, xAxis38);
   RATIO2__19->SetBinContent(1,1);
   RATIO2__19->SetBinContent(2,1);
   RATIO2__19->SetBinContent(3,1);
   RATIO2__19->SetBinContent(4,1);
   RATIO2__19->SetBinError(1,0.1240706);
   RATIO2__19->SetBinError(2,0.1606489);
   RATIO2__19->SetBinError(3,0.2169121);
   RATIO2__19->SetBinError(4,0.1741862);
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
   RATIO2__19->GetYaxis()->SetTitleSize(0.11);
   RATIO2__19->GetYaxis()->SetTitleOffset(0.35);
   RATIO2__19->GetYaxis()->SetTitleFont(42);
   RATIO2__19->GetZaxis()->SetLabelFont(42);
   RATIO2__19->GetZaxis()->SetLabelSize(0.035);
   RATIO2__19->GetZaxis()->SetTitleSize(0.035);
   RATIO2__19->GetZaxis()->SetTitleFont(42);
   RATIO2__19->Draw("e2 same");
   Double_t xAxis39[5] = {0.5, 0.575, 0.65, 0.75, 1.2}; 
   
   TH1F *ratio2clone__20 = new TH1F("ratio2clone__20","",4, xAxis39);
   ratio2clone__20->SetBinContent(1,1);
   ratio2clone__20->SetBinContent(2,1);
   ratio2clone__20->SetBinContent(3,1);
   ratio2clone__20->SetBinContent(4,1);
   ratio2clone__20->SetBinError(1,0.1240706);
   ratio2clone__20->SetBinError(2,0.1606489);
   ratio2clone__20->SetBinError(3,0.2169121);
   ratio2clone__20->SetBinError(4,0.1741862);
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
   ratio2clone__20->GetYaxis()->SetTitleSize(0.11);
   ratio2clone__20->GetYaxis()->SetTitleOffset(0.35);
   ratio2clone__20->GetYaxis()->SetTitleFont(42);
   ratio2clone__20->GetZaxis()->SetLabelFont(42);
   ratio2clone__20->GetZaxis()->SetLabelSize(0.035);
   ratio2clone__20->GetZaxis()->SetTitleSize(0.035);
   ratio2clone__20->GetZaxis()->SetTitleFont(42);
   ratio2clone__20->Draw("hist same");
   Double_t xAxis40[5] = {0.5, 0.575, 0.65, 0.75, 1.2}; 
   
   TH1F *RATIO = new TH1F("RATIO","",4, xAxis40);
   RATIO->SetBinContent(1,1.076372);
   RATIO->SetBinContent(2,0.8825769);
   RATIO->SetBinContent(3,1.171761);
   RATIO->SetBinContent(4,0.8823686);
   RATIO->SetBinError(1,0.3107217);
   RATIO->SetBinError(2,0.312038);
   RATIO->SetBinError(3,0.4783693);
   RATIO->SetBinError(4,0.3946072);
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

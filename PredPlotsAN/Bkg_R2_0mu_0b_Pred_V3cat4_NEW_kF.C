{
//=========Macro generated from canvas: C/C	
//=========  (Thu Sep 11 00:38:40 2014) by ROOT version5.34/20
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
   pad1->Range(0.4125,0.3699038,1.2875,259.9589);
   pad1->SetFillColor(0);
   pad1->SetBorderMode(0);
   pad1->SetBorderSize(2);
   pad1->SetBottomMargin(0);
   pad1->SetFrameBorderMode(0);
   pad1->SetFrameBorderMode(0);
   Double_t xAxis185[5] = {0.5, 0.6, 0.7, 0.95, 1.2}; 
   
   TH1F *Data_cat4_1D_0mu_Box = new TH1F("Data_cat4_1D_0mu_Box","",4, xAxis185);
   Data_cat4_1D_0mu_Box->SetBinContent(1,117);
   Data_cat4_1D_0mu_Box->SetBinContent(2,58);
   Data_cat4_1D_0mu_Box->SetBinContent(3,75);
   Data_cat4_1D_0mu_Box->SetBinContent(4,11);
   Data_cat4_1D_0mu_Box->SetBinError(1,10.81665);
   Data_cat4_1D_0mu_Box->SetBinError(2,7.615773);
   Data_cat4_1D_0mu_Box->SetBinError(3,8.660254);
   Data_cat4_1D_0mu_Box->SetBinError(4,3.316625);
   Data_cat4_1D_0mu_Box->SetMinimum(0.3699038);
   Data_cat4_1D_0mu_Box->SetMaximum(234);
   Data_cat4_1D_0mu_Box->SetEntries(261);
   Data_cat4_1D_0mu_Box->SetStats(0);
   Data_cat4_1D_0mu_Box->SetFillColor(1);
   Data_cat4_1D_0mu_Box->SetMarkerStyle(20);
   Data_cat4_1D_0mu_Box->SetMarkerSize(0.3);
   Data_cat4_1D_0mu_Box->GetXaxis()->SetTitle("RSQ");
   Data_cat4_1D_0mu_Box->GetXaxis()->SetRange(1,4);
   Data_cat4_1D_0mu_Box->GetXaxis()->SetLabelFont(42);
   Data_cat4_1D_0mu_Box->GetXaxis()->SetLabelSize(0.035);
   Data_cat4_1D_0mu_Box->GetXaxis()->SetTitleSize(0.035);
   Data_cat4_1D_0mu_Box->GetXaxis()->SetTitleFont(42);
   Data_cat4_1D_0mu_Box->GetYaxis()->SetLabelFont(42);
   Data_cat4_1D_0mu_Box->GetYaxis()->SetLabelSize(0.035);
   Data_cat4_1D_0mu_Box->GetYaxis()->SetTitleSize(0.035);
   Data_cat4_1D_0mu_Box->GetYaxis()->SetTitleFont(42);
   Data_cat4_1D_0mu_Box->GetZaxis()->SetLabelFont(42);
   Data_cat4_1D_0mu_Box->GetZaxis()->SetLabelSize(0.035);
   Data_cat4_1D_0mu_Box->GetZaxis()->SetTitleSize(0.035);
   Data_cat4_1D_0mu_Box->GetZaxis()->SetTitleFont(42);
   Data_cat4_1D_0mu_Box->Draw("pe");
   Double_t xAxis186[5] = {0.5, 0.6, 0.7, 0.95, 1.2}; 
   
   TH1F *W_cat4_1D_0mu_Box__93 = new TH1F("W_cat4_1D_0mu_Box__93","",4, xAxis186);
   W_cat4_1D_0mu_Box__93->SetBinContent(1,132.3943);
   W_cat4_1D_0mu_Box__93->SetBinContent(2,79.26871);
   W_cat4_1D_0mu_Box__93->SetBinContent(3,103.6256);
   W_cat4_1D_0mu_Box__93->SetBinContent(4,19.40904);
   W_cat4_1D_0mu_Box__93->SetBinError(1,2.727899);
   W_cat4_1D_0mu_Box__93->SetBinError(2,2.066893);
   W_cat4_1D_0mu_Box__93->SetBinError(3,2.234532);
   W_cat4_1D_0mu_Box__93->SetBinError(4,0.9138458);
   W_cat4_1D_0mu_Box__93->SetEntries(12790);
   W_cat4_1D_0mu_Box__93->SetDirectory(0);
   W_cat4_1D_0mu_Box__93->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ccffcc");
   W_cat4_1D_0mu_Box__93->SetFillColor(ci);

   ci = TColor::GetColor("#ccffcc");
   W_cat4_1D_0mu_Box__93->SetLineColor(ci);
   W_cat4_1D_0mu_Box__93->SetLineWidth(2);
   W_cat4_1D_0mu_Box__93->GetXaxis()->SetTitle("RSQ");
   W_cat4_1D_0mu_Box__93->GetXaxis()->SetRange(1,4);
   W_cat4_1D_0mu_Box__93->GetXaxis()->SetLabelFont(42);
   W_cat4_1D_0mu_Box__93->GetXaxis()->SetLabelSize(0.035);
   W_cat4_1D_0mu_Box__93->GetXaxis()->SetTitleSize(0.035);
   W_cat4_1D_0mu_Box__93->GetXaxis()->SetTitleFont(42);
   W_cat4_1D_0mu_Box__93->GetYaxis()->SetLabelFont(42);
   W_cat4_1D_0mu_Box__93->GetYaxis()->SetLabelSize(0.035);
   W_cat4_1D_0mu_Box__93->GetYaxis()->SetTitleSize(0.035);
   W_cat4_1D_0mu_Box__93->GetYaxis()->SetTitleFont(42);
   W_cat4_1D_0mu_Box__93->GetZaxis()->SetLabelFont(42);
   W_cat4_1D_0mu_Box__93->GetZaxis()->SetLabelSize(0.035);
   W_cat4_1D_0mu_Box__93->GetZaxis()->SetTitleSize(0.035);
   W_cat4_1D_0mu_Box__93->GetZaxis()->SetTitleFont(42);
   W_cat4_1D_0mu_Box__93->Draw("E2same");
   Double_t xAxis187[5] = {0.5, 0.6, 0.7, 0.95, 1.2}; 
   
   TH1F *h2clone__94 = new TH1F("h2clone__94","W_cat4_1D_0mu_Box",4, xAxis187);
   h2clone__94->SetBinContent(1,132.3943);
   h2clone__94->SetBinContent(2,79.26871);
   h2clone__94->SetBinContent(3,103.6256);
   h2clone__94->SetBinContent(4,19.40904);
   h2clone__94->SetBinError(1,2.727899);
   h2clone__94->SetBinError(2,2.066893);
   h2clone__94->SetBinError(3,2.234532);
   h2clone__94->SetBinError(4,0.9138458);
   h2clone__94->SetEntries(12790);
   h2clone__94->SetDirectory(0);

   ci = TColor::GetColor("#00ff00");
   h2clone__94->SetLineColor(ci);
   h2clone__94->SetLineWidth(2);
   h2clone__94->GetXaxis()->SetRange(1,4);
   h2clone__94->GetXaxis()->SetLabelFont(42);
   h2clone__94->GetXaxis()->SetLabelSize(0.035);
   h2clone__94->GetXaxis()->SetTitleSize(0.035);
   h2clone__94->GetXaxis()->SetTitleFont(42);
   h2clone__94->GetYaxis()->SetLabelFont(42);
   h2clone__94->GetYaxis()->SetLabelSize(0.035);
   h2clone__94->GetYaxis()->SetTitleSize(0.035);
   h2clone__94->GetYaxis()->SetTitleFont(42);
   h2clone__94->GetZaxis()->SetLabelFont(42);
   h2clone__94->GetZaxis()->SetLabelSize(0.035);
   h2clone__94->GetZaxis()->SetTitleSize(0.035);
   h2clone__94->GetZaxis()->SetTitleFont(42);
   h2clone__94->Draw("hist same");
   Double_t xAxis188[5] = {0.5, 0.6, 0.7, 0.95, 1.2}; 
   
   TH1F *Data_cat4_1D_0mu_Box = new TH1F("Data_cat4_1D_0mu_Box","",4, xAxis188);
   Data_cat4_1D_0mu_Box->SetBinContent(1,117);
   Data_cat4_1D_0mu_Box->SetBinContent(2,58);
   Data_cat4_1D_0mu_Box->SetBinContent(3,75);
   Data_cat4_1D_0mu_Box->SetBinContent(4,11);
   Data_cat4_1D_0mu_Box->SetBinError(1,10.81665);
   Data_cat4_1D_0mu_Box->SetBinError(2,7.615773);
   Data_cat4_1D_0mu_Box->SetBinError(3,8.660254);
   Data_cat4_1D_0mu_Box->SetBinError(4,3.316625);
   Data_cat4_1D_0mu_Box->SetMinimum(0.3699038);
   Data_cat4_1D_0mu_Box->SetMaximum(234);
   Data_cat4_1D_0mu_Box->SetEntries(261);
   Data_cat4_1D_0mu_Box->SetStats(0);
   Data_cat4_1D_0mu_Box->SetFillColor(1);
   Data_cat4_1D_0mu_Box->SetMarkerStyle(20);
   Data_cat4_1D_0mu_Box->SetMarkerSize(0.3);
   Data_cat4_1D_0mu_Box->GetXaxis()->SetTitle("RSQ");
   Data_cat4_1D_0mu_Box->GetXaxis()->SetRange(1,4);
   Data_cat4_1D_0mu_Box->GetXaxis()->SetLabelFont(42);
   Data_cat4_1D_0mu_Box->GetXaxis()->SetLabelSize(0.035);
   Data_cat4_1D_0mu_Box->GetXaxis()->SetTitleSize(0.035);
   Data_cat4_1D_0mu_Box->GetXaxis()->SetTitleFont(42);
   Data_cat4_1D_0mu_Box->GetYaxis()->SetLabelFont(42);
   Data_cat4_1D_0mu_Box->GetYaxis()->SetLabelSize(0.035);
   Data_cat4_1D_0mu_Box->GetYaxis()->SetTitleSize(0.035);
   Data_cat4_1D_0mu_Box->GetYaxis()->SetTitleFont(42);
   Data_cat4_1D_0mu_Box->GetZaxis()->SetLabelFont(42);
   Data_cat4_1D_0mu_Box->GetZaxis()->SetLabelSize(0.035);
   Data_cat4_1D_0mu_Box->GetZaxis()->SetTitleSize(0.035);
   Data_cat4_1D_0mu_Box->GetZaxis()->SetTitleFont(42);
   Data_cat4_1D_0mu_Box->Draw("pesame");
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
   TLegendEntry *entry=leg->AddEntry("Data_cat4_1D_0mu_Box","R^{2} Data  0#mu","lep");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.3);
   entry->SetTextFont(42);
   entry=leg->AddEntry("W_cat4_1D_0mu_Box","R^{2} BKg Pred 0#mu","lf");

   ci = TColor::GetColor("#ccffcc");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#00ff00");
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
      tex = new TLatex(0.62,0.95,"#int L dt = 18.84 fb^{-1}");
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
   Double_t xAxis189[5] = {0.5, 0.6, 0.7, 0.95, 1.2}; 
   
   TH1F *RATIO = new TH1F("RATIO","",4, xAxis189);
   RATIO->SetBinContent(1,0.883724);
   RATIO->SetBinContent(2,0.7316885);
   RATIO->SetBinContent(3,0.7237592);
   RATIO->SetBinContent(4,0.5667463);
   RATIO->SetBinError(1,0.08170032);
   RATIO->SetBinError(2,0.0960754);
   RATIO->SetBinError(3,0.08357251);
   RATIO->SetBinError(4,0.1708804);
   RATIO->SetMinimum(0);
   RATIO->SetMaximum(3.05);
   RATIO->SetEntries(4);
   RATIO->SetStats(0);

   ci = TColor::GetColor("#ccffcc");
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
   Double_t xAxis190[5] = {0.5, 0.6, 0.7, 0.95, 1.2}; 
   
   TH1F *RATIO2__95 = new TH1F("RATIO2__95","",4, xAxis190);
   RATIO2__95->SetBinContent(1,1);
   RATIO2__95->SetBinContent(2,1);
   RATIO2__95->SetBinContent(3,1);
   RATIO2__95->SetBinContent(4,1);
   RATIO2__95->SetBinError(1,0.02060436);
   RATIO2__95->SetBinError(2,0.02607451);
   RATIO2__95->SetBinError(3,0.0215635);
   RATIO2__95->SetBinError(4,0.04708352);
   RATIO2__95->SetMinimum(0);
   RATIO2__95->SetMaximum(3.05);
   RATIO2__95->SetEntries(4);
   RATIO2__95->SetDirectory(0);
   RATIO2__95->SetStats(0);

   ci = TColor::GetColor("#ccffcc");
   RATIO2__95->SetFillColor(ci);

   ci = TColor::GetColor("#ccffcc");
   RATIO2__95->SetLineColor(ci);
   RATIO2__95->SetLineWidth(2);
   RATIO2__95->GetXaxis()->SetTitle("R^{2}");
   RATIO2__95->GetXaxis()->SetLabelFont(42);
   RATIO2__95->GetXaxis()->SetLabelSize(0.1);
   RATIO2__95->GetXaxis()->SetTitleSize(0.11);
   RATIO2__95->GetXaxis()->SetTitleOffset(0.88);
   RATIO2__95->GetXaxis()->SetTitleFont(42);
   RATIO2__95->GetYaxis()->SetTitle("Ratio");
   RATIO2__95->GetYaxis()->SetLabelFont(42);
   RATIO2__95->GetYaxis()->SetLabelSize(0.08);
   RATIO2__95->GetYaxis()->SetTitleSize(0.11);
   RATIO2__95->GetYaxis()->SetTitleOffset(0.35);
   RATIO2__95->GetYaxis()->SetTitleFont(42);
   RATIO2__95->GetZaxis()->SetLabelFont(42);
   RATIO2__95->GetZaxis()->SetLabelSize(0.035);
   RATIO2__95->GetZaxis()->SetTitleSize(0.035);
   RATIO2__95->GetZaxis()->SetTitleFont(42);
   RATIO2__95->Draw("e2 same");
   Double_t xAxis191[5] = {0.5, 0.6, 0.7, 0.95, 1.2}; 
   
   TH1F *ratio2clone__96 = new TH1F("ratio2clone__96","",4, xAxis191);
   ratio2clone__96->SetBinContent(1,1);
   ratio2clone__96->SetBinContent(2,1);
   ratio2clone__96->SetBinContent(3,1);
   ratio2clone__96->SetBinContent(4,1);
   ratio2clone__96->SetBinError(1,0.02060436);
   ratio2clone__96->SetBinError(2,0.02607451);
   ratio2clone__96->SetBinError(3,0.0215635);
   ratio2clone__96->SetBinError(4,0.04708352);
   ratio2clone__96->SetMinimum(0);
   ratio2clone__96->SetMaximum(3.05);
   ratio2clone__96->SetEntries(4);
   ratio2clone__96->SetDirectory(0);
   ratio2clone__96->SetStats(0);

   ci = TColor::GetColor("#00ff00");
   ratio2clone__96->SetLineColor(ci);
   ratio2clone__96->SetLineWidth(2);
   ratio2clone__96->GetXaxis()->SetTitle("R^{2}");
   ratio2clone__96->GetXaxis()->SetLabelFont(42);
   ratio2clone__96->GetXaxis()->SetLabelSize(0.1);
   ratio2clone__96->GetXaxis()->SetTitleSize(0.11);
   ratio2clone__96->GetXaxis()->SetTitleOffset(0.88);
   ratio2clone__96->GetXaxis()->SetTitleFont(42);
   ratio2clone__96->GetYaxis()->SetTitle("Ratio");
   ratio2clone__96->GetYaxis()->SetLabelFont(42);
   ratio2clone__96->GetYaxis()->SetLabelSize(0.08);
   ratio2clone__96->GetYaxis()->SetTitleSize(0.11);
   ratio2clone__96->GetYaxis()->SetTitleOffset(0.35);
   ratio2clone__96->GetYaxis()->SetTitleFont(42);
   ratio2clone__96->GetZaxis()->SetLabelFont(42);
   ratio2clone__96->GetZaxis()->SetLabelSize(0.035);
   ratio2clone__96->GetZaxis()->SetTitleSize(0.035);
   ratio2clone__96->GetZaxis()->SetTitleFont(42);
   ratio2clone__96->Draw("hist same");
   Double_t xAxis192[5] = {0.5, 0.6, 0.7, 0.95, 1.2}; 
   
   TH1F *RATIO = new TH1F("RATIO","",4, xAxis192);
   RATIO->SetBinContent(1,0.883724);
   RATIO->SetBinContent(2,0.7316885);
   RATIO->SetBinContent(3,0.7237592);
   RATIO->SetBinContent(4,0.5667463);
   RATIO->SetBinError(1,0.08170032);
   RATIO->SetBinError(2,0.0960754);
   RATIO->SetBinError(3,0.08357251);
   RATIO->SetBinError(4,0.1708804);
   RATIO->SetMinimum(0);
   RATIO->SetMaximum(3.05);
   RATIO->SetEntries(4);
   RATIO->SetStats(0);

   ci = TColor::GetColor("#ccffcc");
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

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
   pad1->Range(0.4125,3.914154,1.2875,2417.343);
   pad1->SetFillColor(0);
   pad1->SetBorderMode(0);
   pad1->SetBorderSize(2);
   pad1->SetBottomMargin(0);
   pad1->SetFrameBorderMode(0);
   pad1->SetFrameBorderMode(0);
   Double_t xAxis81[7] = {0.5, 0.575, 0.65, 0.75, 0.85, 0.95, 1.2}; 
   
   TH1F *Data_cat2_1D_0mu_Box = new TH1F("Data_cat2_1D_0mu_Box","",6, xAxis81);
   Data_cat2_1D_0mu_Box->SetBinContent(1,1088);
   Data_cat2_1D_0mu_Box->SetBinContent(2,765);
   Data_cat2_1D_0mu_Box->SetBinContent(3,682);
   Data_cat2_1D_0mu_Box->SetBinContent(4,565);
   Data_cat2_1D_0mu_Box->SetBinContent(5,395);
   Data_cat2_1D_0mu_Box->SetBinContent(6,290);
   Data_cat2_1D_0mu_Box->SetBinError(1,32.98485);
   Data_cat2_1D_0mu_Box->SetBinError(2,27.65863);
   Data_cat2_1D_0mu_Box->SetBinError(3,26.11513);
   Data_cat2_1D_0mu_Box->SetBinError(4,23.76973);
   Data_cat2_1D_0mu_Box->SetBinError(5,19.87461);
   Data_cat2_1D_0mu_Box->SetBinError(6,17.02939);
   Data_cat2_1D_0mu_Box->SetMinimum(3.914154);
   Data_cat2_1D_0mu_Box->SetMaximum(2176);
   Data_cat2_1D_0mu_Box->SetEntries(3785);
   Data_cat2_1D_0mu_Box->SetStats(0);
   Data_cat2_1D_0mu_Box->SetFillColor(1);
   Data_cat2_1D_0mu_Box->SetMarkerStyle(20);
   Data_cat2_1D_0mu_Box->SetMarkerSize(0.3);
   Data_cat2_1D_0mu_Box->GetXaxis()->SetTitle("RSQ");
   Data_cat2_1D_0mu_Box->GetXaxis()->SetRange(1,6);
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
   Double_t xAxis82[7] = {0.5, 0.575, 0.65, 0.75, 0.85, 0.95, 1.2}; 
   
   TH1F *Data_cat2_1D_1mu_Box__41 = new TH1F("Data_cat2_1D_1mu_Box__41","",6, xAxis82);
   Data_cat2_1D_1mu_Box__41->SetBinContent(1,1133.044);
   Data_cat2_1D_1mu_Box__41->SetBinContent(2,783.7466);
   Data_cat2_1D_1mu_Box__41->SetBinContent(3,660.8276);
   Data_cat2_1D_1mu_Box__41->SetBinContent(4,508.5359);
   Data_cat2_1D_1mu_Box__41->SetBinContent(5,444.584);
   Data_cat2_1D_1mu_Box__41->SetBinContent(6,271.0235);
   Data_cat2_1D_1mu_Box__41->SetBinError(1,131.0654);
   Data_cat2_1D_1mu_Box__41->SetBinError(2,112.276);
   Data_cat2_1D_1mu_Box__41->SetBinError(3,98.01016);
   Data_cat2_1D_1mu_Box__41->SetBinError(4,96.46109);
   Data_cat2_1D_1mu_Box__41->SetBinError(5,102.1301);
   Data_cat2_1D_1mu_Box__41->SetBinError(6,75.31579);
   Data_cat2_1D_1mu_Box__41->SetEntries(2573.35);
   Data_cat2_1D_1mu_Box__41->SetDirectory(0);
   Data_cat2_1D_1mu_Box__41->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ccffcc");
   Data_cat2_1D_1mu_Box__41->SetFillColor(ci);

   ci = TColor::GetColor("#ccffcc");
   Data_cat2_1D_1mu_Box__41->SetLineColor(ci);
   Data_cat2_1D_1mu_Box__41->SetLineWidth(2);
   Data_cat2_1D_1mu_Box__41->GetXaxis()->SetTitle("RSQ");
   Data_cat2_1D_1mu_Box__41->GetXaxis()->SetRange(1,6);
   Data_cat2_1D_1mu_Box__41->GetXaxis()->SetLabelFont(42);
   Data_cat2_1D_1mu_Box__41->GetXaxis()->SetLabelSize(0.035);
   Data_cat2_1D_1mu_Box__41->GetXaxis()->SetTitleSize(0.035);
   Data_cat2_1D_1mu_Box__41->GetXaxis()->SetTitleFont(42);
   Data_cat2_1D_1mu_Box__41->GetYaxis()->SetLabelFont(42);
   Data_cat2_1D_1mu_Box__41->GetYaxis()->SetLabelSize(0.035);
   Data_cat2_1D_1mu_Box__41->GetYaxis()->SetTitleSize(0.035);
   Data_cat2_1D_1mu_Box__41->GetYaxis()->SetTitleFont(42);
   Data_cat2_1D_1mu_Box__41->GetZaxis()->SetLabelFont(42);
   Data_cat2_1D_1mu_Box__41->GetZaxis()->SetLabelSize(0.035);
   Data_cat2_1D_1mu_Box__41->GetZaxis()->SetTitleSize(0.035);
   Data_cat2_1D_1mu_Box__41->GetZaxis()->SetTitleFont(42);
   Data_cat2_1D_1mu_Box__41->Draw("E2same");
   Double_t xAxis83[7] = {0.5, 0.575, 0.65, 0.75, 0.85, 0.95, 1.2}; 
   
   TH1F *h2clone__42 = new TH1F("h2clone__42","Data_cat2_1D_1mu_Box",6, xAxis83);
   h2clone__42->SetBinContent(1,1133.044);
   h2clone__42->SetBinContent(2,783.7466);
   h2clone__42->SetBinContent(3,660.8276);
   h2clone__42->SetBinContent(4,508.5359);
   h2clone__42->SetBinContent(5,444.584);
   h2clone__42->SetBinContent(6,271.0235);
   h2clone__42->SetBinError(1,131.0654);
   h2clone__42->SetBinError(2,112.276);
   h2clone__42->SetBinError(3,98.01016);
   h2clone__42->SetBinError(4,96.46109);
   h2clone__42->SetBinError(5,102.1301);
   h2clone__42->SetBinError(6,75.31579);
   h2clone__42->SetEntries(2573.35);
   h2clone__42->SetDirectory(0);

   ci = TColor::GetColor("#00ff00");
   h2clone__42->SetLineColor(ci);
   h2clone__42->SetLineWidth(2);
   h2clone__42->GetXaxis()->SetRange(1,6);
   h2clone__42->GetXaxis()->SetLabelFont(42);
   h2clone__42->GetXaxis()->SetLabelSize(0.035);
   h2clone__42->GetXaxis()->SetTitleSize(0.035);
   h2clone__42->GetXaxis()->SetTitleFont(42);
   h2clone__42->GetYaxis()->SetLabelFont(42);
   h2clone__42->GetYaxis()->SetLabelSize(0.035);
   h2clone__42->GetYaxis()->SetTitleSize(0.035);
   h2clone__42->GetYaxis()->SetTitleFont(42);
   h2clone__42->GetZaxis()->SetLabelFont(42);
   h2clone__42->GetZaxis()->SetLabelSize(0.035);
   h2clone__42->GetZaxis()->SetTitleSize(0.035);
   h2clone__42->GetZaxis()->SetTitleFont(42);
   h2clone__42->Draw("hist same");
   Double_t xAxis84[7] = {0.5, 0.575, 0.65, 0.75, 0.85, 0.95, 1.2}; 
   
   TH1F *Data_cat2_1D_0mu_Box = new TH1F("Data_cat2_1D_0mu_Box","",6, xAxis84);
   Data_cat2_1D_0mu_Box->SetBinContent(1,1088);
   Data_cat2_1D_0mu_Box->SetBinContent(2,765);
   Data_cat2_1D_0mu_Box->SetBinContent(3,682);
   Data_cat2_1D_0mu_Box->SetBinContent(4,565);
   Data_cat2_1D_0mu_Box->SetBinContent(5,395);
   Data_cat2_1D_0mu_Box->SetBinContent(6,290);
   Data_cat2_1D_0mu_Box->SetBinError(1,32.98485);
   Data_cat2_1D_0mu_Box->SetBinError(2,27.65863);
   Data_cat2_1D_0mu_Box->SetBinError(3,26.11513);
   Data_cat2_1D_0mu_Box->SetBinError(4,23.76973);
   Data_cat2_1D_0mu_Box->SetBinError(5,19.87461);
   Data_cat2_1D_0mu_Box->SetBinError(6,17.02939);
   Data_cat2_1D_0mu_Box->SetMinimum(3.914154);
   Data_cat2_1D_0mu_Box->SetMaximum(2176);
   Data_cat2_1D_0mu_Box->SetEntries(3785);
   Data_cat2_1D_0mu_Box->SetStats(0);
   Data_cat2_1D_0mu_Box->SetFillColor(1);
   Data_cat2_1D_0mu_Box->SetMarkerStyle(20);
   Data_cat2_1D_0mu_Box->SetMarkerSize(0.3);
   Data_cat2_1D_0mu_Box->GetXaxis()->SetTitle("RSQ");
   Data_cat2_1D_0mu_Box->GetXaxis()->SetRange(1,6);
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
   TLegendEntry *entry=leg->AddEntry("Data_cat2_1D_0mu_Box","R^{2} Data  0#mu","lep");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.3);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Data_cat2_1D_1mu_Box","R^{2} BKg Pred 0#mu","lf");

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
   Double_t xAxis85[7] = {0.5, 0.575, 0.65, 0.75, 0.85, 0.95, 1.2}; 
   
   TH1F *RATIO = new TH1F("RATIO","",6, xAxis85);
   RATIO->SetBinContent(1,0.9602448);
   RATIO->SetBinContent(2,0.9760807);
   RATIO->SetBinContent(3,1.032039);
   RATIO->SetBinContent(4,1.111033);
   RATIO->SetBinContent(5,0.8884709);
   RATIO->SetBinContent(6,1.070018);
   RATIO->SetBinError(1,0.0291117);
   RATIO->SetBinError(2,0.03529027);
   RATIO->SetBinError(3,0.03951882);
   RATIO->SetBinError(4,0.04674149);
   RATIO->SetBinError(5,0.04470382);
   RATIO->SetBinError(6,0.06283362);
   RATIO->SetMinimum(0);
   RATIO->SetMaximum(3.05);
   RATIO->SetEntries(6);
   RATIO->SetStats(0);

   ci = TColor::GetColor("#ccffcc");
   RATIO->SetFillColor(ci);
   RATIO->SetLineWidth(2);
   RATIO->SetMarkerStyle(20);
   RATIO->SetMarkerSize(0.3);
   RATIO->GetXaxis()->SetTitle("R^{2}");
   RATIO->GetXaxis()->SetRange(1,6);
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
   Double_t xAxis86[7] = {0.5, 0.575, 0.65, 0.75, 0.85, 0.95, 1.2}; 
   
   TH1F *RATIO2__43 = new TH1F("RATIO2__43","",6, xAxis86);
   RATIO2__43->SetBinContent(1,1);
   RATIO2__43->SetBinContent(2,1);
   RATIO2__43->SetBinContent(3,1);
   RATIO2__43->SetBinContent(4,1);
   RATIO2__43->SetBinContent(5,1);
   RATIO2__43->SetBinContent(6,1);
   RATIO2__43->SetBinError(1,0.1156755);
   RATIO2__43->SetBinError(2,0.1432555);
   RATIO2__43->SetBinError(3,0.1483143);
   RATIO2__43->SetBinError(4,0.1896839);
   RATIO2__43->SetBinError(5,0.2297206);
   RATIO2__43->SetBinError(6,0.277894);
   RATIO2__43->SetMinimum(0);
   RATIO2__43->SetMaximum(3.05);
   RATIO2__43->SetEntries(6);
   RATIO2__43->SetDirectory(0);
   RATIO2__43->SetStats(0);

   ci = TColor::GetColor("#ccffcc");
   RATIO2__43->SetFillColor(ci);

   ci = TColor::GetColor("#ccffcc");
   RATIO2__43->SetLineColor(ci);
   RATIO2__43->SetLineWidth(2);
   RATIO2__43->GetXaxis()->SetTitle("R^{2}");
   RATIO2__43->GetXaxis()->SetLabelFont(42);
   RATIO2__43->GetXaxis()->SetLabelSize(0.1);
   RATIO2__43->GetXaxis()->SetTitleSize(0.11);
   RATIO2__43->GetXaxis()->SetTitleOffset(0.88);
   RATIO2__43->GetXaxis()->SetTitleFont(42);
   RATIO2__43->GetYaxis()->SetTitle("Ratio");
   RATIO2__43->GetYaxis()->SetLabelFont(42);
   RATIO2__43->GetYaxis()->SetLabelSize(0.08);
   RATIO2__43->GetYaxis()->SetTitleSize(0.11);
   RATIO2__43->GetYaxis()->SetTitleOffset(0.35);
   RATIO2__43->GetYaxis()->SetTitleFont(42);
   RATIO2__43->GetZaxis()->SetLabelFont(42);
   RATIO2__43->GetZaxis()->SetLabelSize(0.035);
   RATIO2__43->GetZaxis()->SetTitleSize(0.035);
   RATIO2__43->GetZaxis()->SetTitleFont(42);
   RATIO2__43->Draw("e2 same");
   Double_t xAxis87[7] = {0.5, 0.575, 0.65, 0.75, 0.85, 0.95, 1.2}; 
   
   TH1F *ratio2clone__44 = new TH1F("ratio2clone__44","",6, xAxis87);
   ratio2clone__44->SetBinContent(1,1);
   ratio2clone__44->SetBinContent(2,1);
   ratio2clone__44->SetBinContent(3,1);
   ratio2clone__44->SetBinContent(4,1);
   ratio2clone__44->SetBinContent(5,1);
   ratio2clone__44->SetBinContent(6,1);
   ratio2clone__44->SetBinError(1,0.1156755);
   ratio2clone__44->SetBinError(2,0.1432555);
   ratio2clone__44->SetBinError(3,0.1483143);
   ratio2clone__44->SetBinError(4,0.1896839);
   ratio2clone__44->SetBinError(5,0.2297206);
   ratio2clone__44->SetBinError(6,0.277894);
   ratio2clone__44->SetMinimum(0);
   ratio2clone__44->SetMaximum(3.05);
   ratio2clone__44->SetEntries(6);
   ratio2clone__44->SetDirectory(0);
   ratio2clone__44->SetStats(0);

   ci = TColor::GetColor("#00ff00");
   ratio2clone__44->SetLineColor(ci);
   ratio2clone__44->SetLineWidth(2);
   ratio2clone__44->GetXaxis()->SetTitle("R^{2}");
   ratio2clone__44->GetXaxis()->SetLabelFont(42);
   ratio2clone__44->GetXaxis()->SetLabelSize(0.1);
   ratio2clone__44->GetXaxis()->SetTitleSize(0.11);
   ratio2clone__44->GetXaxis()->SetTitleOffset(0.88);
   ratio2clone__44->GetXaxis()->SetTitleFont(42);
   ratio2clone__44->GetYaxis()->SetTitle("Ratio");
   ratio2clone__44->GetYaxis()->SetLabelFont(42);
   ratio2clone__44->GetYaxis()->SetLabelSize(0.08);
   ratio2clone__44->GetYaxis()->SetTitleSize(0.11);
   ratio2clone__44->GetYaxis()->SetTitleOffset(0.35);
   ratio2clone__44->GetYaxis()->SetTitleFont(42);
   ratio2clone__44->GetZaxis()->SetLabelFont(42);
   ratio2clone__44->GetZaxis()->SetLabelSize(0.035);
   ratio2clone__44->GetZaxis()->SetTitleSize(0.035);
   ratio2clone__44->GetZaxis()->SetTitleFont(42);
   ratio2clone__44->Draw("hist same");
   Double_t xAxis88[7] = {0.5, 0.575, 0.65, 0.75, 0.85, 0.95, 1.2}; 
   
   TH1F *RATIO = new TH1F("RATIO","",6, xAxis88);
   RATIO->SetBinContent(1,0.9602448);
   RATIO->SetBinContent(2,0.9760807);
   RATIO->SetBinContent(3,1.032039);
   RATIO->SetBinContent(4,1.111033);
   RATIO->SetBinContent(5,0.8884709);
   RATIO->SetBinContent(6,1.070018);
   RATIO->SetBinError(1,0.0291117);
   RATIO->SetBinError(2,0.03529027);
   RATIO->SetBinError(3,0.03951882);
   RATIO->SetBinError(4,0.04674149);
   RATIO->SetBinError(5,0.04470382);
   RATIO->SetBinError(6,0.06283362);
   RATIO->SetMinimum(0);
   RATIO->SetMaximum(3.05);
   RATIO->SetEntries(6);
   RATIO->SetStats(0);

   ci = TColor::GetColor("#ccffcc");
   RATIO->SetFillColor(ci);
   RATIO->SetLineWidth(2);
   RATIO->SetMarkerStyle(20);
   RATIO->SetMarkerSize(0.3);
   RATIO->GetXaxis()->SetTitle("R^{2}");
   RATIO->GetXaxis()->SetRange(1,6);
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

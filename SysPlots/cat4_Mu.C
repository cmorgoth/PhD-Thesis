{
//=========Macro generated from canvas: C/C	
//=========  (Wed Jun  4 23:51:44 2014) by ROOT version5.34/11
   TCanvas *C = new TCanvas("C", "C	",0,0,400,500);
   C->SetHighLightColor(2);
   C->Range(0,0,1,1);
   C->SetFillColor(0);
   C->SetBorderMode(0);
   C->SetBorderSize(2);
   C->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "pad1",0,0.05,1,1);
   pad1->Draw();
   pad1->cd();
   pad1->Range(0.325,-13.39821,1.375,126.2863);
   pad1->SetFillColor(0);
   pad1->SetBorderMode(0);
   pad1->SetBorderSize(2);
   pad1->SetFrameBorderMode(0);
   pad1->SetFrameBorderMode(0);
   
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(4);
   grae->SetName("Graph0");
   grae->SetTitle("");
   grae->SetFillColor(2);
   grae->SetFillStyle(3001);
   grae->SetPoint(0,0.55,102.9094);
   grae->SetPointError(0,0.05000001,0.05000001,0.09616089,0.09616089);
   grae->SetPoint(1,0.65,52.07518);
   grae->SetPointError(1,0.04999998,0.04999998,0.04811478,0.04811478);
   grae->SetPoint(2,0.825,76.07296);
   grae->SetPointError(2,0.125,0.125,0.06897736,0.06897736);
   grae->SetPoint(3,1.075,9.890736);
   grae->SetPointError(3,0.125,0.125,0.008196354,0.008196354);
   
   TH1F *Graph_Graph7 = new TH1F("Graph_Graph7","",100,0.43,1.27);
   Graph_Graph7->SetMinimum(0.5702421);
   Graph_Graph7->SetMaximum(112.3178);
   Graph_Graph7->SetDirectory(0);
   Graph_Graph7->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#000099");
   Graph_Graph7->SetLineColor(ci);
   Graph_Graph7->GetXaxis()->SetLabelFont(42);
   Graph_Graph7->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph7->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph7->GetXaxis()->SetTitleFont(42);
   Graph_Graph7->GetYaxis()->SetLabelFont(42);
   Graph_Graph7->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph7->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph7->GetYaxis()->SetTitleFont(42);
   Graph_Graph7->GetZaxis()->SetLabelFont(42);
   Graph_Graph7->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph7->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph7->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph7);
   
   grae->Draw("a2");
   Double_t xAxis7[5] = {0.5, 0.6, 0.7, 0.95, 1.2}; 
   
   TH1F *Data_cat4_1D_2mu_Box__7 = new TH1F("Data_cat4_1D_2mu_Box__7","",4, xAxis7);
   Data_cat4_1D_2mu_Box__7->SetBinContent(1,102.9093);
   Data_cat4_1D_2mu_Box__7->SetBinContent(2,52.07512);
   Data_cat4_1D_2mu_Box__7->SetBinContent(3,76.07288);
   Data_cat4_1D_2mu_Box__7->SetBinContent(4,9.890731);
   Data_cat4_1D_2mu_Box__7->SetBinError(1,23.37522);
   Data_cat4_1D_2mu_Box__7->SetBinError(2,10.14973);
   Data_cat4_1D_2mu_Box__7->SetBinError(3,18.77801);
   Data_cat4_1D_2mu_Box__7->SetBinError(4,7.679969);
   Data_cat4_1D_2mu_Box__7->SetMinimum(1.978146);
   Data_cat4_1D_2mu_Box__7->SetMaximum(0);
   Data_cat4_1D_2mu_Box__7->SetEntries(238.91);
   Data_cat4_1D_2mu_Box__7->SetDirectory(0);
   Data_cat4_1D_2mu_Box__7->SetStats(0);

   ci = TColor::GetColor("#ccffcc");
   Data_cat4_1D_2mu_Box__7->SetFillColor(ci);

   ci = TColor::GetColor("#ccffcc");
   Data_cat4_1D_2mu_Box__7->SetLineColor(ci);
   Data_cat4_1D_2mu_Box__7->GetXaxis()->SetTitle("RSQ");
   Data_cat4_1D_2mu_Box__7->GetXaxis()->SetRange(1,4);
   Data_cat4_1D_2mu_Box__7->GetXaxis()->SetLabelFont(42);
   Data_cat4_1D_2mu_Box__7->GetXaxis()->SetLabelSize(0.035);
   Data_cat4_1D_2mu_Box__7->GetXaxis()->SetTitleSize(0.035);
   Data_cat4_1D_2mu_Box__7->GetXaxis()->SetTitleFont(42);
   Data_cat4_1D_2mu_Box__7->GetYaxis()->SetLabelFont(42);
   Data_cat4_1D_2mu_Box__7->GetYaxis()->SetLabelSize(0.035);
   Data_cat4_1D_2mu_Box__7->GetYaxis()->SetTitleSize(0.035);
   Data_cat4_1D_2mu_Box__7->GetYaxis()->SetTitleFont(42);
   Data_cat4_1D_2mu_Box__7->GetZaxis()->SetLabelFont(42);
   Data_cat4_1D_2mu_Box__7->GetZaxis()->SetLabelSize(0.035);
   Data_cat4_1D_2mu_Box__7->GetZaxis()->SetTitleSize(0.035);
   Data_cat4_1D_2mu_Box__7->GetZaxis()->SetTitleFont(42);
   Data_cat4_1D_2mu_Box__7->Draw("E2same");
   Double_t xAxis8[5] = {0.5, 0.6, 0.7, 0.95, 1.2}; 
   
   TH1F *h2clone__8 = new TH1F("h2clone__8","",4, xAxis8);
   h2clone__8->SetBinContent(1,102.9093);
   h2clone__8->SetBinContent(2,52.07512);
   h2clone__8->SetBinContent(3,76.07288);
   h2clone__8->SetBinContent(4,9.890731);
   h2clone__8->SetBinError(1,23.37522);
   h2clone__8->SetBinError(2,10.14973);
   h2clone__8->SetBinError(3,18.77801);
   h2clone__8->SetBinError(4,7.679969);
   h2clone__8->SetEntries(238.91);
   h2clone__8->SetDirectory(0);
   h2clone__8->SetStats(0);

   ci = TColor::GetColor("#00ff00");
   h2clone__8->SetLineColor(ci);
   h2clone__8->GetXaxis()->SetTitle("RSQ");
   h2clone__8->GetXaxis()->SetRange(1,4);
   h2clone__8->GetXaxis()->SetLabelFont(42);
   h2clone__8->GetXaxis()->SetLabelSize(0.035);
   h2clone__8->GetXaxis()->SetTitleSize(0.035);
   h2clone__8->GetXaxis()->SetTitleFont(42);
   h2clone__8->GetYaxis()->SetLabelFont(42);
   h2clone__8->GetYaxis()->SetLabelSize(0.035);
   h2clone__8->GetYaxis()->SetTitleSize(0.035);
   h2clone__8->GetYaxis()->SetTitleFont(42);
   h2clone__8->GetZaxis()->SetLabelFont(42);
   h2clone__8->GetZaxis()->SetLabelSize(0.035);
   h2clone__8->GetZaxis()->SetTitleSize(0.035);
   h2clone__8->GetZaxis()->SetTitleFont(42);
   h2clone__8->Draw("hist same");
   
   grae = new TGraphAsymmErrors(4);
   grae->SetName("Graph0");
   grae->SetTitle("");
   grae->SetFillColor(2);
   grae->SetFillStyle(3001);
   grae->SetPoint(0,0.55,102.9094);
   grae->SetPointError(0,0.05000001,0.05000001,0.09616089,0.09616089);
   grae->SetPoint(1,0.65,52.07518);
   grae->SetPointError(1,0.04999998,0.04999998,0.04811478,0.04811478);
   grae->SetPoint(2,0.825,76.07296);
   grae->SetPointError(2,0.125,0.125,0.06897736,0.06897736);
   grae->SetPoint(3,1.075,9.890736);
   grae->SetPointError(3,0.125,0.125,0.008196354,0.008196354);
   
   TH1F *Graph_Graph_Graph78 = new TH1F("Graph_Graph_Graph78","",100,0.43,1.27);
   Graph_Graph_Graph78->SetMinimum(0.5702421);
   Graph_Graph_Graph78->SetMaximum(112.3178);
   Graph_Graph_Graph78->SetDirectory(0);
   Graph_Graph_Graph78->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph78->SetLineColor(ci);
   Graph_Graph_Graph78->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph78->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph78->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph78->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph78->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph78->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph78->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph78->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph78->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph78->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph78->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph78->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_Graph78);
   
   grae->Draw("2");
   pad1->Modified();
   C->cd();
   
   TLegend *leg = new TLegend(0.6,0.7,0.85,0.85,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.018);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Graph0"," Muon Eff. Syst.","lf");
   entry->SetFillColor(2);
   entry->SetFillStyle(3001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Data_cat4_1D_2mu_Box"," Bkg Pred. Nominal","lf");

   ci = TColor::GetColor("#ccffcc");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#00ff00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
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
      tex = new TLatex(0.62,0.95,"#int L dt = 18.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextAlign(22);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
   C->Modified();
   C->cd();
   C->SetSelected(C);
}

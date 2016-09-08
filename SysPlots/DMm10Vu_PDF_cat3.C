{
//=========Macro generated from canvas: C/C
//=========  (Sat Jul 12 16:05:13 2014) by ROOT version5.34/11
   TCanvas *C = new TCanvas("C", "C",0,0,400,500);
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
   pad1->Range(0.409,0.1904998,1.291,46.41408);
   pad1->SetFillColor(0);
   pad1->SetBorderMode(0);
   pad1->SetBorderSize(2);
   pad1->SetBottomMargin(0);
   pad1->SetFrameBorderMode(0);
   pad1->SetFrameBorderMode(0);
   
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(6);
   grae->SetName("Graph0");
   grae->SetTitle("");

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(3001);

   ci = TColor::GetColor("#ccccff");
   grae->SetLineColor(ci);
   grae->SetPoint(0,0.5375,28.8872);
   grae->SetPointError(0,0.03749999,0.03749999,0.9488888,0.9488888);
   grae->SetPoint(1,0.6125,24.2545);
   grae->SetPointError(1,0.03749999,0.03749999,0.5907803,0.5907803);
   grae->SetPoint(2,0.7,27.86115);
   grae->SetPointError(2,0.05000001,0.05000001,0.8393269,0.8393269);
   grae->SetPoint(3,0.8,24.9127);
   grae->SetPointError(3,0.05000001,0.05000001,1.23859,1.23859);
   grae->SetPoint(4,0.9,21.51864);
   grae->SetPointError(4,0.04999998,0.04999998,1.115322,1.115322);
   grae->SetPoint(5,1.075,19.04998);
   grae->SetPointError(5,0.125,0.125,0.9425716,0.9425716);
   
   TH1F *Graph_Graph9 = new TH1F("Graph_Graph9","",100,0.43,1.27);
   Graph_Graph9->SetMinimum(0.1904998);
   Graph_Graph9->SetMaximum(41.79172);
   Graph_Graph9->SetDirectory(0);
   Graph_Graph9->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph9->SetLineColor(ci);
   Graph_Graph9->GetXaxis()->SetTitle("R^{2}");
   Graph_Graph9->GetXaxis()->SetRange(9,92);
   Graph_Graph9->GetXaxis()->CenterTitle(true);
   Graph_Graph9->GetXaxis()->SetLabelFont(42);
   Graph_Graph9->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph9->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph9->GetXaxis()->SetTitleFont(42);
   Graph_Graph9->GetYaxis()->SetLabelFont(42);
   Graph_Graph9->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph9->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph9->GetYaxis()->SetTitleFont(42);
   Graph_Graph9->GetZaxis()->SetLabelFont(42);
   Graph_Graph9->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph9->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph9->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph9);
   
   grae->Draw("a2");
   Double_t xAxis5[7] = {0.5, 0.575, 0.65, 0.75, 0.85, 0.95, 1.2}; 
   
   TH1F *h2clone__5 = new TH1F("h2clone__5","signal11_cat2",6, xAxis5);
   h2clone__5->SetBinContent(1,28.8872);
   h2clone__5->SetBinContent(2,24.2545);
   h2clone__5->SetBinContent(3,27.86115);
   h2clone__5->SetBinContent(4,24.9127);
   h2clone__5->SetBinContent(5,21.51864);
   h2clone__5->SetBinContent(6,19.04998);
   h2clone__5->SetEntries(1061);
   h2clone__5->SetDirectory(0);

   ci = TColor::GetColor("#0000ff");
   h2clone__5->SetLineColor(ci);
   h2clone__5->GetXaxis()->SetTitle("RSQ");
   h2clone__5->GetXaxis()->SetLabelFont(42);
   h2clone__5->GetXaxis()->SetLabelSize(0.035);
   h2clone__5->GetXaxis()->SetTitleSize(0.035);
   h2clone__5->GetXaxis()->SetTitleFont(42);
   h2clone__5->GetYaxis()->SetLabelFont(42);
   h2clone__5->GetYaxis()->SetLabelSize(0.035);
   h2clone__5->GetYaxis()->SetTitleSize(0.035);
   h2clone__5->GetYaxis()->SetTitleFont(42);
   h2clone__5->GetZaxis()->SetLabelFont(42);
   h2clone__5->GetZaxis()->SetLabelSize(0.035);
   h2clone__5->GetZaxis()->SetTitleSize(0.035);
   h2clone__5->GetZaxis()->SetTitleFont(42);
   h2clone__5->Draw("hist same][");
   
   grae = new TGraphAsymmErrors(6);
   grae->SetName("Graph0");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(3001);

   ci = TColor::GetColor("#ccccff");
   grae->SetLineColor(ci);
   grae->SetPoint(0,0.5375,28.8872);
   grae->SetPointError(0,0.03749999,0.03749999,0.9488888,0.9488888);
   grae->SetPoint(1,0.6125,24.2545);
   grae->SetPointError(1,0.03749999,0.03749999,0.5907803,0.5907803);
   grae->SetPoint(2,0.7,27.86115);
   grae->SetPointError(2,0.05000001,0.05000001,0.8393269,0.8393269);
   grae->SetPoint(3,0.8,24.9127);
   grae->SetPointError(3,0.05000001,0.05000001,1.23859,1.23859);
   grae->SetPoint(4,0.9,21.51864);
   grae->SetPointError(4,0.04999998,0.04999998,1.115322,1.115322);
   grae->SetPoint(5,1.075,19.04998);
   grae->SetPointError(5,0.125,0.125,0.9425716,0.9425716);
   
   TH1F *Graph_Graph_Graph910 = new TH1F("Graph_Graph_Graph910","",100,0.43,1.27);
   Graph_Graph_Graph910->SetMinimum(0.1904998);
   Graph_Graph_Graph910->SetMaximum(41.79172);
   Graph_Graph_Graph910->SetDirectory(0);
   Graph_Graph_Graph910->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph910->SetLineColor(ci);
   Graph_Graph_Graph910->GetXaxis()->SetTitle("R^{2}");
   Graph_Graph_Graph910->GetXaxis()->SetRange(9,92);
   Graph_Graph_Graph910->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph910->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph910->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph910->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph910->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph910->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph910->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph910->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph910->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph910->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph910->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph910->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph910->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_Graph910);
   
   grae->Draw("2");
   pad1->Modified();
   C->cd();
   
   TLegend *leg = new TLegend(0.68,0.78,0.89,0.89,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.018);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Graph0"," PDF Syst.","lf");

   ci = TColor::GetColor("#ccccff");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3001);

   ci = TColor::GetColor("#ccccff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("h2clone"," Signal C.V","lf");
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#0000ff");
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
   pad2->Range(0.409,0.6652291,1.291,1.204313);
   pad2->SetFillColor(0);
   pad2->SetBorderMode(0);
   pad2->SetBorderSize(2);
   pad2->SetGridy();
   pad2->SetTopMargin(0.008);
   pad2->SetBottomMargin(0.25);
   pad2->SetFrameBorderMode(0);
   pad2->SetFrameBorderMode(0);
   
   grae = new TGraphAsymmErrors(6);
   grae->SetName("Graph0");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(3001);

   ci = TColor::GetColor("#ccccff");
   grae->SetLineColor(ci);
   grae->SetPoint(0,0.5375,1);
   grae->SetPointError(0,0.03749999,0.03749999,0.03284807,0.03284807);
   grae->SetPoint(1,0.6125,1);
   grae->SetPointError(1,0.03749999,0.03749999,0.02435755,0.02435755);
   grae->SetPoint(2,0.7,1);
   grae->SetPointError(2,0.05000001,0.05000001,0.03012535,0.03012535);
   grae->SetPoint(3,0.8,1);
   grae->SetPointError(3,0.05000001,0.05000001,0.04971722,0.04971722);
   grae->SetPoint(4,0.9,1);
   grae->SetPointError(4,0.04999998,0.04999998,0.05183051,0.05183051);
   grae->SetPoint(5,1.075,1);
   grae->SetPointError(5,0.125,0.125,0.04947888,0.04947888);
   
   TH1F *Graph_Graph11 = new TH1F("Graph_Graph11","",100,0.43,1.27);
   Graph_Graph11->SetMinimum(0.8);
   Graph_Graph11->SetMaximum(1.2);
   Graph_Graph11->SetDirectory(0);
   Graph_Graph11->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph11->SetLineColor(ci);
   Graph_Graph11->GetXaxis()->SetTitle("R^{2}");
   Graph_Graph11->GetXaxis()->SetRange(9,92);
   Graph_Graph11->GetXaxis()->CenterTitle(true);
   Graph_Graph11->GetXaxis()->SetLabelFont(42);
   Graph_Graph11->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph11->GetXaxis()->SetTitleSize(0.11);
   Graph_Graph11->GetXaxis()->SetTitleOffset(0.88);
   Graph_Graph11->GetXaxis()->SetTitleFont(42);
   Graph_Graph11->GetYaxis()->SetLabelFont(42);
   Graph_Graph11->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph11->GetYaxis()->SetTitleSize(0.11);
   Graph_Graph11->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph11->GetYaxis()->SetTitleFont(42);
   Graph_Graph11->GetZaxis()->SetLabelFont(42);
   Graph_Graph11->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph11->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph11->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph11);
   
   grae->Draw("a2");
   Double_t xAxis6[7] = {0.5, 0.575, 0.65, 0.75, 0.85, 0.95, 1.2}; 
   
   TH1F *h4clone__6 = new TH1F("h4clone__6","signal11_cat2",6, xAxis6);
   h4clone__6->SetBinContent(1,1);
   h4clone__6->SetBinContent(2,1);
   h4clone__6->SetBinContent(3,1);
   h4clone__6->SetBinContent(4,1);
   h4clone__6->SetBinContent(5,1);
   h4clone__6->SetBinContent(6,1);
   h4clone__6->SetEntries(1067);
   h4clone__6->SetDirectory(0);

   ci = TColor::GetColor("#0000ff");
   h4clone__6->SetLineColor(ci);
   h4clone__6->GetXaxis()->SetLabelFont(42);
   h4clone__6->GetXaxis()->SetLabelSize(0.035);
   h4clone__6->GetXaxis()->SetTitleSize(0.035);
   h4clone__6->GetXaxis()->SetTitleFont(42);
   h4clone__6->GetYaxis()->SetLabelFont(42);
   h4clone__6->GetYaxis()->SetLabelSize(0.035);
   h4clone__6->GetYaxis()->SetTitleSize(0.035);
   h4clone__6->GetYaxis()->SetTitleFont(42);
   h4clone__6->GetZaxis()->SetLabelFont(42);
   h4clone__6->GetZaxis()->SetLabelSize(0.035);
   h4clone__6->GetZaxis()->SetTitleSize(0.035);
   h4clone__6->GetZaxis()->SetTitleFont(42);
   h4clone__6->Draw("hist same][");
   
   grae = new TGraphAsymmErrors(6);
   grae->SetName("Graph0");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(3001);

   ci = TColor::GetColor("#ccccff");
   grae->SetLineColor(ci);
   grae->SetPoint(0,0.5375,1);
   grae->SetPointError(0,0.03749999,0.03749999,0.03284807,0.03284807);
   grae->SetPoint(1,0.6125,1);
   grae->SetPointError(1,0.03749999,0.03749999,0.02435755,0.02435755);
   grae->SetPoint(2,0.7,1);
   grae->SetPointError(2,0.05000001,0.05000001,0.03012535,0.03012535);
   grae->SetPoint(3,0.8,1);
   grae->SetPointError(3,0.05000001,0.05000001,0.04971722,0.04971722);
   grae->SetPoint(4,0.9,1);
   grae->SetPointError(4,0.04999998,0.04999998,0.05183051,0.05183051);
   grae->SetPoint(5,1.075,1);
   grae->SetPointError(5,0.125,0.125,0.04947888,0.04947888);
   
   TH1F *Graph_Graph_Graph1112 = new TH1F("Graph_Graph_Graph1112","",100,0.43,1.27);
   Graph_Graph_Graph1112->SetMinimum(0.8);
   Graph_Graph_Graph1112->SetMaximum(1.2);
   Graph_Graph_Graph1112->SetDirectory(0);
   Graph_Graph_Graph1112->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph1112->SetLineColor(ci);
   Graph_Graph_Graph1112->GetXaxis()->SetTitle("R^{2}");
   Graph_Graph_Graph1112->GetXaxis()->SetRange(9,92);
   Graph_Graph_Graph1112->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph1112->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph1112->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph_Graph1112->GetXaxis()->SetTitleSize(0.11);
   Graph_Graph_Graph1112->GetXaxis()->SetTitleOffset(0.88);
   Graph_Graph_Graph1112->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph1112->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph1112->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph_Graph1112->GetYaxis()->SetTitleSize(0.11);
   Graph_Graph_Graph1112->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph_Graph1112->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph1112->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph1112->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph1112->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph1112->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_Graph1112);
   
   grae->Draw("2");
   pad2->Modified();
   C->cd();
   C->Modified();
   C->cd();
   C->SetSelected(C);
}

{
//=========Macro generated from canvas: C/C
//=========  (Sat Jul 12 15:46:32 2014) by ROOT version5.34/11
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
   pad1->Range(0.409,0.3541745,1.291,78.91296);
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
   grae->SetPoint(0,0.5375,35.41745);
   grae->SetPointError(0,0.03749999,0.03749999,3.884764,3.257061);
   grae->SetPoint(1,0.6125,39.56873);
   grae->SetPointError(1,0.03749999,0.03749999,5.427109,4.55024);
   grae->SetPoint(2,0.7,46.42451);
   grae->SetPointError(2,0.05000001,0.05000001,7.468822,6.262135);
   grae->SetPoint(3,0.8,47.30774);
   grae->SetPointError(3,0.05000001,0.05000001,8.215401,6.888111);
   grae->SetPoint(4,0.9,48.85479);
   grae->SetPointError(4,0.04999998,0.04999998,8.685543,7.282318);
   grae->SetPoint(5,1.075,47.37139);
   grae->SetPointError(5,0.125,0.125,8.421829,7.061214);
   
   TH1F *Graph_Graph1 = new TH1F("Graph_Graph1","",100,0.43,1.27);
   Graph_Graph1->SetMinimum(0.3541745);
   Graph_Graph1->SetMaximum(71.05708);
   Graph_Graph1->SetDirectory(0);
   Graph_Graph1->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1->SetLineColor(ci);
   Graph_Graph1->GetXaxis()->SetTitle("R^{2}");
   Graph_Graph1->GetXaxis()->SetRange(9,92);
   Graph_Graph1->GetXaxis()->CenterTitle(true);
   Graph_Graph1->GetXaxis()->SetLabelFont(42);
   Graph_Graph1->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1->GetXaxis()->SetTitleFont(42);
   Graph_Graph1->GetYaxis()->SetLabelFont(42);
   Graph_Graph1->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1->GetYaxis()->SetTitleFont(42);
   Graph_Graph1->GetZaxis()->SetLabelFont(42);
   Graph_Graph1->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph1);
   
   grae->Draw("a2");
   Double_t xAxis1[7] = {0.5, 0.575, 0.65, 0.75, 0.85, 0.95, 1.2}; 
   
   TH1F *h2clone__1 = new TH1F("h2clone__1","signal23_cat1",6, xAxis1);
   h2clone__1->SetBinContent(1,35.41745);
   h2clone__1->SetBinContent(2,39.56873);
   h2clone__1->SetBinContent(3,46.42451);
   h2clone__1->SetBinContent(4,47.30774);
   h2clone__1->SetBinContent(5,48.85479);
   h2clone__1->SetBinContent(6,47.37139);
   h2clone__1->SetEntries(1662);
   h2clone__1->SetDirectory(0);

   ci = TColor::GetColor("#0000ff");
   h2clone__1->SetLineColor(ci);
   h2clone__1->GetXaxis()->SetLabelFont(42);
   h2clone__1->GetXaxis()->SetLabelSize(0.035);
   h2clone__1->GetXaxis()->SetTitleSize(0.035);
   h2clone__1->GetXaxis()->SetTitleFont(42);
   h2clone__1->GetYaxis()->SetLabelFont(42);
   h2clone__1->GetYaxis()->SetLabelSize(0.035);
   h2clone__1->GetYaxis()->SetTitleSize(0.035);
   h2clone__1->GetYaxis()->SetTitleFont(42);
   h2clone__1->GetZaxis()->SetLabelFont(42);
   h2clone__1->GetZaxis()->SetLabelSize(0.035);
   h2clone__1->GetZaxis()->SetTitleSize(0.035);
   h2clone__1->GetZaxis()->SetTitleFont(42);
   h2clone__1->Draw("hist same][");
   
   grae = new TGraphAsymmErrors(6);
   grae->SetName("Graph0");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(3001);

   ci = TColor::GetColor("#ccccff");
   grae->SetLineColor(ci);
   grae->SetPoint(0,0.5375,35.41745);
   grae->SetPointError(0,0.03749999,0.03749999,3.884764,3.257061);
   grae->SetPoint(1,0.6125,39.56873);
   grae->SetPointError(1,0.03749999,0.03749999,5.427109,4.55024);
   grae->SetPoint(2,0.7,46.42451);
   grae->SetPointError(2,0.05000001,0.05000001,7.468822,6.262135);
   grae->SetPoint(3,0.8,47.30774);
   grae->SetPointError(3,0.05000001,0.05000001,8.215401,6.888111);
   grae->SetPoint(4,0.9,48.85479);
   grae->SetPointError(4,0.04999998,0.04999998,8.685543,7.282318);
   grae->SetPoint(5,1.075,47.37139);
   grae->SetPointError(5,0.125,0.125,8.421829,7.061214);
   
   TH1F *Graph_Graph_Graph12 = new TH1F("Graph_Graph_Graph12","",100,0.43,1.27);
   Graph_Graph_Graph12->SetMinimum(0.3541745);
   Graph_Graph_Graph12->SetMaximum(71.05708);
   Graph_Graph_Graph12->SetDirectory(0);
   Graph_Graph_Graph12->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph12->SetLineColor(ci);
   Graph_Graph_Graph12->GetXaxis()->SetTitle("R^{2}");
   Graph_Graph_Graph12->GetXaxis()->SetRange(9,92);
   Graph_Graph_Graph12->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph12->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph12->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph12->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph12->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph12->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph12->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph12->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph12->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph12->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph12->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph12->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph12->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_Graph12);
   
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
   TLegendEntry *entry=leg->AddEntry("Graph0"," ISR Syst.","lf");

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
   grae->SetPointError(0,0.03749999,0.03749999,0.109685,0.09196204);
   grae->SetPoint(1,0.6125,1);
   grae->SetPointError(1,0.03749999,0.03749999,0.1371565,0.1149958);
   grae->SetPoint(2,0.7,1);
   grae->SetPointError(2,0.05000001,0.05000001,0.160881,0.1348885);
   grae->SetPoint(3,0.8,1);
   grae->SetPointError(3,0.05000001,0.05000001,0.1736587,0.1456022);
   grae->SetPoint(4,0.9,1);
   grae->SetPointError(4,0.04999998,0.04999998,0.1777828,0.1490605);
   grae->SetPoint(5,1.075,1);
   grae->SetPointError(5,0.125,0.125,0.177783,0.1490607);
   
   TH1F *Graph_Graph3 = new TH1F("Graph_Graph3","",100,0.43,1.27);
   Graph_Graph3->SetMinimum(0.8);
   Graph_Graph3->SetMaximum(1.2);
   Graph_Graph3->SetDirectory(0);
   Graph_Graph3->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3->SetLineColor(ci);
   Graph_Graph3->GetXaxis()->SetTitle("R^{2}");
   Graph_Graph3->GetXaxis()->SetRange(9,92);
   Graph_Graph3->GetXaxis()->CenterTitle(true);
   Graph_Graph3->GetXaxis()->SetLabelFont(42);
   Graph_Graph3->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3->GetXaxis()->SetTitleSize(0.11);
   Graph_Graph3->GetXaxis()->SetTitleOffset(0.88);
   Graph_Graph3->GetXaxis()->SetTitleFont(42);
   Graph_Graph3->GetYaxis()->SetLabelFont(42);
   Graph_Graph3->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3->GetYaxis()->SetTitleSize(0.11);
   Graph_Graph3->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3->GetYaxis()->SetTitleFont(42);
   Graph_Graph3->GetZaxis()->SetLabelFont(42);
   Graph_Graph3->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph3->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph3->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3);
   
   grae->Draw("a2");
   Double_t xAxis2[7] = {0.5, 0.575, 0.65, 0.75, 0.85, 0.95, 1.2}; 
   
   TH1F *h4clone__2 = new TH1F("h4clone__2","signal23_cat1",6, xAxis2);
   h4clone__2->SetBinContent(1,1);
   h4clone__2->SetBinContent(2,1);
   h4clone__2->SetBinContent(3,1);
   h4clone__2->SetBinContent(4,1);
   h4clone__2->SetBinContent(5,1);
   h4clone__2->SetBinContent(6,1);
   h4clone__2->SetEntries(1668);
   h4clone__2->SetDirectory(0);

   ci = TColor::GetColor("#0000ff");
   h4clone__2->SetLineColor(ci);
   h4clone__2->GetXaxis()->SetLabelFont(42);
   h4clone__2->GetXaxis()->SetLabelSize(0.035);
   h4clone__2->GetXaxis()->SetTitleSize(0.035);
   h4clone__2->GetXaxis()->SetTitleFont(42);
   h4clone__2->GetYaxis()->SetLabelFont(42);
   h4clone__2->GetYaxis()->SetLabelSize(0.035);
   h4clone__2->GetYaxis()->SetTitleSize(0.035);
   h4clone__2->GetYaxis()->SetTitleFont(42);
   h4clone__2->GetZaxis()->SetLabelFont(42);
   h4clone__2->GetZaxis()->SetLabelSize(0.035);
   h4clone__2->GetZaxis()->SetTitleSize(0.035);
   h4clone__2->GetZaxis()->SetTitleFont(42);
   h4clone__2->Draw("hist same][");
   
   grae = new TGraphAsymmErrors(6);
   grae->SetName("Graph0");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(3001);

   ci = TColor::GetColor("#ccccff");
   grae->SetLineColor(ci);
   grae->SetPoint(0,0.5375,1);
   grae->SetPointError(0,0.03749999,0.03749999,0.109685,0.09196204);
   grae->SetPoint(1,0.6125,1);
   grae->SetPointError(1,0.03749999,0.03749999,0.1371565,0.1149958);
   grae->SetPoint(2,0.7,1);
   grae->SetPointError(2,0.05000001,0.05000001,0.160881,0.1348885);
   grae->SetPoint(3,0.8,1);
   grae->SetPointError(3,0.05000001,0.05000001,0.1736587,0.1456022);
   grae->SetPoint(4,0.9,1);
   grae->SetPointError(4,0.04999998,0.04999998,0.1777828,0.1490605);
   grae->SetPoint(5,1.075,1);
   grae->SetPointError(5,0.125,0.125,0.177783,0.1490607);
   
   TH1F *Graph_Graph_Graph34 = new TH1F("Graph_Graph_Graph34","",100,0.43,1.27);
   Graph_Graph_Graph34->SetMinimum(0.8);
   Graph_Graph_Graph34->SetMaximum(1.2);
   Graph_Graph_Graph34->SetDirectory(0);
   Graph_Graph_Graph34->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph34->SetLineColor(ci);
   Graph_Graph_Graph34->GetXaxis()->SetTitle("R^{2}");
   Graph_Graph_Graph34->GetXaxis()->SetRange(9,92);
   Graph_Graph_Graph34->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph34->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph34->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph_Graph34->GetXaxis()->SetTitleSize(0.11);
   Graph_Graph_Graph34->GetXaxis()->SetTitleOffset(0.88);
   Graph_Graph_Graph34->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph34->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph34->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph_Graph34->GetYaxis()->SetTitleSize(0.11);
   Graph_Graph_Graph34->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph_Graph34->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph34->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph34->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph34->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph34->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_Graph34);
   
   grae->Draw("2");
   pad2->Modified();
   C->cd();
   C->Modified();
   C->cd();
   C->SetSelected(C);
}

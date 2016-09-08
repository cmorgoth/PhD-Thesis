{
//=========Macro generated from canvas: C/C
//=========  (Sat Jul 12 16:06:50 2014) by ROOT version5.34/11
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
   pad1->Range(0.409,0.1832774,1.291,70.26149);
   pad1->SetFillColor(0);
   pad1->SetBorderMode(0);
   pad1->SetBorderSize(2);
   pad1->SetBottomMargin(0);
   pad1->SetFrameBorderMode(0);
   pad1->SetFrameBorderMode(0);
   
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(11);
   grae->SetName("Graph0");
   grae->SetTitle("");

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(3001);

   ci = TColor::GetColor("#ccccff");
   grae->SetLineColor(ci);
   grae->SetPoint(0,0.525,18.32774);
   grae->SetPointError(0,0.02500001,0.02500001,0.5179272,0.4497528);
   grae->SetPoint(1,0.575,21.99376);
   grae->SetPointError(1,0.02500001,0.02500001,0.8597317,0.7465706);
   grae->SetPoint(2,0.625,17.87181);
   grae->SetPointError(2,0.02499998,0.02499998,0.7900581,0.6860905);
   grae->SetPoint(3,0.675,21.68442);
   grae->SetPointError(3,0.02500001,0.02500001,1.289915,1.12015);
   grae->SetPoint(4,0.725,18.43705);
   grae->SetPointError(4,0.02500001,0.02500001,1.455013,1.263514);
   grae->SetPoint(5,0.775,25.04352);
   grae->SetPointError(5,0.02500001,0.02500001,2.051847,1.781811);
   grae->SetPoint(6,0.825,21.57135);
   grae->SetPointError(6,0.02500001,0.02500001,1.934788,1.680145);
   grae->SetPoint(7,0.875,19.72148);
   grae->SetPointError(7,0.02499998,0.02499998,1.845831,1.602888);
   grae->SetPoint(8,0.925,24.68019);
   grae->SetPointError(8,0.02500001,0.02500001,2.711924,2.355019);
   grae->SetPoint(9,0.975,25.29433);
   grae->SetPointError(9,0.02500001,0.02500001,3.192127,2.772011);
   grae->SetPoint(10,1.1,42.16911);
   grae->SetPointError(10,0.1,0.1,5.937538,5.156082);
   
   TH1F *Graph_Graph1 = new TH1F("Graph_Graph1","",100,0.43,1.27);
   Graph_Graph1->SetMinimum(0.1832774);
   Graph_Graph1->SetMaximum(63.25367);
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
   Double_t xAxis1[12] = {0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1, 1.2}; 
   
   TH1F *h2clone__1 = new TH1F("h2clone__1","signal9_cat0",11, xAxis1);
   h2clone__1->SetBinContent(1,18.32774);
   h2clone__1->SetBinContent(2,21.99376);
   h2clone__1->SetBinContent(3,17.87181);
   h2clone__1->SetBinContent(4,21.68442);
   h2clone__1->SetBinContent(5,18.43705);
   h2clone__1->SetBinContent(6,25.04352);
   h2clone__1->SetBinContent(7,21.57135);
   h2clone__1->SetBinContent(8,19.72148);
   h2clone__1->SetBinContent(9,24.68019);
   h2clone__1->SetBinContent(10,25.29433);
   h2clone__1->SetBinContent(11,42.16911);
   h2clone__1->SetEntries(1817);
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
   
   grae = new TGraphAsymmErrors(11);
   grae->SetName("Graph0");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(3001);

   ci = TColor::GetColor("#ccccff");
   grae->SetLineColor(ci);
   grae->SetPoint(0,0.525,18.32774);
   grae->SetPointError(0,0.02500001,0.02500001,0.5179272,0.4497528);
   grae->SetPoint(1,0.575,21.99376);
   grae->SetPointError(1,0.02500001,0.02500001,0.8597317,0.7465706);
   grae->SetPoint(2,0.625,17.87181);
   grae->SetPointError(2,0.02499998,0.02499998,0.7900581,0.6860905);
   grae->SetPoint(3,0.675,21.68442);
   grae->SetPointError(3,0.02500001,0.02500001,1.289915,1.12015);
   grae->SetPoint(4,0.725,18.43705);
   grae->SetPointError(4,0.02500001,0.02500001,1.455013,1.263514);
   grae->SetPoint(5,0.775,25.04352);
   grae->SetPointError(5,0.02500001,0.02500001,2.051847,1.781811);
   grae->SetPoint(6,0.825,21.57135);
   grae->SetPointError(6,0.02500001,0.02500001,1.934788,1.680145);
   grae->SetPoint(7,0.875,19.72148);
   grae->SetPointError(7,0.02499998,0.02499998,1.845831,1.602888);
   grae->SetPoint(8,0.925,24.68019);
   grae->SetPointError(8,0.02500001,0.02500001,2.711924,2.355019);
   grae->SetPoint(9,0.975,25.29433);
   grae->SetPointError(9,0.02500001,0.02500001,3.192127,2.772011);
   grae->SetPoint(10,1.1,42.16911);
   grae->SetPointError(10,0.1,0.1,5.937538,5.156082);
   
   TH1F *Graph_Graph_Graph12 = new TH1F("Graph_Graph_Graph12","",100,0.43,1.27);
   Graph_Graph_Graph12->SetMinimum(0.1832774);
   Graph_Graph_Graph12->SetMaximum(63.25367);
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
   
   grae = new TGraphAsymmErrors(11);
   grae->SetName("Graph0");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(3001);

   ci = TColor::GetColor("#ccccff");
   grae->SetLineColor(ci);
   grae->SetPoint(0,0.525,1);
   grae->SetPointError(0,0.02500001,0.02500001,0.0282592,0.02453946);
   grae->SetPoint(1,0.575,1);
   grae->SetPointError(1,0.02500001,0.02500001,0.03908979,0.03394465);
   grae->SetPoint(2,0.625,1);
   grae->SetPointError(2,0.02499998,0.02499998,0.04420695,0.03838954);
   grae->SetPoint(3,0.675,1);
   grae->SetPointError(3,0.02500001,0.02500001,0.0594858,0.05165689);
   grae->SetPoint(4,0.725,1);
   grae->SetPointError(4,0.02500001,0.02500001,0.07891792,0.06853124);
   grae->SetPoint(5,0.775,1);
   grae->SetPointError(5,0.02500001,0.02500001,0.08193127,0.07114858);
   grae->SetPoint(6,0.825,1);
   grae->SetPointError(6,0.02500001,0.02500001,0.08969247,0.07788781);
   grae->SetPoint(7,0.875,1);
   grae->SetPointError(7,0.02499998,0.02499998,0.09359497,0.08127628);
   grae->SetPoint(8,0.925,1);
   grae->SetPointError(8,0.02500001,0.02500001,0.1098826,0.09542141);
   grae->SetPoint(9,0.975,1);
   grae->SetPointError(9,0.02500001,0.02500001,0.1261993,0.1095902);
   grae->SetPoint(10,1.1,1);
   grae->SetPointError(10,0.1,0.1,0.140803,0.1222715);
   
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
   Double_t xAxis2[12] = {0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1, 1.2}; 
   
   TH1F *h4clone__2 = new TH1F("h4clone__2","signal9_cat0",11, xAxis2);
   h4clone__2->SetBinContent(1,1);
   h4clone__2->SetBinContent(2,1);
   h4clone__2->SetBinContent(3,1);
   h4clone__2->SetBinContent(4,1);
   h4clone__2->SetBinContent(5,1);
   h4clone__2->SetBinContent(6,1);
   h4clone__2->SetBinContent(7,1);
   h4clone__2->SetBinContent(8,1);
   h4clone__2->SetBinContent(9,1);
   h4clone__2->SetBinContent(10,1);
   h4clone__2->SetBinContent(11,1);
   h4clone__2->SetEntries(1828);
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
   
   grae = new TGraphAsymmErrors(11);
   grae->SetName("Graph0");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(3001);

   ci = TColor::GetColor("#ccccff");
   grae->SetLineColor(ci);
   grae->SetPoint(0,0.525,1);
   grae->SetPointError(0,0.02500001,0.02500001,0.0282592,0.02453946);
   grae->SetPoint(1,0.575,1);
   grae->SetPointError(1,0.02500001,0.02500001,0.03908979,0.03394465);
   grae->SetPoint(2,0.625,1);
   grae->SetPointError(2,0.02499998,0.02499998,0.04420695,0.03838954);
   grae->SetPoint(3,0.675,1);
   grae->SetPointError(3,0.02500001,0.02500001,0.0594858,0.05165689);
   grae->SetPoint(4,0.725,1);
   grae->SetPointError(4,0.02500001,0.02500001,0.07891792,0.06853124);
   grae->SetPoint(5,0.775,1);
   grae->SetPointError(5,0.02500001,0.02500001,0.08193127,0.07114858);
   grae->SetPoint(6,0.825,1);
   grae->SetPointError(6,0.02500001,0.02500001,0.08969247,0.07788781);
   grae->SetPoint(7,0.875,1);
   grae->SetPointError(7,0.02499998,0.02499998,0.09359497,0.08127628);
   grae->SetPoint(8,0.925,1);
   grae->SetPointError(8,0.02500001,0.02500001,0.1098826,0.09542141);
   grae->SetPoint(9,0.975,1);
   grae->SetPointError(9,0.02500001,0.02500001,0.1261993,0.1095902);
   grae->SetPoint(10,1.1,1);
   grae->SetPointError(10,0.1,0.1,0.140803,0.1222715);
   
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

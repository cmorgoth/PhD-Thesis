{
//=========Macro generated from canvas: C/C
//=========  (Sat Jul 12 15:48:39 2014) by ROOT version5.34/11
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
   pad1->Range(0.409,0.2370151,1.291,90.86521);
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
   grae->SetPoint(0,0.525,23.70151);
   grae->SetPointError(0,0.02500001,0.02500001,0.2924957,0.2924957);
   grae->SetPoint(1,0.575,23.04111);
   grae->SetPointError(1,0.02500001,0.02500001,0.5042229,0.5042229);
   grae->SetPoint(2,0.625,23.59408);
   grae->SetPointError(2,0.02499998,0.02499998,0.2644863,0.2644863);
   grae->SetPoint(3,0.675,23.72497);
   grae->SetPointError(3,0.02500001,0.02500001,0.2623711,0.2623711);
   grae->SetPoint(4,0.725,25.30754);
   grae->SetPointError(4,0.02500001,0.02500001,0.3045979,0.3045979);
   grae->SetPoint(5,0.775,24.69719);
   grae->SetPointError(5,0.02500001,0.02500001,0.3496571,0.3496571);
   grae->SetPoint(6,0.825,27.907);
   grae->SetPointError(6,0.02500001,0.02500001,0.3150063,0.3150063);
   grae->SetPoint(7,0.875,33.75355);
   grae->SetPointError(7,0.02499998,0.02499998,0.8737373,0.8737373);
   grae->SetPoint(8,0.925,29.10341);
   grae->SetPointError(8,0.02500001,0.02500001,0.4845123,0.4845123);
   grae->SetPoint(9,0.975,29.40641);
   grae->SetPointError(9,0.02500001,0.02500001,0.4758263,0.4758263);
   grae->SetPoint(10,1.1,54.53493);
   grae->SetPointError(10,0.1,0.1,0.535202,0.535202);
   
   TH1F *Graph_Graph9 = new TH1F("Graph_Graph9","",100,0.43,1.27);
   Graph_Graph9->SetMinimum(0.2370151);
   Graph_Graph9->SetMaximum(81.80239);
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
   Double_t xAxis5[12] = {0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1, 1.2}; 
   
   TH1F *h2clone__5 = new TH1F("h2clone__5","signal21_cat0",11, xAxis5);
   h2clone__5->SetBinContent(1,23.70151);
   h2clone__5->SetBinContent(2,23.04111);
   h2clone__5->SetBinContent(3,23.59408);
   h2clone__5->SetBinContent(4,23.72497);
   h2clone__5->SetBinContent(5,25.30754);
   h2clone__5->SetBinContent(6,24.69719);
   h2clone__5->SetBinContent(7,27.907);
   h2clone__5->SetBinContent(8,33.75355);
   h2clone__5->SetBinContent(9,29.10341);
   h2clone__5->SetBinContent(10,29.40641);
   h2clone__5->SetBinContent(11,54.53493);
   h2clone__5->SetEntries(1789);
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
   
   grae = new TGraphAsymmErrors(11);
   grae->SetName("Graph0");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(3001);

   ci = TColor::GetColor("#ccccff");
   grae->SetLineColor(ci);
   grae->SetPoint(0,0.525,23.70151);
   grae->SetPointError(0,0.02500001,0.02500001,0.2924957,0.2924957);
   grae->SetPoint(1,0.575,23.04111);
   grae->SetPointError(1,0.02500001,0.02500001,0.5042229,0.5042229);
   grae->SetPoint(2,0.625,23.59408);
   grae->SetPointError(2,0.02499998,0.02499998,0.2644863,0.2644863);
   grae->SetPoint(3,0.675,23.72497);
   grae->SetPointError(3,0.02500001,0.02500001,0.2623711,0.2623711);
   grae->SetPoint(4,0.725,25.30754);
   grae->SetPointError(4,0.02500001,0.02500001,0.3045979,0.3045979);
   grae->SetPoint(5,0.775,24.69719);
   grae->SetPointError(5,0.02500001,0.02500001,0.3496571,0.3496571);
   grae->SetPoint(6,0.825,27.907);
   grae->SetPointError(6,0.02500001,0.02500001,0.3150063,0.3150063);
   grae->SetPoint(7,0.875,33.75355);
   grae->SetPointError(7,0.02499998,0.02499998,0.8737373,0.8737373);
   grae->SetPoint(8,0.925,29.10341);
   grae->SetPointError(8,0.02500001,0.02500001,0.4845123,0.4845123);
   grae->SetPoint(9,0.975,29.40641);
   grae->SetPointError(9,0.02500001,0.02500001,0.4758263,0.4758263);
   grae->SetPoint(10,1.1,54.53493);
   grae->SetPointError(10,0.1,0.1,0.535202,0.535202);
   
   TH1F *Graph_Graph_Graph910 = new TH1F("Graph_Graph_Graph910","",100,0.43,1.27);
   Graph_Graph_Graph910->SetMinimum(0.2370151);
   Graph_Graph_Graph910->SetMaximum(81.80239);
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
   
   grae = new TGraphAsymmErrors(11);
   grae->SetName("Graph0");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(3001);

   ci = TColor::GetColor("#ccccff");
   grae->SetLineColor(ci);
   grae->SetPoint(0,0.525,1);
   grae->SetPointError(0,0.02500001,0.02500001,0.01234081,0.01234081);
   grae->SetPoint(1,0.575,1);
   grae->SetPointError(1,0.02500001,0.02500001,0.02188362,0.02188362);
   grae->SetPoint(2,0.625,1);
   grae->SetPointError(2,0.02499998,0.02499998,0.01120986,0.01120986);
   grae->SetPoint(3,0.675,1);
   grae->SetPointError(3,0.02500001,0.02500001,0.01105886,0.01105886);
   grae->SetPoint(4,0.725,1);
   grae->SetPointError(4,0.02500001,0.02500001,0.01203585,0.01203585);
   grae->SetPoint(5,0.775,1);
   grae->SetPointError(5,0.02500001,0.02500001,0.01415777,0.01415777);
   grae->SetPoint(6,0.825,1);
   grae->SetPointError(6,0.02500001,0.02500001,0.01128771,0.01128771);
   grae->SetPoint(7,0.875,1);
   grae->SetPointError(7,0.02499998,0.02499998,0.02588579,0.02588579);
   grae->SetPoint(8,0.925,1);
   grae->SetPointError(8,0.02500001,0.02500001,0.01664796,0.01664796);
   grae->SetPoint(9,0.975,1);
   grae->SetPointError(9,0.02500001,0.02500001,0.01618104,0.01618104);
   grae->SetPoint(10,1.1,1);
   grae->SetPointError(10,0.1,0.1,0.009813931,0.009813931);
   
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
   Double_t xAxis6[12] = {0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1, 1.2}; 
   
   TH1F *h4clone__6 = new TH1F("h4clone__6","signal21_cat0",11, xAxis6);
   h4clone__6->SetBinContent(1,1);
   h4clone__6->SetBinContent(2,1);
   h4clone__6->SetBinContent(3,1);
   h4clone__6->SetBinContent(4,1);
   h4clone__6->SetBinContent(5,1);
   h4clone__6->SetBinContent(6,1);
   h4clone__6->SetBinContent(7,1);
   h4clone__6->SetBinContent(8,1);
   h4clone__6->SetBinContent(9,1);
   h4clone__6->SetBinContent(10,1);
   h4clone__6->SetBinContent(11,1);
   h4clone__6->SetEntries(1800);
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
   
   grae = new TGraphAsymmErrors(11);
   grae->SetName("Graph0");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(3001);

   ci = TColor::GetColor("#ccccff");
   grae->SetLineColor(ci);
   grae->SetPoint(0,0.525,1);
   grae->SetPointError(0,0.02500001,0.02500001,0.01234081,0.01234081);
   grae->SetPoint(1,0.575,1);
   grae->SetPointError(1,0.02500001,0.02500001,0.02188362,0.02188362);
   grae->SetPoint(2,0.625,1);
   grae->SetPointError(2,0.02499998,0.02499998,0.01120986,0.01120986);
   grae->SetPoint(3,0.675,1);
   grae->SetPointError(3,0.02500001,0.02500001,0.01105886,0.01105886);
   grae->SetPoint(4,0.725,1);
   grae->SetPointError(4,0.02500001,0.02500001,0.01203585,0.01203585);
   grae->SetPoint(5,0.775,1);
   grae->SetPointError(5,0.02500001,0.02500001,0.01415777,0.01415777);
   grae->SetPoint(6,0.825,1);
   grae->SetPointError(6,0.02500001,0.02500001,0.01128771,0.01128771);
   grae->SetPoint(7,0.875,1);
   grae->SetPointError(7,0.02499998,0.02499998,0.02588579,0.02588579);
   grae->SetPoint(8,0.925,1);
   grae->SetPointError(8,0.02500001,0.02500001,0.01664796,0.01664796);
   grae->SetPoint(9,0.975,1);
   grae->SetPointError(9,0.02500001,0.02500001,0.01618104,0.01618104);
   grae->SetPoint(10,1.1,1);
   grae->SetPointError(10,0.1,0.1,0.009813931,0.009813931);
   
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

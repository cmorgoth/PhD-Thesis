{
//=========Macro generated from canvas: C/C
//=========  (Sat Jul 12 16:05:55 2014) by ROOT version5.34/11
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
   pad1->Range(0.409,0.1986994,1.291,69.33403);
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
   grae->SetPoint(0,0.525,19.86994);
   grae->SetPointError(0,0.02500001,0.02500001,0.2143078,0.9920406);
   grae->SetPoint(1,0.575,15.74372);
   grae->SetPointError(1,0.02500001,0.02500001,0.3502264,0.5742817);
   grae->SetPoint(2,0.625,17.17965);
   grae->SetPointError(2,0.02499998,0.02499998,0.5322132,0.4707546);
   grae->SetPoint(3,0.675,22.6708);
   grae->SetPointError(3,0.02500001,0.02500001,0.1505146,0.04641914);
   grae->SetPoint(4,0.725,23.06536);
   grae->SetPointError(4,0.02500001,0.02500001,0.3833218,0.02085876);
   grae->SetPoint(5,0.775,25.7763);
   grae->SetPointError(5,0.02500001,0.02500001,0.7084484,1.697002);
   grae->SetPoint(6,0.825,23.28753);
   grae->SetPointError(6,0.02500001,0.02500001,0.2819557,0.8805103);
   grae->SetPoint(7,0.875,24.68737);
   grae->SetPointError(7,0.02499998,0.02499998,0.8211079,0.3004551);
   grae->SetPoint(8,0.925,26.34375);
   grae->SetPointError(8,0.02500001,0.02500001,0.3413582,0.5046158);
   grae->SetPoint(9,0.975,19.56364);
   grae->SetPointError(9,0.02500001,0.02500001,1.715189,0.7518597);
   grae->SetPoint(10,1.1,41.61366);
   grae->SetPointError(10,0.1,0.1,1.312187,0.9403229);
   
   TH1F *Graph_Graph5 = new TH1F("Graph_Graph5","",100,0.43,1.27);
   Graph_Graph5->SetMinimum(0.1986994);
   Graph_Graph5->SetMaximum(62.42049);
   Graph_Graph5->SetDirectory(0);
   Graph_Graph5->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph5->SetLineColor(ci);
   Graph_Graph5->GetXaxis()->SetTitle("R^{2}");
   Graph_Graph5->GetXaxis()->SetRange(9,92);
   Graph_Graph5->GetXaxis()->CenterTitle(true);
   Graph_Graph5->GetXaxis()->SetLabelFont(42);
   Graph_Graph5->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph5->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph5->GetXaxis()->SetTitleFont(42);
   Graph_Graph5->GetYaxis()->SetLabelFont(42);
   Graph_Graph5->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph5->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph5->GetYaxis()->SetTitleFont(42);
   Graph_Graph5->GetZaxis()->SetLabelFont(42);
   Graph_Graph5->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph5->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph5->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph5);
   
   grae->Draw("a2");
   Double_t xAxis3[12] = {0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1, 1.2}; 
   
   TH1F *h2clone__3 = new TH1F("h2clone__3","signal11_cat0",11, xAxis3);
   h2clone__3->SetBinContent(1,19.86994);
   h2clone__3->SetBinContent(2,15.74372);
   h2clone__3->SetBinContent(3,17.17965);
   h2clone__3->SetBinContent(4,22.6708);
   h2clone__3->SetBinContent(5,23.06536);
   h2clone__3->SetBinContent(6,25.7763);
   h2clone__3->SetBinContent(7,23.28753);
   h2clone__3->SetBinContent(8,24.68737);
   h2clone__3->SetBinContent(9,26.34375);
   h2clone__3->SetBinContent(10,19.56364);
   h2clone__3->SetBinContent(11,41.61366);
   h2clone__3->SetEntries(1478);
   h2clone__3->SetDirectory(0);

   ci = TColor::GetColor("#0000ff");
   h2clone__3->SetLineColor(ci);
   h2clone__3->GetXaxis()->SetTitle("RSQ");
   h2clone__3->GetXaxis()->SetLabelFont(42);
   h2clone__3->GetXaxis()->SetLabelSize(0.035);
   h2clone__3->GetXaxis()->SetTitleSize(0.035);
   h2clone__3->GetXaxis()->SetTitleFont(42);
   h2clone__3->GetYaxis()->SetLabelFont(42);
   h2clone__3->GetYaxis()->SetLabelSize(0.035);
   h2clone__3->GetYaxis()->SetTitleSize(0.035);
   h2clone__3->GetYaxis()->SetTitleFont(42);
   h2clone__3->GetZaxis()->SetLabelFont(42);
   h2clone__3->GetZaxis()->SetLabelSize(0.035);
   h2clone__3->GetZaxis()->SetTitleSize(0.035);
   h2clone__3->GetZaxis()->SetTitleFont(42);
   h2clone__3->Draw("hist same][");
   
   grae = new TGraphAsymmErrors(11);
   grae->SetName("Graph0");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(3001);

   ci = TColor::GetColor("#ccccff");
   grae->SetLineColor(ci);
   grae->SetPoint(0,0.525,19.86994);
   grae->SetPointError(0,0.02500001,0.02500001,0.2143078,0.9920406);
   grae->SetPoint(1,0.575,15.74372);
   grae->SetPointError(1,0.02500001,0.02500001,0.3502264,0.5742817);
   grae->SetPoint(2,0.625,17.17965);
   grae->SetPointError(2,0.02499998,0.02499998,0.5322132,0.4707546);
   grae->SetPoint(3,0.675,22.6708);
   grae->SetPointError(3,0.02500001,0.02500001,0.1505146,0.04641914);
   grae->SetPoint(4,0.725,23.06536);
   grae->SetPointError(4,0.02500001,0.02500001,0.3833218,0.02085876);
   grae->SetPoint(5,0.775,25.7763);
   grae->SetPointError(5,0.02500001,0.02500001,0.7084484,1.697002);
   grae->SetPoint(6,0.825,23.28753);
   grae->SetPointError(6,0.02500001,0.02500001,0.2819557,0.8805103);
   grae->SetPoint(7,0.875,24.68737);
   grae->SetPointError(7,0.02499998,0.02499998,0.8211079,0.3004551);
   grae->SetPoint(8,0.925,26.34375);
   grae->SetPointError(8,0.02500001,0.02500001,0.3413582,0.5046158);
   grae->SetPoint(9,0.975,19.56364);
   grae->SetPointError(9,0.02500001,0.02500001,1.715189,0.7518597);
   grae->SetPoint(10,1.1,41.61366);
   grae->SetPointError(10,0.1,0.1,1.312187,0.9403229);
   
   TH1F *Graph_Graph_Graph56 = new TH1F("Graph_Graph_Graph56","",100,0.43,1.27);
   Graph_Graph_Graph56->SetMinimum(0.1986994);
   Graph_Graph_Graph56->SetMaximum(62.42049);
   Graph_Graph_Graph56->SetDirectory(0);
   Graph_Graph_Graph56->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph56->SetLineColor(ci);
   Graph_Graph_Graph56->GetXaxis()->SetTitle("R^{2}");
   Graph_Graph_Graph56->GetXaxis()->SetRange(9,92);
   Graph_Graph_Graph56->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph56->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph56->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph56->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph56->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph56->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph56->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph56->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph56->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph56->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph56->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph56->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph56->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_Graph56);
   
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
   TLegendEntry *entry=leg->AddEntry("Graph0"," JES Syst.","lf");

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
   grae->SetPointError(0,0.02500001,0.02500001,0.01078553,0.0499267);
   grae->SetPoint(1,0.575,1);
   grae->SetPointError(1,0.02500001,0.02500001,0.02224547,0.03647687);
   grae->SetPoint(2,0.625,1);
   grae->SetPointError(2,0.02499998,0.02499998,0.03097928,0.02740188);
   grae->SetPoint(3,0.675,1);
   grae->SetPointError(3,0.02500001,0.02500001,0.00663914,0.00204753);
   grae->SetPoint(4,0.725,1);
   grae->SetPointError(4,0.02500001,0.02500001,0.01661894,0.0009043329);
   grae->SetPoint(5,0.775,1);
   grae->SetPointError(5,0.02500001,0.02500001,0.02748448,0.06583575);
   grae->SetPoint(6,0.825,1);
   grae->SetPointError(6,0.02500001,0.02500001,0.01210758,0.03781037);
   grae->SetPoint(7,0.875,1);
   grae->SetPointError(7,0.02499998,0.02499998,0.03326025,0.0121704);
   grae->SetPoint(8,0.925,1);
   grae->SetPointError(8,0.02500001,0.02500001,0.01295784,0.01915505);
   grae->SetPoint(9,0.975,1);
   grae->SetPointError(9,0.02500001,0.02500001,0.08767229,0.03843148);
   grae->SetPoint(10,1.1,1);
   grae->SetPointError(10,0.1,0.1,0.03153261,0.02259649);
   
   TH1F *Graph_Graph7 = new TH1F("Graph_Graph7","",100,0.43,1.27);
   Graph_Graph7->SetMinimum(0.8);
   Graph_Graph7->SetMaximum(1.2);
   Graph_Graph7->SetDirectory(0);
   Graph_Graph7->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph7->SetLineColor(ci);
   Graph_Graph7->GetXaxis()->SetTitle("R^{2}");
   Graph_Graph7->GetXaxis()->SetRange(9,92);
   Graph_Graph7->GetXaxis()->CenterTitle(true);
   Graph_Graph7->GetXaxis()->SetLabelFont(42);
   Graph_Graph7->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph7->GetXaxis()->SetTitleSize(0.11);
   Graph_Graph7->GetXaxis()->SetTitleOffset(0.88);
   Graph_Graph7->GetXaxis()->SetTitleFont(42);
   Graph_Graph7->GetYaxis()->SetLabelFont(42);
   Graph_Graph7->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph7->GetYaxis()->SetTitleSize(0.11);
   Graph_Graph7->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph7->GetYaxis()->SetTitleFont(42);
   Graph_Graph7->GetZaxis()->SetLabelFont(42);
   Graph_Graph7->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph7->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph7->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph7);
   
   grae->Draw("a2");
   Double_t xAxis4[12] = {0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1, 1.2}; 
   
   TH1F *h4clone__4 = new TH1F("h4clone__4","signal11_cat0",11, xAxis4);
   h4clone__4->SetBinContent(1,1);
   h4clone__4->SetBinContent(2,1);
   h4clone__4->SetBinContent(3,1);
   h4clone__4->SetBinContent(4,1);
   h4clone__4->SetBinContent(5,1);
   h4clone__4->SetBinContent(6,1);
   h4clone__4->SetBinContent(7,1);
   h4clone__4->SetBinContent(8,1);
   h4clone__4->SetBinContent(9,1);
   h4clone__4->SetBinContent(10,1);
   h4clone__4->SetBinContent(11,1);
   h4clone__4->SetEntries(1489);
   h4clone__4->SetDirectory(0);

   ci = TColor::GetColor("#0000ff");
   h4clone__4->SetLineColor(ci);
   h4clone__4->GetXaxis()->SetLabelFont(42);
   h4clone__4->GetXaxis()->SetLabelSize(0.035);
   h4clone__4->GetXaxis()->SetTitleSize(0.035);
   h4clone__4->GetXaxis()->SetTitleFont(42);
   h4clone__4->GetYaxis()->SetLabelFont(42);
   h4clone__4->GetYaxis()->SetLabelSize(0.035);
   h4clone__4->GetYaxis()->SetTitleSize(0.035);
   h4clone__4->GetYaxis()->SetTitleFont(42);
   h4clone__4->GetZaxis()->SetLabelFont(42);
   h4clone__4->GetZaxis()->SetLabelSize(0.035);
   h4clone__4->GetZaxis()->SetTitleSize(0.035);
   h4clone__4->GetZaxis()->SetTitleFont(42);
   h4clone__4->Draw("hist same][");
   
   grae = new TGraphAsymmErrors(11);
   grae->SetName("Graph0");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(3001);

   ci = TColor::GetColor("#ccccff");
   grae->SetLineColor(ci);
   grae->SetPoint(0,0.525,1);
   grae->SetPointError(0,0.02500001,0.02500001,0.01078553,0.0499267);
   grae->SetPoint(1,0.575,1);
   grae->SetPointError(1,0.02500001,0.02500001,0.02224547,0.03647687);
   grae->SetPoint(2,0.625,1);
   grae->SetPointError(2,0.02499998,0.02499998,0.03097928,0.02740188);
   grae->SetPoint(3,0.675,1);
   grae->SetPointError(3,0.02500001,0.02500001,0.00663914,0.00204753);
   grae->SetPoint(4,0.725,1);
   grae->SetPointError(4,0.02500001,0.02500001,0.01661894,0.0009043329);
   grae->SetPoint(5,0.775,1);
   grae->SetPointError(5,0.02500001,0.02500001,0.02748448,0.06583575);
   grae->SetPoint(6,0.825,1);
   grae->SetPointError(6,0.02500001,0.02500001,0.01210758,0.03781037);
   grae->SetPoint(7,0.875,1);
   grae->SetPointError(7,0.02499998,0.02499998,0.03326025,0.0121704);
   grae->SetPoint(8,0.925,1);
   grae->SetPointError(8,0.02500001,0.02500001,0.01295784,0.01915505);
   grae->SetPoint(9,0.975,1);
   grae->SetPointError(9,0.02500001,0.02500001,0.08767229,0.03843148);
   grae->SetPoint(10,1.1,1);
   grae->SetPointError(10,0.1,0.1,0.03153261,0.02259649);
   
   TH1F *Graph_Graph_Graph78 = new TH1F("Graph_Graph_Graph78","",100,0.43,1.27);
   Graph_Graph_Graph78->SetMinimum(0.8);
   Graph_Graph_Graph78->SetMaximum(1.2);
   Graph_Graph_Graph78->SetDirectory(0);
   Graph_Graph_Graph78->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph78->SetLineColor(ci);
   Graph_Graph_Graph78->GetXaxis()->SetTitle("R^{2}");
   Graph_Graph_Graph78->GetXaxis()->SetRange(9,92);
   Graph_Graph_Graph78->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph78->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph78->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph_Graph78->GetXaxis()->SetTitleSize(0.11);
   Graph_Graph_Graph78->GetXaxis()->SetTitleOffset(0.88);
   Graph_Graph_Graph78->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph78->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph78->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph_Graph78->GetYaxis()->SetTitleSize(0.11);
   Graph_Graph_Graph78->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph_Graph78->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph78->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph78->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph78->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph78->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_Graph78);
   
   grae->Draw("2");
   pad2->Modified();
   C->cd();
   C->Modified();
   C->cd();
   C->SetSelected(C);
}

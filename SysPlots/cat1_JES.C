{
//=========Macro generated from canvas: C/C	
//=========  (Wed Jun 25 15:56:27 2014) by ROOT version5.34/11
   TCanvas *C = new TCanvas("C", "C	",0,0,400,500);
   C->SetHighLightColor(2);
   C->Range(0,0,1,1);
   C->SetFillColor(0);
   C->SetBorderMode(0);
   C->SetBorderSize(2);
   C->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "pad1",0,0,1,1);
   pad1->Draw();
   pad1->cd();
   pad1->Range(0.409,-429.8377,1.291,3947.038);
   pad1->SetFillColor(0);
   pad1->SetBorderMode(0);
   pad1->SetBorderSize(2);
   pad1->SetFrameBorderMode(0);
   pad1->SetFrameBorderMode(0);
   
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(11);
   grae->SetName("Graph0");
   grae->SetTitle("");
   grae->SetFillColor(2);
   grae->SetFillStyle(3001);
   grae->SetPoint(0,0.525,2330.154);
   grae->SetPointError(0,0.02500001,0.02500001,18.64868,18.64868);
   grae->SetPoint(1,0.575,1782.531);
   grae->SetPointError(1,0.02500001,0.02500001,9.55957,9.55957);
   grae->SetPoint(2,0.625,1508.408);
   grae->SetPointError(2,0.02499998,0.02499998,11.47302,11.47302);
   grae->SetPoint(3,0.675,1250.401);
   grae->SetPointError(3,0.02500001,0.02500001,3.421143,3.421143);
   grae->SetPoint(4,0.725,1125.135);
   grae->SetPointError(4,0.02500001,0.02500001,0.05084229,0.05084229);
   grae->SetPoint(5,0.775,1112.893);
   grae->SetPointError(5,0.02500001,0.02500001,1.771118,1.771118);
   grae->SetPoint(6,0.825,938.8546);
   grae->SetPointError(6,0.02500001,0.02500001,0.2535706,0.2535706);
   grae->SetPoint(7,0.875,911.1716);
   grae->SetPointError(7,0.02499998,0.02499998,7.279419,7.279419);
   grae->SetPoint(8,0.925,701.6891);
   grae->SetPointError(8,0.02500001,0.02500001,2.841614,2.841614);
   grae->SetPoint(9,0.975,512.1073);
   grae->SetPointError(9,0.02500001,0.02500001,2.832718,2.832718);
   grae->SetPoint(10,1.1,782.0679);
   grae->SetPointError(10,0.1,0.1,1.217041,1.217041);
   
   TH1F *Graph_Graph1 = new TH1F("Graph_Graph1","",100,0.43,1.27);
   Graph_Graph1->SetMinimum(7.849861);
   Graph_Graph1->SetMaximum(3509.35);
   Graph_Graph1->SetDirectory(0);
   Graph_Graph1->SetStats(0);

   Int_t ci;   // for color index setting
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
   
   TH1F *Data_cat1_1D_2mu_Box__1 = new TH1F("Data_cat1_1D_2mu_Box__1","",11, xAxis1);
   Data_cat1_1D_2mu_Box__1->SetBinContent(1,2339.567);
   Data_cat1_1D_2mu_Box__1->SetBinContent(2,1778.732);
   Data_cat1_1D_2mu_Box__1->SetBinContent(3,1509.206);
   Data_cat1_1D_2mu_Box__1->SetBinContent(4,1250.137);
   Data_cat1_1D_2mu_Box__1->SetBinContent(5,1120.901);
   Data_cat1_1D_2mu_Box__1->SetBinContent(6,1111.814);
   Data_cat1_1D_2mu_Box__1->SetBinContent(7,945.3653);
   Data_cat1_1D_2mu_Box__1->SetBinContent(8,918.4219);
   Data_cat1_1D_2mu_Box__1->SetBinContent(9,695.1577);
   Data_cat1_1D_2mu_Box__1->SetBinContent(10,516.2607);
   Data_cat1_1D_2mu_Box__1->SetBinContent(11,784.9861);
   Data_cat1_1D_2mu_Box__1->SetBinError(1,445.323);
   Data_cat1_1D_2mu_Box__1->SetBinError(2,397.9286);
   Data_cat1_1D_2mu_Box__1->SetBinError(3,151.4363);
   Data_cat1_1D_2mu_Box__1->SetBinError(4,127.4181);
   Data_cat1_1D_2mu_Box__1->SetBinError(5,78.35297);
   Data_cat1_1D_2mu_Box__1->SetBinError(6,89.04461);
   Data_cat1_1D_2mu_Box__1->SetBinError(7,122.7064);
   Data_cat1_1D_2mu_Box__1->SetBinError(8,164.325);
   Data_cat1_1D_2mu_Box__1->SetBinError(9,105.1691);
   Data_cat1_1D_2mu_Box__1->SetBinError(10,122.4117);
   Data_cat1_1D_2mu_Box__1->SetBinError(11,39.18583);
   Data_cat1_1D_2mu_Box__1->SetEntries(12427.74);
   Data_cat1_1D_2mu_Box__1->SetDirectory(0);
   Data_cat1_1D_2mu_Box__1->SetStats(0);

   ci = TColor::GetColor("#ccffcc");
   Data_cat1_1D_2mu_Box__1->SetFillColor(ci);

   ci = TColor::GetColor("#ccffcc");
   Data_cat1_1D_2mu_Box__1->SetLineColor(ci);
   Data_cat1_1D_2mu_Box__1->GetXaxis()->SetTitle("RSQ");
   Data_cat1_1D_2mu_Box__1->GetXaxis()->SetRange(1,11);
   Data_cat1_1D_2mu_Box__1->GetXaxis()->SetLabelFont(42);
   Data_cat1_1D_2mu_Box__1->GetXaxis()->SetLabelSize(0.035);
   Data_cat1_1D_2mu_Box__1->GetXaxis()->SetTitleSize(0.035);
   Data_cat1_1D_2mu_Box__1->GetXaxis()->SetTitleFont(42);
   Data_cat1_1D_2mu_Box__1->GetYaxis()->SetLabelFont(42);
   Data_cat1_1D_2mu_Box__1->GetYaxis()->SetLabelSize(0.035);
   Data_cat1_1D_2mu_Box__1->GetYaxis()->SetTitleSize(0.035);
   Data_cat1_1D_2mu_Box__1->GetYaxis()->SetTitleFont(42);
   Data_cat1_1D_2mu_Box__1->GetZaxis()->SetLabelFont(42);
   Data_cat1_1D_2mu_Box__1->GetZaxis()->SetLabelSize(0.035);
   Data_cat1_1D_2mu_Box__1->GetZaxis()->SetTitleSize(0.035);
   Data_cat1_1D_2mu_Box__1->GetZaxis()->SetTitleFont(42);
   Data_cat1_1D_2mu_Box__1->Draw("E2same][");
   Double_t xAxis2[12] = {0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1, 1.2}; 
   
   TH1F *h2clone__2 = new TH1F("h2clone__2","",11, xAxis2);
   h2clone__2->SetBinContent(1,2339.567);
   h2clone__2->SetBinContent(2,1778.732);
   h2clone__2->SetBinContent(3,1509.206);
   h2clone__2->SetBinContent(4,1250.137);
   h2clone__2->SetBinContent(5,1120.901);
   h2clone__2->SetBinContent(6,1111.814);
   h2clone__2->SetBinContent(7,945.3653);
   h2clone__2->SetBinContent(8,918.4219);
   h2clone__2->SetBinContent(9,695.1577);
   h2clone__2->SetBinContent(10,516.2607);
   h2clone__2->SetBinContent(11,784.9861);
   h2clone__2->SetBinError(1,445.323);
   h2clone__2->SetBinError(2,397.9286);
   h2clone__2->SetBinError(3,151.4363);
   h2clone__2->SetBinError(4,127.4181);
   h2clone__2->SetBinError(5,78.35297);
   h2clone__2->SetBinError(6,89.04461);
   h2clone__2->SetBinError(7,122.7064);
   h2clone__2->SetBinError(8,164.325);
   h2clone__2->SetBinError(9,105.1691);
   h2clone__2->SetBinError(10,122.4117);
   h2clone__2->SetBinError(11,39.18583);
   h2clone__2->SetEntries(12427.74);
   h2clone__2->SetDirectory(0);
   h2clone__2->SetStats(0);

   ci = TColor::GetColor("#00ff00");
   h2clone__2->SetLineColor(ci);
   h2clone__2->GetXaxis()->SetTitle("RSQ");
   h2clone__2->GetXaxis()->SetRange(1,11);
   h2clone__2->GetXaxis()->SetLabelFont(42);
   h2clone__2->GetXaxis()->SetLabelSize(0.035);
   h2clone__2->GetXaxis()->SetTitleSize(0.035);
   h2clone__2->GetXaxis()->SetTitleFont(42);
   h2clone__2->GetYaxis()->SetLabelFont(42);
   h2clone__2->GetYaxis()->SetLabelSize(0.035);
   h2clone__2->GetYaxis()->SetTitleSize(0.035);
   h2clone__2->GetYaxis()->SetTitleFont(42);
   h2clone__2->GetZaxis()->SetLabelFont(42);
   h2clone__2->GetZaxis()->SetLabelSize(0.035);
   h2clone__2->GetZaxis()->SetTitleSize(0.035);
   h2clone__2->GetZaxis()->SetTitleFont(42);
   h2clone__2->Draw("hist same][");
   
   grae = new TGraphAsymmErrors(11);
   grae->SetName("Graph0");
   grae->SetTitle("");
   grae->SetFillColor(2);
   grae->SetFillStyle(3001);
   grae->SetPoint(0,0.525,2330.154);
   grae->SetPointError(0,0.02500001,0.02500001,18.64868,18.64868);
   grae->SetPoint(1,0.575,1782.531);
   grae->SetPointError(1,0.02500001,0.02500001,9.55957,9.55957);
   grae->SetPoint(2,0.625,1508.408);
   grae->SetPointError(2,0.02499998,0.02499998,11.47302,11.47302);
   grae->SetPoint(3,0.675,1250.401);
   grae->SetPointError(3,0.02500001,0.02500001,3.421143,3.421143);
   grae->SetPoint(4,0.725,1125.135);
   grae->SetPointError(4,0.02500001,0.02500001,0.05084229,0.05084229);
   grae->SetPoint(5,0.775,1112.893);
   grae->SetPointError(5,0.02500001,0.02500001,1.771118,1.771118);
   grae->SetPoint(6,0.825,938.8546);
   grae->SetPointError(6,0.02500001,0.02500001,0.2535706,0.2535706);
   grae->SetPoint(7,0.875,911.1716);
   grae->SetPointError(7,0.02499998,0.02499998,7.279419,7.279419);
   grae->SetPoint(8,0.925,701.6891);
   grae->SetPointError(8,0.02500001,0.02500001,2.841614,2.841614);
   grae->SetPoint(9,0.975,512.1073);
   grae->SetPointError(9,0.02500001,0.02500001,2.832718,2.832718);
   grae->SetPoint(10,1.1,782.0679);
   grae->SetPointError(10,0.1,0.1,1.217041,1.217041);
   
   TH1F *Graph_Graph_Graph12 = new TH1F("Graph_Graph_Graph12","",100,0.43,1.27);
   Graph_Graph_Graph12->SetMinimum(7.849861);
   Graph_Graph_Graph12->SetMaximum(3509.35);
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
   
   TLegend *leg = new TLegend(0.6,0.7,0.85,0.85,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.018);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Graph0"," JES Syst.","lf");
   entry->SetFillColor(2);
   entry->SetFillStyle(3001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Data_cat1_1D_2mu_Box"," Bkg Pred. Nominal","lf");

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
      tex = new TLatex(0.62,0.95,"#int L dt = 18.836 fb^{-1}");
tex->SetNDC();
   tex->SetTextAlign(22);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
   C->Modified();
   C->cd();
   C->SetSelected(C);
}

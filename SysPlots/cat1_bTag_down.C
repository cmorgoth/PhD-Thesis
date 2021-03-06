{
//=========Macro generated from canvas: C/C	
//=========  (Mon Jun  2 19:11:38 2014) by ROOT version5.34/11
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
   pad1->Range(0.4125,149.1601,1.2875,3323.528);
   pad1->SetFillColor(0);
   pad1->SetBorderMode(0);
   pad1->SetBorderSize(2);
   pad1->SetBottomMargin(0);
   pad1->SetFrameBorderMode(0);
   pad1->SetFrameBorderMode(0);
   Double_t xAxis1[12] = {0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1, 1.2}; 
   
   TH1F *Data_cat1_1D_2mu_Box = new TH1F("Data_cat1_1D_2mu_Box","",11, xAxis1);
   Data_cat1_1D_2mu_Box->SetBinContent(1,2312.378);
   Data_cat1_1D_2mu_Box->SetBinContent(2,1756.298);
   Data_cat1_1D_2mu_Box->SetBinContent(3,1491.705);
   Data_cat1_1D_2mu_Box->SetBinContent(4,1240.822);
   Data_cat1_1D_2mu_Box->SetBinContent(5,1110.296);
   Data_cat1_1D_2mu_Box->SetBinContent(6,1093.381);
   Data_cat1_1D_2mu_Box->SetBinContent(7,931.0206);
   Data_cat1_1D_2mu_Box->SetBinContent(8,904.932);
   Data_cat1_1D_2mu_Box->SetBinContent(9,688.0397);
   Data_cat1_1D_2mu_Box->SetBinContent(10,509.9299);
   Data_cat1_1D_2mu_Box->SetBinContent(11,767.2037);
   Data_cat1_1D_2mu_Box->SetBinError(1,444.7483);
   Data_cat1_1D_2mu_Box->SetBinError(2,390.3872);
   Data_cat1_1D_2mu_Box->SetBinError(3,166.5125);
   Data_cat1_1D_2mu_Box->SetBinError(4,118.9967);
   Data_cat1_1D_2mu_Box->SetBinError(5,68.72223);
   Data_cat1_1D_2mu_Box->SetBinError(6,92.9355);
   Data_cat1_1D_2mu_Box->SetBinError(7,127.5723);
   Data_cat1_1D_2mu_Box->SetBinError(8,159.6174);
   Data_cat1_1D_2mu_Box->SetBinError(9,88.62275);
   Data_cat1_1D_2mu_Box->SetBinError(10,107.4378);
   Data_cat1_1D_2mu_Box->SetBinError(11,39.13252);
   Data_cat1_1D_2mu_Box->SetMinimum(149.1601);
   Data_cat1_1D_2mu_Box->SetMaximum(3006.091);
   Data_cat1_1D_2mu_Box->SetEntries(12490.04);
   Data_cat1_1D_2mu_Box->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#ccffcc");
   Data_cat1_1D_2mu_Box->SetFillColor(ci);
   Data_cat1_1D_2mu_Box->SetMarkerSize(0.3);
   Data_cat1_1D_2mu_Box->GetXaxis()->SetTitle("RSQ");
   Data_cat1_1D_2mu_Box->GetXaxis()->SetRange(1,11);
   Data_cat1_1D_2mu_Box->GetXaxis()->SetLabelFont(42);
   Data_cat1_1D_2mu_Box->GetXaxis()->SetLabelSize(0.035);
   Data_cat1_1D_2mu_Box->GetXaxis()->SetTitleSize(0.035);
   Data_cat1_1D_2mu_Box->GetXaxis()->SetTitleFont(42);
   Data_cat1_1D_2mu_Box->GetYaxis()->SetLabelFont(42);
   Data_cat1_1D_2mu_Box->GetYaxis()->SetLabelSize(0.035);
   Data_cat1_1D_2mu_Box->GetYaxis()->SetTitleSize(0.035);
   Data_cat1_1D_2mu_Box->GetYaxis()->SetTitleFont(42);
   Data_cat1_1D_2mu_Box->GetZaxis()->SetLabelFont(42);
   Data_cat1_1D_2mu_Box->GetZaxis()->SetLabelSize(0.035);
   Data_cat1_1D_2mu_Box->GetZaxis()->SetTitleSize(0.035);
   Data_cat1_1D_2mu_Box->GetZaxis()->SetTitleFont(42);
   Data_cat1_1D_2mu_Box->Draw("hist p");
   Double_t xAxis2[12] = {0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1, 1.2}; 
   
   TH1F *Data_cat1_1D_2mu_Box__1 = new TH1F("Data_cat1_1D_2mu_Box__1","",11, xAxis2);
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
   Data_cat1_1D_2mu_Box__1->SetLineWidth(4);
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
   Data_cat1_1D_2mu_Box__1->Draw("E2same");
   Double_t xAxis3[12] = {0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1, 1.2}; 
   
   TH1F *h2clone__2 = new TH1F("h2clone__2","",11, xAxis3);
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
   h2clone__2->SetLineWidth(4);
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
   h2clone__2->Draw("hist same");
   Double_t xAxis4[12] = {0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1, 1.2}; 
   
   TH1F *h1clone = new TH1F("h1clone","",11, xAxis4);
   h1clone->SetBinContent(1,2312.378);
   h1clone->SetBinContent(2,1756.298);
   h1clone->SetBinContent(3,1491.705);
   h1clone->SetBinContent(4,1240.822);
   h1clone->SetBinContent(5,1110.296);
   h1clone->SetBinContent(6,1093.381);
   h1clone->SetBinContent(7,931.0206);
   h1clone->SetBinContent(8,904.932);
   h1clone->SetBinContent(9,688.0397);
   h1clone->SetBinContent(10,509.9299);
   h1clone->SetBinContent(11,767.2037);
   h1clone->SetBinError(1,444.7483);
   h1clone->SetBinError(2,390.3872);
   h1clone->SetBinError(3,166.5125);
   h1clone->SetBinError(4,118.9967);
   h1clone->SetBinError(5,68.72223);
   h1clone->SetBinError(6,92.9355);
   h1clone->SetBinError(7,127.5723);
   h1clone->SetBinError(8,159.6174);
   h1clone->SetBinError(9,88.62275);
   h1clone->SetBinError(10,107.4378);
   h1clone->SetBinError(11,39.13252);
   h1clone->SetEntries(12490.04);
   h1clone->SetStats(0);
   h1clone->SetMarkerSize(0.3);
   h1clone->GetXaxis()->SetTitle("RSQ");
   h1clone->GetXaxis()->SetRange(1,11);
   h1clone->GetXaxis()->SetLabelFont(42);
   h1clone->GetXaxis()->SetLabelSize(0.035);
   h1clone->GetXaxis()->SetTitleSize(0.035);
   h1clone->GetXaxis()->SetTitleFont(42);
   h1clone->GetYaxis()->SetLabelFont(42);
   h1clone->GetYaxis()->SetLabelSize(0.035);
   h1clone->GetYaxis()->SetTitleSize(0.035);
   h1clone->GetYaxis()->SetTitleFont(42);
   h1clone->GetZaxis()->SetLabelFont(42);
   h1clone->GetZaxis()->SetLabelSize(0.035);
   h1clone->GetZaxis()->SetTitleSize(0.035);
   h1clone->GetZaxis()->SetTitleFont(42);
   h1clone->Draw("hist same");
   pad1->Modified();
   C->cd();
   
   TLegend *leg = new TLegend(0.6,0.83,0.85,0.92,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.018);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Data_cat1_1D_2mu_Box","R^{2} Bkg Pred. bTag Down","l");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Data_cat1_1D_2mu_Box","R^{2} Bkg Pred. Nominal","lf");

   ci = TColor::GetColor("#ccffcc");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#00ff00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(4);
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
   Double_t xAxis5[12] = {0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1, 1.2}; 
   
   TH1F *RATIO = new TH1F("RATIO","",11, xAxis5);
   RATIO->SetBinContent(1,0.9883788);
   RATIO->SetBinContent(2,0.9873879);
   RATIO->SetBinContent(3,0.9884042);
   RATIO->SetBinContent(4,0.9925485);
   RATIO->SetBinContent(5,0.9905392);
   RATIO->SetBinContent(6,0.9834208);
   RATIO->SetBinContent(7,0.9848263);
   RATIO->SetBinContent(8,0.9853119);
   RATIO->SetBinContent(9,0.9897606);
   RATIO->SetBinContent(10,0.9877373);
   RATIO->SetBinContent(11,0.9773469);
   RATIO->SetBinError(1,0.1900986);
   RATIO->SetBinError(2,0.219475);
   RATIO->SetBinError(3,0.1103312);
   RATIO->SetBinError(4,0.0951869);
   RATIO->SetBinError(5,0.06130984);
   RATIO->SetBinError(6,0.0835891);
   RATIO->SetBinError(7,0.134945);
   RATIO->SetBinError(8,0.1737953);
   RATIO->SetBinError(9,0.1274858);
   RATIO->SetBinError(10,0.2081077);
   RATIO->SetBinError(11,0.04985123);
   RATIO->SetMinimum(0.95);
   RATIO->SetMaximum(1.05);
   RATIO->SetEntries(11);
   RATIO->SetStats(0);

   ci = TColor::GetColor("#ccffcc");
   RATIO->SetFillColor(ci);
   RATIO->SetMarkerStyle(20);
   RATIO->SetMarkerSize(0.3);
   RATIO->GetXaxis()->SetTitle("R^{2}");
   RATIO->GetXaxis()->SetRange(1,11);
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
   Double_t xAxis6[12] = {0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1, 1.2}; 
   
   TH1F *RATIO2__3 = new TH1F("RATIO2__3","",11, xAxis6);
   RATIO2__3->SetBinContent(1,1);
   RATIO2__3->SetBinContent(2,1);
   RATIO2__3->SetBinContent(3,1);
   RATIO2__3->SetBinContent(4,1);
   RATIO2__3->SetBinContent(5,1);
   RATIO2__3->SetBinContent(6,1);
   RATIO2__3->SetBinContent(7,1);
   RATIO2__3->SetBinContent(8,1);
   RATIO2__3->SetBinContent(9,1);
   RATIO2__3->SetBinContent(10,1);
   RATIO2__3->SetBinContent(11,1);
   RATIO2__3->SetBinError(1,0.1903442);
   RATIO2__3->SetBinError(2,0.2237148);
   RATIO2__3->SetBinError(3,0.1003418);
   RATIO2__3->SetBinError(4,0.1019233);
   RATIO2__3->SetBinError(5,0.0699018);
   RATIO2__3->SetBinError(6,0.08008952);
   RATIO2__3->SetBinError(7,0.1297979);
   RATIO2__3->SetBinError(8,0.178921);
   RATIO2__3->SetBinError(9,0.1512881);
   RATIO2__3->SetBinError(10,0.2371121);
   RATIO2__3->SetBinError(11,0.04991914);
   RATIO2__3->SetMinimum(0.95);
   RATIO2__3->SetMaximum(1.05);
   RATIO2__3->SetEntries(11);
   RATIO2__3->SetDirectory(0);
   RATIO2__3->SetStats(0);

   ci = TColor::GetColor("#ccffcc");
   RATIO2__3->SetFillColor(ci);

   ci = TColor::GetColor("#ccffcc");
   RATIO2__3->SetLineColor(ci);
   RATIO2__3->SetLineWidth(2);
   RATIO2__3->GetXaxis()->SetTitle("R^{2}");
   RATIO2__3->GetXaxis()->SetLabelFont(42);
   RATIO2__3->GetXaxis()->SetLabelSize(0.1);
   RATIO2__3->GetXaxis()->SetTitleSize(0.11);
   RATIO2__3->GetXaxis()->SetTitleOffset(0.88);
   RATIO2__3->GetXaxis()->SetTitleFont(42);
   RATIO2__3->GetYaxis()->SetTitle("Ratio");
   RATIO2__3->GetYaxis()->SetLabelFont(42);
   RATIO2__3->GetYaxis()->SetLabelSize(0.08);
   RATIO2__3->GetYaxis()->SetTitleSize(0.11);
   RATIO2__3->GetYaxis()->SetTitleOffset(0.35);
   RATIO2__3->GetYaxis()->SetTitleFont(42);
   RATIO2__3->GetZaxis()->SetLabelFont(42);
   RATIO2__3->GetZaxis()->SetLabelSize(0.035);
   RATIO2__3->GetZaxis()->SetTitleSize(0.035);
   RATIO2__3->GetZaxis()->SetTitleFont(42);
   RATIO2__3->Draw("e2 same");
   Double_t xAxis7[12] = {0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1, 1.2}; 
   
   TH1F *ratio2clone__4 = new TH1F("ratio2clone__4","",11, xAxis7);
   ratio2clone__4->SetBinContent(1,1);
   ratio2clone__4->SetBinContent(2,1);
   ratio2clone__4->SetBinContent(3,1);
   ratio2clone__4->SetBinContent(4,1);
   ratio2clone__4->SetBinContent(5,1);
   ratio2clone__4->SetBinContent(6,1);
   ratio2clone__4->SetBinContent(7,1);
   ratio2clone__4->SetBinContent(8,1);
   ratio2clone__4->SetBinContent(9,1);
   ratio2clone__4->SetBinContent(10,1);
   ratio2clone__4->SetBinContent(11,1);
   ratio2clone__4->SetBinError(1,0.1903442);
   ratio2clone__4->SetBinError(2,0.2237148);
   ratio2clone__4->SetBinError(3,0.1003418);
   ratio2clone__4->SetBinError(4,0.1019233);
   ratio2clone__4->SetBinError(5,0.0699018);
   ratio2clone__4->SetBinError(6,0.08008952);
   ratio2clone__4->SetBinError(7,0.1297979);
   ratio2clone__4->SetBinError(8,0.178921);
   ratio2clone__4->SetBinError(9,0.1512881);
   ratio2clone__4->SetBinError(10,0.2371121);
   ratio2clone__4->SetBinError(11,0.04991914);
   ratio2clone__4->SetMinimum(0.95);
   ratio2clone__4->SetMaximum(1.05);
   ratio2clone__4->SetEntries(11);
   ratio2clone__4->SetDirectory(0);
   ratio2clone__4->SetStats(0);

   ci = TColor::GetColor("#00ff00");
   ratio2clone__4->SetLineColor(ci);
   ratio2clone__4->SetLineWidth(2);
   ratio2clone__4->GetXaxis()->SetTitle("R^{2}");
   ratio2clone__4->GetXaxis()->SetLabelFont(42);
   ratio2clone__4->GetXaxis()->SetLabelSize(0.1);
   ratio2clone__4->GetXaxis()->SetTitleSize(0.11);
   ratio2clone__4->GetXaxis()->SetTitleOffset(0.88);
   ratio2clone__4->GetXaxis()->SetTitleFont(42);
   ratio2clone__4->GetYaxis()->SetTitle("Ratio");
   ratio2clone__4->GetYaxis()->SetLabelFont(42);
   ratio2clone__4->GetYaxis()->SetLabelSize(0.08);
   ratio2clone__4->GetYaxis()->SetTitleSize(0.11);
   ratio2clone__4->GetYaxis()->SetTitleOffset(0.35);
   ratio2clone__4->GetYaxis()->SetTitleFont(42);
   ratio2clone__4->GetZaxis()->SetLabelFont(42);
   ratio2clone__4->GetZaxis()->SetLabelSize(0.035);
   ratio2clone__4->GetZaxis()->SetTitleSize(0.035);
   ratio2clone__4->GetZaxis()->SetTitleFont(42);
   ratio2clone__4->Draw("hist same");
   Double_t xAxis8[12] = {0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1, 1.2}; 
   
   TH1F *RATIO = new TH1F("RATIO","",11, xAxis8);
   RATIO->SetBinContent(1,0.9883788);
   RATIO->SetBinContent(2,0.9873879);
   RATIO->SetBinContent(3,0.9884042);
   RATIO->SetBinContent(4,0.9925485);
   RATIO->SetBinContent(5,0.9905392);
   RATIO->SetBinContent(6,0.9834208);
   RATIO->SetBinContent(7,0.9848263);
   RATIO->SetBinContent(8,0.9853119);
   RATIO->SetBinContent(9,0.9897606);
   RATIO->SetBinContent(10,0.9877373);
   RATIO->SetBinContent(11,0.9773469);
   RATIO->SetBinError(1,0.1900986);
   RATIO->SetBinError(2,0.219475);
   RATIO->SetBinError(3,0.1103312);
   RATIO->SetBinError(4,0.0951869);
   RATIO->SetBinError(5,0.06130984);
   RATIO->SetBinError(6,0.0835891);
   RATIO->SetBinError(7,0.134945);
   RATIO->SetBinError(8,0.1737953);
   RATIO->SetBinError(9,0.1274858);
   RATIO->SetBinError(10,0.2081077);
   RATIO->SetBinError(11,0.04985123);
   RATIO->SetMinimum(0.95);
   RATIO->SetMaximum(1.05);
   RATIO->SetEntries(11);
   RATIO->SetStats(0);

   ci = TColor::GetColor("#ccffcc");
   RATIO->SetFillColor(ci);
   RATIO->SetMarkerStyle(20);
   RATIO->SetMarkerSize(0.3);
   RATIO->GetXaxis()->SetTitle("R^{2}");
   RATIO->GetXaxis()->SetRange(1,11);
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

{
//=========Macro generated from canvas: C/C	
//=========  (Tue Apr  8 13:53:20 2014) by ROOT version5.34/11
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
   pad1->Range(0.4125,1.313867,1.2875,2.977987);
   pad1->SetFillColor(0);
   pad1->SetBorderMode(0);
   pad1->SetBorderSize(2);
   pad1->SetLogy();
   pad1->SetBottomMargin(0);
   pad1->SetFrameBorderMode(0);
   pad1->SetFrameBorderMode(0);
   Double_t xAxis9[12] = {0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1, 1.2}; 
   
   TH1F *Data_cat1_1D_1mu_Box = new TH1F("Data_cat1_1D_1mu_Box","",11, xAxis9);
   Data_cat1_1D_1mu_Box->SetBinContent(1,324);
   Data_cat1_1D_1mu_Box->SetBinContent(2,314);
   Data_cat1_1D_1mu_Box->SetBinContent(3,256);
   Data_cat1_1D_1mu_Box->SetBinContent(4,208);
   Data_cat1_1D_1mu_Box->SetBinContent(5,168);
   Data_cat1_1D_1mu_Box->SetBinContent(6,167);
   Data_cat1_1D_1mu_Box->SetBinContent(7,140);
   Data_cat1_1D_1mu_Box->SetBinContent(8,119);
   Data_cat1_1D_1mu_Box->SetBinContent(9,74);
   Data_cat1_1D_1mu_Box->SetBinContent(10,67);
   Data_cat1_1D_1mu_Box->SetBinContent(11,103);
   Data_cat1_1D_1mu_Box->SetBinError(1,18);
   Data_cat1_1D_1mu_Box->SetBinError(2,17.72005);
   Data_cat1_1D_1mu_Box->SetBinError(3,16);
   Data_cat1_1D_1mu_Box->SetBinError(4,14.42221);
   Data_cat1_1D_1mu_Box->SetBinError(5,12.96148);
   Data_cat1_1D_1mu_Box->SetBinError(6,12.92285);
   Data_cat1_1D_1mu_Box->SetBinError(7,11.83216);
   Data_cat1_1D_1mu_Box->SetBinError(8,10.90871);
   Data_cat1_1D_1mu_Box->SetBinError(9,8.602325);
   Data_cat1_1D_1mu_Box->SetBinError(10,8.185353);
   Data_cat1_1D_1mu_Box->SetBinError(11,10.14889);
   Data_cat1_1D_1mu_Box->SetMinimum(20.6);
   Data_cat1_1D_1mu_Box->SetMaximum(648);
   Data_cat1_1D_1mu_Box->SetEntries(1940);
   Data_cat1_1D_1mu_Box->SetStats(0);
   Data_cat1_1D_1mu_Box->SetFillColor(1);
   Data_cat1_1D_1mu_Box->SetMarkerStyle(20);
   Data_cat1_1D_1mu_Box->SetMarkerSize(0.3);
   Data_cat1_1D_1mu_Box->GetXaxis()->SetTitle("RSQ");
   Data_cat1_1D_1mu_Box->GetXaxis()->SetRange(1,11);
   Data_cat1_1D_1mu_Box->GetXaxis()->SetLabelFont(42);
   Data_cat1_1D_1mu_Box->GetXaxis()->SetLabelSize(0.035);
   Data_cat1_1D_1mu_Box->GetXaxis()->SetTitleSize(0.035);
   Data_cat1_1D_1mu_Box->GetXaxis()->SetTitleFont(42);
   Data_cat1_1D_1mu_Box->GetYaxis()->SetLabelFont(42);
   Data_cat1_1D_1mu_Box->GetYaxis()->SetLabelSize(0.035);
   Data_cat1_1D_1mu_Box->GetYaxis()->SetTitleSize(0.035);
   Data_cat1_1D_1mu_Box->GetYaxis()->SetTitleFont(42);
   Data_cat1_1D_1mu_Box->GetZaxis()->SetLabelFont(42);
   Data_cat1_1D_1mu_Box->GetZaxis()->SetLabelSize(0.035);
   Data_cat1_1D_1mu_Box->GetZaxis()->SetTitleSize(0.035);
   Data_cat1_1D_1mu_Box->GetZaxis()->SetTitleFont(42);
   Data_cat1_1D_1mu_Box->Draw("pe");
   Double_t xAxis10[12] = {0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1, 1.2}; 
   
   TH1F *TT_cat1_1D_1mu_Box__5 = new TH1F("TT_cat1_1D_1mu_Box__5","",11, xAxis10);
   TT_cat1_1D_1mu_Box__5->SetBinContent(1,281.0187);
   TT_cat1_1D_1mu_Box__5->SetBinContent(2,239.3384);
   TT_cat1_1D_1mu_Box__5->SetBinContent(3,233.8289);
   TT_cat1_1D_1mu_Box__5->SetBinContent(4,225.029);
   TT_cat1_1D_1mu_Box__5->SetBinContent(5,205.6545);
   TT_cat1_1D_1mu_Box__5->SetBinContent(6,188.8279);
   TT_cat1_1D_1mu_Box__5->SetBinContent(7,160.2655);
   TT_cat1_1D_1mu_Box__5->SetBinContent(8,138.3501);
   TT_cat1_1D_1mu_Box__5->SetBinContent(9,108.2509);
   TT_cat1_1D_1mu_Box__5->SetBinContent(10,78.55345);
   TT_cat1_1D_1mu_Box__5->SetBinContent(11,133.8779);
   TT_cat1_1D_1mu_Box__5->SetBinError(1,4.86141);
   TT_cat1_1D_1mu_Box__5->SetBinError(2,4.480282);
   TT_cat1_1D_1mu_Box__5->SetBinError(3,4.733013);
   TT_cat1_1D_1mu_Box__5->SetBinError(4,4.582459);
   TT_cat1_1D_1mu_Box__5->SetBinError(5,4.445775);
   TT_cat1_1D_1mu_Box__5->SetBinError(6,4.195147);
   TT_cat1_1D_1mu_Box__5->SetBinError(7,3.861085);
   TT_cat1_1D_1mu_Box__5->SetBinError(8,3.677706);
   TT_cat1_1D_1mu_Box__5->SetBinError(9,3.21139);
   TT_cat1_1D_1mu_Box__5->SetBinError(10,2.742062);
   TT_cat1_1D_1mu_Box__5->SetBinError(11,3.521641);
   TT_cat1_1D_1mu_Box__5->SetEntries(27761);
   TT_cat1_1D_1mu_Box__5->SetDirectory(0);
   TT_cat1_1D_1mu_Box__5->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#ccffcc");
   TT_cat1_1D_1mu_Box__5->SetFillColor(ci);

   ci = TColor::GetColor("#ccffcc");
   TT_cat1_1D_1mu_Box__5->SetLineColor(ci);
   TT_cat1_1D_1mu_Box__5->SetLineWidth(2);
   TT_cat1_1D_1mu_Box__5->GetXaxis()->SetTitle("RSQ");
   TT_cat1_1D_1mu_Box__5->GetXaxis()->SetRange(1,11);
   TT_cat1_1D_1mu_Box__5->GetXaxis()->SetLabelFont(42);
   TT_cat1_1D_1mu_Box__5->GetXaxis()->SetLabelSize(0.035);
   TT_cat1_1D_1mu_Box__5->GetXaxis()->SetTitleSize(0.035);
   TT_cat1_1D_1mu_Box__5->GetXaxis()->SetTitleFont(42);
   TT_cat1_1D_1mu_Box__5->GetYaxis()->SetLabelFont(42);
   TT_cat1_1D_1mu_Box__5->GetYaxis()->SetLabelSize(0.035);
   TT_cat1_1D_1mu_Box__5->GetYaxis()->SetTitleSize(0.035);
   TT_cat1_1D_1mu_Box__5->GetYaxis()->SetTitleFont(42);
   TT_cat1_1D_1mu_Box__5->GetZaxis()->SetLabelFont(42);
   TT_cat1_1D_1mu_Box__5->GetZaxis()->SetLabelSize(0.035);
   TT_cat1_1D_1mu_Box__5->GetZaxis()->SetTitleSize(0.035);
   TT_cat1_1D_1mu_Box__5->GetZaxis()->SetTitleFont(42);
   TT_cat1_1D_1mu_Box__5->Draw("E2same");
   Double_t xAxis11[12] = {0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1, 1.2}; 
   
   TH1F *h2clone__6 = new TH1F("h2clone__6","TT_cat1_1D_1mu_Box",11, xAxis11);
   h2clone__6->SetBinContent(1,281.0187);
   h2clone__6->SetBinContent(2,239.3384);
   h2clone__6->SetBinContent(3,233.8289);
   h2clone__6->SetBinContent(4,225.029);
   h2clone__6->SetBinContent(5,205.6545);
   h2clone__6->SetBinContent(6,188.8279);
   h2clone__6->SetBinContent(7,160.2655);
   h2clone__6->SetBinContent(8,138.3501);
   h2clone__6->SetBinContent(9,108.2509);
   h2clone__6->SetBinContent(10,78.55345);
   h2clone__6->SetBinContent(11,133.8779);
   h2clone__6->SetBinError(1,4.86141);
   h2clone__6->SetBinError(2,4.480282);
   h2clone__6->SetBinError(3,4.733013);
   h2clone__6->SetBinError(4,4.582459);
   h2clone__6->SetBinError(5,4.445775);
   h2clone__6->SetBinError(6,4.195147);
   h2clone__6->SetBinError(7,3.861085);
   h2clone__6->SetBinError(8,3.677706);
   h2clone__6->SetBinError(9,3.21139);
   h2clone__6->SetBinError(10,2.742062);
   h2clone__6->SetBinError(11,3.521641);
   h2clone__6->SetEntries(27761);
   h2clone__6->SetDirectory(0);

   ci = TColor::GetColor("#00ff00");
   h2clone__6->SetLineColor(ci);
   h2clone__6->SetLineWidth(2);
   h2clone__6->GetXaxis()->SetRange(1,11);
   h2clone__6->GetXaxis()->SetLabelFont(42);
   h2clone__6->GetXaxis()->SetLabelSize(0.035);
   h2clone__6->GetXaxis()->SetTitleSize(0.035);
   h2clone__6->GetXaxis()->SetTitleFont(42);
   h2clone__6->GetYaxis()->SetLabelFont(42);
   h2clone__6->GetYaxis()->SetLabelSize(0.035);
   h2clone__6->GetYaxis()->SetTitleSize(0.035);
   h2clone__6->GetYaxis()->SetTitleFont(42);
   h2clone__6->GetZaxis()->SetLabelFont(42);
   h2clone__6->GetZaxis()->SetLabelSize(0.035);
   h2clone__6->GetZaxis()->SetTitleSize(0.035);
   h2clone__6->GetZaxis()->SetTitleFont(42);
   h2clone__6->Draw("hist same");
   Double_t xAxis12[12] = {0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1, 1.2}; 
   
   TH1F *Data_cat1_1D_1mu_Box = new TH1F("Data_cat1_1D_1mu_Box","",11, xAxis12);
   Data_cat1_1D_1mu_Box->SetBinContent(1,324);
   Data_cat1_1D_1mu_Box->SetBinContent(2,314);
   Data_cat1_1D_1mu_Box->SetBinContent(3,256);
   Data_cat1_1D_1mu_Box->SetBinContent(4,208);
   Data_cat1_1D_1mu_Box->SetBinContent(5,168);
   Data_cat1_1D_1mu_Box->SetBinContent(6,167);
   Data_cat1_1D_1mu_Box->SetBinContent(7,140);
   Data_cat1_1D_1mu_Box->SetBinContent(8,119);
   Data_cat1_1D_1mu_Box->SetBinContent(9,74);
   Data_cat1_1D_1mu_Box->SetBinContent(10,67);
   Data_cat1_1D_1mu_Box->SetBinContent(11,103);
   Data_cat1_1D_1mu_Box->SetBinError(1,18);
   Data_cat1_1D_1mu_Box->SetBinError(2,17.72005);
   Data_cat1_1D_1mu_Box->SetBinError(3,16);
   Data_cat1_1D_1mu_Box->SetBinError(4,14.42221);
   Data_cat1_1D_1mu_Box->SetBinError(5,12.96148);
   Data_cat1_1D_1mu_Box->SetBinError(6,12.92285);
   Data_cat1_1D_1mu_Box->SetBinError(7,11.83216);
   Data_cat1_1D_1mu_Box->SetBinError(8,10.90871);
   Data_cat1_1D_1mu_Box->SetBinError(9,8.602325);
   Data_cat1_1D_1mu_Box->SetBinError(10,8.185353);
   Data_cat1_1D_1mu_Box->SetBinError(11,10.14889);
   Data_cat1_1D_1mu_Box->SetMinimum(20.6);
   Data_cat1_1D_1mu_Box->SetMaximum(648);
   Data_cat1_1D_1mu_Box->SetEntries(1940);
   Data_cat1_1D_1mu_Box->SetStats(0);
   Data_cat1_1D_1mu_Box->SetFillColor(1);
   Data_cat1_1D_1mu_Box->SetMarkerStyle(20);
   Data_cat1_1D_1mu_Box->SetMarkerSize(0.3);
   Data_cat1_1D_1mu_Box->GetXaxis()->SetTitle("RSQ");
   Data_cat1_1D_1mu_Box->GetXaxis()->SetRange(1,11);
   Data_cat1_1D_1mu_Box->GetXaxis()->SetLabelFont(42);
   Data_cat1_1D_1mu_Box->GetXaxis()->SetLabelSize(0.035);
   Data_cat1_1D_1mu_Box->GetXaxis()->SetTitleSize(0.035);
   Data_cat1_1D_1mu_Box->GetXaxis()->SetTitleFont(42);
   Data_cat1_1D_1mu_Box->GetYaxis()->SetLabelFont(42);
   Data_cat1_1D_1mu_Box->GetYaxis()->SetLabelSize(0.035);
   Data_cat1_1D_1mu_Box->GetYaxis()->SetTitleSize(0.035);
   Data_cat1_1D_1mu_Box->GetYaxis()->SetTitleFont(42);
   Data_cat1_1D_1mu_Box->GetZaxis()->SetLabelFont(42);
   Data_cat1_1D_1mu_Box->GetZaxis()->SetLabelSize(0.035);
   Data_cat1_1D_1mu_Box->GetZaxis()->SetTitleSize(0.035);
   Data_cat1_1D_1mu_Box->GetZaxis()->SetTitleFont(42);
   Data_cat1_1D_1mu_Box->Draw("pesame");
   pad1->Modified();
   C->cd();
   
   TLegend *leg = new TLegend(0.65,0.7,0.89,0.9,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.02);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Data_cat1_1D_1mu_Box","R^{2} Data  1-#mu BOX","lep");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.3);
   entry->SetTextFont(42);
   entry=leg->AddEntry("TT_cat1_1D_1mu_Box","R^{2} BKg Pred 1-#mu BOX","lf");

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
   Double_t xAxis13[12] = {0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1, 1.2}; 
   
   TH1F *RATIO = new TH1F("RATIO","",11, xAxis13);
   RATIO->SetBinContent(1,1.152948);
   RATIO->SetBinContent(2,1.31195);
   RATIO->SetBinContent(3,1.094818);
   RATIO->SetBinContent(4,0.9243255);
   RATIO->SetBinContent(5,0.8169042);
   RATIO->SetBinContent(6,0.884403);
   RATIO->SetBinContent(7,0.8735505);
   RATIO->SetBinContent(8,0.8601365);
   RATIO->SetBinContent(9,0.6835968);
   RATIO->SetBinContent(10,0.8529224);
   RATIO->SetBinContent(11,0.769358);
   RATIO->SetBinError(1,0.06405268);
   RATIO->SetBinError(2,0.07403762);
   RATIO->SetBinError(3,0.0684261);
   RATIO->SetBinError(4,0.06409044);
   RATIO->SetBinError(5,0.06302553);
   RATIO->SetBinError(6,0.06843716);
   RATIO->SetBinError(7,0.07382849);
   RATIO->SetBinError(8,0.07884859);
   RATIO->SetBinError(9,0.07946652);
   RATIO->SetBinError(10,0.1042011);
   RATIO->SetBinError(11,0.0758071);
   RATIO->SetMinimum(0);
   RATIO->SetMaximum(2.05);
   RATIO->SetEntries(11);
   RATIO->SetStats(0);

   ci = TColor::GetColor("#ccffcc");
   RATIO->SetFillColor(ci);
   RATIO->SetLineWidth(2);
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
   Double_t xAxis14[12] = {0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1, 1.2}; 
   
   TH1F *RATIO2__7 = new TH1F("RATIO2__7","",11, xAxis14);
   RATIO2__7->SetBinContent(1,1);
   RATIO2__7->SetBinContent(2,1);
   RATIO2__7->SetBinContent(3,1);
   RATIO2__7->SetBinContent(4,1);
   RATIO2__7->SetBinContent(5,1);
   RATIO2__7->SetBinContent(6,1);
   RATIO2__7->SetBinContent(7,1);
   RATIO2__7->SetBinContent(8,1);
   RATIO2__7->SetBinContent(9,1);
   RATIO2__7->SetBinContent(10,1);
   RATIO2__7->SetBinContent(11,1);
   RATIO2__7->SetBinError(1,0.01729924);
   RATIO2__7->SetBinError(2,0.01871944);
   RATIO2__7->SetBinError(3,0.02024135);
   RATIO2__7->SetBinError(4,0.02036386);
   RATIO2__7->SetBinError(5,0.02161769);
   RATIO2__7->SetBinError(6,0.02221677);
   RATIO2__7->SetBinError(7,0.0240918);
   RATIO2__7->SetBinError(8,0.0265826);
   RATIO2__7->SetBinError(9,0.02966617);
   RATIO2__7->SetBinError(10,0.03490695);
   RATIO2__7->SetBinError(11,0.02630488);
   RATIO2__7->SetMinimum(0);
   RATIO2__7->SetMaximum(2.05);
   RATIO2__7->SetEntries(11);
   RATIO2__7->SetDirectory(0);
   RATIO2__7->SetStats(0);

   ci = TColor::GetColor("#ccffcc");
   RATIO2__7->SetFillColor(ci);

   ci = TColor::GetColor("#ccffcc");
   RATIO2__7->SetLineColor(ci);
   RATIO2__7->SetLineWidth(2);
   RATIO2__7->GetXaxis()->SetTitle("R^{2}");
   RATIO2__7->GetXaxis()->SetLabelFont(42);
   RATIO2__7->GetXaxis()->SetLabelSize(0.1);
   RATIO2__7->GetXaxis()->SetTitleSize(0.11);
   RATIO2__7->GetXaxis()->SetTitleOffset(0.88);
   RATIO2__7->GetXaxis()->SetTitleFont(42);
   RATIO2__7->GetYaxis()->SetTitle("Ratio");
   RATIO2__7->GetYaxis()->SetLabelFont(42);
   RATIO2__7->GetYaxis()->SetLabelSize(0.08);
   RATIO2__7->GetYaxis()->SetTitleSize(0.11);
   RATIO2__7->GetYaxis()->SetTitleOffset(0.35);
   RATIO2__7->GetYaxis()->SetTitleFont(42);
   RATIO2__7->GetZaxis()->SetLabelFont(42);
   RATIO2__7->GetZaxis()->SetLabelSize(0.035);
   RATIO2__7->GetZaxis()->SetTitleSize(0.035);
   RATIO2__7->GetZaxis()->SetTitleFont(42);
   RATIO2__7->Draw("e2 same");
   Double_t xAxis15[12] = {0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1, 1.2}; 
   
   TH1F *ratio2clone__8 = new TH1F("ratio2clone__8","",11, xAxis15);
   ratio2clone__8->SetBinContent(1,1);
   ratio2clone__8->SetBinContent(2,1);
   ratio2clone__8->SetBinContent(3,1);
   ratio2clone__8->SetBinContent(4,1);
   ratio2clone__8->SetBinContent(5,1);
   ratio2clone__8->SetBinContent(6,1);
   ratio2clone__8->SetBinContent(7,1);
   ratio2clone__8->SetBinContent(8,1);
   ratio2clone__8->SetBinContent(9,1);
   ratio2clone__8->SetBinContent(10,1);
   ratio2clone__8->SetBinContent(11,1);
   ratio2clone__8->SetBinError(1,0.01729924);
   ratio2clone__8->SetBinError(2,0.01871944);
   ratio2clone__8->SetBinError(3,0.02024135);
   ratio2clone__8->SetBinError(4,0.02036386);
   ratio2clone__8->SetBinError(5,0.02161769);
   ratio2clone__8->SetBinError(6,0.02221677);
   ratio2clone__8->SetBinError(7,0.0240918);
   ratio2clone__8->SetBinError(8,0.0265826);
   ratio2clone__8->SetBinError(9,0.02966617);
   ratio2clone__8->SetBinError(10,0.03490695);
   ratio2clone__8->SetBinError(11,0.02630488);
   ratio2clone__8->SetMinimum(0);
   ratio2clone__8->SetMaximum(2.05);
   ratio2clone__8->SetEntries(11);
   ratio2clone__8->SetDirectory(0);
   ratio2clone__8->SetStats(0);

   ci = TColor::GetColor("#00ff00");
   ratio2clone__8->SetLineColor(ci);
   ratio2clone__8->SetLineWidth(2);
   ratio2clone__8->GetXaxis()->SetTitle("R^{2}");
   ratio2clone__8->GetXaxis()->SetLabelFont(42);
   ratio2clone__8->GetXaxis()->SetLabelSize(0.1);
   ratio2clone__8->GetXaxis()->SetTitleSize(0.11);
   ratio2clone__8->GetXaxis()->SetTitleOffset(0.88);
   ratio2clone__8->GetXaxis()->SetTitleFont(42);
   ratio2clone__8->GetYaxis()->SetTitle("Ratio");
   ratio2clone__8->GetYaxis()->SetLabelFont(42);
   ratio2clone__8->GetYaxis()->SetLabelSize(0.08);
   ratio2clone__8->GetYaxis()->SetTitleSize(0.11);
   ratio2clone__8->GetYaxis()->SetTitleOffset(0.35);
   ratio2clone__8->GetYaxis()->SetTitleFont(42);
   ratio2clone__8->GetZaxis()->SetLabelFont(42);
   ratio2clone__8->GetZaxis()->SetLabelSize(0.035);
   ratio2clone__8->GetZaxis()->SetTitleSize(0.035);
   ratio2clone__8->GetZaxis()->SetTitleFont(42);
   ratio2clone__8->Draw("hist same");
   Double_t xAxis16[12] = {0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1, 1.2}; 
   
   TH1F *RATIO = new TH1F("RATIO","",11, xAxis16);
   RATIO->SetBinContent(1,1.152948);
   RATIO->SetBinContent(2,1.31195);
   RATIO->SetBinContent(3,1.094818);
   RATIO->SetBinContent(4,0.9243255);
   RATIO->SetBinContent(5,0.8169042);
   RATIO->SetBinContent(6,0.884403);
   RATIO->SetBinContent(7,0.8735505);
   RATIO->SetBinContent(8,0.8601365);
   RATIO->SetBinContent(9,0.6835968);
   RATIO->SetBinContent(10,0.8529224);
   RATIO->SetBinContent(11,0.769358);
   RATIO->SetBinError(1,0.06405268);
   RATIO->SetBinError(2,0.07403762);
   RATIO->SetBinError(3,0.0684261);
   RATIO->SetBinError(4,0.06409044);
   RATIO->SetBinError(5,0.06302553);
   RATIO->SetBinError(6,0.06843716);
   RATIO->SetBinError(7,0.07382849);
   RATIO->SetBinError(8,0.07884859);
   RATIO->SetBinError(9,0.07946652);
   RATIO->SetBinError(10,0.1042011);
   RATIO->SetBinError(11,0.0758071);
   RATIO->SetMinimum(0);
   RATIO->SetMaximum(2.05);
   RATIO->SetEntries(11);
   RATIO->SetStats(0);

   ci = TColor::GetColor("#ccffcc");
   RATIO->SetFillColor(ci);
   RATIO->SetLineWidth(2);
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

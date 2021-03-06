{
//=========Macro generated from canvas: C/C	
//=========  (Wed Sep 10 23:17:24 2014) by ROOT version5.34/20
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
   pad1->Range(0.4125,6.835605,1.2875,1959.24);
   pad1->SetFillColor(0);
   pad1->SetBorderMode(0);
   pad1->SetBorderSize(2);
   pad1->SetBottomMargin(0);
   pad1->SetFrameBorderMode(0);
   pad1->SetFrameBorderMode(0);
   Double_t xAxis9[5] = {0.5, 0.6, 0.75, 0.9, 1.2}; 
   
   TH1F *Data_INC_1D_0mu_Box = new TH1F("Data_INC_1D_0mu_Box","",4, xAxis9);
   Data_INC_1D_0mu_Box->SetBinContent(1,882);
   Data_INC_1D_0mu_Box->SetBinContent(2,887);
   Data_INC_1D_0mu_Box->SetBinContent(3,500);
   Data_INC_1D_0mu_Box->SetBinContent(4,260);
   Data_INC_1D_0mu_Box->SetBinError(1,29.69848);
   Data_INC_1D_0mu_Box->SetBinError(2,29.78255);
   Data_INC_1D_0mu_Box->SetBinError(3,22.36068);
   Data_INC_1D_0mu_Box->SetBinError(4,16.12452);
   Data_INC_1D_0mu_Box->SetMinimum(6.835605);
   Data_INC_1D_0mu_Box->SetMaximum(1764);
   Data_INC_1D_0mu_Box->SetEntries(2529);
   Data_INC_1D_0mu_Box->SetStats(0);
   Data_INC_1D_0mu_Box->SetFillColor(1);
   Data_INC_1D_0mu_Box->SetMarkerStyle(20);
   Data_INC_1D_0mu_Box->SetMarkerSize(0.3);
   Data_INC_1D_0mu_Box->GetXaxis()->SetTitle("RSQ");
   Data_INC_1D_0mu_Box->GetXaxis()->SetRange(1,4);
   Data_INC_1D_0mu_Box->GetXaxis()->SetLabelFont(42);
   Data_INC_1D_0mu_Box->GetXaxis()->SetLabelSize(0.035);
   Data_INC_1D_0mu_Box->GetXaxis()->SetTitleSize(0.035);
   Data_INC_1D_0mu_Box->GetXaxis()->SetTitleFont(42);
   Data_INC_1D_0mu_Box->GetYaxis()->SetLabelFont(42);
   Data_INC_1D_0mu_Box->GetYaxis()->SetLabelSize(0.035);
   Data_INC_1D_0mu_Box->GetYaxis()->SetTitleSize(0.035);
   Data_INC_1D_0mu_Box->GetYaxis()->SetTitleFont(42);
   Data_INC_1D_0mu_Box->GetZaxis()->SetLabelFont(42);
   Data_INC_1D_0mu_Box->GetZaxis()->SetLabelSize(0.035);
   Data_INC_1D_0mu_Box->GetZaxis()->SetTitleSize(0.035);
   Data_INC_1D_0mu_Box->GetZaxis()->SetTitleFont(42);
   Data_INC_1D_0mu_Box->Draw("pe");
   Double_t xAxis10[5] = {0.5, 0.6, 0.75, 0.9, 1.2}; 
   
   TH1F *Data_INC_1D_1mu_Box__5 = new TH1F("Data_INC_1D_1mu_Box__5","",4, xAxis10);
   Data_INC_1D_1mu_Box__5->SetBinContent(1,785.2665);
   Data_INC_1D_1mu_Box__5->SetBinContent(2,618.9103);
   Data_INC_1D_1mu_Box__5->SetBinContent(3,395.9778);
   Data_INC_1D_1mu_Box__5->SetBinContent(4,196.9471);
   Data_INC_1D_1mu_Box__5->SetBinError(1,564.7721);
   Data_INC_1D_1mu_Box__5->SetBinError(2,442.8056);
   Data_INC_1D_1mu_Box__5->SetBinError(3,313.4224);
   Data_INC_1D_1mu_Box__5->SetBinError(4,162.7691);
   Data_INC_1D_1mu_Box__5->SetEntries(2285.161);
   Data_INC_1D_1mu_Box__5->SetDirectory(0);
   Data_INC_1D_1mu_Box__5->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ffcccc");
   Data_INC_1D_1mu_Box__5->SetFillColor(ci);

   ci = TColor::GetColor("#ffcccc");
   Data_INC_1D_1mu_Box__5->SetLineColor(ci);
   Data_INC_1D_1mu_Box__5->SetLineWidth(2);
   Data_INC_1D_1mu_Box__5->GetXaxis()->SetTitle("RSQ");
   Data_INC_1D_1mu_Box__5->GetXaxis()->SetRange(1,4);
   Data_INC_1D_1mu_Box__5->GetXaxis()->SetLabelFont(42);
   Data_INC_1D_1mu_Box__5->GetXaxis()->SetLabelSize(0.035);
   Data_INC_1D_1mu_Box__5->GetXaxis()->SetTitleSize(0.035);
   Data_INC_1D_1mu_Box__5->GetXaxis()->SetTitleFont(42);
   Data_INC_1D_1mu_Box__5->GetYaxis()->SetLabelFont(42);
   Data_INC_1D_1mu_Box__5->GetYaxis()->SetLabelSize(0.035);
   Data_INC_1D_1mu_Box__5->GetYaxis()->SetTitleSize(0.035);
   Data_INC_1D_1mu_Box__5->GetYaxis()->SetTitleFont(42);
   Data_INC_1D_1mu_Box__5->GetZaxis()->SetLabelFont(42);
   Data_INC_1D_1mu_Box__5->GetZaxis()->SetLabelSize(0.035);
   Data_INC_1D_1mu_Box__5->GetZaxis()->SetTitleSize(0.035);
   Data_INC_1D_1mu_Box__5->GetZaxis()->SetTitleFont(42);
   Data_INC_1D_1mu_Box__5->Draw("E2same");
   Double_t xAxis11[5] = {0.5, 0.6, 0.75, 0.9, 1.2}; 
   
   TH1F *h2clone__6 = new TH1F("h2clone__6","Data_INC_1D_1mu_Box",4, xAxis11);
   h2clone__6->SetBinContent(1,785.2665);
   h2clone__6->SetBinContent(2,618.9103);
   h2clone__6->SetBinContent(3,395.9778);
   h2clone__6->SetBinContent(4,196.9471);
   h2clone__6->SetBinError(1,564.7721);
   h2clone__6->SetBinError(2,442.8056);
   h2clone__6->SetBinError(3,313.4224);
   h2clone__6->SetBinError(4,162.7691);
   h2clone__6->SetEntries(2285.161);
   h2clone__6->SetDirectory(0);

   ci = TColor::GetColor("#ff0000");
   h2clone__6->SetLineColor(ci);
   h2clone__6->SetLineWidth(2);
   h2clone__6->GetXaxis()->SetRange(1,4);
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
   Double_t xAxis12[5] = {0.5, 0.6, 0.75, 0.9, 1.2}; 
   
   TH1F *Data_INC_1D_0mu_Box = new TH1F("Data_INC_1D_0mu_Box","",4, xAxis12);
   Data_INC_1D_0mu_Box->SetBinContent(1,882);
   Data_INC_1D_0mu_Box->SetBinContent(2,887);
   Data_INC_1D_0mu_Box->SetBinContent(3,500);
   Data_INC_1D_0mu_Box->SetBinContent(4,260);
   Data_INC_1D_0mu_Box->SetBinError(1,29.69848);
   Data_INC_1D_0mu_Box->SetBinError(2,29.78255);
   Data_INC_1D_0mu_Box->SetBinError(3,22.36068);
   Data_INC_1D_0mu_Box->SetBinError(4,16.12452);
   Data_INC_1D_0mu_Box->SetMinimum(6.835605);
   Data_INC_1D_0mu_Box->SetMaximum(1764);
   Data_INC_1D_0mu_Box->SetEntries(2529);
   Data_INC_1D_0mu_Box->SetStats(0);
   Data_INC_1D_0mu_Box->SetFillColor(1);
   Data_INC_1D_0mu_Box->SetMarkerStyle(20);
   Data_INC_1D_0mu_Box->SetMarkerSize(0.3);
   Data_INC_1D_0mu_Box->GetXaxis()->SetTitle("RSQ");
   Data_INC_1D_0mu_Box->GetXaxis()->SetRange(1,4);
   Data_INC_1D_0mu_Box->GetXaxis()->SetLabelFont(42);
   Data_INC_1D_0mu_Box->GetXaxis()->SetLabelSize(0.035);
   Data_INC_1D_0mu_Box->GetXaxis()->SetTitleSize(0.035);
   Data_INC_1D_0mu_Box->GetXaxis()->SetTitleFont(42);
   Data_INC_1D_0mu_Box->GetYaxis()->SetLabelFont(42);
   Data_INC_1D_0mu_Box->GetYaxis()->SetLabelSize(0.035);
   Data_INC_1D_0mu_Box->GetYaxis()->SetTitleSize(0.035);
   Data_INC_1D_0mu_Box->GetYaxis()->SetTitleFont(42);
   Data_INC_1D_0mu_Box->GetZaxis()->SetLabelFont(42);
   Data_INC_1D_0mu_Box->GetZaxis()->SetLabelSize(0.035);
   Data_INC_1D_0mu_Box->GetZaxis()->SetTitleSize(0.035);
   Data_INC_1D_0mu_Box->GetZaxis()->SetTitleFont(42);
   Data_INC_1D_0mu_Box->Draw("pesame");
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
   TLegendEntry *entry=leg->AddEntry("Data_INC_1D_0mu_Box","R^{2} Data  0#mu","lep");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.3);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Data_INC_1D_1mu_Box","R^{2} BKg Pred 0#mu","lf");

   ci = TColor::GetColor("#ffcccc");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#ff0000");
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
   pad2->Range(0,0,1,1);
   pad2->SetFillColor(0);
   pad2->SetBorderMode(0);
   pad2->SetBorderSize(2);
   pad2->SetGridy();
   pad2->SetTopMargin(0.008);
   pad2->SetBottomMargin(0.25);
   pad2->SetFrameBorderMode(0);
   Double_t xAxis13[5] = {0.5, 0.6, 0.75, 0.9, 1.2}; 
   
   TH1F *RATIO = new TH1F("RATIO","",4, xAxis13);
   RATIO->SetBinContent(1,1.123186);
   RATIO->SetBinContent(2,1.433164);
   RATIO->SetBinContent(3,1.262697);
   RATIO->SetBinContent(4,1.320151);
   RATIO->SetBinError(1,0.03781962);
   RATIO->SetBinError(2,0.04812094);
   RATIO->SetBinError(3,0.05646953);
   RATIO->SetBinError(4,0.08187232);
   RATIO->SetMinimum(0);
   RATIO->SetMaximum(3.05);
   RATIO->SetEntries(4);
   RATIO->SetStats(0);

   ci = TColor::GetColor("#ffcccc");
   RATIO->SetFillColor(ci);
   RATIO->SetLineWidth(2);
   RATIO->SetMarkerStyle(20);
   RATIO->SetMarkerSize(0.3);
   RATIO->GetXaxis()->SetTitle("R^{2}");
   RATIO->GetXaxis()->SetRange(1,4);
   RATIO->GetXaxis()->CenterTitle(true);
   RATIO->GetXaxis()->SetLabelFont(42);
   RATIO->GetXaxis()->SetLabelSize(0.1);
   RATIO->GetXaxis()->SetTitleSize(0.11);
   RATIO->GetXaxis()->SetTitleOffset(0.88);
   RATIO->GetXaxis()->SetTitleFont(42);
   RATIO->GetYaxis()->SetTitle("Ratio");
   RATIO->GetYaxis()->CenterTitle(true);
   RATIO->GetYaxis()->SetLabelFont(42);
   RATIO->GetYaxis()->SetLabelSize(0.08);
   RATIO->GetYaxis()->SetTitleSize(0.11);
   RATIO->GetYaxis()->SetTitleOffset(0.45);
   RATIO->GetYaxis()->SetTitleFont(42);
   RATIO->GetZaxis()->SetLabelFont(42);
   RATIO->GetZaxis()->SetLabelSize(0.035);
   RATIO->GetZaxis()->SetTitleSize(0.035);
   RATIO->GetZaxis()->SetTitleFont(42);
   RATIO->Draw("pe");
   Double_t xAxis14[5] = {0.5, 0.6, 0.75, 0.9, 1.2}; 
   
   TH1F *RATIO2__7 = new TH1F("RATIO2__7","",4, xAxis14);
   RATIO2__7->SetBinContent(1,1);
   RATIO2__7->SetBinContent(2,1);
   RATIO2__7->SetBinContent(3,1);
   RATIO2__7->SetBinContent(4,1);
   RATIO2__7->SetBinError(1,0.7192107);
   RATIO2__7->SetBinError(2,0.71546);
   RATIO2__7->SetBinError(3,0.7915151);
   RATIO2__7->SetBinError(4,0.8264609);
   RATIO2__7->SetMinimum(0);
   RATIO2__7->SetMaximum(3.05);
   RATIO2__7->SetEntries(4);
   RATIO2__7->SetDirectory(0);
   RATIO2__7->SetStats(0);

   ci = TColor::GetColor("#ffcccc");
   RATIO2__7->SetFillColor(ci);

   ci = TColor::GetColor("#ffcccc");
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
   RATIO2__7->GetYaxis()->SetTitleSize(0.035);
   RATIO2__7->GetYaxis()->SetTitleOffset(0.35);
   RATIO2__7->GetYaxis()->SetTitleFont(42);
   RATIO2__7->GetZaxis()->SetLabelFont(42);
   RATIO2__7->GetZaxis()->SetLabelSize(0.035);
   RATIO2__7->GetZaxis()->SetTitleSize(0.035);
   RATIO2__7->GetZaxis()->SetTitleFont(42);
   RATIO2__7->Draw("e2 same");
   Double_t xAxis15[5] = {0.5, 0.6, 0.75, 0.9, 1.2}; 
   
   TH1F *ratio2clone__8 = new TH1F("ratio2clone__8","",4, xAxis15);
   ratio2clone__8->SetBinContent(1,1);
   ratio2clone__8->SetBinContent(2,1);
   ratio2clone__8->SetBinContent(3,1);
   ratio2clone__8->SetBinContent(4,1);
   ratio2clone__8->SetBinError(1,0.7192107);
   ratio2clone__8->SetBinError(2,0.71546);
   ratio2clone__8->SetBinError(3,0.7915151);
   ratio2clone__8->SetBinError(4,0.8264609);
   ratio2clone__8->SetMinimum(0);
   ratio2clone__8->SetMaximum(3.05);
   ratio2clone__8->SetEntries(4);
   ratio2clone__8->SetDirectory(0);
   ratio2clone__8->SetStats(0);

   ci = TColor::GetColor("#ff0000");
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
   ratio2clone__8->GetYaxis()->SetTitleSize(0.035);
   ratio2clone__8->GetYaxis()->SetTitleOffset(0.35);
   ratio2clone__8->GetYaxis()->SetTitleFont(42);
   ratio2clone__8->GetZaxis()->SetLabelFont(42);
   ratio2clone__8->GetZaxis()->SetLabelSize(0.035);
   ratio2clone__8->GetZaxis()->SetTitleSize(0.035);
   ratio2clone__8->GetZaxis()->SetTitleFont(42);
   ratio2clone__8->Draw("hist same");
   Double_t xAxis16[5] = {0.5, 0.6, 0.75, 0.9, 1.2}; 
   
   TH1F *RATIO = new TH1F("RATIO","",4, xAxis16);
   RATIO->SetBinContent(1,1.123186);
   RATIO->SetBinContent(2,1.433164);
   RATIO->SetBinContent(3,1.262697);
   RATIO->SetBinContent(4,1.320151);
   RATIO->SetBinError(1,0.03781962);
   RATIO->SetBinError(2,0.04812094);
   RATIO->SetBinError(3,0.05646953);
   RATIO->SetBinError(4,0.08187232);
   RATIO->SetMinimum(0);
   RATIO->SetMaximum(3.05);
   RATIO->SetEntries(4);
   RATIO->SetStats(0);

   ci = TColor::GetColor("#ffcccc");
   RATIO->SetFillColor(ci);
   RATIO->SetLineWidth(2);
   RATIO->SetMarkerStyle(20);
   RATIO->SetMarkerSize(0.3);
   RATIO->GetXaxis()->SetTitle("R^{2}");
   RATIO->GetXaxis()->SetRange(1,4);
   RATIO->GetXaxis()->CenterTitle(true);
   RATIO->GetXaxis()->SetLabelFont(42);
   RATIO->GetXaxis()->SetLabelSize(0.1);
   RATIO->GetXaxis()->SetTitleSize(0.11);
   RATIO->GetXaxis()->SetTitleOffset(0.88);
   RATIO->GetXaxis()->SetTitleFont(42);
   RATIO->GetYaxis()->SetTitle("Ratio");
   RATIO->GetYaxis()->CenterTitle(true);
   RATIO->GetYaxis()->SetLabelFont(42);
   RATIO->GetYaxis()->SetLabelSize(0.08);
   RATIO->GetYaxis()->SetTitleSize(0.11);
   RATIO->GetYaxis()->SetTitleOffset(0.45);
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

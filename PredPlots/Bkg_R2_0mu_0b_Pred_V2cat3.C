{
//=========Macro generated from canvas: C/C	
//=========  (Tue Apr 15 22:37:29 2014) by ROOT version5.34/11
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
   pad1->Range(0.4125,1.461437,1.2875,3.21782);
   pad1->SetFillColor(0);
   pad1->SetBorderMode(0);
   pad1->SetBorderSize(2);
   pad1->SetLogy();
   pad1->SetBottomMargin(0);
   pad1->SetFrameBorderMode(0);
   pad1->SetFrameBorderMode(0);
   Double_t xAxis73[7] = {0.5, 0.575, 0.65, 0.75, 0.85, 0.95, 1.2}; 
   
   TH1F *Data_cat3_1D_0mu_Box = new TH1F("Data_cat3_1D_0mu_Box","",6, xAxis73);
   Data_cat3_1D_0mu_Box->SetBinContent(1,551);
   Data_cat3_1D_0mu_Box->SetBinContent(2,357);
   Data_cat3_1D_0mu_Box->SetBinContent(3,292);
   Data_cat3_1D_0mu_Box->SetBinContent(4,221);
   Data_cat3_1D_0mu_Box->SetBinContent(5,167);
   Data_cat3_1D_0mu_Box->SetBinContent(6,92);
   Data_cat3_1D_0mu_Box->SetBinError(1,23.47339);
   Data_cat3_1D_0mu_Box->SetBinError(2,18.89444);
   Data_cat3_1D_0mu_Box->SetBinError(3,17.08801);
   Data_cat3_1D_0mu_Box->SetBinError(4,14.86607);
   Data_cat3_1D_0mu_Box->SetBinError(5,12.92285);
   Data_cat3_1D_0mu_Box->SetBinError(6,9.591663);
   Data_cat3_1D_0mu_Box->SetMinimum(28.93591);
   Data_cat3_1D_0mu_Box->SetMaximum(1102);
   Data_cat3_1D_0mu_Box->SetEntries(1680);
   Data_cat3_1D_0mu_Box->SetStats(0);
   Data_cat3_1D_0mu_Box->SetFillColor(1);
   Data_cat3_1D_0mu_Box->SetMarkerStyle(20);
   Data_cat3_1D_0mu_Box->SetMarkerSize(0.3);
   Data_cat3_1D_0mu_Box->GetXaxis()->SetTitle("RSQ");
   Data_cat3_1D_0mu_Box->GetXaxis()->SetRange(1,6);
   Data_cat3_1D_0mu_Box->GetXaxis()->SetLabelFont(42);
   Data_cat3_1D_0mu_Box->GetXaxis()->SetLabelSize(0.035);
   Data_cat3_1D_0mu_Box->GetXaxis()->SetTitleSize(0.035);
   Data_cat3_1D_0mu_Box->GetXaxis()->SetTitleFont(42);
   Data_cat3_1D_0mu_Box->GetYaxis()->SetLabelFont(42);
   Data_cat3_1D_0mu_Box->GetYaxis()->SetLabelSize(0.035);
   Data_cat3_1D_0mu_Box->GetYaxis()->SetTitleSize(0.035);
   Data_cat3_1D_0mu_Box->GetYaxis()->SetTitleFont(42);
   Data_cat3_1D_0mu_Box->GetZaxis()->SetLabelFont(42);
   Data_cat3_1D_0mu_Box->GetZaxis()->SetLabelSize(0.035);
   Data_cat3_1D_0mu_Box->GetZaxis()->SetTitleSize(0.035);
   Data_cat3_1D_0mu_Box->GetZaxis()->SetTitleFont(42);
   Data_cat3_1D_0mu_Box->Draw("pe");
   Double_t xAxis74[7] = {0.5, 0.575, 0.65, 0.75, 0.85, 0.95, 1.2}; 
   
   TH1F *Data_cat3_1D_1mu_Box__37 = new TH1F("Data_cat3_1D_1mu_Box__37","",6, xAxis74);
   Data_cat3_1D_1mu_Box__37->SetBinContent(1,629.693);
   Data_cat3_1D_1mu_Box__37->SetBinContent(2,370.883);
   Data_cat3_1D_1mu_Box__37->SetBinContent(3,296.238);
   Data_cat3_1D_1mu_Box__37->SetBinContent(4,254.53);
   Data_cat3_1D_1mu_Box__37->SetBinContent(5,177.2962);
   Data_cat3_1D_1mu_Box__37->SetBinContent(6,82.48437);
   Data_cat3_1D_1mu_Box__37->SetBinError(1,29.43359);
   Data_cat3_1D_1mu_Box__37->SetBinError(2,21.39886);
   Data_cat3_1D_1mu_Box__37->SetBinError(3,19.26325);
   Data_cat3_1D_1mu_Box__37->SetBinError(4,18.31732);
   Data_cat3_1D_1mu_Box__37->SetBinError(5,14.4254);
   Data_cat3_1D_1mu_Box__37->SetBinError(6,10.14458);
   Data_cat3_1D_1mu_Box__37->SetEntries(2011.472);
   Data_cat3_1D_1mu_Box__37->SetDirectory(0);
   Data_cat3_1D_1mu_Box__37->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#ccffcc");
   Data_cat3_1D_1mu_Box__37->SetFillColor(ci);

   ci = TColor::GetColor("#ccffcc");
   Data_cat3_1D_1mu_Box__37->SetLineColor(ci);
   Data_cat3_1D_1mu_Box__37->SetLineWidth(2);
   Data_cat3_1D_1mu_Box__37->GetXaxis()->SetTitle("RSQ");
   Data_cat3_1D_1mu_Box__37->GetXaxis()->SetRange(1,6);
   Data_cat3_1D_1mu_Box__37->GetXaxis()->SetLabelFont(42);
   Data_cat3_1D_1mu_Box__37->GetXaxis()->SetLabelSize(0.035);
   Data_cat3_1D_1mu_Box__37->GetXaxis()->SetTitleSize(0.035);
   Data_cat3_1D_1mu_Box__37->GetXaxis()->SetTitleFont(42);
   Data_cat3_1D_1mu_Box__37->GetYaxis()->SetLabelFont(42);
   Data_cat3_1D_1mu_Box__37->GetYaxis()->SetLabelSize(0.035);
   Data_cat3_1D_1mu_Box__37->GetYaxis()->SetTitleSize(0.035);
   Data_cat3_1D_1mu_Box__37->GetYaxis()->SetTitleFont(42);
   Data_cat3_1D_1mu_Box__37->GetZaxis()->SetLabelFont(42);
   Data_cat3_1D_1mu_Box__37->GetZaxis()->SetLabelSize(0.035);
   Data_cat3_1D_1mu_Box__37->GetZaxis()->SetTitleSize(0.035);
   Data_cat3_1D_1mu_Box__37->GetZaxis()->SetTitleFont(42);
   Data_cat3_1D_1mu_Box__37->Draw("E2same");
   Double_t xAxis75[7] = {0.5, 0.575, 0.65, 0.75, 0.85, 0.95, 1.2}; 
   
   TH1F *h2clone__38 = new TH1F("h2clone__38","Data_cat3_1D_1mu_Box",6, xAxis75);
   h2clone__38->SetBinContent(1,629.693);
   h2clone__38->SetBinContent(2,370.883);
   h2clone__38->SetBinContent(3,296.238);
   h2clone__38->SetBinContent(4,254.53);
   h2clone__38->SetBinContent(5,177.2962);
   h2clone__38->SetBinContent(6,82.48437);
   h2clone__38->SetBinError(1,29.43359);
   h2clone__38->SetBinError(2,21.39886);
   h2clone__38->SetBinError(3,19.26325);
   h2clone__38->SetBinError(4,18.31732);
   h2clone__38->SetBinError(5,14.4254);
   h2clone__38->SetBinError(6,10.14458);
   h2clone__38->SetEntries(2011.472);
   h2clone__38->SetDirectory(0);

   ci = TColor::GetColor("#00ff00");
   h2clone__38->SetLineColor(ci);
   h2clone__38->SetLineWidth(2);
   h2clone__38->GetXaxis()->SetRange(1,6);
   h2clone__38->GetXaxis()->SetLabelFont(42);
   h2clone__38->GetXaxis()->SetLabelSize(0.035);
   h2clone__38->GetXaxis()->SetTitleSize(0.035);
   h2clone__38->GetXaxis()->SetTitleFont(42);
   h2clone__38->GetYaxis()->SetLabelFont(42);
   h2clone__38->GetYaxis()->SetLabelSize(0.035);
   h2clone__38->GetYaxis()->SetTitleSize(0.035);
   h2clone__38->GetYaxis()->SetTitleFont(42);
   h2clone__38->GetZaxis()->SetLabelFont(42);
   h2clone__38->GetZaxis()->SetLabelSize(0.035);
   h2clone__38->GetZaxis()->SetTitleSize(0.035);
   h2clone__38->GetZaxis()->SetTitleFont(42);
   h2clone__38->Draw("hist same");
   Double_t xAxis76[7] = {0.5, 0.575, 0.65, 0.75, 0.85, 0.95, 1.2}; 
   
   TH1F *Data_cat3_1D_0mu_Box = new TH1F("Data_cat3_1D_0mu_Box","",6, xAxis76);
   Data_cat3_1D_0mu_Box->SetBinContent(1,551);
   Data_cat3_1D_0mu_Box->SetBinContent(2,357);
   Data_cat3_1D_0mu_Box->SetBinContent(3,292);
   Data_cat3_1D_0mu_Box->SetBinContent(4,221);
   Data_cat3_1D_0mu_Box->SetBinContent(5,167);
   Data_cat3_1D_0mu_Box->SetBinContent(6,92);
   Data_cat3_1D_0mu_Box->SetBinError(1,23.47339);
   Data_cat3_1D_0mu_Box->SetBinError(2,18.89444);
   Data_cat3_1D_0mu_Box->SetBinError(3,17.08801);
   Data_cat3_1D_0mu_Box->SetBinError(4,14.86607);
   Data_cat3_1D_0mu_Box->SetBinError(5,12.92285);
   Data_cat3_1D_0mu_Box->SetBinError(6,9.591663);
   Data_cat3_1D_0mu_Box->SetMinimum(28.93591);
   Data_cat3_1D_0mu_Box->SetMaximum(1102);
   Data_cat3_1D_0mu_Box->SetEntries(1680);
   Data_cat3_1D_0mu_Box->SetStats(0);
   Data_cat3_1D_0mu_Box->SetFillColor(1);
   Data_cat3_1D_0mu_Box->SetMarkerStyle(20);
   Data_cat3_1D_0mu_Box->SetMarkerSize(0.3);
   Data_cat3_1D_0mu_Box->GetXaxis()->SetTitle("RSQ");
   Data_cat3_1D_0mu_Box->GetXaxis()->SetRange(1,6);
   Data_cat3_1D_0mu_Box->GetXaxis()->SetLabelFont(42);
   Data_cat3_1D_0mu_Box->GetXaxis()->SetLabelSize(0.035);
   Data_cat3_1D_0mu_Box->GetXaxis()->SetTitleSize(0.035);
   Data_cat3_1D_0mu_Box->GetXaxis()->SetTitleFont(42);
   Data_cat3_1D_0mu_Box->GetYaxis()->SetLabelFont(42);
   Data_cat3_1D_0mu_Box->GetYaxis()->SetLabelSize(0.035);
   Data_cat3_1D_0mu_Box->GetYaxis()->SetTitleSize(0.035);
   Data_cat3_1D_0mu_Box->GetYaxis()->SetTitleFont(42);
   Data_cat3_1D_0mu_Box->GetZaxis()->SetLabelFont(42);
   Data_cat3_1D_0mu_Box->GetZaxis()->SetLabelSize(0.035);
   Data_cat3_1D_0mu_Box->GetZaxis()->SetTitleSize(0.035);
   Data_cat3_1D_0mu_Box->GetZaxis()->SetTitleFont(42);
   Data_cat3_1D_0mu_Box->Draw("pesame");
   pad1->Modified();
   C->cd();
   
   TLegend *leg = new TLegend(0.7,0.83,0.89,0.92,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.018);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Data_cat3_1D_0mu_Box","R^{2} Data  0#mu","lep");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.3);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Data_cat3_1D_1mu_Box","R^{2} BKg Pred 0#mu","lf");

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
   Double_t xAxis77[7] = {0.5, 0.575, 0.65, 0.75, 0.85, 0.95, 1.2}; 
   
   TH1F *RATIO = new TH1F("RATIO","",6, xAxis77);
   RATIO->SetBinContent(1,0.8750296);
   RATIO->SetBinContent(2,0.9625678);
   RATIO->SetBinContent(3,0.9856938);
   RATIO->SetBinContent(4,0.8682671);
   RATIO->SetBinContent(5,0.9419265);
   RATIO->SetBinContent(6,1.115363);
   RATIO->SetBinError(1,0.03727751);
   RATIO->SetBinError(2,0.05094449);
   RATIO->SetBinError(3,0.05768337);
   RATIO->SetBinError(4,0.05840596);
   RATIO->SetBinError(5,0.07288846);
   RATIO->SetBinError(6,0.1162846);
   RATIO->SetMinimum(0);
   RATIO->SetMaximum(3.05);
   RATIO->SetEntries(6);
   RATIO->SetStats(0);

   ci = TColor::GetColor("#ccffcc");
   RATIO->SetFillColor(ci);
   RATIO->SetLineWidth(2);
   RATIO->SetMarkerStyle(20);
   RATIO->SetMarkerSize(0.3);
   RATIO->GetXaxis()->SetTitle("R^{2}");
   RATIO->GetXaxis()->SetRange(1,6);
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
   Double_t xAxis78[7] = {0.5, 0.575, 0.65, 0.75, 0.85, 0.95, 1.2}; 
   
   TH1F *RATIO2__39 = new TH1F("RATIO2__39","",6, xAxis78);
   RATIO2__39->SetBinContent(1,1);
   RATIO2__39->SetBinContent(2,1);
   RATIO2__39->SetBinContent(3,1);
   RATIO2__39->SetBinContent(4,1);
   RATIO2__39->SetBinContent(5,1);
   RATIO2__39->SetBinContent(6,1);
   RATIO2__39->SetBinError(1,0.04674276);
   RATIO2__39->SetBinError(2,0.05769706);
   RATIO2__39->SetBinError(3,0.06502625);
   RATIO2__39->SetBinError(4,0.07196529);
   RATIO2__39->SetBinError(5,0.08136329);
   RATIO2__39->SetBinError(6,0.1229879);
   RATIO2__39->SetMinimum(0);
   RATIO2__39->SetMaximum(3.05);
   RATIO2__39->SetEntries(6);
   RATIO2__39->SetDirectory(0);
   RATIO2__39->SetStats(0);

   ci = TColor::GetColor("#ccffcc");
   RATIO2__39->SetFillColor(ci);

   ci = TColor::GetColor("#ccffcc");
   RATIO2__39->SetLineColor(ci);
   RATIO2__39->SetLineWidth(2);
   RATIO2__39->GetXaxis()->SetTitle("R^{2}");
   RATIO2__39->GetXaxis()->SetLabelFont(42);
   RATIO2__39->GetXaxis()->SetLabelSize(0.1);
   RATIO2__39->GetXaxis()->SetTitleSize(0.11);
   RATIO2__39->GetXaxis()->SetTitleOffset(0.88);
   RATIO2__39->GetXaxis()->SetTitleFont(42);
   RATIO2__39->GetYaxis()->SetTitle("Ratio");
   RATIO2__39->GetYaxis()->SetLabelFont(42);
   RATIO2__39->GetYaxis()->SetLabelSize(0.08);
   RATIO2__39->GetYaxis()->SetTitleSize(0.11);
   RATIO2__39->GetYaxis()->SetTitleOffset(0.35);
   RATIO2__39->GetYaxis()->SetTitleFont(42);
   RATIO2__39->GetZaxis()->SetLabelFont(42);
   RATIO2__39->GetZaxis()->SetLabelSize(0.035);
   RATIO2__39->GetZaxis()->SetTitleSize(0.035);
   RATIO2__39->GetZaxis()->SetTitleFont(42);
   RATIO2__39->Draw("e2 same");
   Double_t xAxis79[7] = {0.5, 0.575, 0.65, 0.75, 0.85, 0.95, 1.2}; 
   
   TH1F *ratio2clone__40 = new TH1F("ratio2clone__40","",6, xAxis79);
   ratio2clone__40->SetBinContent(1,1);
   ratio2clone__40->SetBinContent(2,1);
   ratio2clone__40->SetBinContent(3,1);
   ratio2clone__40->SetBinContent(4,1);
   ratio2clone__40->SetBinContent(5,1);
   ratio2clone__40->SetBinContent(6,1);
   ratio2clone__40->SetBinError(1,0.04674276);
   ratio2clone__40->SetBinError(2,0.05769706);
   ratio2clone__40->SetBinError(3,0.06502625);
   ratio2clone__40->SetBinError(4,0.07196529);
   ratio2clone__40->SetBinError(5,0.08136329);
   ratio2clone__40->SetBinError(6,0.1229879);
   ratio2clone__40->SetMinimum(0);
   ratio2clone__40->SetMaximum(3.05);
   ratio2clone__40->SetEntries(6);
   ratio2clone__40->SetDirectory(0);
   ratio2clone__40->SetStats(0);

   ci = TColor::GetColor("#00ff00");
   ratio2clone__40->SetLineColor(ci);
   ratio2clone__40->SetLineWidth(2);
   ratio2clone__40->GetXaxis()->SetTitle("R^{2}");
   ratio2clone__40->GetXaxis()->SetLabelFont(42);
   ratio2clone__40->GetXaxis()->SetLabelSize(0.1);
   ratio2clone__40->GetXaxis()->SetTitleSize(0.11);
   ratio2clone__40->GetXaxis()->SetTitleOffset(0.88);
   ratio2clone__40->GetXaxis()->SetTitleFont(42);
   ratio2clone__40->GetYaxis()->SetTitle("Ratio");
   ratio2clone__40->GetYaxis()->SetLabelFont(42);
   ratio2clone__40->GetYaxis()->SetLabelSize(0.08);
   ratio2clone__40->GetYaxis()->SetTitleSize(0.11);
   ratio2clone__40->GetYaxis()->SetTitleOffset(0.35);
   ratio2clone__40->GetYaxis()->SetTitleFont(42);
   ratio2clone__40->GetZaxis()->SetLabelFont(42);
   ratio2clone__40->GetZaxis()->SetLabelSize(0.035);
   ratio2clone__40->GetZaxis()->SetTitleSize(0.035);
   ratio2clone__40->GetZaxis()->SetTitleFont(42);
   ratio2clone__40->Draw("hist same");
   Double_t xAxis80[7] = {0.5, 0.575, 0.65, 0.75, 0.85, 0.95, 1.2}; 
   
   TH1F *RATIO = new TH1F("RATIO","",6, xAxis80);
   RATIO->SetBinContent(1,0.8750296);
   RATIO->SetBinContent(2,0.9625678);
   RATIO->SetBinContent(3,0.9856938);
   RATIO->SetBinContent(4,0.8682671);
   RATIO->SetBinContent(5,0.9419265);
   RATIO->SetBinContent(6,1.115363);
   RATIO->SetBinError(1,0.03727751);
   RATIO->SetBinError(2,0.05094449);
   RATIO->SetBinError(3,0.05768337);
   RATIO->SetBinError(4,0.05840596);
   RATIO->SetBinError(5,0.07288846);
   RATIO->SetBinError(6,0.1162846);
   RATIO->SetMinimum(0);
   RATIO->SetMaximum(3.05);
   RATIO->SetEntries(6);
   RATIO->SetStats(0);

   ci = TColor::GetColor("#ccffcc");
   RATIO->SetFillColor(ci);
   RATIO->SetLineWidth(2);
   RATIO->SetMarkerStyle(20);
   RATIO->SetMarkerSize(0.3);
   RATIO->GetXaxis()->SetTitle("R^{2}");
   RATIO->GetXaxis()->SetRange(1,6);
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

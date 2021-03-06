{
//=========Macro generated from canvas: C/C	
//=========  (Mon Jun  2 18:41:40 2014) by ROOT version5.34/11
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
   pad1->Range(0.4125,12.3996,1.2875,845.3235);
   pad1->SetFillColor(0);
   pad1->SetBorderMode(0);
   pad1->SetBorderSize(2);
   pad1->SetBottomMargin(0);
   pad1->SetFrameBorderMode(0);
   pad1->SetFrameBorderMode(0);
   Double_t xAxis17[7] = {0.5, 0.575, 0.65, 0.75, 0.85, 0.95, 1.2}; 
   
   TH1F *Data_cat3_1D_2mu_Box = new TH1F("Data_cat3_1D_2mu_Box","",6, xAxis17);
   Data_cat3_1D_2mu_Box->SetBinContent(1,586.1778);
   Data_cat3_1D_2mu_Box->SetBinContent(2,323.8526);
   Data_cat3_1D_2mu_Box->SetBinContent(3,278.3339);
   Data_cat3_1D_2mu_Box->SetBinContent(4,235.6393);
   Data_cat3_1D_2mu_Box->SetBinContent(5,168.5868);
   Data_cat3_1D_2mu_Box->SetBinContent(6,78.70699);
   Data_cat3_1D_2mu_Box->SetBinError(1,401.6204);
   Data_cat3_1D_2mu_Box->SetBinError(2,408.1004);
   Data_cat3_1D_2mu_Box->SetBinError(3,68.23035);
   Data_cat3_1D_2mu_Box->SetBinError(4,63.68264);
   Data_cat3_1D_2mu_Box->SetBinError(5,491.5283);
   Data_cat3_1D_2mu_Box->SetBinError(6,16.5835);
   Data_cat3_1D_2mu_Box->SetMinimum(12.3996);
   Data_cat3_1D_2mu_Box->SetMaximum(762.0311);
   Data_cat3_1D_2mu_Box->SetEntries(1712.08);
   Data_cat3_1D_2mu_Box->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#ccffcc");
   Data_cat3_1D_2mu_Box->SetFillColor(ci);
   Data_cat3_1D_2mu_Box->SetMarkerSize(0.3);
   Data_cat3_1D_2mu_Box->GetXaxis()->SetTitle("RSQ");
   Data_cat3_1D_2mu_Box->GetXaxis()->SetRange(1,6);
   Data_cat3_1D_2mu_Box->GetXaxis()->SetLabelFont(42);
   Data_cat3_1D_2mu_Box->GetXaxis()->SetLabelSize(0.035);
   Data_cat3_1D_2mu_Box->GetXaxis()->SetTitleSize(0.035);
   Data_cat3_1D_2mu_Box->GetXaxis()->SetTitleFont(42);
   Data_cat3_1D_2mu_Box->GetYaxis()->SetLabelFont(42);
   Data_cat3_1D_2mu_Box->GetYaxis()->SetLabelSize(0.035);
   Data_cat3_1D_2mu_Box->GetYaxis()->SetTitleSize(0.035);
   Data_cat3_1D_2mu_Box->GetYaxis()->SetTitleFont(42);
   Data_cat3_1D_2mu_Box->GetZaxis()->SetLabelFont(42);
   Data_cat3_1D_2mu_Box->GetZaxis()->SetLabelSize(0.035);
   Data_cat3_1D_2mu_Box->GetZaxis()->SetTitleSize(0.035);
   Data_cat3_1D_2mu_Box->GetZaxis()->SetTitleFont(42);
   Data_cat3_1D_2mu_Box->Draw("hist p");
   Double_t xAxis18[7] = {0.5, 0.575, 0.65, 0.75, 0.85, 0.95, 1.2}; 
   
   TH1F *Data_cat3_1D_2mu_Box__9 = new TH1F("Data_cat3_1D_2mu_Box__9","",6, xAxis18);
   Data_cat3_1D_2mu_Box__9->SetBinContent(1,587.531);
   Data_cat3_1D_2mu_Box__9->SetBinContent(2,325.0297);
   Data_cat3_1D_2mu_Box__9->SetBinContent(3,279.3519);
   Data_cat3_1D_2mu_Box__9->SetBinContent(4,236.9206);
   Data_cat3_1D_2mu_Box__9->SetBinContent(5,169.3411);
   Data_cat3_1D_2mu_Box__9->SetBinContent(6,79.18713);
   Data_cat3_1D_2mu_Box__9->SetBinError(1,409.0514);
   Data_cat3_1D_2mu_Box__9->SetBinError(2,416.2393);
   Data_cat3_1D_2mu_Box__9->SetBinError(3,67.64435);
   Data_cat3_1D_2mu_Box__9->SetBinError(4,66.05926);
   Data_cat3_1D_2mu_Box__9->SetBinError(5,502.9316);
   Data_cat3_1D_2mu_Box__9->SetBinError(6,17.18912);
   Data_cat3_1D_2mu_Box__9->SetEntries(1724.106);
   Data_cat3_1D_2mu_Box__9->SetDirectory(0);
   Data_cat3_1D_2mu_Box__9->SetStats(0);

   ci = TColor::GetColor("#ccffcc");
   Data_cat3_1D_2mu_Box__9->SetFillColor(ci);

   ci = TColor::GetColor("#ccffcc");
   Data_cat3_1D_2mu_Box__9->SetLineColor(ci);
   Data_cat3_1D_2mu_Box__9->SetLineWidth(4);
   Data_cat3_1D_2mu_Box__9->GetXaxis()->SetTitle("RSQ");
   Data_cat3_1D_2mu_Box__9->GetXaxis()->SetRange(1,6);
   Data_cat3_1D_2mu_Box__9->GetXaxis()->SetLabelFont(42);
   Data_cat3_1D_2mu_Box__9->GetXaxis()->SetLabelSize(0.035);
   Data_cat3_1D_2mu_Box__9->GetXaxis()->SetTitleSize(0.035);
   Data_cat3_1D_2mu_Box__9->GetXaxis()->SetTitleFont(42);
   Data_cat3_1D_2mu_Box__9->GetYaxis()->SetLabelFont(42);
   Data_cat3_1D_2mu_Box__9->GetYaxis()->SetLabelSize(0.035);
   Data_cat3_1D_2mu_Box__9->GetYaxis()->SetTitleSize(0.035);
   Data_cat3_1D_2mu_Box__9->GetYaxis()->SetTitleFont(42);
   Data_cat3_1D_2mu_Box__9->GetZaxis()->SetLabelFont(42);
   Data_cat3_1D_2mu_Box__9->GetZaxis()->SetLabelSize(0.035);
   Data_cat3_1D_2mu_Box__9->GetZaxis()->SetTitleSize(0.035);
   Data_cat3_1D_2mu_Box__9->GetZaxis()->SetTitleFont(42);
   Data_cat3_1D_2mu_Box__9->Draw("E2same");
   Double_t xAxis19[7] = {0.5, 0.575, 0.65, 0.75, 0.85, 0.95, 1.2}; 
   
   TH1F *h2clone__10 = new TH1F("h2clone__10","",6, xAxis19);
   h2clone__10->SetBinContent(1,587.531);
   h2clone__10->SetBinContent(2,325.0297);
   h2clone__10->SetBinContent(3,279.3519);
   h2clone__10->SetBinContent(4,236.9206);
   h2clone__10->SetBinContent(5,169.3411);
   h2clone__10->SetBinContent(6,79.18713);
   h2clone__10->SetBinError(1,409.0514);
   h2clone__10->SetBinError(2,416.2393);
   h2clone__10->SetBinError(3,67.64435);
   h2clone__10->SetBinError(4,66.05926);
   h2clone__10->SetBinError(5,502.9316);
   h2clone__10->SetBinError(6,17.18912);
   h2clone__10->SetEntries(1724.106);
   h2clone__10->SetDirectory(0);
   h2clone__10->SetStats(0);

   ci = TColor::GetColor("#00ff00");
   h2clone__10->SetLineColor(ci);
   h2clone__10->SetLineWidth(4);
   h2clone__10->GetXaxis()->SetTitle("RSQ");
   h2clone__10->GetXaxis()->SetRange(1,6);
   h2clone__10->GetXaxis()->SetLabelFont(42);
   h2clone__10->GetXaxis()->SetLabelSize(0.035);
   h2clone__10->GetXaxis()->SetTitleSize(0.035);
   h2clone__10->GetXaxis()->SetTitleFont(42);
   h2clone__10->GetYaxis()->SetLabelFont(42);
   h2clone__10->GetYaxis()->SetLabelSize(0.035);
   h2clone__10->GetYaxis()->SetTitleSize(0.035);
   h2clone__10->GetYaxis()->SetTitleFont(42);
   h2clone__10->GetZaxis()->SetLabelFont(42);
   h2clone__10->GetZaxis()->SetLabelSize(0.035);
   h2clone__10->GetZaxis()->SetTitleSize(0.035);
   h2clone__10->GetZaxis()->SetTitleFont(42);
   h2clone__10->Draw("hist same");
   Double_t xAxis20[7] = {0.5, 0.575, 0.65, 0.75, 0.85, 0.95, 1.2}; 
   
   TH1F *h1clone = new TH1F("h1clone","",6, xAxis20);
   h1clone->SetBinContent(1,586.1778);
   h1clone->SetBinContent(2,323.8526);
   h1clone->SetBinContent(3,278.3339);
   h1clone->SetBinContent(4,235.6393);
   h1clone->SetBinContent(5,168.5868);
   h1clone->SetBinContent(6,78.70699);
   h1clone->SetBinError(1,401.6204);
   h1clone->SetBinError(2,408.1004);
   h1clone->SetBinError(3,68.23035);
   h1clone->SetBinError(4,63.68264);
   h1clone->SetBinError(5,491.5283);
   h1clone->SetBinError(6,16.5835);
   h1clone->SetEntries(1712.08);
   h1clone->SetStats(0);
   h1clone->SetMarkerSize(0.3);
   h1clone->GetXaxis()->SetTitle("RSQ");
   h1clone->GetXaxis()->SetRange(1,6);
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
   
   TLegend *leg = new TLegend(0.675,0.83,0.89,0.92,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.018);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Data_cat3_1D_2mu_Box","R^{2} Bkg Pred. ISR Up","lf");

   ci = TColor::GetColor("#ccffcc");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Data_cat3_1D_2mu_Box","R^{2} Bkg Pred. Nominal","lf");

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
   Double_t xAxis21[7] = {0.5, 0.575, 0.65, 0.75, 0.85, 0.95, 1.2}; 
   
   TH1F *RATIO = new TH1F("RATIO","",6, xAxis21);
   RATIO->SetBinContent(1,0.9976968);
   RATIO->SetBinContent(2,0.9963784);
   RATIO->SetBinContent(3,0.9963558);
   RATIO->SetBinContent(4,0.9945918);
   RATIO->SetBinContent(5,0.9955459);
   RATIO->SetBinContent(6,0.9939367);
   RATIO->SetBinError(1,0.6835731);
   RATIO->SetBinError(2,1.255579);
   RATIO->SetBinError(3,0.2442451);
   RATIO->SetBinError(4,0.2687931);
   RATIO->SetBinError(5,2.902594);
   RATIO->SetBinError(6,0.2094217);
   RATIO->SetMinimum(0.95);
   RATIO->SetMaximum(1.05);
   RATIO->SetEntries(6);
   RATIO->SetStats(0);

   ci = TColor::GetColor("#ccffcc");
   RATIO->SetFillColor(ci);
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
   Double_t xAxis22[7] = {0.5, 0.575, 0.65, 0.75, 0.85, 0.95, 1.2}; 
   
   TH1F *RATIO2__11 = new TH1F("RATIO2__11","",6, xAxis22);
   RATIO2__11->SetBinContent(1,1);
   RATIO2__11->SetBinContent(2,1);
   RATIO2__11->SetBinContent(3,1);
   RATIO2__11->SetBinContent(4,1);
   RATIO2__11->SetBinContent(5,1);
   RATIO2__11->SetBinContent(6,1);
   RATIO2__11->SetBinError(1,0.6962209);
   RATIO2__11->SetBinError(2,1.280619);
   RATIO2__11->SetBinError(3,0.2421474);
   RATIO2__11->SetBinError(4,0.2788244);
   RATIO2__11->SetBinError(5,2.969933);
   RATIO2__11->SetBinError(6,0.2170697);
   RATIO2__11->SetMinimum(0.95);
   RATIO2__11->SetMaximum(1.05);
   RATIO2__11->SetEntries(6);
   RATIO2__11->SetDirectory(0);
   RATIO2__11->SetStats(0);

   ci = TColor::GetColor("#ccffcc");
   RATIO2__11->SetFillColor(ci);

   ci = TColor::GetColor("#ccffcc");
   RATIO2__11->SetLineColor(ci);
   RATIO2__11->SetLineWidth(2);
   RATIO2__11->GetXaxis()->SetTitle("R^{2}");
   RATIO2__11->GetXaxis()->SetLabelFont(42);
   RATIO2__11->GetXaxis()->SetLabelSize(0.1);
   RATIO2__11->GetXaxis()->SetTitleSize(0.11);
   RATIO2__11->GetXaxis()->SetTitleOffset(0.88);
   RATIO2__11->GetXaxis()->SetTitleFont(42);
   RATIO2__11->GetYaxis()->SetTitle("Ratio");
   RATIO2__11->GetYaxis()->SetLabelFont(42);
   RATIO2__11->GetYaxis()->SetLabelSize(0.08);
   RATIO2__11->GetYaxis()->SetTitleSize(0.11);
   RATIO2__11->GetYaxis()->SetTitleOffset(0.35);
   RATIO2__11->GetYaxis()->SetTitleFont(42);
   RATIO2__11->GetZaxis()->SetLabelFont(42);
   RATIO2__11->GetZaxis()->SetLabelSize(0.035);
   RATIO2__11->GetZaxis()->SetTitleSize(0.035);
   RATIO2__11->GetZaxis()->SetTitleFont(42);
   RATIO2__11->Draw("e2 same");
   Double_t xAxis23[7] = {0.5, 0.575, 0.65, 0.75, 0.85, 0.95, 1.2}; 
   
   TH1F *ratio2clone__12 = new TH1F("ratio2clone__12","",6, xAxis23);
   ratio2clone__12->SetBinContent(1,1);
   ratio2clone__12->SetBinContent(2,1);
   ratio2clone__12->SetBinContent(3,1);
   ratio2clone__12->SetBinContent(4,1);
   ratio2clone__12->SetBinContent(5,1);
   ratio2clone__12->SetBinContent(6,1);
   ratio2clone__12->SetBinError(1,0.6962209);
   ratio2clone__12->SetBinError(2,1.280619);
   ratio2clone__12->SetBinError(3,0.2421474);
   ratio2clone__12->SetBinError(4,0.2788244);
   ratio2clone__12->SetBinError(5,2.969933);
   ratio2clone__12->SetBinError(6,0.2170697);
   ratio2clone__12->SetMinimum(0.95);
   ratio2clone__12->SetMaximum(1.05);
   ratio2clone__12->SetEntries(6);
   ratio2clone__12->SetDirectory(0);
   ratio2clone__12->SetStats(0);

   ci = TColor::GetColor("#00ff00");
   ratio2clone__12->SetLineColor(ci);
   ratio2clone__12->SetLineWidth(2);
   ratio2clone__12->GetXaxis()->SetTitle("R^{2}");
   ratio2clone__12->GetXaxis()->SetLabelFont(42);
   ratio2clone__12->GetXaxis()->SetLabelSize(0.1);
   ratio2clone__12->GetXaxis()->SetTitleSize(0.11);
   ratio2clone__12->GetXaxis()->SetTitleOffset(0.88);
   ratio2clone__12->GetXaxis()->SetTitleFont(42);
   ratio2clone__12->GetYaxis()->SetTitle("Ratio");
   ratio2clone__12->GetYaxis()->SetLabelFont(42);
   ratio2clone__12->GetYaxis()->SetLabelSize(0.08);
   ratio2clone__12->GetYaxis()->SetTitleSize(0.11);
   ratio2clone__12->GetYaxis()->SetTitleOffset(0.35);
   ratio2clone__12->GetYaxis()->SetTitleFont(42);
   ratio2clone__12->GetZaxis()->SetLabelFont(42);
   ratio2clone__12->GetZaxis()->SetLabelSize(0.035);
   ratio2clone__12->GetZaxis()->SetTitleSize(0.035);
   ratio2clone__12->GetZaxis()->SetTitleFont(42);
   ratio2clone__12->Draw("hist same");
   Double_t xAxis24[7] = {0.5, 0.575, 0.65, 0.75, 0.85, 0.95, 1.2}; 
   
   TH1F *RATIO = new TH1F("RATIO","",6, xAxis24);
   RATIO->SetBinContent(1,0.9976968);
   RATIO->SetBinContent(2,0.9963784);
   RATIO->SetBinContent(3,0.9963558);
   RATIO->SetBinContent(4,0.9945918);
   RATIO->SetBinContent(5,0.9955459);
   RATIO->SetBinContent(6,0.9939367);
   RATIO->SetBinError(1,0.6835731);
   RATIO->SetBinError(2,1.255579);
   RATIO->SetBinError(3,0.2442451);
   RATIO->SetBinError(4,0.2687931);
   RATIO->SetBinError(5,2.902594);
   RATIO->SetBinError(6,0.2094217);
   RATIO->SetMinimum(0.95);
   RATIO->SetMaximum(1.05);
   RATIO->SetEntries(6);
   RATIO->SetStats(0);

   ci = TColor::GetColor("#ccffcc");
   RATIO->SetFillColor(ci);
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

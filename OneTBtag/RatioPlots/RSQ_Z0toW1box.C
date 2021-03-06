{
//=========Macro generated from canvas: C/C	
//=========  (Fri Sep 12 00:31:01 2014) by ROOT version5.34/19
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
   pad1->Range(0.3125,-5.209089,2.1875,0.2405457);
   pad1->SetFillColor(0);
   pad1->SetBorderMode(0);
   pad1->SetBorderSize(2);
   pad1->SetLogy();
   pad1->SetBottomMargin(0);
   pad1->SetFrameBorderMode(0);
   pad1->SetFrameBorderMode(0);
   
   TH1F *R2_1D_0mu_Box__10 = new TH1F("R2_1D_0mu_Box__10","",20,0.5,2);
   R2_1D_0mu_Box__10->SetBinContent(1,0.2520777);
   R2_1D_0mu_Box__10->SetBinContent(2,0.191098);
   R2_1D_0mu_Box__10->SetBinContent(3,0.1492561);
   R2_1D_0mu_Box__10->SetBinContent(4,0.1079241);
   R2_1D_0mu_Box__10->SetBinContent(5,0.1094571);
   R2_1D_0mu_Box__10->SetBinContent(6,0.07728922);
   R2_1D_0mu_Box__10->SetBinContent(7,0.05485409);
   R2_1D_0mu_Box__10->SetBinContent(8,0.03298301);
   R2_1D_0mu_Box__10->SetBinContent(9,0.01706881);
   R2_1D_0mu_Box__10->SetBinContent(10,0.004721642);
   R2_1D_0mu_Box__10->SetBinContent(11,0.002052313);
   R2_1D_0mu_Box__10->SetBinContent(12,0.0004534569);
   R2_1D_0mu_Box__10->SetBinContent(13,0.0001861444);
   R2_1D_0mu_Box__10->SetBinContent(14,4.588267e-05);
   R2_1D_0mu_Box__10->SetBinContent(15,0.0004734996);
   R2_1D_0mu_Box__10->SetBinContent(18,5.901263e-05);
   R2_1D_0mu_Box__10->SetBinError(1,0.00976066);
   R2_1D_0mu_Box__10->SetBinError(2,0.008843165);
   R2_1D_0mu_Box__10->SetBinError(3,0.008019192);
   R2_1D_0mu_Box__10->SetBinError(4,0.006334644);
   R2_1D_0mu_Box__10->SetBinError(5,0.006519318);
   R2_1D_0mu_Box__10->SetBinError(6,0.005408597);
   R2_1D_0mu_Box__10->SetBinError(7,0.004405908);
   R2_1D_0mu_Box__10->SetBinError(8,0.003466059);
   R2_1D_0mu_Box__10->SetBinError(9,0.002448062);
   R2_1D_0mu_Box__10->SetBinError(10,0.001110328);
   R2_1D_0mu_Box__10->SetBinError(11,0.0008029165);
   R2_1D_0mu_Box__10->SetBinError(12,0.0002563122);
   R2_1D_0mu_Box__10->SetBinError(13,0.0001376729);
   R2_1D_0mu_Box__10->SetBinError(14,3.352488e-05);
   R2_1D_0mu_Box__10->SetBinError(15,0.0004509037);
   R2_1D_0mu_Box__10->SetBinError(18,5.901263e-05);
   R2_1D_0mu_Box__10->SetEntries(6836);
   R2_1D_0mu_Box__10->SetDirectory(0);
   R2_1D_0mu_Box__10->SetStats(0);
   R2_1D_0mu_Box__10->SetFillColor(2);
   R2_1D_0mu_Box__10->SetLineColor(2);
   R2_1D_0mu_Box__10->SetMarkerColor(2);
   R2_1D_0mu_Box__10->SetMarkerStyle(20);
   R2_1D_0mu_Box__10->SetMarkerSize(0.8);
   R2_1D_0mu_Box__10->GetXaxis()->SetTitle("RSQ");
   R2_1D_0mu_Box__10->GetXaxis()->SetRange(1,20);
   R2_1D_0mu_Box__10->GetXaxis()->SetLabelFont(42);
   R2_1D_0mu_Box__10->GetXaxis()->SetLabelSize(0.035);
   R2_1D_0mu_Box__10->GetXaxis()->SetTitleSize(0.035);
   R2_1D_0mu_Box__10->GetXaxis()->SetTitleFont(42);
   R2_1D_0mu_Box__10->GetYaxis()->SetTitle("a.u");
   R2_1D_0mu_Box__10->GetYaxis()->CenterTitle(true);
   R2_1D_0mu_Box__10->GetYaxis()->SetLabelFont(42);
   R2_1D_0mu_Box__10->GetYaxis()->SetLabelSize(0.035);
   R2_1D_0mu_Box__10->GetYaxis()->SetTitleSize(0.035);
   R2_1D_0mu_Box__10->GetYaxis()->SetTitleOffset(1.35);
   R2_1D_0mu_Box__10->GetYaxis()->SetTitleFont(42);
   R2_1D_0mu_Box__10->GetZaxis()->SetLabelFont(42);
   R2_1D_0mu_Box__10->GetZaxis()->SetLabelSize(0.035);
   R2_1D_0mu_Box__10->GetZaxis()->SetTitleSize(0.035);
   R2_1D_0mu_Box__10->GetZaxis()->SetTitleFont(42);
   R2_1D_0mu_Box__10->Draw("");
   
   TH1F *R2_1D_1mu_Box = new TH1F("R2_1D_1mu_Box","",20,0.5,2);
   R2_1D_1mu_Box->SetBinContent(1,0.2457578);
   R2_1D_1mu_Box->SetBinContent(2,0.196348);
   R2_1D_1mu_Box->SetBinContent(3,0.146247);
   R2_1D_1mu_Box->SetBinContent(4,0.1082622);
   R2_1D_1mu_Box->SetBinContent(5,0.09524113);
   R2_1D_1mu_Box->SetBinContent(6,0.08821023);
   R2_1D_1mu_Box->SetBinContent(7,0.06012509);
   R2_1D_1mu_Box->SetBinContent(8,0.02640124);
   R2_1D_1mu_Box->SetBinContent(9,0.01978475);
   R2_1D_1mu_Box->SetBinContent(10,0.007635195);
   R2_1D_1mu_Box->SetBinContent(11,0.004668571);
   R2_1D_1mu_Box->SetBinContent(12,0.0004195115);
   R2_1D_1mu_Box->SetBinContent(14,0.0008992867);
   R2_1D_1mu_Box->SetBinError(1,0.01342701);
   R2_1D_1mu_Box->SetBinError(2,0.01199487);
   R2_1D_1mu_Box->SetBinError(3,0.01024547);
   R2_1D_1mu_Box->SetBinError(4,0.008732151);
   R2_1D_1mu_Box->SetBinError(5,0.008194602);
   R2_1D_1mu_Box->SetBinError(6,0.008220065);
   R2_1D_1mu_Box->SetBinError(7,0.006863996);
   R2_1D_1mu_Box->SetBinError(8,0.00420551);
   R2_1D_1mu_Box->SetBinError(9,0.003890139);
   R2_1D_1mu_Box->SetBinError(10,0.002103273);
   R2_1D_1mu_Box->SetBinError(11,0.00160066);
   R2_1D_1mu_Box->SetBinError(12,0.0004195115);
   R2_1D_1mu_Box->SetBinError(14,0.0008992867);
   R2_1D_1mu_Box->SetEntries(1748);
   R2_1D_1mu_Box->SetStats(0);
   R2_1D_1mu_Box->SetFillColor(4);
   R2_1D_1mu_Box->SetLineColor(4);
   R2_1D_1mu_Box->SetMarkerColor(4);
   R2_1D_1mu_Box->SetMarkerStyle(20);
   R2_1D_1mu_Box->SetMarkerSize(0.8);
   R2_1D_1mu_Box->GetXaxis()->SetTitle("RSQ");
   R2_1D_1mu_Box->GetXaxis()->SetRange(1,20);
   R2_1D_1mu_Box->GetXaxis()->SetLabelFont(42);
   R2_1D_1mu_Box->GetXaxis()->SetLabelSize(0.035);
   R2_1D_1mu_Box->GetXaxis()->SetTitleSize(0.035);
   R2_1D_1mu_Box->GetXaxis()->SetTitleFont(42);
   R2_1D_1mu_Box->GetYaxis()->SetTitle("a.u");
   R2_1D_1mu_Box->GetYaxis()->CenterTitle(true);
   R2_1D_1mu_Box->GetYaxis()->SetLabelFont(42);
   R2_1D_1mu_Box->GetYaxis()->SetLabelSize(0.035);
   R2_1D_1mu_Box->GetYaxis()->SetTitleSize(0.035);
   R2_1D_1mu_Box->GetYaxis()->SetTitleOffset(1.35);
   R2_1D_1mu_Box->GetYaxis()->SetTitleFont(42);
   R2_1D_1mu_Box->GetZaxis()->SetLabelFont(42);
   R2_1D_1mu_Box->GetZaxis()->SetLabelSize(0.035);
   R2_1D_1mu_Box->GetZaxis()->SetTitleSize(0.035);
   R2_1D_1mu_Box->GetZaxis()->SetTitleFont(42);
   R2_1D_1mu_Box->Draw("same");
   pad1->Modified();
   C->cd();
   
   TLegend *leg = new TLegend(0.65,0.7,0.89,0.9,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.022);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("R2_1D_0mu_Box","R^{2} Z(#nu #bar{#nu}) + Jets 0#mu","lep");
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(2);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.8);
   entry->SetTextFont(42);
   entry=leg->AddEntry("R2_1D_1mu_Box","R^{2} W(l#nu) + jets 1#mu","lep");
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(4);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.8);
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
      tex = new TLatex(0.62,0.95,"#int L dt = 18.84 fb^{-1}");
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
   
   TH1F *RATIO = new TH1F("RATIO","",20,0.5,2);
   RATIO->SetBinContent(1,1.025716);
   RATIO->SetBinContent(2,0.973262);
   RATIO->SetBinContent(3,1.020575);
   RATIO->SetBinContent(4,0.996877);
   RATIO->SetBinContent(5,1.149262);
   RATIO->SetBinContent(6,0.8761934);
   RATIO->SetBinContent(7,0.9123328);
   RATIO->SetBinContent(8,1.249297);
   RATIO->SetBinContent(9,0.862726);
   RATIO->SetBinContent(10,0.6184049);
   RATIO->SetBinContent(11,0.439602);
   RATIO->SetBinContent(12,1.080917);
   RATIO->SetBinContent(14,0.05102118);
   RATIO->SetBinError(1,0.06868696);
   RATIO->SetBinError(2,0.07458896);
   RATIO->SetBinError(3,0.09010301);
   RATIO->SetBinError(4,0.09944202);
   RATIO->SetBinError(5,0.1202638);
   RATIO->SetBinError(6,0.1021089);
   RATIO->SetBinError(7,0.1273491);
   RATIO->SetBinError(8,0.2384067);
   RATIO->SetBinError(9,0.209965);
   RATIO->SetBinError(10,0.2239813);
   RATIO->SetBinError(11,0.2286814);
   RATIO->SetBinError(12,1.241642);
   RATIO->SetBinError(14,0.06318952);
   RATIO->SetMinimum(0);
   RATIO->SetMaximum(2.05);
   RATIO->SetEntries(69.67571);
   RATIO->SetStats(0);
   RATIO->SetFillColor(4);
   RATIO->SetLineColor(4);
   RATIO->SetMarkerColor(4);
   RATIO->SetMarkerStyle(20);
   RATIO->SetMarkerSize(0.7);
   RATIO->GetXaxis()->SetTitle("R^{2}");
   RATIO->GetXaxis()->SetRange(1,20);
   RATIO->GetXaxis()->CenterTitle(true);
   RATIO->GetXaxis()->SetLabelFont(42);
   RATIO->GetXaxis()->SetLabelSize(0.1);
   RATIO->GetXaxis()->SetTitleSize(0.11);
   RATIO->GetXaxis()->SetTitleOffset(0.8);
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
   RATIO->Draw("");
   pad2->Modified();
   C->cd();
   C->Modified();
   C->cd();
   C->SetSelected(C);
}

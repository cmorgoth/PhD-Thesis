{
//=========Macro generated from canvas: C/C	
//=========  (Thu Sep 11 20:44:12 2014) by ROOT version5.34/19
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
   pad1->Range(0.3125,-5.036402,2.1875,0.2614645);
   pad1->SetFillColor(0);
   pad1->SetBorderMode(0);
   pad1->SetBorderSize(2);
   pad1->SetLogy();
   pad1->SetBottomMargin(0);
   pad1->SetFrameBorderMode(0);
   pad1->SetFrameBorderMode(0);
   
   TH1F *R2_1D_0mu_Box__2 = new TH1F("R2_1D_0mu_Box__2","",20,0.5,2);
   R2_1D_0mu_Box__2->SetBinContent(1,0.2816851);
   R2_1D_0mu_Box__2->SetBinContent(2,0.1938605);
   R2_1D_0mu_Box__2->SetBinContent(3,0.1460622);
   R2_1D_0mu_Box__2->SetBinContent(4,0.1167501);
   R2_1D_0mu_Box__2->SetBinContent(5,0.1004588);
   R2_1D_0mu_Box__2->SetBinContent(6,0.07713806);
   R2_1D_0mu_Box__2->SetBinContent(7,0.04618683);
   R2_1D_0mu_Box__2->SetBinContent(8,0.02389171);
   R2_1D_0mu_Box__2->SetBinContent(9,0.008630973);
   R2_1D_0mu_Box__2->SetBinContent(10,0.003654818);
   R2_1D_0mu_Box__2->SetBinContent(11,0.001053183);
   R2_1D_0mu_Box__2->SetBinContent(12,0.0004542904);
   R2_1D_0mu_Box__2->SetBinContent(13,0.0001365187);
   R2_1D_0mu_Box__2->SetBinContent(14,1.859632e-05);
   R2_1D_0mu_Box__2->SetBinContent(18,1.839197e-05);
   R2_1D_0mu_Box__2->SetBinError(1,0.002845519);
   R2_1D_0mu_Box__2->SetBinError(2,0.002363356);
   R2_1D_0mu_Box__2->SetBinError(3,0.002038458);
   R2_1D_0mu_Box__2->SetBinError(4,0.001827792);
   R2_1D_0mu_Box__2->SetBinError(5,0.001699378);
   R2_1D_0mu_Box__2->SetBinError(6,0.001472535);
   R2_1D_0mu_Box__2->SetBinError(7,0.001127867);
   R2_1D_0mu_Box__2->SetBinError(8,0.0007897777);
   R2_1D_0mu_Box__2->SetBinError(9,0.0004593075);
   R2_1D_0mu_Box__2->SetBinError(10,0.0003005724);
   R2_1D_0mu_Box__2->SetBinError(11,0.0001425608);
   R2_1D_0mu_Box__2->SetBinError(12,9.634695e-05);
   R2_1D_0mu_Box__2->SetBinError(13,5.551593e-05);
   R2_1D_0mu_Box__2->SetBinError(14,1.859632e-05);
   R2_1D_0mu_Box__2->SetBinError(18,1.839197e-05);
   R2_1D_0mu_Box__2->SetEntries(44062);
   R2_1D_0mu_Box__2->SetDirectory(0);
   R2_1D_0mu_Box__2->SetStats(0);
   R2_1D_0mu_Box__2->SetFillColor(2);
   R2_1D_0mu_Box__2->SetLineColor(2);
   R2_1D_0mu_Box__2->SetMarkerColor(2);
   R2_1D_0mu_Box__2->SetMarkerStyle(20);
   R2_1D_0mu_Box__2->SetMarkerSize(0.8);
   R2_1D_0mu_Box__2->GetXaxis()->SetTitle("RSQ");
   R2_1D_0mu_Box__2->GetXaxis()->SetRange(1,20);
   R2_1D_0mu_Box__2->GetXaxis()->SetLabelFont(42);
   R2_1D_0mu_Box__2->GetXaxis()->SetLabelSize(0.035);
   R2_1D_0mu_Box__2->GetXaxis()->SetTitleSize(0.035);
   R2_1D_0mu_Box__2->GetXaxis()->SetTitleFont(42);
   R2_1D_0mu_Box__2->GetYaxis()->SetTitle("a.u");
   R2_1D_0mu_Box__2->GetYaxis()->CenterTitle(true);
   R2_1D_0mu_Box__2->GetYaxis()->SetLabelFont(42);
   R2_1D_0mu_Box__2->GetYaxis()->SetLabelSize(0.035);
   R2_1D_0mu_Box__2->GetYaxis()->SetTitleSize(0.035);
   R2_1D_0mu_Box__2->GetYaxis()->SetTitleOffset(1.35);
   R2_1D_0mu_Box__2->GetYaxis()->SetTitleFont(42);
   R2_1D_0mu_Box__2->GetZaxis()->SetLabelFont(42);
   R2_1D_0mu_Box__2->GetZaxis()->SetLabelSize(0.035);
   R2_1D_0mu_Box__2->GetZaxis()->SetTitleSize(0.035);
   R2_1D_0mu_Box__2->GetZaxis()->SetTitleFont(42);
   R2_1D_0mu_Box__2->Draw("");
   
   TH1F *R2_1D_1mu_Box = new TH1F("R2_1D_1mu_Box","",20,0.5,2);
   R2_1D_1mu_Box->SetBinContent(1,0.244582);
   R2_1D_1mu_Box->SetBinContent(2,0.1860708);
   R2_1D_1mu_Box->SetBinContent(3,0.1421982);
   R2_1D_1mu_Box->SetBinContent(4,0.1219652);
   R2_1D_1mu_Box->SetBinContent(5,0.103764);
   R2_1D_1mu_Box->SetBinContent(6,0.08778156);
   R2_1D_1mu_Box->SetBinContent(7,0.05989866);
   R2_1D_1mu_Box->SetBinContent(8,0.03373513);
   R2_1D_1mu_Box->SetBinContent(9,0.01232151);
   R2_1D_1mu_Box->SetBinContent(10,0.004801731);
   R2_1D_1mu_Box->SetBinContent(11,0.00177441);
   R2_1D_1mu_Box->SetBinContent(12,0.0006116097);
   R2_1D_1mu_Box->SetBinContent(13,0.0002040746);
   R2_1D_1mu_Box->SetBinContent(14,0.0001159728);
   R2_1D_1mu_Box->SetBinContent(15,6.449407e-05);
   R2_1D_1mu_Box->SetBinContent(16,7.3266e-06);
   R2_1D_1mu_Box->SetBinContent(17,1.305207e-05);
   R2_1D_1mu_Box->SetBinContent(18,1.195095e-05);
   R2_1D_1mu_Box->SetBinContent(19,3.886006e-05);
   R2_1D_1mu_Box->SetBinContent(20,3.950217e-05);
   R2_1D_1mu_Box->SetBinError(1,0.002530991);
   R2_1D_1mu_Box->SetBinError(2,0.002207744);
   R2_1D_1mu_Box->SetBinError(3,0.001918565);
   R2_1D_1mu_Box->SetBinError(4,0.001784281);
   R2_1D_1mu_Box->SetBinError(5,0.001645525);
   R2_1D_1mu_Box->SetBinError(6,0.001503923);
   R2_1D_1mu_Box->SetBinError(7,0.001220771);
   R2_1D_1mu_Box->SetBinError(8,0.0009153159);
   R2_1D_1mu_Box->SetBinError(9,0.0005277732);
   R2_1D_1mu_Box->SetBinError(10,0.0003230586);
   R2_1D_1mu_Box->SetBinError(11,0.0001935765);
   R2_1D_1mu_Box->SetBinError(12,0.0001142174);
   R2_1D_1mu_Box->SetBinError(13,5.264338e-05);
   R2_1D_1mu_Box->SetBinError(14,3.924255e-05);
   R2_1D_1mu_Box->SetBinError(15,3.229677e-05);
   R2_1D_1mu_Box->SetBinError(16,7.3266e-06);
   R2_1D_1mu_Box->SetBinError(17,1.305207e-05);
   R2_1D_1mu_Box->SetBinError(18,1.195094e-05);
   R2_1D_1mu_Box->SetBinError(19,2.866899e-05);
   R2_1D_1mu_Box->SetBinError(20,2.897956e-05);
   R2_1D_1mu_Box->SetEntries(48863);
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
   TLegendEntry *entry=leg->AddEntry("R2_1D_0mu_Box","R^{2} W(l#nu) + jets 0#mu","lep");
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
   RATIO->SetBinContent(1,1.1517);
   RATIO->SetBinContent(2,1.041865);
   RATIO->SetBinContent(3,1.027173);
   RATIO->SetBinContent(4,0.9572411);
   RATIO->SetBinContent(5,0.9681465);
   RATIO->SetBinContent(6,0.8787502);
   RATIO->SetBinContent(7,0.7710828);
   RATIO->SetBinContent(8,0.7082146);
   RATIO->SetBinContent(9,0.70048);
   RATIO->SetBinContent(10,0.7611461);
   RATIO->SetBinContent(11,0.5935401);
   RATIO->SetBinContent(12,0.7427783);
   RATIO->SetBinContent(13,0.6689646);
   RATIO->SetBinContent(14,0.1603508);
   RATIO->SetBinContent(18,1.538955);
   RATIO->SetBinError(1,0.01665518);
   RATIO->SetBinError(2,0.01772398);
   RATIO->SetBinError(3,0.01993912);
   RATIO->SetBinError(4,0.02051084);
   RATIO->SetBinError(5,0.02244856);
   RATIO->SetBinError(6,0.02254021);
   RATIO->SetBinError(7,0.02452588);
   RATIO->SetBinError(8,0.03028729);
   RATIO->SetBinError(9,0.04785191);
   RATIO->SetBinError(10,0.08087501);
   RATIO->SetBinError(11,0.1031876);
   RATIO->SetBinError(12,0.2098976);
   RATIO->SetBinError(13,0.3221548);
   RATIO->SetBinError(14,0.169282);
   RATIO->SetBinError(18,2.176411);
   RATIO->SetMinimum(0);
   RATIO->SetMaximum(2.05);
   RATIO->SetEntries(32.51957);
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

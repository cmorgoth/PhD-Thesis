{
//=========Macro generated from canvas: C/C	
//=========  (Fri Sep 12 00:31:00 2014) by ROOT version5.34/19
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
   pad1->Range(12.49999,-4.86085,1887.5,0.5317324);
   pad1->SetFillColor(0);
   pad1->SetBorderMode(0);
   pad1->SetBorderSize(2);
   pad1->SetLogy();
   pad1->SetBottomMargin(0);
   pad1->SetFrameBorderMode(0);
   pad1->SetFrameBorderMode(0);
   
   TH1F *MR_1D_0mu_Box__7 = new TH1F("MR_1D_0mu_Box__7","",20,200,1700);
   MR_1D_0mu_Box__7->SetBinContent(1,0.5028221);
   MR_1D_0mu_Box__7->SetBinContent(2,0.2796613);
   MR_1D_0mu_Box__7->SetBinContent(3,0.1191602);
   MR_1D_0mu_Box__7->SetBinContent(4,0.05024603);
   MR_1D_0mu_Box__7->SetBinContent(5,0.02473272);
   MR_1D_0mu_Box__7->SetBinContent(6,0.01088279);
   MR_1D_0mu_Box__7->SetBinContent(7,0.005803646);
   MR_1D_0mu_Box__7->SetBinContent(8,0.002611185);
   MR_1D_0mu_Box__7->SetBinContent(9,0.00179635);
   MR_1D_0mu_Box__7->SetBinContent(10,0.0006982862);
   MR_1D_0mu_Box__7->SetBinContent(11,0.000694072);
   MR_1D_0mu_Box__7->SetBinContent(12,0.0004293355);
   MR_1D_0mu_Box__7->SetBinContent(13,0.0001531205);
   MR_1D_0mu_Box__7->SetBinContent(14,0.0001025936);
   MR_1D_0mu_Box__7->SetBinContent(15,6.779544e-05);
   MR_1D_0mu_Box__7->SetBinContent(16,0.0001385362);
   MR_1D_0mu_Box__7->SetBinError(1,0.01588867);
   MR_1D_0mu_Box__7->SetBinError(2,0.01035381);
   MR_1D_0mu_Box__7->SetBinError(3,0.004826275);
   MR_1D_0mu_Box__7->SetBinError(4,0.0019309);
   MR_1D_0mu_Box__7->SetBinError(5,0.001158387);
   MR_1D_0mu_Box__7->SetBinError(6,0.0007628127);
   MR_1D_0mu_Box__7->SetBinError(7,0.0005417291);
   MR_1D_0mu_Box__7->SetBinError(8,0.0003779418);
   MR_1D_0mu_Box__7->SetBinError(9,0.0003171371);
   MR_1D_0mu_Box__7->SetBinError(10,0.0001844499);
   MR_1D_0mu_Box__7->SetBinError(11,0.0001862973);
   MR_1D_0mu_Box__7->SetBinError(12,0.0001559015);
   MR_1D_0mu_Box__7->SetBinError(13,9.438049e-05);
   MR_1D_0mu_Box__7->SetBinError(14,7.503988e-05);
   MR_1D_0mu_Box__7->SetBinError(15,6.779544e-05);
   MR_1D_0mu_Box__7->SetBinError(16,8.011248e-05);
   MR_1D_0mu_Box__7->SetEntries(6836);
   MR_1D_0mu_Box__7->SetDirectory(0);
   MR_1D_0mu_Box__7->SetStats(0);
   MR_1D_0mu_Box__7->SetFillColor(2);
   MR_1D_0mu_Box__7->SetLineColor(2);
   MR_1D_0mu_Box__7->SetMarkerColor(2);
   MR_1D_0mu_Box__7->SetMarkerStyle(20);
   MR_1D_0mu_Box__7->SetMarkerSize(0.8);
   MR_1D_0mu_Box__7->GetXaxis()->SetTitle("MR");
   MR_1D_0mu_Box__7->GetXaxis()->SetRange(1,20);
   MR_1D_0mu_Box__7->GetXaxis()->SetLabelFont(42);
   MR_1D_0mu_Box__7->GetXaxis()->SetLabelSize(0.035);
   MR_1D_0mu_Box__7->GetXaxis()->SetTitleSize(0.035);
   MR_1D_0mu_Box__7->GetXaxis()->SetTitleFont(42);
   MR_1D_0mu_Box__7->GetYaxis()->SetTitle("a.u");
   MR_1D_0mu_Box__7->GetYaxis()->CenterTitle(true);
   MR_1D_0mu_Box__7->GetYaxis()->SetLabelFont(42);
   MR_1D_0mu_Box__7->GetYaxis()->SetLabelSize(0.035);
   MR_1D_0mu_Box__7->GetYaxis()->SetTitleSize(0.035);
   MR_1D_0mu_Box__7->GetYaxis()->SetTitleOffset(1.35);
   MR_1D_0mu_Box__7->GetYaxis()->SetTitleFont(42);
   MR_1D_0mu_Box__7->GetZaxis()->SetLabelFont(42);
   MR_1D_0mu_Box__7->GetZaxis()->SetLabelSize(0.035);
   MR_1D_0mu_Box__7->GetZaxis()->SetTitleSize(0.035);
   MR_1D_0mu_Box__7->GetZaxis()->SetTitleFont(42);
   MR_1D_0mu_Box__7->Draw("");
   
   TH1F *MR_1D_2mu_Box = new TH1F("MR_1D_2mu_Box","",20,200,1700);
   MR_1D_2mu_Box->SetBinContent(1,0.4751475);
   MR_1D_2mu_Box->SetBinContent(2,0.2916017);
   MR_1D_2mu_Box->SetBinContent(3,0.1190975);
   MR_1D_2mu_Box->SetBinContent(4,0.05887957);
   MR_1D_2mu_Box->SetBinContent(5,0.02931612);
   MR_1D_2mu_Box->SetBinContent(6,0.01088771);
   MR_1D_2mu_Box->SetBinContent(7,0.00746982);
   MR_1D_2mu_Box->SetBinContent(8,0.005913297);
   MR_1D_2mu_Box->SetBinContent(9,0.0008704679);
   MR_1D_2mu_Box->SetBinContent(10,0.0008164456);
   MR_1D_2mu_Box->SetBinError(1,0.0404355);
   MR_1D_2mu_Box->SetBinError(2,0.02974269);
   MR_1D_2mu_Box->SetBinError(3,0.01454251);
   MR_1D_2mu_Box->SetBinError(4,0.008192001);
   MR_1D_2mu_Box->SetBinError(5,0.005845708);
   MR_1D_2mu_Box->SetBinError(6,0.003421043);
   MR_1D_2mu_Box->SetBinError(7,0.002614904);
   MR_1D_2mu_Box->SetBinError(8,0.002575246);
   MR_1D_2mu_Box->SetBinError(9,0.0008704679);
   MR_1D_2mu_Box->SetBinError(10,0.0008164456);
   MR_1D_2mu_Box->SetEntries(524);
   MR_1D_2mu_Box->SetStats(0);
   MR_1D_2mu_Box->SetFillColor(4);
   MR_1D_2mu_Box->SetLineColor(4);
   MR_1D_2mu_Box->SetMarkerColor(4);
   MR_1D_2mu_Box->SetMarkerStyle(20);
   MR_1D_2mu_Box->SetMarkerSize(0.8);
   MR_1D_2mu_Box->GetXaxis()->SetTitle("MR");
   MR_1D_2mu_Box->GetXaxis()->SetRange(1,20);
   MR_1D_2mu_Box->GetXaxis()->SetLabelFont(42);
   MR_1D_2mu_Box->GetXaxis()->SetLabelSize(0.035);
   MR_1D_2mu_Box->GetXaxis()->SetTitleSize(0.035);
   MR_1D_2mu_Box->GetXaxis()->SetTitleFont(42);
   MR_1D_2mu_Box->GetYaxis()->SetTitle("a.u");
   MR_1D_2mu_Box->GetYaxis()->CenterTitle(true);
   MR_1D_2mu_Box->GetYaxis()->SetLabelFont(42);
   MR_1D_2mu_Box->GetYaxis()->SetLabelSize(0.035);
   MR_1D_2mu_Box->GetYaxis()->SetTitleSize(0.035);
   MR_1D_2mu_Box->GetYaxis()->SetTitleOffset(1.35);
   MR_1D_2mu_Box->GetYaxis()->SetTitleFont(42);
   MR_1D_2mu_Box->GetZaxis()->SetLabelFont(42);
   MR_1D_2mu_Box->GetZaxis()->SetLabelSize(0.035);
   MR_1D_2mu_Box->GetZaxis()->SetTitleSize(0.035);
   MR_1D_2mu_Box->GetZaxis()->SetTitleFont(42);
   MR_1D_2mu_Box->Draw("same");
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
   TLegendEntry *entry=leg->AddEntry("MR_1D_0mu_Box","M_{R} Z(#nu #bar{#nu}) + jets 0 #mu","lep");
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(2);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.8);
   entry->SetTextFont(42);
   entry=leg->AddEntry("MR_1D_2mu_Box","M_{R} Z/#gamma^{*}(ll) + jets 2#mu","lep");
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
   
   TH1F *RATIO = new TH1F("RATIO","",20,200,1700);
   RATIO->SetBinContent(1,1.058244);
   RATIO->SetBinContent(2,0.9590524);
   RATIO->SetBinContent(3,1.000526);
   RATIO->SetBinContent(4,0.8533695);
   RATIO->SetBinContent(5,0.8436558);
   RATIO->SetBinContent(6,0.9995479);
   RATIO->SetBinContent(7,0.7769459);
   RATIO->SetBinContent(8,0.4415786);
   RATIO->SetBinContent(9,2.06366);
   RATIO->SetBinContent(10,0.8552759);
   RATIO->SetBinError(1,0.09606544);
   RATIO->SetBinError(2,0.1040658);
   RATIO->SetBinError(3,0.1287157);
   RATIO->SetBinError(4,0.1231763);
   RATIO->SetBinError(5,0.1728053);
   RATIO->SetBinError(6,0.321789);
   RATIO->SetBinError(7,0.2814825);
   RATIO->SetBinError(8,0.2026506);
   RATIO->SetBinError(9,2.095573);
   RATIO->SetBinError(10,0.8846105);
   RATIO->SetMinimum(0);
   RATIO->SetMaximum(2.05);
   RATIO->SetEntries(17.71322);
   RATIO->SetStats(0);
   RATIO->SetFillColor(4);
   RATIO->SetLineColor(4);
   RATIO->SetMarkerColor(4);
   RATIO->SetMarkerStyle(20);
   RATIO->SetMarkerSize(0.7);
   RATIO->GetXaxis()->SetTitle("M_{R}");
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

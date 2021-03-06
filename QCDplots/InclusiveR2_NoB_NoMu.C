{
//=========Macro generated from canvas: c1/c1
//=========  (Mon Jul 21 22:44:41 2014) by ROOT version5.34/11
   TCanvas *c1 = new TCanvas("c1", "c1",2200,157,700,530);
   c1->Range(-0.03750001,-2.523007,1.3375,4.690404);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetLogy();
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   TH1F *r2 = new TH1F("r2","",50,0.1,1.2);
   r2->SetBinContent(5,2799.138);
   r2->SetBinContent(6,4914.894);
   r2->SetBinContent(7,3763.282);
   r2->SetBinContent(8,2496.338);
   r2->SetBinContent(9,2027.991);
   r2->SetBinContent(10,1272.989);
   r2->SetBinContent(11,1033.297);
   r2->SetBinContent(12,844.4211);
   r2->SetBinContent(13,505.8716);
   r2->SetBinContent(14,344.0404);
   r2->SetBinContent(15,362.3834);
   r2->SetBinContent(16,263.7821);
   r2->SetBinContent(17,195.8056);
   r2->SetBinContent(18,88.35867);
   r2->SetBinContent(19,85.77168);
   r2->SetBinContent(20,108.4214);
   r2->SetBinContent(21,63.45153);
   r2->SetBinContent(22,57.88121);
   r2->SetBinContent(23,21.9981);
   r2->SetBinContent(24,19.78657);
   r2->SetBinContent(25,22.618);
   r2->SetBinContent(26,21.21635);
   r2->SetBinContent(27,19.86123);
   r2->SetBinContent(28,6.815794);
   r2->SetBinContent(29,1.842988);
   r2->SetBinContent(30,1.915202);
   r2->SetBinContent(31,1.437461);
   r2->SetBinContent(32,0.1618101);
   r2->SetBinContent(33,5.934838);
   r2->SetBinContent(34,0.03157652);
   r2->SetBinContent(35,6.495383);
   r2->SetBinContent(36,5.917763);
   r2->SetBinContent(37,7.555096);
   r2->SetBinContent(38,1.234249);
   r2->SetBinContent(39,6.099223);
   r2->SetBinContent(40,18.46563);
   r2->SetBinContent(41,5.941763);
   r2->SetBinContent(42,0.1545598);
   r2->SetBinContent(43,0.137484);
   r2->SetBinContent(44,0.5434696);
   r2->SetBinContent(45,1.630409);
   r2->SetBinContent(47,1.086939);
   r2->SetBinContent(48,5.794454);
   r2->SetBinContent(49,0.690779);
   r2->SetBinContent(50,0.2677177);
   r2->SetEntries(14491);
   r2->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#ff9999");
   r2->SetFillColor(ci);
   r2->SetFillStyle(3008);

   ci = TColor::GetColor("#ff9999");
   r2->SetLineColor(ci);
   r2->GetXaxis()->SetTitle("R^{2}");
   r2->GetXaxis()->CenterTitle(true);
   r2->GetXaxis()->SetLabelFont(42);
   r2->GetXaxis()->SetLabelSize(0.035);
   r2->GetXaxis()->SetTitleSize(0.05);
   r2->GetXaxis()->SetTitleOffset(0.81);
   r2->GetXaxis()->SetTitleFont(42);
   r2->GetYaxis()->SetTitle("Events/0.022");
   r2->GetYaxis()->CenterTitle(true);
   r2->GetYaxis()->SetLabelFont(42);
   r2->GetYaxis()->SetLabelSize(0.035);
   r2->GetYaxis()->SetTitleSize(0.05);
   r2->GetYaxis()->SetTitleOffset(0.89);
   r2->GetYaxis()->SetTitleFont(42);
   r2->GetZaxis()->SetLabelFont(42);
   r2->GetZaxis()->SetLabelSize(0.035);
   r2->GetZaxis()->SetTitleSize(0.035);
   r2->GetZaxis()->SetTitleFont(42);
   r2->Draw("");
   TLine *line = new TLine(0.5,0.016,0.4998563,542.2817);
   line->SetLineWidth(3);
   line->Draw();
   TLatex *   tex = new TLatex(0.5156609,343.2025,"R^{2}");
   tex->SetLineWidth(2);
   tex->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
   c1->ToggleToolBar();
}

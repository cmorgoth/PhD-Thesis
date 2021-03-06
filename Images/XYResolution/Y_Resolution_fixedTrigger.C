void Y_Resolution()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Sep 10 11:36:29 2015) by ROOT version6.03/03
   TCanvas *c = new TCanvas("c", "c",2119,55,800,700);
   c->SetHighLightColor(2);
   c->Range(-6.445783,-173.1333,5.60241,1269.644);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetLeftMargin(0.12);
   c->SetRightMargin(0.05);
   c->SetTopMargin(0.07);
   c->SetBottomMargin(0.12);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   TH1F *histo__1 = new TH1F("histo__1","",40,-5,5);
   histo__1->SetBinContent(0,102);
   histo__1->SetBinContent(1,11);
   histo__1->SetBinContent(2,18);
   histo__1->SetBinContent(3,10);
   histo__1->SetBinContent(4,14);
   histo__1->SetBinContent(5,25);
   histo__1->SetBinContent(6,17);
   histo__1->SetBinContent(7,40);
   histo__1->SetBinContent(8,35);
   histo__1->SetBinContent(9,58);
   histo__1->SetBinContent(10,68);
   histo__1->SetBinContent(11,110);
   histo__1->SetBinContent(12,188);
   histo__1->SetBinContent(13,234);
   histo__1->SetBinContent(14,334);
   histo__1->SetBinContent(15,525);
   histo__1->SetBinContent(16,748);
   histo__1->SetBinContent(17,887);
   histo__1->SetBinContent(18,945);
   histo__1->SetBinContent(19,1051);
   histo__1->SetBinContent(20,1113);
   histo__1->SetBinContent(21,1062);
   histo__1->SetBinContent(22,979);
   histo__1->SetBinContent(23,820);
   histo__1->SetBinContent(24,744);
   histo__1->SetBinContent(25,583);
   histo__1->SetBinContent(26,437);
   histo__1->SetBinContent(27,342);
   histo__1->SetBinContent(28,238);
   histo__1->SetBinContent(29,177);
   histo__1->SetBinContent(30,100);
   histo__1->SetBinContent(31,93);
   histo__1->SetBinContent(32,62);
   histo__1->SetBinContent(33,34);
   histo__1->SetBinContent(34,35);
   histo__1->SetBinContent(35,48);
   histo__1->SetBinContent(36,26);
   histo__1->SetBinContent(37,30);
   histo__1->SetBinContent(38,24);
   histo__1->SetBinContent(39,24);
   histo__1->SetBinContent(40,17);
   histo__1->SetBinContent(41,175);
   histo__1->SetEntries(12583);
   histo__1->SetStats(0);
   
   TF1 *f1 = new TF1("f","[0]*(TMath::Erf((2*(x-[1])+[2])/([3]*TMath::Sqrt(8))) + TMath::Erf((2*([1]-x)+[2])/([3]*TMath::Sqrt(8))))",-2.5,2.5);
   f1->SetFillColor(19);
   f1->SetFillStyle(0);
   f1->SetLineColor(2);
   f1->SetLineWidth(2);
   f1->SetChisquare(48.23608);
   f1->SetNDF(17);
   f1->GetXaxis()->SetLabelFont(42);
   f1->GetXaxis()->SetLabelSize(0.035);
   f1->GetXaxis()->SetTitleSize(0.035);
   f1->GetXaxis()->SetTitleFont(42);
   f1->GetYaxis()->SetLabelFont(42);
   f1->GetYaxis()->SetLabelSize(0.035);
   f1->GetYaxis()->SetTitleSize(0.035);
   f1->GetYaxis()->SetTitleFont(42);
   f1->SetParameter(0,737.1239);
   f1->SetParError(0,6.911816);
   f1->SetParLimits(0,0,0);
   f1->SetParameter(1,-0.05355615);
   f1->SetParError(1,0.01083394);
   f1->SetParLimits(1,0,0);
   f1->SetParameter(2,2);
   f1->SetParError(2,0);
   f1->SetParLimits(2,2,2);
   f1->SetParameter(3,0.913761);
   f1->SetParError(3,0.01159804);
   f1->SetParLimits(3,0,0);
   histo__1->GetListOfFunctions()->Add(f1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   histo__1->SetLineColor(ci);
   histo__1->SetLineWidth(2);
   histo__1->GetXaxis()->SetTitle("Y [mm]");
   histo__1->GetXaxis()->SetLabelFont(42);
   histo__1->GetXaxis()->SetLabelSize(0.035);
   histo__1->GetXaxis()->SetTitleSize(0.06);
   histo__1->GetXaxis()->SetTitleOffset(0.8);
   histo__1->GetXaxis()->SetTitleFont(42);
   histo__1->GetYaxis()->SetTitle("entries / 0.25 mm");
   histo__1->GetYaxis()->SetLabelFont(42);
   histo__1->GetYaxis()->SetLabelSize(0.035);
   histo__1->GetYaxis()->SetTitleSize(0.06);
   histo__1->GetYaxis()->SetTitleOffset(0.95);
   histo__1->GetYaxis()->SetTitleFont(42);
   histo__1->GetZaxis()->SetLabelFont(42);
   histo__1->GetZaxis()->SetLabelSize(0.035);
   histo__1->GetZaxis()->SetTitleSize(0.035);
   histo__1->GetZaxis()->SetTitleFont(42);
   histo__1->Draw("");
   TLatex *   tex = new TLatex(0.93,0.88,"#sigma = 0.91 #pm 0.01 [mm]");
tex->SetNDC();
   tex->SetTextAlign(31);
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}

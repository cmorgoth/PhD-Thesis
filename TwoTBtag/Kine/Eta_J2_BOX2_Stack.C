{
//=========Macro generated from canvas: C/C      
//=========  (Fri Sep 12 02:22:53 2014) by ROOT version5.34/19
   TCanvas *C = new TCanvas("C", "C      ",0,0,400,500);
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
   pad1->Range(-3.75,-0.524978,3.75,5.599137);
   pad1->SetFillColor(0);
   pad1->SetBorderMode(0);
   pad1->SetBorderSize(2);
   pad1->SetLogy();
   pad1->SetBottomMargin(0);
   pad1->SetFrameBorderMode(0);
   pad1->SetFrameBorderMode(0);
   
   THStack *stack1 = new THStack();
   stack1->SetName("stack1");
   stack1->SetTitle("");
   stack1->SetMinimum(1);
   stack1->SetMaximum(50000);
   
   TH1F *stack1_stack_32 = new TH1F("stack1_stack_32","",20,-3,3);
   stack1_stack_32->SetMinimum(0.2985534);
   stack1_stack_32->SetMaximum(96989.7);
   stack1_stack_32->SetDirectory(0);
   stack1_stack_32->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   stack1_stack_32->SetLineColor(ci);
   stack1_stack_32->GetXaxis()->SetLabelFont(42);
   stack1_stack_32->GetXaxis()->SetLabelSize(0.035);
   stack1_stack_32->GetXaxis()->SetTitleSize(0.035);
   stack1_stack_32->GetXaxis()->SetTitleFont(42);
   stack1_stack_32->GetYaxis()->SetTitle("Events");
   stack1_stack_32->GetYaxis()->SetLabelFont(42);
   stack1_stack_32->GetYaxis()->SetLabelSize(0.035);
   stack1_stack_32->GetYaxis()->SetTitleSize(0.035);
   stack1_stack_32->GetYaxis()->SetTitleOffset(1.25);
   stack1_stack_32->GetYaxis()->SetTitleFont(42);
   stack1_stack_32->GetZaxis()->SetLabelFont(42);
   stack1_stack_32->GetZaxis()->SetLabelSize(0.035);
   stack1_stack_32->GetZaxis()->SetTitleSize(0.035);
   stack1_stack_32->GetZaxis()->SetTitleFont(42);
   stack1->SetHistogram(stack1_stack_32);
   
   
   TH1F *ETA_1D_J2_5mu_BoxMC = new TH1F("ETA_1D_J2_5mu_BoxMC","",20,-3,3);
   ETA_1D_J2_5mu_BoxMC->SetBinContent(6,0.08008157);
   ETA_1D_J2_5mu_BoxMC->SetBinContent(7,0.09728818);
   ETA_1D_J2_5mu_BoxMC->SetBinContent(8,0.08879009);
   ETA_1D_J2_5mu_BoxMC->SetBinContent(9,0.1288416);
   ETA_1D_J2_5mu_BoxMC->SetBinContent(10,0.1908843);
   ETA_1D_J2_5mu_BoxMC->SetBinContent(11,0.1368983);
   ETA_1D_J2_5mu_BoxMC->SetBinContent(12,0.2414911);
   ETA_1D_J2_5mu_BoxMC->SetBinContent(13,0.1444945);
   ETA_1D_J2_5mu_BoxMC->SetBinContent(14,0.08924811);
   ETA_1D_J2_5mu_BoxMC->SetBinContent(15,0.0471341);
   ETA_1D_J2_5mu_BoxMC->SetBinContent(16,0.1527672);
   ETA_1D_J2_5mu_BoxMC->SetBinContent(17,0.03259068);
   ETA_1D_J2_5mu_BoxMC->SetEntries(42);
   ETA_1D_J2_5mu_BoxMC->SetStats(0);

   ci = TColor::GetColor("#3300cc");
   ETA_1D_J2_5mu_BoxMC->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   ETA_1D_J2_5mu_BoxMC->SetLineColor(ci);
   ETA_1D_J2_5mu_BoxMC->GetXaxis()->SetLabelFont(42);
   ETA_1D_J2_5mu_BoxMC->GetXaxis()->SetLabelSize(0.035);
   ETA_1D_J2_5mu_BoxMC->GetXaxis()->SetTitleSize(0.035);
   ETA_1D_J2_5mu_BoxMC->GetXaxis()->SetTitleFont(42);
   ETA_1D_J2_5mu_BoxMC->GetYaxis()->SetLabelFont(42);
   ETA_1D_J2_5mu_BoxMC->GetYaxis()->SetLabelSize(0.035);
   ETA_1D_J2_5mu_BoxMC->GetYaxis()->SetTitleSize(0.035);
   ETA_1D_J2_5mu_BoxMC->GetYaxis()->SetTitleFont(42);
   ETA_1D_J2_5mu_BoxMC->GetZaxis()->SetLabelFont(42);
   ETA_1D_J2_5mu_BoxMC->GetZaxis()->SetLabelSize(0.035);
   ETA_1D_J2_5mu_BoxMC->GetZaxis()->SetTitleSize(0.035);
   ETA_1D_J2_5mu_BoxMC->GetZaxis()->SetTitleFont(42);
   stack1->Add(ETA_1D_J2_5mu_BoxMC,"");
   
   TH1F *ETA_1D_J2_5mu_BoxMC = new TH1F("ETA_1D_J2_5mu_BoxMC","",20,-3,3);
   ETA_1D_J2_5mu_BoxMC->SetBinContent(3,0.03881807);
   ETA_1D_J2_5mu_BoxMC->SetBinContent(5,0.0586713);
   ETA_1D_J2_5mu_BoxMC->SetBinContent(7,0.04457469);
   ETA_1D_J2_5mu_BoxMC->SetBinContent(8,0.13719);
   ETA_1D_J2_5mu_BoxMC->SetBinContent(9,0.04496268);
   ETA_1D_J2_5mu_BoxMC->SetBinContent(10,0.08768027);
   ETA_1D_J2_5mu_BoxMC->SetBinContent(11,0.08894741);
   ETA_1D_J2_5mu_BoxMC->SetBinContent(12,0.03511649);
   ETA_1D_J2_5mu_BoxMC->SetBinContent(13,0.03834037);
   ETA_1D_J2_5mu_BoxMC->SetBinContent(14,0.0122927);
   ETA_1D_J2_5mu_BoxMC->SetBinContent(16,0.02552859);
   ETA_1D_J2_5mu_BoxMC->SetEntries(18);
   ETA_1D_J2_5mu_BoxMC->SetStats(0);

   ci = TColor::GetColor("#ff33cc");
   ETA_1D_J2_5mu_BoxMC->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   ETA_1D_J2_5mu_BoxMC->SetLineColor(ci);
   ETA_1D_J2_5mu_BoxMC->GetXaxis()->SetLabelFont(42);
   ETA_1D_J2_5mu_BoxMC->GetXaxis()->SetLabelSize(0.035);
   ETA_1D_J2_5mu_BoxMC->GetXaxis()->SetTitleSize(0.035);
   ETA_1D_J2_5mu_BoxMC->GetXaxis()->SetTitleFont(42);
   ETA_1D_J2_5mu_BoxMC->GetYaxis()->SetLabelFont(42);
   ETA_1D_J2_5mu_BoxMC->GetYaxis()->SetLabelSize(0.035);
   ETA_1D_J2_5mu_BoxMC->GetYaxis()->SetTitleSize(0.035);
   ETA_1D_J2_5mu_BoxMC->GetYaxis()->SetTitleFont(42);
   ETA_1D_J2_5mu_BoxMC->GetZaxis()->SetLabelFont(42);
   ETA_1D_J2_5mu_BoxMC->GetZaxis()->SetLabelSize(0.035);
   ETA_1D_J2_5mu_BoxMC->GetZaxis()->SetTitleSize(0.035);
   ETA_1D_J2_5mu_BoxMC->GetZaxis()->SetTitleFont(42);
   stack1->Add(ETA_1D_J2_5mu_BoxMC,"");
   
   TH1F *ETA_1D_J2_5mu_BoxMC = new TH1F("ETA_1D_J2_5mu_BoxMC","",20,-3,3);
   ETA_1D_J2_5mu_BoxMC->SetStats(0);

   ci = TColor::GetColor("#ffff33");
   ETA_1D_J2_5mu_BoxMC->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   ETA_1D_J2_5mu_BoxMC->SetLineColor(ci);
   ETA_1D_J2_5mu_BoxMC->GetXaxis()->SetLabelFont(42);
   ETA_1D_J2_5mu_BoxMC->GetXaxis()->SetLabelSize(0.035);
   ETA_1D_J2_5mu_BoxMC->GetXaxis()->SetTitleSize(0.035);
   ETA_1D_J2_5mu_BoxMC->GetXaxis()->SetTitleFont(42);
   ETA_1D_J2_5mu_BoxMC->GetYaxis()->SetLabelFont(42);
   ETA_1D_J2_5mu_BoxMC->GetYaxis()->SetLabelSize(0.035);
   ETA_1D_J2_5mu_BoxMC->GetYaxis()->SetTitleSize(0.035);
   ETA_1D_J2_5mu_BoxMC->GetYaxis()->SetTitleFont(42);
   ETA_1D_J2_5mu_BoxMC->GetZaxis()->SetLabelFont(42);
   ETA_1D_J2_5mu_BoxMC->GetZaxis()->SetLabelSize(0.035);
   ETA_1D_J2_5mu_BoxMC->GetZaxis()->SetTitleSize(0.035);
   ETA_1D_J2_5mu_BoxMC->GetZaxis()->SetTitleFont(42);
   stack1->Add(ETA_1D_J2_5mu_BoxMC,"");
   
   TH1F *ETA_1D_J2_5mu_BoxMC = new TH1F("ETA_1D_J2_5mu_BoxMC","",20,-3,3);
   ETA_1D_J2_5mu_BoxMC->SetStats(0);

   ci = TColor::GetColor("#669900");
   ETA_1D_J2_5mu_BoxMC->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   ETA_1D_J2_5mu_BoxMC->SetLineColor(ci);
   ETA_1D_J2_5mu_BoxMC->GetXaxis()->SetLabelFont(42);
   ETA_1D_J2_5mu_BoxMC->GetXaxis()->SetLabelSize(0.035);
   ETA_1D_J2_5mu_BoxMC->GetXaxis()->SetTitleSize(0.035);
   ETA_1D_J2_5mu_BoxMC->GetXaxis()->SetTitleFont(42);
   ETA_1D_J2_5mu_BoxMC->GetYaxis()->SetLabelFont(42);
   ETA_1D_J2_5mu_BoxMC->GetYaxis()->SetLabelSize(0.035);
   ETA_1D_J2_5mu_BoxMC->GetYaxis()->SetTitleSize(0.035);
   ETA_1D_J2_5mu_BoxMC->GetYaxis()->SetTitleFont(42);
   ETA_1D_J2_5mu_BoxMC->GetZaxis()->SetLabelFont(42);
   ETA_1D_J2_5mu_BoxMC->GetZaxis()->SetLabelSize(0.035);
   ETA_1D_J2_5mu_BoxMC->GetZaxis()->SetTitleSize(0.035);
   ETA_1D_J2_5mu_BoxMC->GetZaxis()->SetTitleFont(42);
   stack1->Add(ETA_1D_J2_5mu_BoxMC,"");
   stack1->Draw("");
   
   TH1F *ETA_1D_J2_Data_2mu_Box = new TH1F("ETA_1D_J2_Data_2mu_Box","",20,-3,3);
   ETA_1D_J2_Data_2mu_Box->SetBinContent(6,1);
   ETA_1D_J2_Data_2mu_Box->SetBinContent(8,1);
   ETA_1D_J2_Data_2mu_Box->SetBinContent(10,1);
   ETA_1D_J2_Data_2mu_Box->SetBinContent(11,1);
   ETA_1D_J2_Data_2mu_Box->SetBinContent(16,1);
   ETA_1D_J2_Data_2mu_Box->SetBinError(6,1);
   ETA_1D_J2_Data_2mu_Box->SetBinError(8,1);
   ETA_1D_J2_Data_2mu_Box->SetBinError(10,1);
   ETA_1D_J2_Data_2mu_Box->SetBinError(11,1);
   ETA_1D_J2_Data_2mu_Box->SetBinError(16,1);
   ETA_1D_J2_Data_2mu_Box->SetEntries(5);
   ETA_1D_J2_Data_2mu_Box->SetStats(0);
   ETA_1D_J2_Data_2mu_Box->SetMarkerStyle(20);
   ETA_1D_J2_Data_2mu_Box->SetMarkerSize(0.7);
   ETA_1D_J2_Data_2mu_Box->GetXaxis()->SetLabelFont(42);
   ETA_1D_J2_Data_2mu_Box->GetXaxis()->SetLabelSize(0.035);
   ETA_1D_J2_Data_2mu_Box->GetXaxis()->SetTitleSize(0.035);
   ETA_1D_J2_Data_2mu_Box->GetXaxis()->SetTitleFont(42);
   ETA_1D_J2_Data_2mu_Box->GetYaxis()->SetLabelFont(42);
   ETA_1D_J2_Data_2mu_Box->GetYaxis()->SetLabelSize(0.035);
   ETA_1D_J2_Data_2mu_Box->GetYaxis()->SetTitleSize(0.035);
   ETA_1D_J2_Data_2mu_Box->GetYaxis()->SetTitleFont(42);
   ETA_1D_J2_Data_2mu_Box->GetZaxis()->SetLabelFont(42);
   ETA_1D_J2_Data_2mu_Box->GetZaxis()->SetLabelSize(0.035);
   ETA_1D_J2_Data_2mu_Box->GetZaxis()->SetTitleSize(0.035);
   ETA_1D_J2_Data_2mu_Box->GetZaxis()->SetTitleFont(42);
   ETA_1D_J2_Data_2mu_Box->Draw("same");
   pad1->Modified();
   C->cd();
   
   TLegend *leg = new TLegend(0.7,0.7,0.9,0.92,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.02);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("ETA_1D_J2_5mu_BoxMC","W + jets","f");

   ci = TColor::GetColor("#ffff33");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("ETA_1D_J2_5mu_BoxMC","Z(#nu#bar{#nu}) + jets","f");

   ci = TColor::GetColor("#669900");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("ETA_1D_J2_5mu_BoxMC","t #bar{t} + jets","f");

   ci = TColor::GetColor("#ff33cc");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("ETA_1D_J2_5mu_BoxMC","Z/#gamma^{*}(ll) + jets","f");

   ci = TColor::GetColor("#3300cc");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("ETA_1D_J2_Data_2mu_Box","Data","lep");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.7);
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
   
   TH1F *RATIO = new TH1F("RATIO","",20,-3,3);
   RATIO->SetBinContent(6,12.48727);
   RATIO->SetBinContent(8,4.425168);
   RATIO->SetBinContent(10,3.589832);
   RATIO->SetBinContent(11,4.427802);
   RATIO->SetBinContent(16,5.608656);
   RATIO->SetBinError(6,15.1607);
   RATIO->SetBinError(8,5.188724);
   RATIO->SetBinError(10,3.953058);
   RATIO->SetBinError(11,4.751697);
   RATIO->SetBinError(16,6.657064);
   RATIO->SetMinimum(0);
   RATIO->SetMaximum(3.05);
   RATIO->SetEntries(2.74871);
   RATIO->SetStats(0);
   RATIO->SetFillColor(4);
   RATIO->SetLineColor(4);
   RATIO->SetMarkerColor(4);
   RATIO->SetMarkerStyle(20);
   RATIO->SetMarkerSize(0.7);
   RATIO->GetXaxis()->SetTitle("#eta");
   RATIO->GetXaxis()->SetLabelFont(42);
   RATIO->GetXaxis()->SetLabelSize(0.1);
   RATIO->GetXaxis()->SetTitleSize(0.11);
   RATIO->GetXaxis()->SetTitleOffset(0.88);
   RATIO->GetXaxis()->SetTitleFont(42);
   RATIO->GetYaxis()->SetTitle("Data/MC");
   RATIO->GetYaxis()->SetLabelFont(42);
   RATIO->GetYaxis()->SetLabelSize(0.1);
   RATIO->GetYaxis()->SetTitleSize(0.11);
   RATIO->GetYaxis()->SetTitleOffset(0.35);
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

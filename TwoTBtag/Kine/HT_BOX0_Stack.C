{
//=========Macro generated from canvas: C/C      
//=========  (Fri Sep 12 02:22:54 2014) by ROOT version5.34/19
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
   pad1->Range(-175,-0.524978,1575,5.599137);
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
   
   TH1F *stack1_stack_44 = new TH1F("stack1_stack_44","",20,0,1400);
   stack1_stack_44->SetMinimum(0.2985534);
   stack1_stack_44->SetMaximum(96989.7);
   stack1_stack_44->SetDirectory(0);
   stack1_stack_44->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   stack1_stack_44->SetLineColor(ci);
   stack1_stack_44->GetXaxis()->SetLabelFont(42);
   stack1_stack_44->GetXaxis()->SetLabelSize(0.035);
   stack1_stack_44->GetXaxis()->SetTitleSize(0.035);
   stack1_stack_44->GetXaxis()->SetTitleFont(42);
   stack1_stack_44->GetYaxis()->SetTitle("Events");
   stack1_stack_44->GetYaxis()->SetLabelFont(42);
   stack1_stack_44->GetYaxis()->SetLabelSize(0.035);
   stack1_stack_44->GetYaxis()->SetTitleSize(0.035);
   stack1_stack_44->GetYaxis()->SetTitleOffset(1.25);
   stack1_stack_44->GetYaxis()->SetTitleFont(42);
   stack1_stack_44->GetZaxis()->SetLabelFont(42);
   stack1_stack_44->GetZaxis()->SetLabelSize(0.035);
   stack1_stack_44->GetZaxis()->SetTitleSize(0.035);
   stack1_stack_44->GetZaxis()->SetTitleFont(42);
   stack1->SetHistogram(stack1_stack_44);
   
   
   TH1F *HT_0mu_3 = new TH1F("HT_0mu_3","",20,0,1400);
   HT_0mu_3->SetBinContent(3,0.04339791);
   HT_0mu_3->SetBinContent(4,0.1069636);
   HT_0mu_3->SetBinContent(5,0.05980311);
   HT_0mu_3->SetBinContent(6,0.03203702);
   HT_0mu_3->SetEntries(6);
   HT_0mu_3->SetStats(0);

   ci = TColor::GetColor("#3300cc");
   HT_0mu_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   HT_0mu_3->SetLineColor(ci);
   HT_0mu_3->GetXaxis()->SetLabelFont(42);
   HT_0mu_3->GetXaxis()->SetLabelSize(0.035);
   HT_0mu_3->GetXaxis()->SetTitleSize(0.035);
   HT_0mu_3->GetXaxis()->SetTitleFont(42);
   HT_0mu_3->GetYaxis()->SetLabelFont(42);
   HT_0mu_3->GetYaxis()->SetLabelSize(0.035);
   HT_0mu_3->GetYaxis()->SetTitleSize(0.035);
   HT_0mu_3->GetYaxis()->SetTitleFont(42);
   HT_0mu_3->GetZaxis()->SetLabelFont(42);
   HT_0mu_3->GetZaxis()->SetLabelSize(0.035);
   HT_0mu_3->GetZaxis()->SetTitleSize(0.035);
   HT_0mu_3->GetZaxis()->SetTitleFont(42);
   stack1->Add(HT_0mu_3,"");
   
   TH1F *HT_0mu_3 = new TH1F("HT_0mu_3","",20,0,1400);
   HT_0mu_3->SetBinContent(3,6.812393);
   HT_0mu_3->SetBinContent(4,65.26329);
   HT_0mu_3->SetBinContent(5,71.9772);
   HT_0mu_3->SetBinContent(6,36.06287);
   HT_0mu_3->SetBinContent(7,14.17549);
   HT_0mu_3->SetBinContent(8,5.15726);
   HT_0mu_3->SetBinContent(9,3.109623);
   HT_0mu_3->SetBinContent(10,0.7949682);
   HT_0mu_3->SetBinContent(11,0.4419604);
   HT_0mu_3->SetBinContent(12,0.2245709);
   HT_0mu_3->SetBinContent(13,0.136518);
   HT_0mu_3->SetBinContent(15,0.02141037);
   HT_0mu_3->SetBinContent(16,0.1182052);
   HT_0mu_3->SetBinContent(17,0.05822722);
   HT_0mu_3->SetEntries(2717);
   HT_0mu_3->SetStats(0);

   ci = TColor::GetColor("#ff33cc");
   HT_0mu_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   HT_0mu_3->SetLineColor(ci);
   HT_0mu_3->GetXaxis()->SetLabelFont(42);
   HT_0mu_3->GetXaxis()->SetLabelSize(0.035);
   HT_0mu_3->GetXaxis()->SetTitleSize(0.035);
   HT_0mu_3->GetXaxis()->SetTitleFont(42);
   HT_0mu_3->GetYaxis()->SetLabelFont(42);
   HT_0mu_3->GetYaxis()->SetLabelSize(0.035);
   HT_0mu_3->GetYaxis()->SetTitleSize(0.035);
   HT_0mu_3->GetYaxis()->SetTitleFont(42);
   HT_0mu_3->GetZaxis()->SetLabelFont(42);
   HT_0mu_3->GetZaxis()->SetLabelSize(0.035);
   HT_0mu_3->GetZaxis()->SetTitleSize(0.035);
   HT_0mu_3->GetZaxis()->SetTitleFont(42);
   stack1->Add(HT_0mu_3,"");
   
   TH1F *HT_0mu_3 = new TH1F("HT_0mu_3","",20,0,1400);
   HT_0mu_3->SetBinContent(3,2.300142);
   HT_0mu_3->SetBinContent(4,5.506996);
   HT_0mu_3->SetBinContent(5,3.482595);
   HT_0mu_3->SetBinContent(6,1.493214);
   HT_0mu_3->SetBinContent(7,0.4210061);
   HT_0mu_3->SetBinContent(8,0.4685358);
   HT_0mu_3->SetBinContent(9,0.1546898);
   HT_0mu_3->SetBinContent(10,0.1565408);
   HT_0mu_3->SetEntries(96);
   HT_0mu_3->SetStats(0);

   ci = TColor::GetColor("#ffff33");
   HT_0mu_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   HT_0mu_3->SetLineColor(ci);
   HT_0mu_3->GetXaxis()->SetLabelFont(42);
   HT_0mu_3->GetXaxis()->SetLabelSize(0.035);
   HT_0mu_3->GetXaxis()->SetTitleSize(0.035);
   HT_0mu_3->GetXaxis()->SetTitleFont(42);
   HT_0mu_3->GetYaxis()->SetLabelFont(42);
   HT_0mu_3->GetYaxis()->SetLabelSize(0.035);
   HT_0mu_3->GetYaxis()->SetTitleSize(0.035);
   HT_0mu_3->GetYaxis()->SetTitleFont(42);
   HT_0mu_3->GetZaxis()->SetLabelFont(42);
   HT_0mu_3->GetZaxis()->SetLabelSize(0.035);
   HT_0mu_3->GetZaxis()->SetTitleSize(0.035);
   HT_0mu_3->GetZaxis()->SetTitleFont(42);
   stack1->Add(HT_0mu_3,"");
   
   TH1F *HT_0mu_3 = new TH1F("HT_0mu_3","",20,0,1400);
   HT_0mu_3->SetBinContent(3,8.868677);
   HT_0mu_3->SetBinContent(4,18.1577);
   HT_0mu_3->SetBinContent(5,8.624083);
   HT_0mu_3->SetBinContent(6,4.19152);
   HT_0mu_3->SetBinContent(7,1.868854);
   HT_0mu_3->SetBinContent(8,1.189107);
   HT_0mu_3->SetBinContent(9,0.4061041);
   HT_0mu_3->SetBinContent(10,0.1826706);
   HT_0mu_3->SetBinContent(11,0.09163021);
   HT_0mu_3->SetBinContent(12,0.0897989);
   HT_0mu_3->SetBinContent(13,0.06216556);
   HT_0mu_3->SetBinContent(14,0.008419888);
   HT_0mu_3->SetEntries(674);
   HT_0mu_3->SetStats(0);

   ci = TColor::GetColor("#669900");
   HT_0mu_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   HT_0mu_3->SetLineColor(ci);
   HT_0mu_3->GetXaxis()->SetLabelFont(42);
   HT_0mu_3->GetXaxis()->SetLabelSize(0.035);
   HT_0mu_3->GetXaxis()->SetTitleSize(0.035);
   HT_0mu_3->GetXaxis()->SetTitleFont(42);
   HT_0mu_3->GetYaxis()->SetLabelFont(42);
   HT_0mu_3->GetYaxis()->SetLabelSize(0.035);
   HT_0mu_3->GetYaxis()->SetTitleSize(0.035);
   HT_0mu_3->GetYaxis()->SetTitleFont(42);
   HT_0mu_3->GetZaxis()->SetLabelFont(42);
   HT_0mu_3->GetZaxis()->SetLabelSize(0.035);
   HT_0mu_3->GetZaxis()->SetTitleSize(0.035);
   HT_0mu_3->GetZaxis()->SetTitleFont(42);
   stack1->Add(HT_0mu_3,"");
   stack1->Draw("");
   
   TH1F *Data_HT_0mu_0 = new TH1F("Data_HT_0mu_0","",20,0,1400);
   Data_HT_0mu_0->SetBinContent(3,21);
   Data_HT_0mu_0->SetBinContent(4,88);
   Data_HT_0mu_0->SetBinContent(5,76);
   Data_HT_0mu_0->SetBinContent(6,34);
   Data_HT_0mu_0->SetBinContent(7,16);
   Data_HT_0mu_0->SetBinContent(8,6);
   Data_HT_0mu_0->SetBinContent(9,5);
   Data_HT_0mu_0->SetBinContent(10,1);
   Data_HT_0mu_0->SetBinError(3,4.582576);
   Data_HT_0mu_0->SetBinError(4,9.380832);
   Data_HT_0mu_0->SetBinError(5,8.717798);
   Data_HT_0mu_0->SetBinError(6,5.830952);
   Data_HT_0mu_0->SetBinError(7,4);
   Data_HT_0mu_0->SetBinError(8,2.44949);
   Data_HT_0mu_0->SetBinError(9,2.236068);
   Data_HT_0mu_0->SetBinError(10,1);
   Data_HT_0mu_0->SetEntries(247);
   Data_HT_0mu_0->SetStats(0);
   Data_HT_0mu_0->SetMarkerStyle(20);
   Data_HT_0mu_0->SetMarkerSize(0.7);
   Data_HT_0mu_0->GetXaxis()->SetLabelFont(42);
   Data_HT_0mu_0->GetXaxis()->SetLabelSize(0.035);
   Data_HT_0mu_0->GetXaxis()->SetTitleSize(0.035);
   Data_HT_0mu_0->GetXaxis()->SetTitleFont(42);
   Data_HT_0mu_0->GetYaxis()->SetLabelFont(42);
   Data_HT_0mu_0->GetYaxis()->SetLabelSize(0.035);
   Data_HT_0mu_0->GetYaxis()->SetTitleSize(0.035);
   Data_HT_0mu_0->GetYaxis()->SetTitleFont(42);
   Data_HT_0mu_0->GetZaxis()->SetLabelFont(42);
   Data_HT_0mu_0->GetZaxis()->SetLabelSize(0.035);
   Data_HT_0mu_0->GetZaxis()->SetTitleSize(0.035);
   Data_HT_0mu_0->GetZaxis()->SetTitleFont(42);
   Data_HT_0mu_0->Draw("same");
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
   TLegendEntry *entry=leg->AddEntry("HT_0mu_3","W + jets","f");

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
   entry=leg->AddEntry("HT_0mu_3","Z(#nu#bar{#nu}) + jets","f");

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
   entry=leg->AddEntry("HT_0mu_3","t #bar{t} + jets","f");

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
   entry=leg->AddEntry("HT_0mu_3","Z/#gamma^{*}(ll) + jets","f");

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
   entry=leg->AddEntry("Data_HT_0mu_0","Data","lep");
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
   
   TH1F *RATIO = new TH1F("RATIO","",20,0,1400);
   RATIO->SetBinContent(3,1.165074);
   RATIO->SetBinContent(4,0.9883759);
   RATIO->SetBinContent(5,0.9032169);
   RATIO->SetBinContent(6,0.8137936);
   RATIO->SetBinContent(7,0.9717379);
   RATIO->SetBinContent(8,0.8804234);
   RATIO->SetBinContent(9,1.362243);
   RATIO->SetBinContent(10,0.8816946);
   RATIO->SetBinError(3,0.3740934);
   RATIO->SetBinError(4,0.1485696);
   RATIO->SetBinError(5,0.142932);
   RATIO->SetBinError(6,0.1879614);
   RATIO->SetBinError(7,0.3411251);
   RATIO->SetBinError(8,0.4928829);
   RATIO->SetBinError(9,0.9363364);
   RATIO->SetBinError(10,1.209463);
   RATIO->SetMinimum(0);
   RATIO->SetMaximum(3.05);
   RATIO->SetEntries(21.76025);
   RATIO->SetStats(0);
   RATIO->SetFillColor(4);
   RATIO->SetLineColor(4);
   RATIO->SetMarkerColor(4);
   RATIO->SetMarkerStyle(20);
   RATIO->SetMarkerSize(0.7);
   RATIO->GetXaxis()->SetTitle("HT");
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

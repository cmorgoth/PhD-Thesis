{
//=========Macro generated from canvas: C/C      
//=========  (Thu Sep 11 21:29:09 2014) by ROOT version5.34/19
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
   pad1->Range(-97.50001,-0.510352,1677.5,5.339848);
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
   stack1->SetMaximum(30000);
   
   TH1F *stack1_stack_19 = new TH1F("stack1_stack_19","",20,80,1500);
   stack1_stack_19->SetMinimum(0.3087792);
   stack1_stack_19->SetMaximum(56862.73);
   stack1_stack_19->SetDirectory(0);
   stack1_stack_19->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   stack1_stack_19->SetLineColor(ci);
   stack1_stack_19->GetXaxis()->SetLabelFont(42);
   stack1_stack_19->GetXaxis()->SetLabelSize(0.035);
   stack1_stack_19->GetXaxis()->SetTitleSize(0.035);
   stack1_stack_19->GetXaxis()->SetTitleFont(42);
   stack1_stack_19->GetYaxis()->SetTitle("Events");
   stack1_stack_19->GetYaxis()->SetLabelFont(42);
   stack1_stack_19->GetYaxis()->SetLabelSize(0.035);
   stack1_stack_19->GetYaxis()->SetTitleSize(0.035);
   stack1_stack_19->GetYaxis()->SetTitleOffset(1.25);
   stack1_stack_19->GetYaxis()->SetTitleFont(42);
   stack1_stack_19->GetZaxis()->SetLabelFont(42);
   stack1_stack_19->GetZaxis()->SetLabelSize(0.035);
   stack1_stack_19->GetZaxis()->SetTitleSize(0.035);
   stack1_stack_19->GetZaxis()->SetTitleFont(42);
   stack1->SetHistogram(stack1_stack_19);
   
   
   TH1F *PT_1D_J2_3mu_BoxMC = new TH1F("PT_1D_J2_3mu_BoxMC","",20,80,1500);
   PT_1D_J2_3mu_BoxMC->SetBinContent(1,61.33751);
   PT_1D_J2_3mu_BoxMC->SetBinContent(2,1.139095);
   PT_1D_J2_3mu_BoxMC->SetBinContent(3,0.1071908);
   PT_1D_J2_3mu_BoxMC->SetBinContent(4,0.02132024);
   PT_1D_J2_3mu_BoxMC->SetEntries(1318);
   PT_1D_J2_3mu_BoxMC->SetStats(0);

   ci = TColor::GetColor("#3300cc");
   PT_1D_J2_3mu_BoxMC->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   PT_1D_J2_3mu_BoxMC->SetLineColor(ci);
   PT_1D_J2_3mu_BoxMC->GetXaxis()->SetLabelFont(42);
   PT_1D_J2_3mu_BoxMC->GetXaxis()->SetLabelSize(0.035);
   PT_1D_J2_3mu_BoxMC->GetXaxis()->SetTitleSize(0.035);
   PT_1D_J2_3mu_BoxMC->GetXaxis()->SetTitleFont(42);
   PT_1D_J2_3mu_BoxMC->GetYaxis()->SetLabelFont(42);
   PT_1D_J2_3mu_BoxMC->GetYaxis()->SetLabelSize(0.035);
   PT_1D_J2_3mu_BoxMC->GetYaxis()->SetTitleSize(0.035);
   PT_1D_J2_3mu_BoxMC->GetYaxis()->SetTitleFont(42);
   PT_1D_J2_3mu_BoxMC->GetZaxis()->SetLabelFont(42);
   PT_1D_J2_3mu_BoxMC->GetZaxis()->SetLabelSize(0.035);
   PT_1D_J2_3mu_BoxMC->GetZaxis()->SetTitleSize(0.035);
   PT_1D_J2_3mu_BoxMC->GetZaxis()->SetTitleFont(42);
   stack1->Add(PT_1D_J2_3mu_BoxMC,"");
   
   TH1F *PT_1D_J2_3mu_BoxMC = new TH1F("PT_1D_J2_3mu_BoxMC","",20,80,1500);
   PT_1D_J2_3mu_BoxMC->SetBinContent(1,678.2578);
   PT_1D_J2_3mu_BoxMC->SetBinContent(2,9.442899);
   PT_1D_J2_3mu_BoxMC->SetBinContent(3,0.6125748);
   PT_1D_J2_3mu_BoxMC->SetBinContent(4,0.07402836);
   PT_1D_J2_3mu_BoxMC->SetEntries(9131);
   PT_1D_J2_3mu_BoxMC->SetStats(0);

   ci = TColor::GetColor("#ff33cc");
   PT_1D_J2_3mu_BoxMC->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   PT_1D_J2_3mu_BoxMC->SetLineColor(ci);
   PT_1D_J2_3mu_BoxMC->GetXaxis()->SetLabelFont(42);
   PT_1D_J2_3mu_BoxMC->GetXaxis()->SetLabelSize(0.035);
   PT_1D_J2_3mu_BoxMC->GetXaxis()->SetTitleSize(0.035);
   PT_1D_J2_3mu_BoxMC->GetXaxis()->SetTitleFont(42);
   PT_1D_J2_3mu_BoxMC->GetYaxis()->SetLabelFont(42);
   PT_1D_J2_3mu_BoxMC->GetYaxis()->SetLabelSize(0.035);
   PT_1D_J2_3mu_BoxMC->GetYaxis()->SetTitleSize(0.035);
   PT_1D_J2_3mu_BoxMC->GetYaxis()->SetTitleFont(42);
   PT_1D_J2_3mu_BoxMC->GetZaxis()->SetLabelFont(42);
   PT_1D_J2_3mu_BoxMC->GetZaxis()->SetLabelSize(0.035);
   PT_1D_J2_3mu_BoxMC->GetZaxis()->SetTitleSize(0.035);
   PT_1D_J2_3mu_BoxMC->GetZaxis()->SetTitleFont(42);
   stack1->Add(PT_1D_J2_3mu_BoxMC,"");
   
   TH1F *PT_1D_J2_3mu_BoxMC = new TH1F("PT_1D_J2_3mu_BoxMC","",20,80,1500);
   PT_1D_J2_3mu_BoxMC->SetBinContent(1,6717.091);
   PT_1D_J2_3mu_BoxMC->SetBinContent(2,302.4684);
   PT_1D_J2_3mu_BoxMC->SetBinContent(3,33.74416);
   PT_1D_J2_3mu_BoxMC->SetBinContent(4,5.109856);
   PT_1D_J2_3mu_BoxMC->SetBinContent(5,1.864164);
   PT_1D_J2_3mu_BoxMC->SetBinContent(6,0.202933);
   PT_1D_J2_3mu_BoxMC->SetBinContent(9,0.05729149);
   PT_1D_J2_3mu_BoxMC->SetEntries(44062);
   PT_1D_J2_3mu_BoxMC->SetStats(0);

   ci = TColor::GetColor("#ffff33");
   PT_1D_J2_3mu_BoxMC->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   PT_1D_J2_3mu_BoxMC->SetLineColor(ci);
   PT_1D_J2_3mu_BoxMC->GetXaxis()->SetLabelFont(42);
   PT_1D_J2_3mu_BoxMC->GetXaxis()->SetLabelSize(0.035);
   PT_1D_J2_3mu_BoxMC->GetXaxis()->SetTitleSize(0.035);
   PT_1D_J2_3mu_BoxMC->GetXaxis()->SetTitleFont(42);
   PT_1D_J2_3mu_BoxMC->GetYaxis()->SetLabelFont(42);
   PT_1D_J2_3mu_BoxMC->GetYaxis()->SetLabelSize(0.035);
   PT_1D_J2_3mu_BoxMC->GetYaxis()->SetTitleSize(0.035);
   PT_1D_J2_3mu_BoxMC->GetYaxis()->SetTitleFont(42);
   PT_1D_J2_3mu_BoxMC->GetZaxis()->SetLabelFont(42);
   PT_1D_J2_3mu_BoxMC->GetZaxis()->SetLabelSize(0.035);
   PT_1D_J2_3mu_BoxMC->GetZaxis()->SetTitleSize(0.035);
   PT_1D_J2_3mu_BoxMC->GetZaxis()->SetTitleFont(42);
   stack1->Add(PT_1D_J2_3mu_BoxMC,"");
   
   TH1F *PT_1D_J2_3mu_BoxMC = new TH1F("PT_1D_J2_3mu_BoxMC","",20,80,1500);
   PT_1D_J2_3mu_BoxMC->SetBinContent(1,9382.82);
   PT_1D_J2_3mu_BoxMC->SetBinContent(2,537.0295);
   PT_1D_J2_3mu_BoxMC->SetBinContent(3,66.36708);
   PT_1D_J2_3mu_BoxMC->SetBinContent(4,12.59262);
   PT_1D_J2_3mu_BoxMC->SetBinContent(5,2.743886);
   PT_1D_J2_3mu_BoxMC->SetBinContent(6,0.7782638);
   PT_1D_J2_3mu_BoxMC->SetBinContent(7,0.2935372);
   PT_1D_J2_3mu_BoxMC->SetBinContent(8,0.03841494);
   PT_1D_J2_3mu_BoxMC->SetBinContent(9,0.05403008);
   PT_1D_J2_3mu_BoxMC->SetEntries(149384);
   PT_1D_J2_3mu_BoxMC->SetStats(0);

   ci = TColor::GetColor("#669900");
   PT_1D_J2_3mu_BoxMC->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   PT_1D_J2_3mu_BoxMC->SetLineColor(ci);
   PT_1D_J2_3mu_BoxMC->GetXaxis()->SetLabelFont(42);
   PT_1D_J2_3mu_BoxMC->GetXaxis()->SetLabelSize(0.035);
   PT_1D_J2_3mu_BoxMC->GetXaxis()->SetTitleSize(0.035);
   PT_1D_J2_3mu_BoxMC->GetXaxis()->SetTitleFont(42);
   PT_1D_J2_3mu_BoxMC->GetYaxis()->SetLabelFont(42);
   PT_1D_J2_3mu_BoxMC->GetYaxis()->SetLabelSize(0.035);
   PT_1D_J2_3mu_BoxMC->GetYaxis()->SetTitleSize(0.035);
   PT_1D_J2_3mu_BoxMC->GetYaxis()->SetTitleFont(42);
   PT_1D_J2_3mu_BoxMC->GetZaxis()->SetLabelFont(42);
   PT_1D_J2_3mu_BoxMC->GetZaxis()->SetLabelSize(0.035);
   PT_1D_J2_3mu_BoxMC->GetZaxis()->SetTitleSize(0.035);
   PT_1D_J2_3mu_BoxMC->GetZaxis()->SetTitleFont(42);
   stack1->Add(PT_1D_J2_3mu_BoxMC,"");
   stack1->Draw("");
   
   TH1F *PT_1D_J2_Data_0mu_Box = new TH1F("PT_1D_J2_Data_0mu_Box","",20,80,1500);
   PT_1D_J2_Data_0mu_Box->SetBinContent(1,16413);
   PT_1D_J2_Data_0mu_Box->SetBinContent(2,721);
   PT_1D_J2_Data_0mu_Box->SetBinContent(3,86);
   PT_1D_J2_Data_0mu_Box->SetBinContent(4,6);
   PT_1D_J2_Data_0mu_Box->SetBinContent(5,2);
   PT_1D_J2_Data_0mu_Box->SetBinError(1,128.1132);
   PT_1D_J2_Data_0mu_Box->SetBinError(2,26.85144);
   PT_1D_J2_Data_0mu_Box->SetBinError(3,9.273618);
   PT_1D_J2_Data_0mu_Box->SetBinError(4,2.44949);
   PT_1D_J2_Data_0mu_Box->SetBinError(5,1.414214);
   PT_1D_J2_Data_0mu_Box->SetEntries(17228);
   PT_1D_J2_Data_0mu_Box->SetStats(0);
   PT_1D_J2_Data_0mu_Box->SetMarkerStyle(20);
   PT_1D_J2_Data_0mu_Box->SetMarkerSize(0.7);
   PT_1D_J2_Data_0mu_Box->GetXaxis()->SetLabelFont(42);
   PT_1D_J2_Data_0mu_Box->GetXaxis()->SetLabelSize(0.035);
   PT_1D_J2_Data_0mu_Box->GetXaxis()->SetTitleSize(0.035);
   PT_1D_J2_Data_0mu_Box->GetXaxis()->SetTitleFont(42);
   PT_1D_J2_Data_0mu_Box->GetYaxis()->SetLabelFont(42);
   PT_1D_J2_Data_0mu_Box->GetYaxis()->SetLabelSize(0.035);
   PT_1D_J2_Data_0mu_Box->GetYaxis()->SetTitleSize(0.035);
   PT_1D_J2_Data_0mu_Box->GetYaxis()->SetTitleFont(42);
   PT_1D_J2_Data_0mu_Box->GetZaxis()->SetLabelFont(42);
   PT_1D_J2_Data_0mu_Box->GetZaxis()->SetLabelSize(0.035);
   PT_1D_J2_Data_0mu_Box->GetZaxis()->SetTitleSize(0.035);
   PT_1D_J2_Data_0mu_Box->GetZaxis()->SetTitleFont(42);
   PT_1D_J2_Data_0mu_Box->Draw("same");
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
   TLegendEntry *entry=leg->AddEntry("PT_1D_J2_3mu_BoxMC","W + jets","f");

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
   entry=leg->AddEntry("PT_1D_J2_3mu_BoxMC","Z(#nu#bar{#nu}) + jets","f");

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
   entry=leg->AddEntry("PT_1D_J2_3mu_BoxMC","t #bar{t} + jets","f");

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
   entry=leg->AddEntry("PT_1D_J2_3mu_BoxMC","Z/#gamma^{*}(ll) + jets","f");

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
   entry=leg->AddEntry("PT_1D_J2_Data_0mu_Box","Data","lep");
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
   
   TH1F *RATIO = new TH1F("RATIO","",20,80,1500);
   RATIO->SetBinContent(1,0.9746722);
   RATIO->SetBinContent(2,0.8481556);
   RATIO->SetBinContent(3,0.8529123);
   RATIO->SetBinContent(4,0.3371199);
   RATIO->SetBinContent(5,0.4340231);
   RATIO->SetBinError(1,0.008277765);
   RATIO->SetBinError(2,0.03263083);
   RATIO->SetBinError(3,0.09403473);
   RATIO->SetBinError(4,0.1387358);
   RATIO->SetBinError(5,0.310802);
   RATIO->SetMinimum(0);
   RATIO->SetMaximum(3.05);
   RATIO->SetEntries(94.42757);
   RATIO->SetStats(0);
   RATIO->SetFillColor(4);
   RATIO->SetLineColor(4);
   RATIO->SetMarkerColor(4);
   RATIO->SetMarkerStyle(20);
   RATIO->SetMarkerSize(0.7);
   RATIO->GetXaxis()->SetTitle("P^{J}_{T}");
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

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
   pad1->Range(-187.5,-0.510352,1687.5,5.339848);
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
   
   TH1F *stack1_stack_40 = new TH1F("stack1_stack_40","",20,0,1500);
   stack1_stack_40->SetMinimum(0.3087792);
   stack1_stack_40->SetMaximum(56862.73);
   stack1_stack_40->SetDirectory(0);
   stack1_stack_40->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   stack1_stack_40->SetLineColor(ci);
   stack1_stack_40->GetXaxis()->SetLabelFont(42);
   stack1_stack_40->GetXaxis()->SetLabelSize(0.035);
   stack1_stack_40->GetXaxis()->SetTitleSize(0.035);
   stack1_stack_40->GetXaxis()->SetTitleFont(42);
   stack1_stack_40->GetYaxis()->SetTitle("Events");
   stack1_stack_40->GetYaxis()->SetLabelFont(42);
   stack1_stack_40->GetYaxis()->SetLabelSize(0.035);
   stack1_stack_40->GetYaxis()->SetTitleSize(0.035);
   stack1_stack_40->GetYaxis()->SetTitleOffset(1.25);
   stack1_stack_40->GetYaxis()->SetTitleFont(42);
   stack1_stack_40->GetZaxis()->SetLabelFont(42);
   stack1_stack_40->GetZaxis()->SetLabelSize(0.035);
   stack1_stack_40->GetZaxis()->SetTitleSize(0.035);
   stack1_stack_40->GetZaxis()->SetTitleFont(42);
   stack1->SetHistogram(stack1_stack_40);
   
   
   TH1F *PT_1D_m1_1mu_BoxMC_v1 = new TH1F("PT_1D_m1_1mu_BoxMC_v1","",20,0,1500);
   PT_1D_m1_1mu_BoxMC_v1->SetBinContent(1,0.2633508);
   PT_1D_m1_1mu_BoxMC_v1->SetBinContent(2,0.1480941);
   PT_1D_m1_1mu_BoxMC_v1->SetBinContent(3,0.1887271);
   PT_1D_m1_1mu_BoxMC_v1->SetBinContent(4,0.06661247);
   PT_1D_m1_1mu_BoxMC_v1->SetBinContent(5,0.02686965);
   PT_1D_m1_1mu_BoxMC_v1->SetBinContent(6,0.0226034);
   PT_1D_m1_1mu_BoxMC_v1->SetEntries(20);
   PT_1D_m1_1mu_BoxMC_v1->SetStats(0);

   ci = TColor::GetColor("#3300cc");
   PT_1D_m1_1mu_BoxMC_v1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   PT_1D_m1_1mu_BoxMC_v1->SetLineColor(ci);
   PT_1D_m1_1mu_BoxMC_v1->GetXaxis()->SetLabelFont(42);
   PT_1D_m1_1mu_BoxMC_v1->GetXaxis()->SetLabelSize(0.035);
   PT_1D_m1_1mu_BoxMC_v1->GetXaxis()->SetTitleSize(0.035);
   PT_1D_m1_1mu_BoxMC_v1->GetXaxis()->SetTitleFont(42);
   PT_1D_m1_1mu_BoxMC_v1->GetYaxis()->SetLabelFont(42);
   PT_1D_m1_1mu_BoxMC_v1->GetYaxis()->SetLabelSize(0.035);
   PT_1D_m1_1mu_BoxMC_v1->GetYaxis()->SetTitleSize(0.035);
   PT_1D_m1_1mu_BoxMC_v1->GetYaxis()->SetTitleFont(42);
   PT_1D_m1_1mu_BoxMC_v1->GetZaxis()->SetLabelFont(42);
   PT_1D_m1_1mu_BoxMC_v1->GetZaxis()->SetLabelSize(0.035);
   PT_1D_m1_1mu_BoxMC_v1->GetZaxis()->SetTitleSize(0.035);
   PT_1D_m1_1mu_BoxMC_v1->GetZaxis()->SetTitleFont(42);
   stack1->Add(PT_1D_m1_1mu_BoxMC_v1,"");
   
   TH1F *PT_1D_m1_1mu_BoxMC_v1 = new TH1F("PT_1D_m1_1mu_BoxMC_v1","",20,0,1500);
   PT_1D_m1_1mu_BoxMC_v1->SetBinContent(1,162.9666);
   PT_1D_m1_1mu_BoxMC_v1->SetBinContent(2,132.1713);
   PT_1D_m1_1mu_BoxMC_v1->SetBinContent(3,56.63323);
   PT_1D_m1_1mu_BoxMC_v1->SetBinContent(4,14.38587);
   PT_1D_m1_1mu_BoxMC_v1->SetBinContent(5,4.319669);
   PT_1D_m1_1mu_BoxMC_v1->SetBinContent(6,0.9590362);
   PT_1D_m1_1mu_BoxMC_v1->SetBinContent(7,0.2960422);
   PT_1D_m1_1mu_BoxMC_v1->SetEntries(4920);
   PT_1D_m1_1mu_BoxMC_v1->SetStats(0);

   ci = TColor::GetColor("#ff33cc");
   PT_1D_m1_1mu_BoxMC_v1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   PT_1D_m1_1mu_BoxMC_v1->SetLineColor(ci);
   PT_1D_m1_1mu_BoxMC_v1->GetXaxis()->SetLabelFont(42);
   PT_1D_m1_1mu_BoxMC_v1->GetXaxis()->SetLabelSize(0.035);
   PT_1D_m1_1mu_BoxMC_v1->GetXaxis()->SetTitleSize(0.035);
   PT_1D_m1_1mu_BoxMC_v1->GetXaxis()->SetTitleFont(42);
   PT_1D_m1_1mu_BoxMC_v1->GetYaxis()->SetLabelFont(42);
   PT_1D_m1_1mu_BoxMC_v1->GetYaxis()->SetLabelSize(0.035);
   PT_1D_m1_1mu_BoxMC_v1->GetYaxis()->SetTitleSize(0.035);
   PT_1D_m1_1mu_BoxMC_v1->GetYaxis()->SetTitleFont(42);
   PT_1D_m1_1mu_BoxMC_v1->GetZaxis()->SetLabelFont(42);
   PT_1D_m1_1mu_BoxMC_v1->GetZaxis()->SetLabelSize(0.035);
   PT_1D_m1_1mu_BoxMC_v1->GetZaxis()->SetTitleSize(0.035);
   PT_1D_m1_1mu_BoxMC_v1->GetZaxis()->SetTitleFont(42);
   stack1->Add(PT_1D_m1_1mu_BoxMC_v1,"");
   
   TH1F *PT_1D_m1_1mu_BoxMC_v1 = new TH1F("PT_1D_m1_1mu_BoxMC_v1","",20,0,1500);
   PT_1D_m1_1mu_BoxMC_v1->SetBinContent(1,11.30522);
   PT_1D_m1_1mu_BoxMC_v1->SetBinContent(2,5.450874);
   PT_1D_m1_1mu_BoxMC_v1->SetBinContent(3,3.525155);
   PT_1D_m1_1mu_BoxMC_v1->SetBinContent(4,1.777042);
   PT_1D_m1_1mu_BoxMC_v1->SetBinContent(5,0.317762);
   PT_1D_m1_1mu_BoxMC_v1->SetBinContent(6,0.1083064);
   PT_1D_m1_1mu_BoxMC_v1->SetBinContent(7,0.1020393);
   PT_1D_m1_1mu_BoxMC_v1->SetEntries(143);
   PT_1D_m1_1mu_BoxMC_v1->SetStats(0);

   ci = TColor::GetColor("#ffff33");
   PT_1D_m1_1mu_BoxMC_v1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   PT_1D_m1_1mu_BoxMC_v1->SetLineColor(ci);
   PT_1D_m1_1mu_BoxMC_v1->GetXaxis()->SetLabelFont(42);
   PT_1D_m1_1mu_BoxMC_v1->GetXaxis()->SetLabelSize(0.035);
   PT_1D_m1_1mu_BoxMC_v1->GetXaxis()->SetTitleSize(0.035);
   PT_1D_m1_1mu_BoxMC_v1->GetXaxis()->SetTitleFont(42);
   PT_1D_m1_1mu_BoxMC_v1->GetYaxis()->SetLabelFont(42);
   PT_1D_m1_1mu_BoxMC_v1->GetYaxis()->SetLabelSize(0.035);
   PT_1D_m1_1mu_BoxMC_v1->GetYaxis()->SetTitleSize(0.035);
   PT_1D_m1_1mu_BoxMC_v1->GetYaxis()->SetTitleFont(42);
   PT_1D_m1_1mu_BoxMC_v1->GetZaxis()->SetLabelFont(42);
   PT_1D_m1_1mu_BoxMC_v1->GetZaxis()->SetLabelSize(0.035);
   PT_1D_m1_1mu_BoxMC_v1->GetZaxis()->SetTitleSize(0.035);
   PT_1D_m1_1mu_BoxMC_v1->GetZaxis()->SetTitleFont(42);
   stack1->Add(PT_1D_m1_1mu_BoxMC_v1,"");
   
   TH1F *PT_1D_m1_1mu_BoxMC_v1 = new TH1F("PT_1D_m1_1mu_BoxMC_v1","",20,0,1500);
   PT_1D_m1_1mu_BoxMC_v1->SetStats(0);

   ci = TColor::GetColor("#669900");
   PT_1D_m1_1mu_BoxMC_v1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   PT_1D_m1_1mu_BoxMC_v1->SetLineColor(ci);
   PT_1D_m1_1mu_BoxMC_v1->GetXaxis()->SetLabelFont(42);
   PT_1D_m1_1mu_BoxMC_v1->GetXaxis()->SetLabelSize(0.035);
   PT_1D_m1_1mu_BoxMC_v1->GetXaxis()->SetTitleSize(0.035);
   PT_1D_m1_1mu_BoxMC_v1->GetXaxis()->SetTitleFont(42);
   PT_1D_m1_1mu_BoxMC_v1->GetYaxis()->SetLabelFont(42);
   PT_1D_m1_1mu_BoxMC_v1->GetYaxis()->SetLabelSize(0.035);
   PT_1D_m1_1mu_BoxMC_v1->GetYaxis()->SetTitleSize(0.035);
   PT_1D_m1_1mu_BoxMC_v1->GetYaxis()->SetTitleFont(42);
   PT_1D_m1_1mu_BoxMC_v1->GetZaxis()->SetLabelFont(42);
   PT_1D_m1_1mu_BoxMC_v1->GetZaxis()->SetLabelSize(0.035);
   PT_1D_m1_1mu_BoxMC_v1->GetZaxis()->SetTitleSize(0.035);
   PT_1D_m1_1mu_BoxMC_v1->GetZaxis()->SetTitleFont(42);
   stack1->Add(PT_1D_m1_1mu_BoxMC_v1,"");
   stack1->Draw("");
   
   TH1F *PT_1D_m1_Data_1mu_Box_v0 = new TH1F("PT_1D_m1_Data_1mu_Box_v0","",20,0,100);
   PT_1D_m1_Data_1mu_Box_v0->SetBinContent(4,11);
   PT_1D_m1_Data_1mu_Box_v0->SetBinContent(5,14);
   PT_1D_m1_Data_1mu_Box_v0->SetBinContent(6,9);
   PT_1D_m1_Data_1mu_Box_v0->SetBinContent(7,17);
   PT_1D_m1_Data_1mu_Box_v0->SetBinContent(8,10);
   PT_1D_m1_Data_1mu_Box_v0->SetBinContent(9,9);
   PT_1D_m1_Data_1mu_Box_v0->SetBinContent(10,14);
   PT_1D_m1_Data_1mu_Box_v0->SetBinContent(11,9);
   PT_1D_m1_Data_1mu_Box_v0->SetBinContent(12,7);
   PT_1D_m1_Data_1mu_Box_v0->SetBinContent(13,7);
   PT_1D_m1_Data_1mu_Box_v0->SetBinContent(14,10);
   PT_1D_m1_Data_1mu_Box_v0->SetBinContent(15,18);
   PT_1D_m1_Data_1mu_Box_v0->SetBinContent(16,10);
   PT_1D_m1_Data_1mu_Box_v0->SetBinContent(17,9);
   PT_1D_m1_Data_1mu_Box_v0->SetBinContent(18,4);
   PT_1D_m1_Data_1mu_Box_v0->SetBinContent(19,17);
   PT_1D_m1_Data_1mu_Box_v0->SetBinContent(20,9);
   PT_1D_m1_Data_1mu_Box_v0->SetBinContent(21,133);
   PT_1D_m1_Data_1mu_Box_v0->SetBinError(4,3.316625);
   PT_1D_m1_Data_1mu_Box_v0->SetBinError(5,3.741657);
   PT_1D_m1_Data_1mu_Box_v0->SetBinError(6,3);
   PT_1D_m1_Data_1mu_Box_v0->SetBinError(7,4.123106);
   PT_1D_m1_Data_1mu_Box_v0->SetBinError(8,3.162278);
   PT_1D_m1_Data_1mu_Box_v0->SetBinError(9,3);
   PT_1D_m1_Data_1mu_Box_v0->SetBinError(10,3.741657);
   PT_1D_m1_Data_1mu_Box_v0->SetBinError(11,3);
   PT_1D_m1_Data_1mu_Box_v0->SetBinError(12,2.645751);
   PT_1D_m1_Data_1mu_Box_v0->SetBinError(13,2.645751);
   PT_1D_m1_Data_1mu_Box_v0->SetBinError(14,3.162278);
   PT_1D_m1_Data_1mu_Box_v0->SetBinError(15,4.242641);
   PT_1D_m1_Data_1mu_Box_v0->SetBinError(16,3.162278);
   PT_1D_m1_Data_1mu_Box_v0->SetBinError(17,3);
   PT_1D_m1_Data_1mu_Box_v0->SetBinError(18,2);
   PT_1D_m1_Data_1mu_Box_v0->SetBinError(19,4.123106);
   PT_1D_m1_Data_1mu_Box_v0->SetBinError(20,3);
   PT_1D_m1_Data_1mu_Box_v0->SetBinError(21,11.53256);
   PT_1D_m1_Data_1mu_Box_v0->SetEntries(317);
   PT_1D_m1_Data_1mu_Box_v0->SetStats(0);
   PT_1D_m1_Data_1mu_Box_v0->SetMarkerStyle(20);
   PT_1D_m1_Data_1mu_Box_v0->SetMarkerSize(0.7);
   PT_1D_m1_Data_1mu_Box_v0->GetXaxis()->SetLabelFont(42);
   PT_1D_m1_Data_1mu_Box_v0->GetXaxis()->SetLabelSize(0.035);
   PT_1D_m1_Data_1mu_Box_v0->GetXaxis()->SetTitleSize(0.035);
   PT_1D_m1_Data_1mu_Box_v0->GetXaxis()->SetTitleFont(42);
   PT_1D_m1_Data_1mu_Box_v0->GetYaxis()->SetLabelFont(42);
   PT_1D_m1_Data_1mu_Box_v0->GetYaxis()->SetLabelSize(0.035);
   PT_1D_m1_Data_1mu_Box_v0->GetYaxis()->SetTitleSize(0.035);
   PT_1D_m1_Data_1mu_Box_v0->GetYaxis()->SetTitleFont(42);
   PT_1D_m1_Data_1mu_Box_v0->GetZaxis()->SetLabelFont(42);
   PT_1D_m1_Data_1mu_Box_v0->GetZaxis()->SetLabelSize(0.035);
   PT_1D_m1_Data_1mu_Box_v0->GetZaxis()->SetTitleSize(0.035);
   PT_1D_m1_Data_1mu_Box_v0->GetZaxis()->SetTitleFont(42);
   PT_1D_m1_Data_1mu_Box_v0->Draw("same");
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
   TLegendEntry *entry=leg->AddEntry("PT_1D_m1_1mu_BoxMC_v1","W + jets","f");

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
   entry=leg->AddEntry("PT_1D_m1_1mu_BoxMC_v1","Z(#nu#bar{#nu}) + jets","f");

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
   entry=leg->AddEntry("PT_1D_m1_1mu_BoxMC_v1","t #bar{t} + jets","f");

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
   entry=leg->AddEntry("PT_1D_m1_1mu_BoxMC_v1","Z/#gamma^{*}(ll) + jets","f");

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
   entry=leg->AddEntry("PT_1D_m1_Data_1mu_Box_v0","Data","lep");
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
   
   TH1F *RATIO = new TH1F("RATIO","",20,0,1000);
   RATIO->SetBinContent(4,0.6777772);
   RATIO->SetBinContent(5,3.001522);
   RATIO->SetBinContent(6,8.25729);
   RATIO->SetBinContent(7,42.70482);
   RATIO->SetBinError(4,0.2108801);
   RATIO->SetBinError(5,0.9135162);
   RATIO->SetBinError(6,3.589839);
   RATIO->SetBinError(7,22.44617);
   RATIO->SetMinimum(0);
   RATIO->SetMaximum(3.05);
   RATIO->SetEntries(5.768364);
   RATIO->SetStats(0);
   RATIO->SetFillColor(4);
   RATIO->SetLineColor(4);
   RATIO->SetMarkerColor(4);
   RATIO->SetMarkerStyle(20);
   RATIO->SetMarkerSize(0.7);
   RATIO->GetXaxis()->SetTitle("P^{#mu}_{T}");
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

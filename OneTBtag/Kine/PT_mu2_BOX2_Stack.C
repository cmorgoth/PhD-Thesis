{
//=========Macro generated from canvas: C/C      
//=========  (Fri Sep 12 01:10:20 2014) by ROOT version5.34/19
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
   
   TH1F *stack1_stack_37 = new TH1F("stack1_stack_37","",20,0,1500);
   stack1_stack_37->SetMinimum(0.3087792);
   stack1_stack_37->SetMaximum(56862.73);
   stack1_stack_37->SetDirectory(0);
   stack1_stack_37->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   stack1_stack_37->SetLineColor(ci);
   stack1_stack_37->GetXaxis()->SetLabelFont(42);
   stack1_stack_37->GetXaxis()->SetLabelSize(0.035);
   stack1_stack_37->GetXaxis()->SetTitleSize(0.035);
   stack1_stack_37->GetXaxis()->SetTitleFont(42);
   stack1_stack_37->GetYaxis()->SetTitle("Events");
   stack1_stack_37->GetYaxis()->SetLabelFont(42);
   stack1_stack_37->GetYaxis()->SetLabelSize(0.035);
   stack1_stack_37->GetYaxis()->SetTitleSize(0.035);
   stack1_stack_37->GetYaxis()->SetTitleOffset(1.25);
   stack1_stack_37->GetYaxis()->SetTitleFont(42);
   stack1_stack_37->GetZaxis()->SetLabelFont(42);
   stack1_stack_37->GetZaxis()->SetLabelSize(0.035);
   stack1_stack_37->GetZaxis()->SetTitleSize(0.035);
   stack1_stack_37->GetZaxis()->SetTitleFont(42);
   stack1->SetHistogram(stack1_stack_37);
   
   
   TH1F *PT_1D_m2_2mu_BoxMC_v1 = new TH1F("PT_1D_m2_2mu_BoxMC_v1","",20,0,1500);
   PT_1D_m2_2mu_BoxMC_v1->SetBinContent(1,12.99876);
   PT_1D_m2_2mu_BoxMC_v1->SetBinContent(2,6.302802);
   PT_1D_m2_2mu_BoxMC_v1->SetBinContent(3,0.8186741);
   PT_1D_m2_2mu_BoxMC_v1->SetBinContent(4,0.1482101);
   PT_1D_m2_2mu_BoxMC_v1->SetEntries(524);
   PT_1D_m2_2mu_BoxMC_v1->SetStats(0);

   ci = TColor::GetColor("#3300cc");
   PT_1D_m2_2mu_BoxMC_v1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   PT_1D_m2_2mu_BoxMC_v1->SetLineColor(ci);
   PT_1D_m2_2mu_BoxMC_v1->GetXaxis()->SetLabelFont(42);
   PT_1D_m2_2mu_BoxMC_v1->GetXaxis()->SetLabelSize(0.035);
   PT_1D_m2_2mu_BoxMC_v1->GetXaxis()->SetTitleSize(0.035);
   PT_1D_m2_2mu_BoxMC_v1->GetXaxis()->SetTitleFont(42);
   PT_1D_m2_2mu_BoxMC_v1->GetYaxis()->SetLabelFont(42);
   PT_1D_m2_2mu_BoxMC_v1->GetYaxis()->SetLabelSize(0.035);
   PT_1D_m2_2mu_BoxMC_v1->GetYaxis()->SetTitleSize(0.035);
   PT_1D_m2_2mu_BoxMC_v1->GetYaxis()->SetTitleFont(42);
   PT_1D_m2_2mu_BoxMC_v1->GetZaxis()->SetLabelFont(42);
   PT_1D_m2_2mu_BoxMC_v1->GetZaxis()->SetLabelSize(0.035);
   PT_1D_m2_2mu_BoxMC_v1->GetZaxis()->SetTitleSize(0.035);
   PT_1D_m2_2mu_BoxMC_v1->GetZaxis()->SetTitleFont(42);
   stack1->Add(PT_1D_m2_2mu_BoxMC_v1,"");
   
   TH1F *PT_1D_m2_2mu_BoxMC_v1 = new TH1F("PT_1D_m2_2mu_BoxMC_v1","",20,0,1500);
   PT_1D_m2_2mu_BoxMC_v1->SetBinContent(1,9.200445);
   PT_1D_m2_2mu_BoxMC_v1->SetBinContent(2,0.1824777);
   PT_1D_m2_2mu_BoxMC_v1->SetEntries(224);
   PT_1D_m2_2mu_BoxMC_v1->SetStats(0);

   ci = TColor::GetColor("#ff33cc");
   PT_1D_m2_2mu_BoxMC_v1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   PT_1D_m2_2mu_BoxMC_v1->SetLineColor(ci);
   PT_1D_m2_2mu_BoxMC_v1->GetXaxis()->SetLabelFont(42);
   PT_1D_m2_2mu_BoxMC_v1->GetXaxis()->SetLabelSize(0.035);
   PT_1D_m2_2mu_BoxMC_v1->GetXaxis()->SetTitleSize(0.035);
   PT_1D_m2_2mu_BoxMC_v1->GetXaxis()->SetTitleFont(42);
   PT_1D_m2_2mu_BoxMC_v1->GetYaxis()->SetLabelFont(42);
   PT_1D_m2_2mu_BoxMC_v1->GetYaxis()->SetLabelSize(0.035);
   PT_1D_m2_2mu_BoxMC_v1->GetYaxis()->SetTitleSize(0.035);
   PT_1D_m2_2mu_BoxMC_v1->GetYaxis()->SetTitleFont(42);
   PT_1D_m2_2mu_BoxMC_v1->GetZaxis()->SetLabelFont(42);
   PT_1D_m2_2mu_BoxMC_v1->GetZaxis()->SetLabelSize(0.035);
   PT_1D_m2_2mu_BoxMC_v1->GetZaxis()->SetTitleSize(0.035);
   PT_1D_m2_2mu_BoxMC_v1->GetZaxis()->SetTitleFont(42);
   stack1->Add(PT_1D_m2_2mu_BoxMC_v1,"");
   
   TH1F *PT_1D_m2_2mu_BoxMC_v1 = new TH1F("PT_1D_m2_2mu_BoxMC_v1","",20,0,1500);
   PT_1D_m2_2mu_BoxMC_v1->SetStats(0);

   ci = TColor::GetColor("#ffff33");
   PT_1D_m2_2mu_BoxMC_v1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   PT_1D_m2_2mu_BoxMC_v1->SetLineColor(ci);
   PT_1D_m2_2mu_BoxMC_v1->GetXaxis()->SetLabelFont(42);
   PT_1D_m2_2mu_BoxMC_v1->GetXaxis()->SetLabelSize(0.035);
   PT_1D_m2_2mu_BoxMC_v1->GetXaxis()->SetTitleSize(0.035);
   PT_1D_m2_2mu_BoxMC_v1->GetXaxis()->SetTitleFont(42);
   PT_1D_m2_2mu_BoxMC_v1->GetYaxis()->SetLabelFont(42);
   PT_1D_m2_2mu_BoxMC_v1->GetYaxis()->SetLabelSize(0.035);
   PT_1D_m2_2mu_BoxMC_v1->GetYaxis()->SetTitleSize(0.035);
   PT_1D_m2_2mu_BoxMC_v1->GetYaxis()->SetTitleFont(42);
   PT_1D_m2_2mu_BoxMC_v1->GetZaxis()->SetLabelFont(42);
   PT_1D_m2_2mu_BoxMC_v1->GetZaxis()->SetLabelSize(0.035);
   PT_1D_m2_2mu_BoxMC_v1->GetZaxis()->SetTitleSize(0.035);
   PT_1D_m2_2mu_BoxMC_v1->GetZaxis()->SetTitleFont(42);
   stack1->Add(PT_1D_m2_2mu_BoxMC_v1,"");
   
   TH1F *PT_1D_m2_2mu_BoxMC_v1 = new TH1F("PT_1D_m2_2mu_BoxMC_v1","",20,0,1500);
   PT_1D_m2_2mu_BoxMC_v1->SetStats(0);

   ci = TColor::GetColor("#669900");
   PT_1D_m2_2mu_BoxMC_v1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   PT_1D_m2_2mu_BoxMC_v1->SetLineColor(ci);
   PT_1D_m2_2mu_BoxMC_v1->GetXaxis()->SetLabelFont(42);
   PT_1D_m2_2mu_BoxMC_v1->GetXaxis()->SetLabelSize(0.035);
   PT_1D_m2_2mu_BoxMC_v1->GetXaxis()->SetTitleSize(0.035);
   PT_1D_m2_2mu_BoxMC_v1->GetXaxis()->SetTitleFont(42);
   PT_1D_m2_2mu_BoxMC_v1->GetYaxis()->SetLabelFont(42);
   PT_1D_m2_2mu_BoxMC_v1->GetYaxis()->SetLabelSize(0.035);
   PT_1D_m2_2mu_BoxMC_v1->GetYaxis()->SetTitleSize(0.035);
   PT_1D_m2_2mu_BoxMC_v1->GetYaxis()->SetTitleFont(42);
   PT_1D_m2_2mu_BoxMC_v1->GetZaxis()->SetLabelFont(42);
   PT_1D_m2_2mu_BoxMC_v1->GetZaxis()->SetLabelSize(0.035);
   PT_1D_m2_2mu_BoxMC_v1->GetZaxis()->SetTitleSize(0.035);
   PT_1D_m2_2mu_BoxMC_v1->GetZaxis()->SetTitleFont(42);
   stack1->Add(PT_1D_m2_2mu_BoxMC_v1,"");
   stack1->Draw("");
   
   TH1F *PT_1D_m2_Data_2mu_Box_v0 = new TH1F("PT_1D_m2_Data_2mu_Box_v0","",20,0,1500);
   PT_1D_m2_Data_2mu_Box_v0->SetBinContent(1,28);
   PT_1D_m2_Data_2mu_Box_v0->SetBinContent(2,6);
   PT_1D_m2_Data_2mu_Box_v0->SetBinError(1,5.291503);
   PT_1D_m2_Data_2mu_Box_v0->SetBinError(2,2.44949);
   PT_1D_m2_Data_2mu_Box_v0->SetEntries(34);
   PT_1D_m2_Data_2mu_Box_v0->SetStats(0);
   PT_1D_m2_Data_2mu_Box_v0->SetMarkerStyle(20);
   PT_1D_m2_Data_2mu_Box_v0->SetMarkerSize(0.7);
   PT_1D_m2_Data_2mu_Box_v0->GetXaxis()->SetLabelFont(42);
   PT_1D_m2_Data_2mu_Box_v0->GetXaxis()->SetLabelSize(0.035);
   PT_1D_m2_Data_2mu_Box_v0->GetXaxis()->SetTitleSize(0.035);
   PT_1D_m2_Data_2mu_Box_v0->GetXaxis()->SetTitleFont(42);
   PT_1D_m2_Data_2mu_Box_v0->GetYaxis()->SetLabelFont(42);
   PT_1D_m2_Data_2mu_Box_v0->GetYaxis()->SetLabelSize(0.035);
   PT_1D_m2_Data_2mu_Box_v0->GetYaxis()->SetTitleSize(0.035);
   PT_1D_m2_Data_2mu_Box_v0->GetYaxis()->SetTitleFont(42);
   PT_1D_m2_Data_2mu_Box_v0->GetZaxis()->SetLabelFont(42);
   PT_1D_m2_Data_2mu_Box_v0->GetZaxis()->SetLabelSize(0.035);
   PT_1D_m2_Data_2mu_Box_v0->GetZaxis()->SetTitleSize(0.035);
   PT_1D_m2_Data_2mu_Box_v0->GetZaxis()->SetTitleFont(42);
   PT_1D_m2_Data_2mu_Box_v0->Draw("same");
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
   TLegendEntry *entry=leg->AddEntry("PT_1D_m2_2mu_BoxMC_v1","W + jets","f");

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
   entry=leg->AddEntry("PT_1D_m2_2mu_BoxMC_v1","Z(#nu#bar{#nu}) + jets","f");

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
   entry=leg->AddEntry("PT_1D_m2_2mu_BoxMC_v1","t #bar{t} + jets","f");

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
   entry=leg->AddEntry("PT_1D_m2_2mu_BoxMC_v1","Z/#gamma^{*}(ll) + jets","f");

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
   entry=leg->AddEntry("PT_1D_m2_Data_2mu_Box_v0","Data","lep");
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
   RATIO->SetBinContent(1,1.261306);
   RATIO->SetBinContent(2,0.9251722);
   RATIO->SetBinError(1,0.2468415);
   RATIO->SetBinError(2,0.3876371);
   RATIO->SetMinimum(0);
   RATIO->SetMaximum(3.05);
   RATIO->SetEntries(22.63656);
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

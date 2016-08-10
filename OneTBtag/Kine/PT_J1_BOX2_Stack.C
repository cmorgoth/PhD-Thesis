{
//=========Macro generated from canvas: C/C      
//=========  (Fri Sep 12 01:10:19 2014) by ROOT version5.34/19
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
   
   TH1F *stack1_stack_28 = new TH1F("stack1_stack_28","",20,80,1500);
   stack1_stack_28->SetMinimum(0.3087792);
   stack1_stack_28->SetMaximum(56862.73);
   stack1_stack_28->SetDirectory(0);
   stack1_stack_28->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   stack1_stack_28->SetLineColor(ci);
   stack1_stack_28->GetXaxis()->SetLabelFont(42);
   stack1_stack_28->GetXaxis()->SetLabelSize(0.035);
   stack1_stack_28->GetXaxis()->SetTitleSize(0.035);
   stack1_stack_28->GetXaxis()->SetTitleFont(42);
   stack1_stack_28->GetYaxis()->SetTitle("Events");
   stack1_stack_28->GetYaxis()->SetLabelFont(42);
   stack1_stack_28->GetYaxis()->SetLabelSize(0.035);
   stack1_stack_28->GetYaxis()->SetTitleSize(0.035);
   stack1_stack_28->GetYaxis()->SetTitleOffset(1.25);
   stack1_stack_28->GetYaxis()->SetTitleFont(42);
   stack1_stack_28->GetZaxis()->SetLabelFont(42);
   stack1_stack_28->GetZaxis()->SetLabelSize(0.035);
   stack1_stack_28->GetZaxis()->SetTitleSize(0.035);
   stack1_stack_28->GetZaxis()->SetTitleFont(42);
   stack1->SetHistogram(stack1_stack_28);
   
   
   TH1F *PT_1D_J1_5mu_BoxMC = new TH1F("PT_1D_J1_5mu_BoxMC","",20,80,1500);
   PT_1D_J1_5mu_BoxMC->SetBinContent(1,11.20636);
   PT_1D_J1_5mu_BoxMC->SetBinContent(2,5.893855);
   PT_1D_J1_5mu_BoxMC->SetBinContent(3,1.801657);
   PT_1D_J1_5mu_BoxMC->SetBinContent(4,0.7379038);
   PT_1D_J1_5mu_BoxMC->SetBinContent(5,0.3609427);
   PT_1D_J1_5mu_BoxMC->SetBinContent(6,0.1610584);
   PT_1D_J1_5mu_BoxMC->SetBinContent(7,0.1066655);
   PT_1D_J1_5mu_BoxMC->SetEntries(524);
   PT_1D_J1_5mu_BoxMC->SetStats(0);

   ci = TColor::GetColor("#3300cc");
   PT_1D_J1_5mu_BoxMC->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   PT_1D_J1_5mu_BoxMC->SetLineColor(ci);
   PT_1D_J1_5mu_BoxMC->GetXaxis()->SetLabelFont(42);
   PT_1D_J1_5mu_BoxMC->GetXaxis()->SetLabelSize(0.035);
   PT_1D_J1_5mu_BoxMC->GetXaxis()->SetTitleSize(0.035);
   PT_1D_J1_5mu_BoxMC->GetXaxis()->SetTitleFont(42);
   PT_1D_J1_5mu_BoxMC->GetYaxis()->SetLabelFont(42);
   PT_1D_J1_5mu_BoxMC->GetYaxis()->SetLabelSize(0.035);
   PT_1D_J1_5mu_BoxMC->GetYaxis()->SetTitleSize(0.035);
   PT_1D_J1_5mu_BoxMC->GetYaxis()->SetTitleFont(42);
   PT_1D_J1_5mu_BoxMC->GetZaxis()->SetLabelFont(42);
   PT_1D_J1_5mu_BoxMC->GetZaxis()->SetLabelSize(0.035);
   PT_1D_J1_5mu_BoxMC->GetZaxis()->SetTitleSize(0.035);
   PT_1D_J1_5mu_BoxMC->GetZaxis()->SetTitleFont(42);
   stack1->Add(PT_1D_J1_5mu_BoxMC,"");
   
   TH1F *PT_1D_J1_5mu_BoxMC = new TH1F("PT_1D_J1_5mu_BoxMC","",20,80,1500);
   PT_1D_J1_5mu_BoxMC->SetBinContent(1,6.230198);
   PT_1D_J1_5mu_BoxMC->SetBinContent(2,2.324271);
   PT_1D_J1_5mu_BoxMC->SetBinContent(3,0.4689064);
   PT_1D_J1_5mu_BoxMC->SetBinContent(4,0.1810718);
   PT_1D_J1_5mu_BoxMC->SetBinContent(5,0.04585274);
   PT_1D_J1_5mu_BoxMC->SetBinContent(6,0.06644239);
   PT_1D_J1_5mu_BoxMC->SetBinContent(7,0.04346196);
   PT_1D_J1_5mu_BoxMC->SetBinContent(9,0.0227185);
   PT_1D_J1_5mu_BoxMC->SetEntries(224);
   PT_1D_J1_5mu_BoxMC->SetStats(0);

   ci = TColor::GetColor("#ff33cc");
   PT_1D_J1_5mu_BoxMC->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   PT_1D_J1_5mu_BoxMC->SetLineColor(ci);
   PT_1D_J1_5mu_BoxMC->GetXaxis()->SetLabelFont(42);
   PT_1D_J1_5mu_BoxMC->GetXaxis()->SetLabelSize(0.035);
   PT_1D_J1_5mu_BoxMC->GetXaxis()->SetTitleSize(0.035);
   PT_1D_J1_5mu_BoxMC->GetXaxis()->SetTitleFont(42);
   PT_1D_J1_5mu_BoxMC->GetYaxis()->SetLabelFont(42);
   PT_1D_J1_5mu_BoxMC->GetYaxis()->SetLabelSize(0.035);
   PT_1D_J1_5mu_BoxMC->GetYaxis()->SetTitleSize(0.035);
   PT_1D_J1_5mu_BoxMC->GetYaxis()->SetTitleFont(42);
   PT_1D_J1_5mu_BoxMC->GetZaxis()->SetLabelFont(42);
   PT_1D_J1_5mu_BoxMC->GetZaxis()->SetLabelSize(0.035);
   PT_1D_J1_5mu_BoxMC->GetZaxis()->SetTitleSize(0.035);
   PT_1D_J1_5mu_BoxMC->GetZaxis()->SetTitleFont(42);
   stack1->Add(PT_1D_J1_5mu_BoxMC,"");
   
   TH1F *PT_1D_J1_5mu_BoxMC = new TH1F("PT_1D_J1_5mu_BoxMC","",20,80,1500);
   PT_1D_J1_5mu_BoxMC->SetStats(0);

   ci = TColor::GetColor("#ffff33");
   PT_1D_J1_5mu_BoxMC->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   PT_1D_J1_5mu_BoxMC->SetLineColor(ci);
   PT_1D_J1_5mu_BoxMC->GetXaxis()->SetLabelFont(42);
   PT_1D_J1_5mu_BoxMC->GetXaxis()->SetLabelSize(0.035);
   PT_1D_J1_5mu_BoxMC->GetXaxis()->SetTitleSize(0.035);
   PT_1D_J1_5mu_BoxMC->GetXaxis()->SetTitleFont(42);
   PT_1D_J1_5mu_BoxMC->GetYaxis()->SetLabelFont(42);
   PT_1D_J1_5mu_BoxMC->GetYaxis()->SetLabelSize(0.035);
   PT_1D_J1_5mu_BoxMC->GetYaxis()->SetTitleSize(0.035);
   PT_1D_J1_5mu_BoxMC->GetYaxis()->SetTitleFont(42);
   PT_1D_J1_5mu_BoxMC->GetZaxis()->SetLabelFont(42);
   PT_1D_J1_5mu_BoxMC->GetZaxis()->SetLabelSize(0.035);
   PT_1D_J1_5mu_BoxMC->GetZaxis()->SetTitleSize(0.035);
   PT_1D_J1_5mu_BoxMC->GetZaxis()->SetTitleFont(42);
   stack1->Add(PT_1D_J1_5mu_BoxMC,"");
   
   TH1F *PT_1D_J1_5mu_BoxMC = new TH1F("PT_1D_J1_5mu_BoxMC","",20,80,1500);
   PT_1D_J1_5mu_BoxMC->SetStats(0);

   ci = TColor::GetColor("#669900");
   PT_1D_J1_5mu_BoxMC->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   PT_1D_J1_5mu_BoxMC->SetLineColor(ci);
   PT_1D_J1_5mu_BoxMC->GetXaxis()->SetLabelFont(42);
   PT_1D_J1_5mu_BoxMC->GetXaxis()->SetLabelSize(0.035);
   PT_1D_J1_5mu_BoxMC->GetXaxis()->SetTitleSize(0.035);
   PT_1D_J1_5mu_BoxMC->GetXaxis()->SetTitleFont(42);
   PT_1D_J1_5mu_BoxMC->GetYaxis()->SetLabelFont(42);
   PT_1D_J1_5mu_BoxMC->GetYaxis()->SetLabelSize(0.035);
   PT_1D_J1_5mu_BoxMC->GetYaxis()->SetTitleSize(0.035);
   PT_1D_J1_5mu_BoxMC->GetYaxis()->SetTitleFont(42);
   PT_1D_J1_5mu_BoxMC->GetZaxis()->SetLabelFont(42);
   PT_1D_J1_5mu_BoxMC->GetZaxis()->SetLabelSize(0.035);
   PT_1D_J1_5mu_BoxMC->GetZaxis()->SetTitleSize(0.035);
   PT_1D_J1_5mu_BoxMC->GetZaxis()->SetTitleFont(42);
   stack1->Add(PT_1D_J1_5mu_BoxMC,"");
   stack1->Draw("");
   
   TH1F *PT_1D_J1_Data_2mu_Box = new TH1F("PT_1D_J1_Data_2mu_Box","",20,80,1500);
   PT_1D_J1_Data_2mu_Box->SetBinContent(1,20);
   PT_1D_J1_Data_2mu_Box->SetBinContent(2,8);
   PT_1D_J1_Data_2mu_Box->SetBinContent(3,1);
   PT_1D_J1_Data_2mu_Box->SetBinContent(4,1);
   PT_1D_J1_Data_2mu_Box->SetBinContent(5,2);
   PT_1D_J1_Data_2mu_Box->SetBinContent(6,2);
   PT_1D_J1_Data_2mu_Box->SetBinError(1,4.472136);
   PT_1D_J1_Data_2mu_Box->SetBinError(2,2.828427);
   PT_1D_J1_Data_2mu_Box->SetBinError(3,1);
   PT_1D_J1_Data_2mu_Box->SetBinError(4,1);
   PT_1D_J1_Data_2mu_Box->SetBinError(5,1.414214);
   PT_1D_J1_Data_2mu_Box->SetBinError(6,1.414214);
   PT_1D_J1_Data_2mu_Box->SetEntries(34);
   PT_1D_J1_Data_2mu_Box->SetStats(0);
   PT_1D_J1_Data_2mu_Box->SetMarkerStyle(20);
   PT_1D_J1_Data_2mu_Box->SetMarkerSize(0.7);
   PT_1D_J1_Data_2mu_Box->GetXaxis()->SetLabelFont(42);
   PT_1D_J1_Data_2mu_Box->GetXaxis()->SetLabelSize(0.035);
   PT_1D_J1_Data_2mu_Box->GetXaxis()->SetTitleSize(0.035);
   PT_1D_J1_Data_2mu_Box->GetXaxis()->SetTitleFont(42);
   PT_1D_J1_Data_2mu_Box->GetYaxis()->SetLabelFont(42);
   PT_1D_J1_Data_2mu_Box->GetYaxis()->SetLabelSize(0.035);
   PT_1D_J1_Data_2mu_Box->GetYaxis()->SetTitleSize(0.035);
   PT_1D_J1_Data_2mu_Box->GetYaxis()->SetTitleFont(42);
   PT_1D_J1_Data_2mu_Box->GetZaxis()->SetLabelFont(42);
   PT_1D_J1_Data_2mu_Box->GetZaxis()->SetLabelSize(0.035);
   PT_1D_J1_Data_2mu_Box->GetZaxis()->SetTitleSize(0.035);
   PT_1D_J1_Data_2mu_Box->GetZaxis()->SetTitleFont(42);
   PT_1D_J1_Data_2mu_Box->Draw("same");
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
   TLegendEntry *entry=leg->AddEntry("PT_1D_J1_5mu_BoxMC","W + jets","f");

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
   entry=leg->AddEntry("PT_1D_J1_5mu_BoxMC","Z(#nu#bar{#nu}) + jets","f");

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
   entry=leg->AddEntry("PT_1D_J1_5mu_BoxMC","t #bar{t} + jets","f");

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
   entry=leg->AddEntry("PT_1D_J1_5mu_BoxMC","Z/#gamma^{*}(ll) + jets","f");

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
   entry=leg->AddEntry("PT_1D_J1_Data_2mu_Box","Data","lep");
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
   RATIO->SetBinContent(1,1.147015);
   RATIO->SetBinContent(2,0.973458);
   RATIO->SetBinContent(3,0.4404192);
   RATIO->SetBinContent(4,1.088168);
   RATIO->SetBinContent(5,4.916476);
   RATIO->SetBinContent(6,8.791178);
   RATIO->SetBinError(1,0.2655735);
   RATIO->SetBinError(2,0.353294);
   RATIO->SetBinError(3,0.4436279);
   RATIO->SetBinError(4,1.103097);
   RATIO->SetBinError(5,3.682194);
   RATIO->SetBinError(6,6.717675);
   RATIO->SetMinimum(0);
   RATIO->SetMaximum(3.05);
   RATIO->SetEntries(4.996386);
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

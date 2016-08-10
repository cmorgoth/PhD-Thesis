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
   pad1->Range(-3.926991,-0.524978,3.926991,5.599137);
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
   
   TH1F *stack1_stack_39 = new TH1F("stack1_stack_39","",20,-3.141593,3.141593);
   stack1_stack_39->SetMinimum(0.2985534);
   stack1_stack_39->SetMaximum(96989.7);
   stack1_stack_39->SetDirectory(0);
   stack1_stack_39->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   stack1_stack_39->SetLineColor(ci);
   stack1_stack_39->GetXaxis()->SetLabelFont(42);
   stack1_stack_39->GetXaxis()->SetLabelSize(0.035);
   stack1_stack_39->GetXaxis()->SetTitleSize(0.035);
   stack1_stack_39->GetXaxis()->SetTitleFont(42);
   stack1_stack_39->GetYaxis()->SetTitle("Events");
   stack1_stack_39->GetYaxis()->SetLabelFont(42);
   stack1_stack_39->GetYaxis()->SetLabelSize(0.035);
   stack1_stack_39->GetYaxis()->SetTitleSize(0.035);
   stack1_stack_39->GetYaxis()->SetTitleOffset(1.25);
   stack1_stack_39->GetYaxis()->SetTitleFont(42);
   stack1_stack_39->GetZaxis()->SetLabelFont(42);
   stack1_stack_39->GetZaxis()->SetLabelSize(0.035);
   stack1_stack_39->GetZaxis()->SetTitleSize(0.035);
   stack1_stack_39->GetZaxis()->SetTitleFont(42);
   stack1->SetHistogram(stack1_stack_39);
   
   
   TH1F *PHI_1D_m2_2mu_BoxMC_v1 = new TH1F("PHI_1D_m2_2mu_BoxMC_v1","",20,-3.141593,3.141593);
   PHI_1D_m2_2mu_BoxMC_v1->SetBinContent(1,0.2016768);
   PHI_1D_m2_2mu_BoxMC_v1->SetBinContent(2,0.03805226);
   PHI_1D_m2_2mu_BoxMC_v1->SetBinContent(3,0.05008261);
   PHI_1D_m2_2mu_BoxMC_v1->SetBinContent(4,0.05801624);
   PHI_1D_m2_2mu_BoxMC_v1->SetBinContent(5,0.03650344);
   PHI_1D_m2_2mu_BoxMC_v1->SetBinContent(6,0.0361954);
   PHI_1D_m2_2mu_BoxMC_v1->SetBinContent(7,0.1953922);
   PHI_1D_m2_2mu_BoxMC_v1->SetBinContent(8,0.03683246);
   PHI_1D_m2_2mu_BoxMC_v1->SetBinContent(9,0.1684867);
   PHI_1D_m2_2mu_BoxMC_v1->SetBinContent(10,0.03072671);
   PHI_1D_m2_2mu_BoxMC_v1->SetBinContent(11,0.01396894);
   PHI_1D_m2_2mu_BoxMC_v1->SetBinContent(13,0.09414159);
   PHI_1D_m2_2mu_BoxMC_v1->SetBinContent(14,0.1018074);
   PHI_1D_m2_2mu_BoxMC_v1->SetBinContent(15,0.116873);
   PHI_1D_m2_2mu_BoxMC_v1->SetBinContent(16,0.01997161);
   PHI_1D_m2_2mu_BoxMC_v1->SetBinContent(17,0.03412801);
   PHI_1D_m2_2mu_BoxMC_v1->SetBinContent(19,0.1117253);
   PHI_1D_m2_2mu_BoxMC_v1->SetBinContent(20,0.08592889);
   PHI_1D_m2_2mu_BoxMC_v1->SetEntries(42);
   PHI_1D_m2_2mu_BoxMC_v1->SetStats(0);

   ci = TColor::GetColor("#3300cc");
   PHI_1D_m2_2mu_BoxMC_v1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   PHI_1D_m2_2mu_BoxMC_v1->SetLineColor(ci);
   PHI_1D_m2_2mu_BoxMC_v1->GetXaxis()->SetLabelFont(42);
   PHI_1D_m2_2mu_BoxMC_v1->GetXaxis()->SetLabelSize(0.035);
   PHI_1D_m2_2mu_BoxMC_v1->GetXaxis()->SetTitleSize(0.035);
   PHI_1D_m2_2mu_BoxMC_v1->GetXaxis()->SetTitleFont(42);
   PHI_1D_m2_2mu_BoxMC_v1->GetYaxis()->SetLabelFont(42);
   PHI_1D_m2_2mu_BoxMC_v1->GetYaxis()->SetLabelSize(0.035);
   PHI_1D_m2_2mu_BoxMC_v1->GetYaxis()->SetTitleSize(0.035);
   PHI_1D_m2_2mu_BoxMC_v1->GetYaxis()->SetTitleFont(42);
   PHI_1D_m2_2mu_BoxMC_v1->GetZaxis()->SetLabelFont(42);
   PHI_1D_m2_2mu_BoxMC_v1->GetZaxis()->SetLabelSize(0.035);
   PHI_1D_m2_2mu_BoxMC_v1->GetZaxis()->SetTitleSize(0.035);
   PHI_1D_m2_2mu_BoxMC_v1->GetZaxis()->SetTitleFont(42);
   stack1->Add(PHI_1D_m2_2mu_BoxMC_v1,"");
   
   TH1F *PHI_1D_m2_2mu_BoxMC_v1 = new TH1F("PHI_1D_m2_2mu_BoxMC_v1","",20,-3.141593,3.141593);
   PHI_1D_m2_2mu_BoxMC_v1->SetBinContent(1,0.03881807);
   PHI_1D_m2_2mu_BoxMC_v1->SetBinContent(2,0.0197472);
   PHI_1D_m2_2mu_BoxMC_v1->SetBinContent(3,0.02447891);
   PHI_1D_m2_2mu_BoxMC_v1->SetBinContent(5,0.04521134);
   PHI_1D_m2_2mu_BoxMC_v1->SetBinContent(6,0.02552859);
   PHI_1D_m2_2mu_BoxMC_v1->SetBinContent(7,0.05159469);
   PHI_1D_m2_2mu_BoxMC_v1->SetBinContent(9,0.02818236);
   PHI_1D_m2_2mu_BoxMC_v1->SetBinContent(11,0.04964542);
   PHI_1D_m2_2mu_BoxMC_v1->SetBinContent(13,0.03818734);
   PHI_1D_m2_2mu_BoxMC_v1->SetBinContent(14,0.02702407);
   PHI_1D_m2_2mu_BoxMC_v1->SetBinContent(15,0.103634);
   PHI_1D_m2_2mu_BoxMC_v1->SetBinContent(18,0.04457469);
   PHI_1D_m2_2mu_BoxMC_v1->SetBinContent(19,0.01649326);
   PHI_1D_m2_2mu_BoxMC_v1->SetBinContent(20,0.0990027);
   PHI_1D_m2_2mu_BoxMC_v1->SetEntries(18);
   PHI_1D_m2_2mu_BoxMC_v1->SetStats(0);

   ci = TColor::GetColor("#ff33cc");
   PHI_1D_m2_2mu_BoxMC_v1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   PHI_1D_m2_2mu_BoxMC_v1->SetLineColor(ci);
   PHI_1D_m2_2mu_BoxMC_v1->GetXaxis()->SetLabelFont(42);
   PHI_1D_m2_2mu_BoxMC_v1->GetXaxis()->SetLabelSize(0.035);
   PHI_1D_m2_2mu_BoxMC_v1->GetXaxis()->SetTitleSize(0.035);
   PHI_1D_m2_2mu_BoxMC_v1->GetXaxis()->SetTitleFont(42);
   PHI_1D_m2_2mu_BoxMC_v1->GetYaxis()->SetLabelFont(42);
   PHI_1D_m2_2mu_BoxMC_v1->GetYaxis()->SetLabelSize(0.035);
   PHI_1D_m2_2mu_BoxMC_v1->GetYaxis()->SetTitleSize(0.035);
   PHI_1D_m2_2mu_BoxMC_v1->GetYaxis()->SetTitleFont(42);
   PHI_1D_m2_2mu_BoxMC_v1->GetZaxis()->SetLabelFont(42);
   PHI_1D_m2_2mu_BoxMC_v1->GetZaxis()->SetLabelSize(0.035);
   PHI_1D_m2_2mu_BoxMC_v1->GetZaxis()->SetTitleSize(0.035);
   PHI_1D_m2_2mu_BoxMC_v1->GetZaxis()->SetTitleFont(42);
   stack1->Add(PHI_1D_m2_2mu_BoxMC_v1,"");
   
   TH1F *PHI_1D_m2_2mu_BoxMC_v1 = new TH1F("PHI_1D_m2_2mu_BoxMC_v1","",20,-3.141593,3.141593);
   PHI_1D_m2_2mu_BoxMC_v1->SetStats(0);

   ci = TColor::GetColor("#ffff33");
   PHI_1D_m2_2mu_BoxMC_v1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   PHI_1D_m2_2mu_BoxMC_v1->SetLineColor(ci);
   PHI_1D_m2_2mu_BoxMC_v1->GetXaxis()->SetLabelFont(42);
   PHI_1D_m2_2mu_BoxMC_v1->GetXaxis()->SetLabelSize(0.035);
   PHI_1D_m2_2mu_BoxMC_v1->GetXaxis()->SetTitleSize(0.035);
   PHI_1D_m2_2mu_BoxMC_v1->GetXaxis()->SetTitleFont(42);
   PHI_1D_m2_2mu_BoxMC_v1->GetYaxis()->SetLabelFont(42);
   PHI_1D_m2_2mu_BoxMC_v1->GetYaxis()->SetLabelSize(0.035);
   PHI_1D_m2_2mu_BoxMC_v1->GetYaxis()->SetTitleSize(0.035);
   PHI_1D_m2_2mu_BoxMC_v1->GetYaxis()->SetTitleFont(42);
   PHI_1D_m2_2mu_BoxMC_v1->GetZaxis()->SetLabelFont(42);
   PHI_1D_m2_2mu_BoxMC_v1->GetZaxis()->SetLabelSize(0.035);
   PHI_1D_m2_2mu_BoxMC_v1->GetZaxis()->SetTitleSize(0.035);
   PHI_1D_m2_2mu_BoxMC_v1->GetZaxis()->SetTitleFont(42);
   stack1->Add(PHI_1D_m2_2mu_BoxMC_v1,"");
   
   TH1F *PHI_1D_m2_2mu_BoxMC_v1 = new TH1F("PHI_1D_m2_2mu_BoxMC_v1","",20,-3.141593,3.141593);
   PHI_1D_m2_2mu_BoxMC_v1->SetStats(0);

   ci = TColor::GetColor("#669900");
   PHI_1D_m2_2mu_BoxMC_v1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   PHI_1D_m2_2mu_BoxMC_v1->SetLineColor(ci);
   PHI_1D_m2_2mu_BoxMC_v1->GetXaxis()->SetLabelFont(42);
   PHI_1D_m2_2mu_BoxMC_v1->GetXaxis()->SetLabelSize(0.035);
   PHI_1D_m2_2mu_BoxMC_v1->GetXaxis()->SetTitleSize(0.035);
   PHI_1D_m2_2mu_BoxMC_v1->GetXaxis()->SetTitleFont(42);
   PHI_1D_m2_2mu_BoxMC_v1->GetYaxis()->SetLabelFont(42);
   PHI_1D_m2_2mu_BoxMC_v1->GetYaxis()->SetLabelSize(0.035);
   PHI_1D_m2_2mu_BoxMC_v1->GetYaxis()->SetTitleSize(0.035);
   PHI_1D_m2_2mu_BoxMC_v1->GetYaxis()->SetTitleFont(42);
   PHI_1D_m2_2mu_BoxMC_v1->GetZaxis()->SetLabelFont(42);
   PHI_1D_m2_2mu_BoxMC_v1->GetZaxis()->SetLabelSize(0.035);
   PHI_1D_m2_2mu_BoxMC_v1->GetZaxis()->SetTitleSize(0.035);
   PHI_1D_m2_2mu_BoxMC_v1->GetZaxis()->SetTitleFont(42);
   stack1->Add(PHI_1D_m2_2mu_BoxMC_v1,"");
   stack1->Draw("");
   
   TH1F *PHI_1D_m2_Data_2mu_Box_v0 = new TH1F("PHI_1D_m2_Data_2mu_Box_v0","",20,-3.141593,3.141593);
   PHI_1D_m2_Data_2mu_Box_v0->SetBinContent(2,1);
   PHI_1D_m2_Data_2mu_Box_v0->SetBinContent(7,1);
   PHI_1D_m2_Data_2mu_Box_v0->SetBinContent(8,1);
   PHI_1D_m2_Data_2mu_Box_v0->SetBinContent(11,1);
   PHI_1D_m2_Data_2mu_Box_v0->SetBinContent(13,1);
   PHI_1D_m2_Data_2mu_Box_v0->SetBinError(2,1);
   PHI_1D_m2_Data_2mu_Box_v0->SetBinError(7,1);
   PHI_1D_m2_Data_2mu_Box_v0->SetBinError(8,1);
   PHI_1D_m2_Data_2mu_Box_v0->SetBinError(11,1);
   PHI_1D_m2_Data_2mu_Box_v0->SetBinError(13,1);
   PHI_1D_m2_Data_2mu_Box_v0->SetEntries(5);
   PHI_1D_m2_Data_2mu_Box_v0->SetStats(0);
   PHI_1D_m2_Data_2mu_Box_v0->SetMarkerStyle(20);
   PHI_1D_m2_Data_2mu_Box_v0->SetMarkerSize(0.7);
   PHI_1D_m2_Data_2mu_Box_v0->GetXaxis()->SetLabelFont(42);
   PHI_1D_m2_Data_2mu_Box_v0->GetXaxis()->SetLabelSize(0.035);
   PHI_1D_m2_Data_2mu_Box_v0->GetXaxis()->SetTitleSize(0.035);
   PHI_1D_m2_Data_2mu_Box_v0->GetXaxis()->SetTitleFont(42);
   PHI_1D_m2_Data_2mu_Box_v0->GetYaxis()->SetLabelFont(42);
   PHI_1D_m2_Data_2mu_Box_v0->GetYaxis()->SetLabelSize(0.035);
   PHI_1D_m2_Data_2mu_Box_v0->GetYaxis()->SetTitleSize(0.035);
   PHI_1D_m2_Data_2mu_Box_v0->GetYaxis()->SetTitleFont(42);
   PHI_1D_m2_Data_2mu_Box_v0->GetZaxis()->SetLabelFont(42);
   PHI_1D_m2_Data_2mu_Box_v0->GetZaxis()->SetLabelSize(0.035);
   PHI_1D_m2_Data_2mu_Box_v0->GetZaxis()->SetTitleSize(0.035);
   PHI_1D_m2_Data_2mu_Box_v0->GetZaxis()->SetTitleFont(42);
   PHI_1D_m2_Data_2mu_Box_v0->Draw("same");
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
   TLegendEntry *entry=leg->AddEntry("PHI_1D_m2_2mu_BoxMC_v1","W + jets","f");

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
   entry=leg->AddEntry("PHI_1D_m2_2mu_BoxMC_v1","Z(#nu#bar{#nu}) + jets","f");

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
   entry=leg->AddEntry("PHI_1D_m2_2mu_BoxMC_v1","t #bar{t} + jets","f");

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
   entry=leg->AddEntry("PHI_1D_m2_2mu_BoxMC_v1","Z/#gamma^{*}(ll) + jets","f");

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
   entry=leg->AddEntry("PHI_1D_m2_Data_2mu_Box_v0","Data","lep");
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
   
   TH1F *RATIO = new TH1F("RATIO","",20,-3.141593,3.141593);
   RATIO->SetBinContent(2,17.3012);
   RATIO->SetBinContent(7,4.048799);
   RATIO->SetBinContent(8,27.14997);
   RATIO->SetBinContent(11,15.71972);
   RATIO->SetBinContent(13,7.556927);
   RATIO->SetBinError(2,21.54086);
   RATIO->SetBinError(7,4.589991);
   RATIO->SetBinError(8,33.37346);
   RATIO->SetBinError(11,20.23673);
   RATIO->SetBinError(13,8.521214);
   RATIO->SetMinimum(0);
   RATIO->SetMaximum(3.05);
   RATIO->SetEntries(2.475675);
   RATIO->SetStats(0);
   RATIO->SetFillColor(4);
   RATIO->SetLineColor(4);
   RATIO->SetMarkerColor(4);
   RATIO->SetMarkerStyle(20);
   RATIO->SetMarkerSize(0.7);
   RATIO->GetXaxis()->SetTitle("#phi_{#mu}");
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

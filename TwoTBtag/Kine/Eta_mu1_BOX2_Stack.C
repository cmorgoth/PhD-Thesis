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
   
   TH1F *stack1_stack_35 = new TH1F("stack1_stack_35","",20,-3,3);
   stack1_stack_35->SetMinimum(0.2985534);
   stack1_stack_35->SetMaximum(96989.7);
   stack1_stack_35->SetDirectory(0);
   stack1_stack_35->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   stack1_stack_35->SetLineColor(ci);
   stack1_stack_35->GetXaxis()->SetLabelFont(42);
   stack1_stack_35->GetXaxis()->SetLabelSize(0.035);
   stack1_stack_35->GetXaxis()->SetTitleSize(0.035);
   stack1_stack_35->GetXaxis()->SetTitleFont(42);
   stack1_stack_35->GetYaxis()->SetTitle("Events");
   stack1_stack_35->GetYaxis()->SetLabelFont(42);
   stack1_stack_35->GetYaxis()->SetLabelSize(0.035);
   stack1_stack_35->GetYaxis()->SetTitleSize(0.035);
   stack1_stack_35->GetYaxis()->SetTitleOffset(1.25);
   stack1_stack_35->GetYaxis()->SetTitleFont(42);
   stack1_stack_35->GetZaxis()->SetLabelFont(42);
   stack1_stack_35->GetZaxis()->SetLabelSize(0.035);
   stack1_stack_35->GetZaxis()->SetTitleSize(0.035);
   stack1_stack_35->GetZaxis()->SetTitleFont(42);
   stack1->SetHistogram(stack1_stack_35);
   
   
   TH1F *ETA_1D_m1_2mu_BoxMC_v1 = new TH1F("ETA_1D_m1_2mu_BoxMC_v1","",20,-3,3);
   ETA_1D_m1_2mu_BoxMC_v1->SetBinContent(4,0.01491099);
   ETA_1D_m1_2mu_BoxMC_v1->SetBinContent(5,0.1109121);
   ETA_1D_m1_2mu_BoxMC_v1->SetBinContent(7,0.02403313);
   ETA_1D_m1_2mu_BoxMC_v1->SetBinContent(8,0.2188462);
   ETA_1D_m1_2mu_BoxMC_v1->SetBinContent(9,0.1886625);
   ETA_1D_m1_2mu_BoxMC_v1->SetBinContent(10,0.05919985);
   ETA_1D_m1_2mu_BoxMC_v1->SetBinContent(11,0.1800397);
   ETA_1D_m1_2mu_BoxMC_v1->SetBinContent(12,0.2014935);
   ETA_1D_m1_2mu_BoxMC_v1->SetBinContent(13,0.2241044);
   ETA_1D_m1_2mu_BoxMC_v1->SetBinContent(14,0.07087917);
   ETA_1D_m1_2mu_BoxMC_v1->SetBinContent(15,0.03380775);
   ETA_1D_m1_2mu_BoxMC_v1->SetBinContent(16,0.08516445);
   ETA_1D_m1_2mu_BoxMC_v1->SetBinContent(17,0.01845589);
   ETA_1D_m1_2mu_BoxMC_v1->SetEntries(42);
   ETA_1D_m1_2mu_BoxMC_v1->SetStats(0);

   ci = TColor::GetColor("#3300cc");
   ETA_1D_m1_2mu_BoxMC_v1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   ETA_1D_m1_2mu_BoxMC_v1->SetLineColor(ci);
   ETA_1D_m1_2mu_BoxMC_v1->GetXaxis()->SetLabelFont(42);
   ETA_1D_m1_2mu_BoxMC_v1->GetXaxis()->SetLabelSize(0.035);
   ETA_1D_m1_2mu_BoxMC_v1->GetXaxis()->SetTitleSize(0.035);
   ETA_1D_m1_2mu_BoxMC_v1->GetXaxis()->SetTitleFont(42);
   ETA_1D_m1_2mu_BoxMC_v1->GetYaxis()->SetLabelFont(42);
   ETA_1D_m1_2mu_BoxMC_v1->GetYaxis()->SetLabelSize(0.035);
   ETA_1D_m1_2mu_BoxMC_v1->GetYaxis()->SetTitleSize(0.035);
   ETA_1D_m1_2mu_BoxMC_v1->GetYaxis()->SetTitleFont(42);
   ETA_1D_m1_2mu_BoxMC_v1->GetZaxis()->SetLabelFont(42);
   ETA_1D_m1_2mu_BoxMC_v1->GetZaxis()->SetLabelSize(0.035);
   ETA_1D_m1_2mu_BoxMC_v1->GetZaxis()->SetTitleSize(0.035);
   ETA_1D_m1_2mu_BoxMC_v1->GetZaxis()->SetTitleFont(42);
   stack1->Add(ETA_1D_m1_2mu_BoxMC_v1,"");
   
   TH1F *ETA_1D_m1_2mu_BoxMC_v1 = new TH1F("ETA_1D_m1_2mu_BoxMC_v1","",20,-3,3);
   ETA_1D_m1_2mu_BoxMC_v1->SetBinContent(4,0.03881807);
   ETA_1D_m1_2mu_BoxMC_v1->SetBinContent(5,0.04457469);
   ETA_1D_m1_2mu_BoxMC_v1->SetBinContent(8,0.04496268);
   ETA_1D_m1_2mu_BoxMC_v1->SetBinContent(9,0.1501188);
   ETA_1D_m1_2mu_BoxMC_v1->SetBinContent(10,0.1310426);
   ETA_1D_m1_2mu_BoxMC_v1->SetBinContent(11,0.02702407);
   ETA_1D_m1_2mu_BoxMC_v1->SetBinContent(12,0.04195869);
   ETA_1D_m1_2mu_BoxMC_v1->SetBinContent(13,0.02818236);
   ETA_1D_m1_2mu_BoxMC_v1->SetBinContent(14,0.04964542);
   ETA_1D_m1_2mu_BoxMC_v1->SetBinContent(15,0.05579524);
   ETA_1D_m1_2mu_BoxMC_v1->SetEntries(18);
   ETA_1D_m1_2mu_BoxMC_v1->SetStats(0);

   ci = TColor::GetColor("#ff33cc");
   ETA_1D_m1_2mu_BoxMC_v1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   ETA_1D_m1_2mu_BoxMC_v1->SetLineColor(ci);
   ETA_1D_m1_2mu_BoxMC_v1->GetXaxis()->SetLabelFont(42);
   ETA_1D_m1_2mu_BoxMC_v1->GetXaxis()->SetLabelSize(0.035);
   ETA_1D_m1_2mu_BoxMC_v1->GetXaxis()->SetTitleSize(0.035);
   ETA_1D_m1_2mu_BoxMC_v1->GetXaxis()->SetTitleFont(42);
   ETA_1D_m1_2mu_BoxMC_v1->GetYaxis()->SetLabelFont(42);
   ETA_1D_m1_2mu_BoxMC_v1->GetYaxis()->SetLabelSize(0.035);
   ETA_1D_m1_2mu_BoxMC_v1->GetYaxis()->SetTitleSize(0.035);
   ETA_1D_m1_2mu_BoxMC_v1->GetYaxis()->SetTitleFont(42);
   ETA_1D_m1_2mu_BoxMC_v1->GetZaxis()->SetLabelFont(42);
   ETA_1D_m1_2mu_BoxMC_v1->GetZaxis()->SetLabelSize(0.035);
   ETA_1D_m1_2mu_BoxMC_v1->GetZaxis()->SetTitleSize(0.035);
   ETA_1D_m1_2mu_BoxMC_v1->GetZaxis()->SetTitleFont(42);
   stack1->Add(ETA_1D_m1_2mu_BoxMC_v1,"");
   
   TH1F *ETA_1D_m1_2mu_BoxMC_v1 = new TH1F("ETA_1D_m1_2mu_BoxMC_v1","",20,-3,3);
   ETA_1D_m1_2mu_BoxMC_v1->SetStats(0);

   ci = TColor::GetColor("#ffff33");
   ETA_1D_m1_2mu_BoxMC_v1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   ETA_1D_m1_2mu_BoxMC_v1->SetLineColor(ci);
   ETA_1D_m1_2mu_BoxMC_v1->GetXaxis()->SetLabelFont(42);
   ETA_1D_m1_2mu_BoxMC_v1->GetXaxis()->SetLabelSize(0.035);
   ETA_1D_m1_2mu_BoxMC_v1->GetXaxis()->SetTitleSize(0.035);
   ETA_1D_m1_2mu_BoxMC_v1->GetXaxis()->SetTitleFont(42);
   ETA_1D_m1_2mu_BoxMC_v1->GetYaxis()->SetLabelFont(42);
   ETA_1D_m1_2mu_BoxMC_v1->GetYaxis()->SetLabelSize(0.035);
   ETA_1D_m1_2mu_BoxMC_v1->GetYaxis()->SetTitleSize(0.035);
   ETA_1D_m1_2mu_BoxMC_v1->GetYaxis()->SetTitleFont(42);
   ETA_1D_m1_2mu_BoxMC_v1->GetZaxis()->SetLabelFont(42);
   ETA_1D_m1_2mu_BoxMC_v1->GetZaxis()->SetLabelSize(0.035);
   ETA_1D_m1_2mu_BoxMC_v1->GetZaxis()->SetTitleSize(0.035);
   ETA_1D_m1_2mu_BoxMC_v1->GetZaxis()->SetTitleFont(42);
   stack1->Add(ETA_1D_m1_2mu_BoxMC_v1,"");
   
   TH1F *ETA_1D_m1_2mu_BoxMC_v1 = new TH1F("ETA_1D_m1_2mu_BoxMC_v1","",20,-3,3);
   ETA_1D_m1_2mu_BoxMC_v1->SetStats(0);

   ci = TColor::GetColor("#669900");
   ETA_1D_m1_2mu_BoxMC_v1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   ETA_1D_m1_2mu_BoxMC_v1->SetLineColor(ci);
   ETA_1D_m1_2mu_BoxMC_v1->GetXaxis()->SetLabelFont(42);
   ETA_1D_m1_2mu_BoxMC_v1->GetXaxis()->SetLabelSize(0.035);
   ETA_1D_m1_2mu_BoxMC_v1->GetXaxis()->SetTitleSize(0.035);
   ETA_1D_m1_2mu_BoxMC_v1->GetXaxis()->SetTitleFont(42);
   ETA_1D_m1_2mu_BoxMC_v1->GetYaxis()->SetLabelFont(42);
   ETA_1D_m1_2mu_BoxMC_v1->GetYaxis()->SetLabelSize(0.035);
   ETA_1D_m1_2mu_BoxMC_v1->GetYaxis()->SetTitleSize(0.035);
   ETA_1D_m1_2mu_BoxMC_v1->GetYaxis()->SetTitleFont(42);
   ETA_1D_m1_2mu_BoxMC_v1->GetZaxis()->SetLabelFont(42);
   ETA_1D_m1_2mu_BoxMC_v1->GetZaxis()->SetLabelSize(0.035);
   ETA_1D_m1_2mu_BoxMC_v1->GetZaxis()->SetTitleSize(0.035);
   ETA_1D_m1_2mu_BoxMC_v1->GetZaxis()->SetTitleFont(42);
   stack1->Add(ETA_1D_m1_2mu_BoxMC_v1,"");
   stack1->Draw("");
   
   TH1F *ETA_1D_m1_Data_2mu_Box_v0 = new TH1F("ETA_1D_m1_Data_2mu_Box_v0","",20,-3,3);
   ETA_1D_m1_Data_2mu_Box_v0->SetBinContent(7,2);
   ETA_1D_m1_Data_2mu_Box_v0->SetBinContent(9,1);
   ETA_1D_m1_Data_2mu_Box_v0->SetBinContent(14,1);
   ETA_1D_m1_Data_2mu_Box_v0->SetBinContent(17,1);
   ETA_1D_m1_Data_2mu_Box_v0->SetBinError(7,1.414214);
   ETA_1D_m1_Data_2mu_Box_v0->SetBinError(9,1);
   ETA_1D_m1_Data_2mu_Box_v0->SetBinError(14,1);
   ETA_1D_m1_Data_2mu_Box_v0->SetBinError(17,1);
   ETA_1D_m1_Data_2mu_Box_v0->SetEntries(5);
   ETA_1D_m1_Data_2mu_Box_v0->SetStats(0);
   ETA_1D_m1_Data_2mu_Box_v0->SetMarkerStyle(20);
   ETA_1D_m1_Data_2mu_Box_v0->SetMarkerSize(0.7);
   ETA_1D_m1_Data_2mu_Box_v0->GetXaxis()->SetLabelFont(42);
   ETA_1D_m1_Data_2mu_Box_v0->GetXaxis()->SetLabelSize(0.035);
   ETA_1D_m1_Data_2mu_Box_v0->GetXaxis()->SetTitleSize(0.035);
   ETA_1D_m1_Data_2mu_Box_v0->GetXaxis()->SetTitleFont(42);
   ETA_1D_m1_Data_2mu_Box_v0->GetYaxis()->SetLabelFont(42);
   ETA_1D_m1_Data_2mu_Box_v0->GetYaxis()->SetLabelSize(0.035);
   ETA_1D_m1_Data_2mu_Box_v0->GetYaxis()->SetTitleSize(0.035);
   ETA_1D_m1_Data_2mu_Box_v0->GetYaxis()->SetTitleFont(42);
   ETA_1D_m1_Data_2mu_Box_v0->GetZaxis()->SetLabelFont(42);
   ETA_1D_m1_Data_2mu_Box_v0->GetZaxis()->SetLabelSize(0.035);
   ETA_1D_m1_Data_2mu_Box_v0->GetZaxis()->SetTitleSize(0.035);
   ETA_1D_m1_Data_2mu_Box_v0->GetZaxis()->SetTitleFont(42);
   ETA_1D_m1_Data_2mu_Box_v0->Draw("same");
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
   TLegendEntry *entry=leg->AddEntry("ETA_1D_m1_2mu_BoxMC_v1","W + jets","f");

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
   entry=leg->AddEntry("ETA_1D_m1_2mu_BoxMC_v1","Z(#nu#bar{#nu}) + jets","f");

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
   entry=leg->AddEntry("ETA_1D_m1_2mu_BoxMC_v1","t #bar{t} + jets","f");

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
   entry=leg->AddEntry("ETA_1D_m1_2mu_BoxMC_v1","Z/#gamma^{*}(ll) + jets","f");

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
   entry=leg->AddEntry("ETA_1D_m1_Data_2mu_Box_v0","Data","lep");
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
   RATIO->SetBinContent(7,83.21844);
   RATIO->SetBinContent(9,2.951757);
   RATIO->SetBinContent(14,8.297062);
   RATIO->SetBinContent(17,54.18324);
   RATIO->SetBinError(7,101.9214);
   RATIO->SetBinError(9,3.084713);
   RATIO->SetBinError(14,9.35991);
   RATIO->SetBinError(17,76.62667);
   RATIO->SetMinimum(0);
   RATIO->SetMaximum(3.05);
   RATIO->SetEntries(1.35094);
   RATIO->SetStats(0);
   RATIO->SetFillColor(4);
   RATIO->SetLineColor(4);
   RATIO->SetMarkerColor(4);
   RATIO->SetMarkerStyle(20);
   RATIO->SetMarkerSize(0.7);
   RATIO->GetXaxis()->SetTitle("#eta_{#mu}");
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

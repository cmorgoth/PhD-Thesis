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
   
   TH1F *stack1_stack_38 = new TH1F("stack1_stack_38","",20,-3,3);
   stack1_stack_38->SetMinimum(0.2985534);
   stack1_stack_38->SetMaximum(96989.7);
   stack1_stack_38->SetDirectory(0);
   stack1_stack_38->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   stack1_stack_38->SetLineColor(ci);
   stack1_stack_38->GetXaxis()->SetLabelFont(42);
   stack1_stack_38->GetXaxis()->SetLabelSize(0.035);
   stack1_stack_38->GetXaxis()->SetTitleSize(0.035);
   stack1_stack_38->GetXaxis()->SetTitleFont(42);
   stack1_stack_38->GetYaxis()->SetTitle("Events");
   stack1_stack_38->GetYaxis()->SetLabelFont(42);
   stack1_stack_38->GetYaxis()->SetLabelSize(0.035);
   stack1_stack_38->GetYaxis()->SetTitleSize(0.035);
   stack1_stack_38->GetYaxis()->SetTitleOffset(1.25);
   stack1_stack_38->GetYaxis()->SetTitleFont(42);
   stack1_stack_38->GetZaxis()->SetLabelFont(42);
   stack1_stack_38->GetZaxis()->SetLabelSize(0.035);
   stack1_stack_38->GetZaxis()->SetTitleSize(0.035);
   stack1_stack_38->GetZaxis()->SetTitleFont(42);
   stack1->SetHistogram(stack1_stack_38);
   
   
   TH1F *ETA_1D_m2_2mu_BoxMC_v1 = new TH1F("ETA_1D_m2_2mu_BoxMC_v1","",20,-3,3);
   ETA_1D_m2_2mu_BoxMC_v1->SetBinContent(3,0.02212206);
   ETA_1D_m2_2mu_BoxMC_v1->SetBinContent(4,0.08879009);
   ETA_1D_m2_2mu_BoxMC_v1->SetBinContent(5,0.01491099);
   ETA_1D_m2_2mu_BoxMC_v1->SetBinContent(6,0.05598623);
   ETA_1D_m2_2mu_BoxMC_v1->SetBinContent(7,0.02965381);
   ETA_1D_m2_2mu_BoxMC_v1->SetBinContent(8,0.08840246);
   ETA_1D_m2_2mu_BoxMC_v1->SetBinContent(9,0.2604715);
   ETA_1D_m2_2mu_BoxMC_v1->SetBinContent(10,0.1875122);
   ETA_1D_m2_2mu_BoxMC_v1->SetBinContent(11,0.07735808);
   ETA_1D_m2_2mu_BoxMC_v1->SetBinContent(12,0.1143056);
   ETA_1D_m2_2mu_BoxMC_v1->SetBinContent(13,0.1080554);
   ETA_1D_m2_2mu_BoxMC_v1->SetBinContent(14,0.1082482);
   ETA_1D_m2_2mu_BoxMC_v1->SetBinContent(15,0.1475591);
   ETA_1D_m2_2mu_BoxMC_v1->SetBinContent(16,0.1132069);
   ETA_1D_m2_2mu_BoxMC_v1->SetBinContent(17,0.01392703);
   ETA_1D_m2_2mu_BoxMC_v1->SetEntries(42);
   ETA_1D_m2_2mu_BoxMC_v1->SetStats(0);

   ci = TColor::GetColor("#3300cc");
   ETA_1D_m2_2mu_BoxMC_v1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   ETA_1D_m2_2mu_BoxMC_v1->SetLineColor(ci);
   ETA_1D_m2_2mu_BoxMC_v1->GetXaxis()->SetLabelFont(42);
   ETA_1D_m2_2mu_BoxMC_v1->GetXaxis()->SetLabelSize(0.035);
   ETA_1D_m2_2mu_BoxMC_v1->GetXaxis()->SetTitleSize(0.035);
   ETA_1D_m2_2mu_BoxMC_v1->GetXaxis()->SetTitleFont(42);
   ETA_1D_m2_2mu_BoxMC_v1->GetYaxis()->SetLabelFont(42);
   ETA_1D_m2_2mu_BoxMC_v1->GetYaxis()->SetLabelSize(0.035);
   ETA_1D_m2_2mu_BoxMC_v1->GetYaxis()->SetTitleSize(0.035);
   ETA_1D_m2_2mu_BoxMC_v1->GetYaxis()->SetTitleFont(42);
   ETA_1D_m2_2mu_BoxMC_v1->GetZaxis()->SetLabelFont(42);
   ETA_1D_m2_2mu_BoxMC_v1->GetZaxis()->SetLabelSize(0.035);
   ETA_1D_m2_2mu_BoxMC_v1->GetZaxis()->SetTitleSize(0.035);
   ETA_1D_m2_2mu_BoxMC_v1->GetZaxis()->SetTitleFont(42);
   stack1->Add(ETA_1D_m2_2mu_BoxMC_v1,"");
   
   TH1F *ETA_1D_m2_2mu_BoxMC_v1 = new TH1F("ETA_1D_m2_2mu_BoxMC_v1","",20,-3,3);
   ETA_1D_m2_2mu_BoxMC_v1->SetBinContent(5,0.0586713);
   ETA_1D_m2_2mu_BoxMC_v1->SetBinContent(7,0.05920455);
   ETA_1D_m2_2mu_BoxMC_v1->SetBinContent(8,0.1234816);
   ETA_1D_m2_2mu_BoxMC_v1->SetBinContent(9,0.1104168);
   ETA_1D_m2_2mu_BoxMC_v1->SetBinContent(10,0.01649326);
   ETA_1D_m2_2mu_BoxMC_v1->SetBinContent(11,0.03818734);
   ETA_1D_m2_2mu_BoxMC_v1->SetBinContent(12,0.08670646);
   ETA_1D_m2_2mu_BoxMC_v1->SetBinContent(13,0.05725538);
   ETA_1D_m2_2mu_BoxMC_v1->SetBinContent(15,0.0452758);
   ETA_1D_m2_2mu_BoxMC_v1->SetBinContent(17,0.0164301);
   ETA_1D_m2_2mu_BoxMC_v1->SetEntries(18);
   ETA_1D_m2_2mu_BoxMC_v1->SetStats(0);

   ci = TColor::GetColor("#ff33cc");
   ETA_1D_m2_2mu_BoxMC_v1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   ETA_1D_m2_2mu_BoxMC_v1->SetLineColor(ci);
   ETA_1D_m2_2mu_BoxMC_v1->GetXaxis()->SetLabelFont(42);
   ETA_1D_m2_2mu_BoxMC_v1->GetXaxis()->SetLabelSize(0.035);
   ETA_1D_m2_2mu_BoxMC_v1->GetXaxis()->SetTitleSize(0.035);
   ETA_1D_m2_2mu_BoxMC_v1->GetXaxis()->SetTitleFont(42);
   ETA_1D_m2_2mu_BoxMC_v1->GetYaxis()->SetLabelFont(42);
   ETA_1D_m2_2mu_BoxMC_v1->GetYaxis()->SetLabelSize(0.035);
   ETA_1D_m2_2mu_BoxMC_v1->GetYaxis()->SetTitleSize(0.035);
   ETA_1D_m2_2mu_BoxMC_v1->GetYaxis()->SetTitleFont(42);
   ETA_1D_m2_2mu_BoxMC_v1->GetZaxis()->SetLabelFont(42);
   ETA_1D_m2_2mu_BoxMC_v1->GetZaxis()->SetLabelSize(0.035);
   ETA_1D_m2_2mu_BoxMC_v1->GetZaxis()->SetTitleSize(0.035);
   ETA_1D_m2_2mu_BoxMC_v1->GetZaxis()->SetTitleFont(42);
   stack1->Add(ETA_1D_m2_2mu_BoxMC_v1,"");
   
   TH1F *ETA_1D_m2_2mu_BoxMC_v1 = new TH1F("ETA_1D_m2_2mu_BoxMC_v1","",20,-3,3);
   ETA_1D_m2_2mu_BoxMC_v1->SetStats(0);

   ci = TColor::GetColor("#ffff33");
   ETA_1D_m2_2mu_BoxMC_v1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   ETA_1D_m2_2mu_BoxMC_v1->SetLineColor(ci);
   ETA_1D_m2_2mu_BoxMC_v1->GetXaxis()->SetLabelFont(42);
   ETA_1D_m2_2mu_BoxMC_v1->GetXaxis()->SetLabelSize(0.035);
   ETA_1D_m2_2mu_BoxMC_v1->GetXaxis()->SetTitleSize(0.035);
   ETA_1D_m2_2mu_BoxMC_v1->GetXaxis()->SetTitleFont(42);
   ETA_1D_m2_2mu_BoxMC_v1->GetYaxis()->SetLabelFont(42);
   ETA_1D_m2_2mu_BoxMC_v1->GetYaxis()->SetLabelSize(0.035);
   ETA_1D_m2_2mu_BoxMC_v1->GetYaxis()->SetTitleSize(0.035);
   ETA_1D_m2_2mu_BoxMC_v1->GetYaxis()->SetTitleFont(42);
   ETA_1D_m2_2mu_BoxMC_v1->GetZaxis()->SetLabelFont(42);
   ETA_1D_m2_2mu_BoxMC_v1->GetZaxis()->SetLabelSize(0.035);
   ETA_1D_m2_2mu_BoxMC_v1->GetZaxis()->SetTitleSize(0.035);
   ETA_1D_m2_2mu_BoxMC_v1->GetZaxis()->SetTitleFont(42);
   stack1->Add(ETA_1D_m2_2mu_BoxMC_v1,"");
   
   TH1F *ETA_1D_m2_2mu_BoxMC_v1 = new TH1F("ETA_1D_m2_2mu_BoxMC_v1","",20,-3,3);
   ETA_1D_m2_2mu_BoxMC_v1->SetStats(0);

   ci = TColor::GetColor("#669900");
   ETA_1D_m2_2mu_BoxMC_v1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   ETA_1D_m2_2mu_BoxMC_v1->SetLineColor(ci);
   ETA_1D_m2_2mu_BoxMC_v1->GetXaxis()->SetLabelFont(42);
   ETA_1D_m2_2mu_BoxMC_v1->GetXaxis()->SetLabelSize(0.035);
   ETA_1D_m2_2mu_BoxMC_v1->GetXaxis()->SetTitleSize(0.035);
   ETA_1D_m2_2mu_BoxMC_v1->GetXaxis()->SetTitleFont(42);
   ETA_1D_m2_2mu_BoxMC_v1->GetYaxis()->SetLabelFont(42);
   ETA_1D_m2_2mu_BoxMC_v1->GetYaxis()->SetLabelSize(0.035);
   ETA_1D_m2_2mu_BoxMC_v1->GetYaxis()->SetTitleSize(0.035);
   ETA_1D_m2_2mu_BoxMC_v1->GetYaxis()->SetTitleFont(42);
   ETA_1D_m2_2mu_BoxMC_v1->GetZaxis()->SetLabelFont(42);
   ETA_1D_m2_2mu_BoxMC_v1->GetZaxis()->SetLabelSize(0.035);
   ETA_1D_m2_2mu_BoxMC_v1->GetZaxis()->SetTitleSize(0.035);
   ETA_1D_m2_2mu_BoxMC_v1->GetZaxis()->SetTitleFont(42);
   stack1->Add(ETA_1D_m2_2mu_BoxMC_v1,"");
   stack1->Draw("");
   
   TH1F *ETA_1D_m2_Data_2mu_Box_v0 = new TH1F("ETA_1D_m2_Data_2mu_Box_v0","",20,-3,3);
   ETA_1D_m2_Data_2mu_Box_v0->SetBinContent(6,1);
   ETA_1D_m2_Data_2mu_Box_v0->SetBinContent(10,1);
   ETA_1D_m2_Data_2mu_Box_v0->SetBinContent(13,2);
   ETA_1D_m2_Data_2mu_Box_v0->SetBinContent(18,1);
   ETA_1D_m2_Data_2mu_Box_v0->SetBinError(6,1);
   ETA_1D_m2_Data_2mu_Box_v0->SetBinError(10,1);
   ETA_1D_m2_Data_2mu_Box_v0->SetBinError(13,1.414214);
   ETA_1D_m2_Data_2mu_Box_v0->SetBinError(18,1);
   ETA_1D_m2_Data_2mu_Box_v0->SetEntries(5);
   ETA_1D_m2_Data_2mu_Box_v0->SetStats(0);
   ETA_1D_m2_Data_2mu_Box_v0->SetMarkerStyle(20);
   ETA_1D_m2_Data_2mu_Box_v0->SetMarkerSize(0.7);
   ETA_1D_m2_Data_2mu_Box_v0->GetXaxis()->SetLabelFont(42);
   ETA_1D_m2_Data_2mu_Box_v0->GetXaxis()->SetLabelSize(0.035);
   ETA_1D_m2_Data_2mu_Box_v0->GetXaxis()->SetTitleSize(0.035);
   ETA_1D_m2_Data_2mu_Box_v0->GetXaxis()->SetTitleFont(42);
   ETA_1D_m2_Data_2mu_Box_v0->GetYaxis()->SetLabelFont(42);
   ETA_1D_m2_Data_2mu_Box_v0->GetYaxis()->SetLabelSize(0.035);
   ETA_1D_m2_Data_2mu_Box_v0->GetYaxis()->SetTitleSize(0.035);
   ETA_1D_m2_Data_2mu_Box_v0->GetYaxis()->SetTitleFont(42);
   ETA_1D_m2_Data_2mu_Box_v0->GetZaxis()->SetLabelFont(42);
   ETA_1D_m2_Data_2mu_Box_v0->GetZaxis()->SetLabelSize(0.035);
   ETA_1D_m2_Data_2mu_Box_v0->GetZaxis()->SetTitleSize(0.035);
   ETA_1D_m2_Data_2mu_Box_v0->GetZaxis()->SetTitleFont(42);
   ETA_1D_m2_Data_2mu_Box_v0->Draw("same");
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
   TLegendEntry *entry=leg->AddEntry("ETA_1D_m2_2mu_BoxMC_v1","W + jets","f");

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
   entry=leg->AddEntry("ETA_1D_m2_2mu_BoxMC_v1","Z(#nu#bar{#nu}) + jets","f");

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
   entry=leg->AddEntry("ETA_1D_m2_2mu_BoxMC_v1","t #bar{t} + jets","f");

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
   entry=leg->AddEntry("ETA_1D_m2_2mu_BoxMC_v1","Z/#gamma^{*}(ll) + jets","f");

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
   entry=leg->AddEntry("ETA_1D_m2_Data_2mu_Box_v0","Data","lep");
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
   RATIO->SetBinContent(6,17.86154);
   RATIO->SetBinContent(10,4.901828);
   RATIO->SetBinContent(13,12.09842);
   RATIO->SetBinError(6,21.20575);
   RATIO->SetBinError(10,5.455575);
   RATIO->SetBinError(13,10.28194);
   RATIO->SetMinimum(0);
   RATIO->SetMaximum(3.05);
   RATIO->SetEntries(2.076923);
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

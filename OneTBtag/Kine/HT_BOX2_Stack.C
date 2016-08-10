{
//=========Macro generated from canvas: C/C      
//=========  (Fri Sep 12 01:10:21 2014) by ROOT version5.34/19
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
   
   TH1F *stack1_stack_46 = new TH1F("stack1_stack_46","",20,0,1400);
   stack1_stack_46->SetMinimum(0.2985534);
   stack1_stack_46->SetMaximum(96989.7);
   stack1_stack_46->SetDirectory(0);
   stack1_stack_46->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   stack1_stack_46->SetLineColor(ci);
   stack1_stack_46->GetXaxis()->SetLabelFont(42);
   stack1_stack_46->GetXaxis()->SetLabelSize(0.035);
   stack1_stack_46->GetXaxis()->SetTitleSize(0.035);
   stack1_stack_46->GetXaxis()->SetTitleFont(42);
   stack1_stack_46->GetYaxis()->SetTitle("Events");
   stack1_stack_46->GetYaxis()->SetLabelFont(42);
   stack1_stack_46->GetYaxis()->SetLabelSize(0.035);
   stack1_stack_46->GetYaxis()->SetTitleSize(0.035);
   stack1_stack_46->GetYaxis()->SetTitleOffset(1.25);
   stack1_stack_46->GetYaxis()->SetTitleFont(42);
   stack1_stack_46->GetZaxis()->SetLabelFont(42);
   stack1_stack_46->GetZaxis()->SetLabelSize(0.035);
   stack1_stack_46->GetZaxis()->SetTitleSize(0.035);
   stack1_stack_46->GetZaxis()->SetTitleFont(42);
   stack1->SetHistogram(stack1_stack_46);
   
   
   TH1F *HT_2mu_5 = new TH1F("HT_2mu_5","",20,0,1400);
   HT_2mu_5->SetBinContent(3,2.976844);
   HT_2mu_5->SetBinContent(4,8.532404);
   HT_2mu_5->SetBinContent(5,5.10772);
   HT_2mu_5->SetBinContent(6,1.547461);
   HT_2mu_5->SetBinContent(7,0.9033347);
   HT_2mu_5->SetBinContent(8,0.6621811);
   HT_2mu_5->SetBinContent(9,0.1788364);
   HT_2mu_5->SetBinContent(10,0.2288831);
   HT_2mu_5->SetBinContent(11,0.1069222);
   HT_2mu_5->SetBinContent(12,0.02385604);
   HT_2mu_5->SetEntries(524);
   HT_2mu_5->SetStats(0);

   ci = TColor::GetColor("#3300cc");
   HT_2mu_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   HT_2mu_5->SetLineColor(ci);
   HT_2mu_5->GetXaxis()->SetLabelFont(42);
   HT_2mu_5->GetXaxis()->SetLabelSize(0.035);
   HT_2mu_5->GetXaxis()->SetTitleSize(0.035);
   HT_2mu_5->GetXaxis()->SetTitleFont(42);
   HT_2mu_5->GetYaxis()->SetLabelFont(42);
   HT_2mu_5->GetYaxis()->SetLabelSize(0.035);
   HT_2mu_5->GetYaxis()->SetTitleSize(0.035);
   HT_2mu_5->GetYaxis()->SetTitleFont(42);
   HT_2mu_5->GetZaxis()->SetLabelFont(42);
   HT_2mu_5->GetZaxis()->SetLabelSize(0.035);
   HT_2mu_5->GetZaxis()->SetTitleSize(0.035);
   HT_2mu_5->GetZaxis()->SetTitleFont(42);
   stack1->Add(HT_2mu_5,"");
   
   TH1F *HT_2mu_5 = new TH1F("HT_2mu_5","",20,0,1400);
   HT_2mu_5->SetBinContent(3,1.699115);
   HT_2mu_5->SetBinContent(4,4.298765);
   HT_2mu_5->SetBinContent(5,1.956834);
   HT_2mu_5->SetBinContent(6,0.9403164);
   HT_2mu_5->SetBinContent(7,0.1854414);
   HT_2mu_5->SetBinContent(8,0.1632419);
   HT_2mu_5->SetBinContent(9,0.08592162);
   HT_2mu_5->SetBinContent(12,0.05328634);
   HT_2mu_5->SetEntries(224);
   HT_2mu_5->SetStats(0);

   ci = TColor::GetColor("#ff33cc");
   HT_2mu_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   HT_2mu_5->SetLineColor(ci);
   HT_2mu_5->GetXaxis()->SetLabelFont(42);
   HT_2mu_5->GetXaxis()->SetLabelSize(0.035);
   HT_2mu_5->GetXaxis()->SetTitleSize(0.035);
   HT_2mu_5->GetXaxis()->SetTitleFont(42);
   HT_2mu_5->GetYaxis()->SetLabelFont(42);
   HT_2mu_5->GetYaxis()->SetLabelSize(0.035);
   HT_2mu_5->GetYaxis()->SetTitleSize(0.035);
   HT_2mu_5->GetYaxis()->SetTitleFont(42);
   HT_2mu_5->GetZaxis()->SetLabelFont(42);
   HT_2mu_5->GetZaxis()->SetLabelSize(0.035);
   HT_2mu_5->GetZaxis()->SetTitleSize(0.035);
   HT_2mu_5->GetZaxis()->SetTitleFont(42);
   stack1->Add(HT_2mu_5,"");
   
   TH1F *HT_2mu_5 = new TH1F("HT_2mu_5","",20,0,1400);
   HT_2mu_5->SetStats(0);

   ci = TColor::GetColor("#ffff33");
   HT_2mu_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   HT_2mu_5->SetLineColor(ci);
   HT_2mu_5->GetXaxis()->SetLabelFont(42);
   HT_2mu_5->GetXaxis()->SetLabelSize(0.035);
   HT_2mu_5->GetXaxis()->SetTitleSize(0.035);
   HT_2mu_5->GetXaxis()->SetTitleFont(42);
   HT_2mu_5->GetYaxis()->SetLabelFont(42);
   HT_2mu_5->GetYaxis()->SetLabelSize(0.035);
   HT_2mu_5->GetYaxis()->SetTitleSize(0.035);
   HT_2mu_5->GetYaxis()->SetTitleFont(42);
   HT_2mu_5->GetZaxis()->SetLabelFont(42);
   HT_2mu_5->GetZaxis()->SetLabelSize(0.035);
   HT_2mu_5->GetZaxis()->SetTitleSize(0.035);
   HT_2mu_5->GetZaxis()->SetTitleFont(42);
   stack1->Add(HT_2mu_5,"");
   
   TH1F *HT_2mu_5 = new TH1F("HT_2mu_5","",20,0,1400);
   HT_2mu_5->SetStats(0);

   ci = TColor::GetColor("#669900");
   HT_2mu_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   HT_2mu_5->SetLineColor(ci);
   HT_2mu_5->GetXaxis()->SetLabelFont(42);
   HT_2mu_5->GetXaxis()->SetLabelSize(0.035);
   HT_2mu_5->GetXaxis()->SetTitleSize(0.035);
   HT_2mu_5->GetXaxis()->SetTitleFont(42);
   HT_2mu_5->GetYaxis()->SetLabelFont(42);
   HT_2mu_5->GetYaxis()->SetLabelSize(0.035);
   HT_2mu_5->GetYaxis()->SetTitleSize(0.035);
   HT_2mu_5->GetYaxis()->SetTitleFont(42);
   HT_2mu_5->GetZaxis()->SetLabelFont(42);
   HT_2mu_5->GetZaxis()->SetLabelSize(0.035);
   HT_2mu_5->GetZaxis()->SetTitleSize(0.035);
   HT_2mu_5->GetZaxis()->SetTitleFont(42);
   stack1->Add(HT_2mu_5,"");
   stack1->Draw("");
   
   TH1F *Data_HT_2mu_2 = new TH1F("Data_HT_2mu_2","",20,0,1400);
   Data_HT_2mu_2->SetBinContent(3,7);
   Data_HT_2mu_2->SetBinContent(4,13);
   Data_HT_2mu_2->SetBinContent(5,6);
   Data_HT_2mu_2->SetBinContent(6,1);
   Data_HT_2mu_2->SetBinContent(7,4);
   Data_HT_2mu_2->SetBinContent(8,1);
   Data_HT_2mu_2->SetBinContent(9,1);
   Data_HT_2mu_2->SetBinContent(10,1);
   Data_HT_2mu_2->SetBinError(3,2.645751);
   Data_HT_2mu_2->SetBinError(4,3.605551);
   Data_HT_2mu_2->SetBinError(5,2.44949);
   Data_HT_2mu_2->SetBinError(6,1);
   Data_HT_2mu_2->SetBinError(7,2);
   Data_HT_2mu_2->SetBinError(8,1);
   Data_HT_2mu_2->SetBinError(9,1);
   Data_HT_2mu_2->SetBinError(10,1);
   Data_HT_2mu_2->SetEntries(34);
   Data_HT_2mu_2->SetStats(0);
   Data_HT_2mu_2->SetMarkerStyle(20);
   Data_HT_2mu_2->SetMarkerSize(0.7);
   Data_HT_2mu_2->GetXaxis()->SetLabelFont(42);
   Data_HT_2mu_2->GetXaxis()->SetLabelSize(0.035);
   Data_HT_2mu_2->GetXaxis()->SetTitleSize(0.035);
   Data_HT_2mu_2->GetXaxis()->SetTitleFont(42);
   Data_HT_2mu_2->GetYaxis()->SetLabelFont(42);
   Data_HT_2mu_2->GetYaxis()->SetLabelSize(0.035);
   Data_HT_2mu_2->GetYaxis()->SetTitleSize(0.035);
   Data_HT_2mu_2->GetYaxis()->SetTitleFont(42);
   Data_HT_2mu_2->GetZaxis()->SetLabelFont(42);
   Data_HT_2mu_2->GetZaxis()->SetLabelSize(0.035);
   Data_HT_2mu_2->GetZaxis()->SetTitleSize(0.035);
   Data_HT_2mu_2->GetZaxis()->SetTitleFont(42);
   Data_HT_2mu_2->Draw("same");
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
   TLegendEntry *entry=leg->AddEntry("HT_2mu_5","W + jets","f");

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
   entry=leg->AddEntry("HT_2mu_5","Z(#nu#bar{#nu}) + jets","f");

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
   entry=leg->AddEntry("HT_2mu_5","t #bar{t} + jets","f");

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
   entry=leg->AddEntry("HT_2mu_5","Z/#gamma^{*}(ll) + jets","f");

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
   entry=leg->AddEntry("Data_HT_2mu_2","Data","lep");
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
   RATIO->SetBinContent(3,1.497019);
   RATIO->SetBinContent(4,1.013158);
   RATIO->SetBinContent(5,0.8493105);
   RATIO->SetBinContent(6,0.4019653);
   RATIO->SetBinContent(7,3.67385);
   RATIO->SetBinContent(8,1.2115);
   RATIO->SetBinContent(9,3.777034);
   RATIO->SetBinContent(10,4.369043);
   RATIO->SetBinError(3,0.8941065);
   RATIO->SetBinError(4,0.3986983);
   RATIO->SetBinError(5,0.4715153);
   RATIO->SetBinError(6,0.4759454);
   RATIO->SetBinError(7,3.971265);
   RATIO->SetBinError(8,1.801636);
   RATIO->SetBinError(9,8.255248);
   RATIO->SetBinError(10,10.1236);
   RATIO->SetMinimum(0);
   RATIO->SetMaximum(3.05);
   RATIO->SetEntries(1.475978);
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

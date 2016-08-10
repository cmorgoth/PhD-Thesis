{
//=========Macro generated from canvas: C/C      
//=========  (Thu Sep 11 21:29:12 2014) by ROOT version5.34/19
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
   HT_2mu_5->SetBinContent(3,56.92704);
   HT_2mu_5->SetBinContent(4,154.0278);
   HT_2mu_5->SetBinContent(5,73.39827);
   HT_2mu_5->SetBinContent(6,35.64869);
   HT_2mu_5->SetBinContent(7,19.54753);
   HT_2mu_5->SetBinContent(8,9.637115);
   HT_2mu_5->SetBinContent(9,5.570204);
   HT_2mu_5->SetBinContent(10,2.8538);
   HT_2mu_5->SetBinContent(11,1.396063);
   HT_2mu_5->SetBinContent(12,0.7059004);
   HT_2mu_5->SetBinContent(13,0.2047468);
   HT_2mu_5->SetBinContent(14,0.09630303);
   HT_2mu_5->SetBinContent(15,0.1148247);
   HT_2mu_5->SetBinContent(16,0.04248889);
   HT_2mu_5->SetBinContent(21,0.02674043);
   HT_2mu_5->SetEntries(9297);
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
   HT_2mu_5->SetBinContent(3,0.4848593);
   HT_2mu_5->SetBinContent(4,1.337493);
   HT_2mu_5->SetBinContent(5,0.484899);
   HT_2mu_5->SetBinContent(6,0.1251069);
   HT_2mu_5->SetBinContent(7,0.05087665);
   HT_2mu_5->SetBinContent(8,0.02859871);
   HT_2mu_5->SetBinContent(9,0.07247789);
   HT_2mu_5->SetEntries(61);
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
   HT_2mu_5->SetBinContent(5,0.2510639);
   HT_2mu_5->SetBinContent(6,0.2664947);
   HT_2mu_5->SetEntries(3);
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
   Data_HT_2mu_2->SetBinContent(3,57);
   Data_HT_2mu_2->SetBinContent(4,145);
   Data_HT_2mu_2->SetBinContent(5,70);
   Data_HT_2mu_2->SetBinContent(6,24);
   Data_HT_2mu_2->SetBinContent(7,15);
   Data_HT_2mu_2->SetBinContent(8,5);
   Data_HT_2mu_2->SetBinContent(9,4);
   Data_HT_2mu_2->SetBinContent(11,1);
   Data_HT_2mu_2->SetBinContent(12,1);
   Data_HT_2mu_2->SetBinError(3,7.549834);
   Data_HT_2mu_2->SetBinError(4,12.04159);
   Data_HT_2mu_2->SetBinError(5,8.3666);
   Data_HT_2mu_2->SetBinError(6,4.898979);
   Data_HT_2mu_2->SetBinError(7,3.872983);
   Data_HT_2mu_2->SetBinError(8,2.236068);
   Data_HT_2mu_2->SetBinError(9,2);
   Data_HT_2mu_2->SetBinError(11,1);
   Data_HT_2mu_2->SetBinError(12,1);
   Data_HT_2mu_2->SetEntries(322);
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
   RATIO->SetBinContent(3,0.9928256);
   RATIO->SetBinContent(4,0.9332843);
   RATIO->SetBinContent(5,0.9442332);
   RATIO->SetBinContent(6,0.6659214);
   RATIO->SetBinContent(7,0.7653685);
   RATIO->SetBinContent(8,0.5172924);
   RATIO->SetBinContent(9,0.7088828);
   RATIO->SetBinContent(11,0.7163001);
   RATIO->SetBinContent(12,1.41663);
   RATIO->SetBinError(3,0.1856394);
   RATIO->SetBinError(4,0.107765);
   RATIO->SetBinError(5,0.1573636);
   RATIO->SetBinError(6,0.1754465);
   RATIO->SetBinError(7,0.2625685);
   RATIO->SetBinError(8,0.2849612);
   RATIO->SetBinError(9,0.4633409);
   RATIO->SetBinError(11,0.9384078);
   RATIO->SetBinError(12,2.202225);
   RATIO->SetMinimum(0);
   RATIO->SetMaximum(3.05);
   RATIO->SetEntries(9.470438);
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

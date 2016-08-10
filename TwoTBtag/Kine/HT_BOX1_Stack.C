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
   
   TH1F *stack1_stack_45 = new TH1F("stack1_stack_45","",20,0,1400);
   stack1_stack_45->SetMinimum(0.2985534);
   stack1_stack_45->SetMaximum(96989.7);
   stack1_stack_45->SetDirectory(0);
   stack1_stack_45->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   stack1_stack_45->SetLineColor(ci);
   stack1_stack_45->GetXaxis()->SetLabelFont(42);
   stack1_stack_45->GetXaxis()->SetLabelSize(0.035);
   stack1_stack_45->GetXaxis()->SetTitleSize(0.035);
   stack1_stack_45->GetXaxis()->SetTitleFont(42);
   stack1_stack_45->GetYaxis()->SetTitle("Events");
   stack1_stack_45->GetYaxis()->SetLabelFont(42);
   stack1_stack_45->GetYaxis()->SetLabelSize(0.035);
   stack1_stack_45->GetYaxis()->SetTitleSize(0.035);
   stack1_stack_45->GetYaxis()->SetTitleOffset(1.25);
   stack1_stack_45->GetYaxis()->SetTitleFont(42);
   stack1_stack_45->GetZaxis()->SetLabelFont(42);
   stack1_stack_45->GetZaxis()->SetLabelSize(0.035);
   stack1_stack_45->GetZaxis()->SetTitleSize(0.035);
   stack1_stack_45->GetZaxis()->SetTitleFont(42);
   stack1->SetHistogram(stack1_stack_45);
   
   
   TH1F *HT_1mu_4 = new TH1F("HT_1mu_4","",20,0,1400);
   HT_1mu_4->SetBinContent(4,0.5138444);
   HT_1mu_4->SetBinContent(5,0.07371292);
   HT_1mu_4->SetBinContent(6,0.0226034);
   HT_1mu_4->SetBinContent(7,0.09121544);
   HT_1mu_4->SetBinContent(8,0.01488143);
   HT_1mu_4->SetEntries(20);
   HT_1mu_4->SetStats(0);

   ci = TColor::GetColor("#3300cc");
   HT_1mu_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   HT_1mu_4->SetLineColor(ci);
   HT_1mu_4->GetXaxis()->SetLabelFont(42);
   HT_1mu_4->GetXaxis()->SetLabelSize(0.035);
   HT_1mu_4->GetXaxis()->SetTitleSize(0.035);
   HT_1mu_4->GetXaxis()->SetTitleFont(42);
   HT_1mu_4->GetYaxis()->SetLabelFont(42);
   HT_1mu_4->GetYaxis()->SetLabelSize(0.035);
   HT_1mu_4->GetYaxis()->SetTitleSize(0.035);
   HT_1mu_4->GetYaxis()->SetTitleFont(42);
   HT_1mu_4->GetZaxis()->SetLabelFont(42);
   HT_1mu_4->GetZaxis()->SetLabelSize(0.035);
   HT_1mu_4->GetZaxis()->SetTitleSize(0.035);
   HT_1mu_4->GetZaxis()->SetTitleFont(42);
   stack1->Add(HT_1mu_4,"");
   
   TH1F *HT_1mu_4 = new TH1F("HT_1mu_4","",20,0,1400);
   HT_1mu_4->SetBinContent(3,9.127);
   HT_1mu_4->SetBinContent(4,106.3871);
   HT_1mu_4->SetBinContent(5,130.3773);
   HT_1mu_4->SetBinContent(6,70.09156);
   HT_1mu_4->SetBinContent(7,31.20795);
   HT_1mu_4->SetBinContent(8,13.24571);
   HT_1mu_4->SetBinContent(9,5.859389);
   HT_1mu_4->SetBinContent(10,2.605406);
   HT_1mu_4->SetBinContent(11,1.513235);
   HT_1mu_4->SetBinContent(12,0.4652482);
   HT_1mu_4->SetBinContent(13,0.5487354);
   HT_1mu_4->SetBinContent(14,0.1397729);
   HT_1mu_4->SetBinContent(15,0.1085589);
   HT_1mu_4->SetBinContent(16,0.01545461);
   HT_1mu_4->SetBinContent(20,0.0389887);
   HT_1mu_4->SetEntries(4920);
   HT_1mu_4->SetStats(0);

   ci = TColor::GetColor("#ff33cc");
   HT_1mu_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   HT_1mu_4->SetLineColor(ci);
   HT_1mu_4->GetXaxis()->SetLabelFont(42);
   HT_1mu_4->GetXaxis()->SetLabelSize(0.035);
   HT_1mu_4->GetXaxis()->SetTitleSize(0.035);
   HT_1mu_4->GetXaxis()->SetTitleFont(42);
   HT_1mu_4->GetYaxis()->SetLabelFont(42);
   HT_1mu_4->GetYaxis()->SetLabelSize(0.035);
   HT_1mu_4->GetYaxis()->SetTitleSize(0.035);
   HT_1mu_4->GetYaxis()->SetTitleFont(42);
   HT_1mu_4->GetZaxis()->SetLabelFont(42);
   HT_1mu_4->GetZaxis()->SetLabelSize(0.035);
   HT_1mu_4->GetZaxis()->SetTitleSize(0.035);
   HT_1mu_4->GetZaxis()->SetTitleFont(42);
   stack1->Add(HT_1mu_4,"");
   
   TH1F *HT_1mu_4 = new TH1F("HT_1mu_4","",20,0,1400);
   HT_1mu_4->SetBinContent(3,2.667449);
   HT_1mu_4->SetBinContent(4,10.04105);
   HT_1mu_4->SetBinContent(5,5.775156);
   HT_1mu_4->SetBinContent(6,2.520932);
   HT_1mu_4->SetBinContent(7,0.5349371);
   HT_1mu_4->SetBinContent(8,0.7948499);
   HT_1mu_4->SetBinContent(9,0.2520247);
   HT_1mu_4->SetEntries(143);
   HT_1mu_4->SetStats(0);

   ci = TColor::GetColor("#ffff33");
   HT_1mu_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   HT_1mu_4->SetLineColor(ci);
   HT_1mu_4->GetXaxis()->SetLabelFont(42);
   HT_1mu_4->GetXaxis()->SetLabelSize(0.035);
   HT_1mu_4->GetXaxis()->SetTitleSize(0.035);
   HT_1mu_4->GetXaxis()->SetTitleFont(42);
   HT_1mu_4->GetYaxis()->SetLabelFont(42);
   HT_1mu_4->GetYaxis()->SetLabelSize(0.035);
   HT_1mu_4->GetYaxis()->SetTitleSize(0.035);
   HT_1mu_4->GetYaxis()->SetTitleFont(42);
   HT_1mu_4->GetZaxis()->SetLabelFont(42);
   HT_1mu_4->GetZaxis()->SetLabelSize(0.035);
   HT_1mu_4->GetZaxis()->SetTitleSize(0.035);
   HT_1mu_4->GetZaxis()->SetTitleFont(42);
   stack1->Add(HT_1mu_4,"");
   
   TH1F *HT_1mu_4 = new TH1F("HT_1mu_4","",20,0,1400);
   HT_1mu_4->SetStats(0);

   ci = TColor::GetColor("#669900");
   HT_1mu_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   HT_1mu_4->SetLineColor(ci);
   HT_1mu_4->GetXaxis()->SetLabelFont(42);
   HT_1mu_4->GetXaxis()->SetLabelSize(0.035);
   HT_1mu_4->GetXaxis()->SetTitleSize(0.035);
   HT_1mu_4->GetXaxis()->SetTitleFont(42);
   HT_1mu_4->GetYaxis()->SetLabelFont(42);
   HT_1mu_4->GetYaxis()->SetLabelSize(0.035);
   HT_1mu_4->GetYaxis()->SetTitleSize(0.035);
   HT_1mu_4->GetYaxis()->SetTitleFont(42);
   HT_1mu_4->GetZaxis()->SetLabelFont(42);
   HT_1mu_4->GetZaxis()->SetLabelSize(0.035);
   HT_1mu_4->GetZaxis()->SetTitleSize(0.035);
   HT_1mu_4->GetZaxis()->SetTitleFont(42);
   stack1->Add(HT_1mu_4,"");
   stack1->Draw("");
   
   TH1F *Data_HT_1mu_1 = new TH1F("Data_HT_1mu_1","",20,0,1400);
   Data_HT_1mu_1->SetBinContent(3,21);
   Data_HT_1mu_1->SetBinContent(4,108);
   Data_HT_1mu_1->SetBinContent(5,106);
   Data_HT_1mu_1->SetBinContent(6,45);
   Data_HT_1mu_1->SetBinContent(7,21);
   Data_HT_1mu_1->SetBinContent(8,9);
   Data_HT_1mu_1->SetBinContent(9,6);
   Data_HT_1mu_1->SetBinContent(11,1);
   Data_HT_1mu_1->SetBinError(3,4.582576);
   Data_HT_1mu_1->SetBinError(4,10.3923);
   Data_HT_1mu_1->SetBinError(5,10.29563);
   Data_HT_1mu_1->SetBinError(6,6.708204);
   Data_HT_1mu_1->SetBinError(7,4.582576);
   Data_HT_1mu_1->SetBinError(8,3);
   Data_HT_1mu_1->SetBinError(9,2.44949);
   Data_HT_1mu_1->SetBinError(11,1);
   Data_HT_1mu_1->SetEntries(317);
   Data_HT_1mu_1->SetStats(0);
   Data_HT_1mu_1->SetMarkerStyle(20);
   Data_HT_1mu_1->SetMarkerSize(0.7);
   Data_HT_1mu_1->GetXaxis()->SetLabelFont(42);
   Data_HT_1mu_1->GetXaxis()->SetLabelSize(0.035);
   Data_HT_1mu_1->GetXaxis()->SetTitleSize(0.035);
   Data_HT_1mu_1->GetXaxis()->SetTitleFont(42);
   Data_HT_1mu_1->GetYaxis()->SetLabelFont(42);
   Data_HT_1mu_1->GetYaxis()->SetLabelSize(0.035);
   Data_HT_1mu_1->GetYaxis()->SetTitleSize(0.035);
   Data_HT_1mu_1->GetYaxis()->SetTitleFont(42);
   Data_HT_1mu_1->GetZaxis()->SetLabelFont(42);
   Data_HT_1mu_1->GetZaxis()->SetLabelSize(0.035);
   Data_HT_1mu_1->GetZaxis()->SetTitleSize(0.035);
   Data_HT_1mu_1->GetZaxis()->SetTitleFont(42);
   Data_HT_1mu_1->Draw("same");
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
   TLegendEntry *entry=leg->AddEntry("HT_1mu_4","W + jets","f");

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
   entry=leg->AddEntry("HT_1mu_4","Z(#nu#bar{#nu}) + jets","f");

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
   entry=leg->AddEntry("HT_1mu_4","t #bar{t} + jets","f");

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
   entry=leg->AddEntry("HT_1mu_4","Z/#gamma^{*}(ll) + jets","f");

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
   entry=leg->AddEntry("Data_HT_1mu_1","Data","lep");
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
   RATIO->SetBinContent(3,1.780499);
   RATIO->SetBinContent(4,0.9235348);
   RATIO->SetBinContent(5,0.7781175);
   RATIO->SetBinContent(6,0.6195351);
   RATIO->SetBinContent(7,0.6596699);
   RATIO->SetBinContent(8,0.6403214);
   RATIO->SetBinContent(9,0.9817696);
   RATIO->SetBinContent(11,0.660836);
   RATIO->SetBinError(3,0.6478782);
   RATIO->SetBinError(4,0.1232513);
   RATIO->SetBinError(5,0.1007796);
   RATIO->SetBinError(6,0.1175317);
   RATIO->SetBinError(7,0.1854505);
   RATIO->SetBinError(8,0.2733639);
   RATIO->SetBinError(9,0.5642357);
   RATIO->SetBinError(11,0.851642);
   RATIO->SetMinimum(0);
   RATIO->SetMaximum(3.05);
   RATIO->SetEntries(30.78889);
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

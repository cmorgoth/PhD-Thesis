{
//=========Macro generated from canvas: C/C      
//=========  (Fri Sep 12 01:40:52 2014) by ROOT version5.34/19
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
   pad1->Range(12.49999,-0.5854026,1887.5,6.764314);
   pad1->SetFillColor(0);
   pad1->SetBorderMode(0);
   pad1->SetBorderSize(2);
   pad1->SetLogy();
   pad1->SetBottomMargin(0);
   pad1->SetFrameBorderMode(0);
   pad1->SetFrameBorderMode(0);
   
   THStack *stackMR_1Box = new THStack();
   stackMR_1Box->SetName("stackMR_1Box");
   stackMR_1Box->SetTitle("");
   stackMR_1Box->SetMinimum(1);
   stackMR_1Box->SetMaximum(500000);
   
   TH1F *stackMR_1Box_stack_4 = new TH1F("stackMR_1Box_stack_4","",20,200,1700);
   stackMR_1Box_stack_4->SetMinimum(0.259775);
   stackMR_1Box_stack_4->SetMaximum(1069897);
   stackMR_1Box_stack_4->SetDirectory(0);
   stackMR_1Box_stack_4->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   stackMR_1Box_stack_4->SetLineColor(ci);
   stackMR_1Box_stack_4->GetXaxis()->SetTitle("M_{R} (GeV)");
   stackMR_1Box_stack_4->GetXaxis()->SetLabelFont(42);
   stackMR_1Box_stack_4->GetXaxis()->SetLabelSize(0.035);
   stackMR_1Box_stack_4->GetXaxis()->SetTitleSize(0.035);
   stackMR_1Box_stack_4->GetXaxis()->SetTitleFont(42);
   stackMR_1Box_stack_4->GetYaxis()->SetTitle("Events");
   stackMR_1Box_stack_4->GetYaxis()->SetLabelFont(42);
   stackMR_1Box_stack_4->GetYaxis()->SetLabelSize(0.035);
   stackMR_1Box_stack_4->GetYaxis()->SetTitleSize(0.035);
   stackMR_1Box_stack_4->GetYaxis()->SetTitleOffset(1.25);
   stackMR_1Box_stack_4->GetYaxis()->SetTitleFont(42);
   stackMR_1Box_stack_4->GetZaxis()->SetLabelFont(42);
   stackMR_1Box_stack_4->GetZaxis()->SetLabelSize(0.035);
   stackMR_1Box_stack_4->GetZaxis()->SetTitleSize(0.035);
   stackMR_1Box_stack_4->GetZaxis()->SetTitleFont(42);
   stackMR_1Box->SetHistogram(stackMR_1Box_stack_4);
   
   
   TH1F *MR_1D_4mu_Box = new TH1F("MR_1D_4mu_Box","",20,200,1700);
   MR_1D_4mu_Box->SetBinContent(1,0.4595222);
   MR_1D_4mu_Box->SetBinContent(2,0.1280351);
   MR_1D_4mu_Box->SetBinContent(3,0.04689565);
   MR_1D_4mu_Box->SetBinContent(4,0.06928795);
   MR_1D_4mu_Box->SetBinContent(5,0.01251669);
   MR_1D_4mu_Box->SetEntries(20);
   MR_1D_4mu_Box->SetStats(0);

   ci = TColor::GetColor("#3300cc");
   MR_1D_4mu_Box->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   MR_1D_4mu_Box->SetLineColor(ci);
   MR_1D_4mu_Box->GetXaxis()->SetLabelFont(42);
   MR_1D_4mu_Box->GetXaxis()->SetLabelSize(0.035);
   MR_1D_4mu_Box->GetXaxis()->SetTitleSize(0.035);
   MR_1D_4mu_Box->GetXaxis()->SetTitleFont(42);
   MR_1D_4mu_Box->GetYaxis()->SetLabelFont(42);
   MR_1D_4mu_Box->GetYaxis()->SetLabelSize(0.035);
   MR_1D_4mu_Box->GetYaxis()->SetTitleSize(0.035);
   MR_1D_4mu_Box->GetYaxis()->SetTitleFont(42);
   MR_1D_4mu_Box->GetZaxis()->SetLabelFont(42);
   MR_1D_4mu_Box->GetZaxis()->SetLabelSize(0.035);
   MR_1D_4mu_Box->GetZaxis()->SetTitleSize(0.035);
   MR_1D_4mu_Box->GetZaxis()->SetTitleFont(42);
   stackMR_1Box->Add(MR_1D_4mu_Box,"");
   
   TH1F *MR_1D_4mu_Box = new TH1F("MR_1D_4mu_Box","",20,200,1700);
   MR_1D_4mu_Box->SetBinContent(1,158.543);
   MR_1D_4mu_Box->SetBinContent(2,128.12);
   MR_1D_4mu_Box->SetBinContent(3,53.64975);
   MR_1D_4mu_Box->SetBinContent(4,19.19767);
   MR_1D_4mu_Box->SetBinContent(5,5.67939);
   MR_1D_4mu_Box->SetBinContent(6,4.017804);
   MR_1D_4mu_Box->SetBinContent(7,1.467523);
   MR_1D_4mu_Box->SetBinContent(8,0.6655414);
   MR_1D_4mu_Box->SetBinContent(9,0.3364188);
   MR_1D_4mu_Box->SetBinContent(10,0.01545461);
   MR_1D_4mu_Box->SetBinContent(14,0.0389887);
   MR_1D_4mu_Box->SetEntries(4920);
   MR_1D_4mu_Box->SetStats(0);

   ci = TColor::GetColor("#ff33cc");
   MR_1D_4mu_Box->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   MR_1D_4mu_Box->SetLineColor(ci);
   MR_1D_4mu_Box->GetXaxis()->SetLabelFont(42);
   MR_1D_4mu_Box->GetXaxis()->SetLabelSize(0.035);
   MR_1D_4mu_Box->GetXaxis()->SetTitleSize(0.035);
   MR_1D_4mu_Box->GetXaxis()->SetTitleFont(42);
   MR_1D_4mu_Box->GetYaxis()->SetLabelFont(42);
   MR_1D_4mu_Box->GetYaxis()->SetLabelSize(0.035);
   MR_1D_4mu_Box->GetYaxis()->SetTitleSize(0.035);
   MR_1D_4mu_Box->GetYaxis()->SetTitleFont(42);
   MR_1D_4mu_Box->GetZaxis()->SetLabelFont(42);
   MR_1D_4mu_Box->GetZaxis()->SetLabelSize(0.035);
   MR_1D_4mu_Box->GetZaxis()->SetTitleSize(0.035);
   MR_1D_4mu_Box->GetZaxis()->SetTitleFont(42);
   stackMR_1Box->Add(MR_1D_4mu_Box,"");
   
   TH1F *MR_1D_4mu_Box = new TH1F("MR_1D_4mu_Box","",20,200,1700);
   MR_1D_4mu_Box->SetBinContent(1,12.26312);
   MR_1D_4mu_Box->SetBinContent(2,5.852482);
   MR_1D_4mu_Box->SetBinContent(3,2.688203);
   MR_1D_4mu_Box->SetBinContent(4,0.9488928);
   MR_1D_4mu_Box->SetBinContent(5,0.5958462);
   MR_1D_4mu_Box->SetBinContent(6,0.1083064);
   MR_1D_4mu_Box->SetBinContent(9,0.1295453);
   MR_1D_4mu_Box->SetEntries(143);
   MR_1D_4mu_Box->SetStats(0);

   ci = TColor::GetColor("#ffff33");
   MR_1D_4mu_Box->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   MR_1D_4mu_Box->SetLineColor(ci);
   MR_1D_4mu_Box->GetXaxis()->SetLabelFont(42);
   MR_1D_4mu_Box->GetXaxis()->SetLabelSize(0.035);
   MR_1D_4mu_Box->GetXaxis()->SetTitleSize(0.035);
   MR_1D_4mu_Box->GetXaxis()->SetTitleFont(42);
   MR_1D_4mu_Box->GetYaxis()->SetLabelFont(42);
   MR_1D_4mu_Box->GetYaxis()->SetLabelSize(0.035);
   MR_1D_4mu_Box->GetYaxis()->SetTitleSize(0.035);
   MR_1D_4mu_Box->GetYaxis()->SetTitleFont(42);
   MR_1D_4mu_Box->GetZaxis()->SetLabelFont(42);
   MR_1D_4mu_Box->GetZaxis()->SetLabelSize(0.035);
   MR_1D_4mu_Box->GetZaxis()->SetTitleSize(0.035);
   MR_1D_4mu_Box->GetZaxis()->SetTitleFont(42);
   stackMR_1Box->Add(MR_1D_4mu_Box,"");
   
   TH1F *MR_1D_4mu_Box = new TH1F("MR_1D_4mu_Box","",20,200,1700);
   MR_1D_4mu_Box->SetStats(0);

   ci = TColor::GetColor("#669900");
   MR_1D_4mu_Box->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   MR_1D_4mu_Box->SetLineColor(ci);
   MR_1D_4mu_Box->GetXaxis()->SetLabelFont(42);
   MR_1D_4mu_Box->GetXaxis()->SetLabelSize(0.035);
   MR_1D_4mu_Box->GetXaxis()->SetTitleSize(0.035);
   MR_1D_4mu_Box->GetXaxis()->SetTitleFont(42);
   MR_1D_4mu_Box->GetYaxis()->SetLabelFont(42);
   MR_1D_4mu_Box->GetYaxis()->SetLabelSize(0.035);
   MR_1D_4mu_Box->GetYaxis()->SetTitleSize(0.035);
   MR_1D_4mu_Box->GetYaxis()->SetTitleFont(42);
   MR_1D_4mu_Box->GetZaxis()->SetLabelFont(42);
   MR_1D_4mu_Box->GetZaxis()->SetLabelSize(0.035);
   MR_1D_4mu_Box->GetZaxis()->SetTitleSize(0.035);
   MR_1D_4mu_Box->GetZaxis()->SetTitleFont(42);
   stackMR_1Box->Add(MR_1D_4mu_Box,"");
   stackMR_1Box->Draw("");
   
   TH1F *MR_1D_Data_1mu_Box = new TH1F("MR_1D_Data_1mu_Box","",20,200,1700);
   MR_1D_Data_1mu_Box->SetBinContent(1,155);
   MR_1D_Data_1mu_Box->SetBinContent(2,107);
   MR_1D_Data_1mu_Box->SetBinContent(3,34);
   MR_1D_Data_1mu_Box->SetBinContent(4,11);
   MR_1D_Data_1mu_Box->SetBinContent(5,7);
   MR_1D_Data_1mu_Box->SetBinContent(6,2);
   MR_1D_Data_1mu_Box->SetBinContent(7,1);
   MR_1D_Data_1mu_Box->SetBinError(1,12.4499);
   MR_1D_Data_1mu_Box->SetBinError(2,10.34408);
   MR_1D_Data_1mu_Box->SetBinError(3,5.830952);
   MR_1D_Data_1mu_Box->SetBinError(4,3.316625);
   MR_1D_Data_1mu_Box->SetBinError(5,2.645751);
   MR_1D_Data_1mu_Box->SetBinError(6,1.414214);
   MR_1D_Data_1mu_Box->SetBinError(7,1);
   MR_1D_Data_1mu_Box->SetEntries(317);
   MR_1D_Data_1mu_Box->SetStats(0);
   MR_1D_Data_1mu_Box->SetMarkerStyle(20);
   MR_1D_Data_1mu_Box->SetMarkerSize(0.7);
   MR_1D_Data_1mu_Box->GetXaxis()->SetRange(1,20);
   MR_1D_Data_1mu_Box->GetXaxis()->SetLabelFont(42);
   MR_1D_Data_1mu_Box->GetXaxis()->SetLabelSize(0.035);
   MR_1D_Data_1mu_Box->GetXaxis()->SetTitleSize(0.035);
   MR_1D_Data_1mu_Box->GetXaxis()->SetTitleFont(42);
   MR_1D_Data_1mu_Box->GetYaxis()->SetLabelFont(42);
   MR_1D_Data_1mu_Box->GetYaxis()->SetLabelSize(0.035);
   MR_1D_Data_1mu_Box->GetYaxis()->SetTitleSize(0.035);
   MR_1D_Data_1mu_Box->GetYaxis()->SetTitleFont(42);
   MR_1D_Data_1mu_Box->GetZaxis()->SetLabelFont(42);
   MR_1D_Data_1mu_Box->GetZaxis()->SetLabelSize(0.035);
   MR_1D_Data_1mu_Box->GetZaxis()->SetTitleSize(0.035);
   MR_1D_Data_1mu_Box->GetZaxis()->SetTitleFont(42);
   MR_1D_Data_1mu_Box->Draw("same");
   pad1->Modified();
   C->cd();
   
   TLegend *leg = new TLegend(0.7,0.7,0.89,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.02);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("MR_1D_4mu_Box","W + jets","f");

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
   entry=leg->AddEntry("MR_1D_4mu_Box","Z/#gamma^{*}(ll) + jets","f");

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
   entry=leg->AddEntry("MR_1D_4mu_Box","t #bar{t} + jets","f");

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
   entry=leg->AddEntry("MR_1D_4mu_Box","Z(#nu#bar{#nu}) + jets","f");

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
   entry=leg->AddEntry("MR_1D_Data_1mu_Box","Data","lep");
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
   
   TH1F *RATIO = new TH1F("RATIO","",20,200,1700);
   RATIO->SetBinContent(1,0.9050269);
   RATIO->SetBinContent(2,0.7979089);
   RATIO->SetBinContent(3,0.6029989);
   RATIO->SetBinContent(4,0.5441276);
   RATIO->SetBinContent(5,1.113275);
   RATIO->SetBinContent(6,0.484718);
   RATIO->SetBinContent(7,0.6814204);
   RATIO->SetBinError(1,0.07591409);
   RATIO->SetBinError(2,0.0799541);
   RATIO->SetBinError(3,0.1062489);
   RATIO->SetBinError(4,0.1679845);
   RATIO->SetBinError(5,0.4407964);
   RATIO->SetBinError(6,0.3500252);
   RATIO->SetBinError(7,0.6998573);
   RATIO->SetMinimum(0);
   RATIO->SetMaximum(3.05);
   RATIO->SetEntries(30.65601);
   RATIO->SetStats(0);
   RATIO->SetFillColor(4);
   RATIO->SetLineColor(4);
   RATIO->SetMarkerColor(4);
   RATIO->SetMarkerStyle(20);
   RATIO->SetMarkerSize(0.7);
   RATIO->GetXaxis()->SetTitle("M_{R}");
   RATIO->GetXaxis()->SetRange(1,20);
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

{
//=========Macro generated from canvas: C/C      
//=========  (Fri Sep 12 02:07:04 2014) by ROOT version5.34/19
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
   pad1->Range(-187.5,-0.4771213,1687.5,4.781094);
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
   stack1->SetMaximum(10000);
   
   TH1F *stack1_stack_7 = new TH1F("stack1_stack_7","",20,0,1500);
   stack1_stack_7->SetMinimum(0.3333333);
   stack1_stack_7->SetMaximum(18000);
   stack1_stack_7->SetDirectory(0);
   stack1_stack_7->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   stack1_stack_7->SetLineColor(ci);
   stack1_stack_7->GetXaxis()->SetTitle("Events/20 GeV");
   stack1_stack_7->GetXaxis()->SetLabelFont(42);
   stack1_stack_7->GetXaxis()->SetLabelSize(0.035);
   stack1_stack_7->GetXaxis()->SetTitleSize(0.035);
   stack1_stack_7->GetXaxis()->SetTitleFont(42);
   stack1_stack_7->GetYaxis()->SetTitle("Events/20 GeV");
   stack1_stack_7->GetYaxis()->SetLabelFont(42);
   stack1_stack_7->GetYaxis()->SetLabelSize(0.035);
   stack1_stack_7->GetYaxis()->SetTitleSize(0.035);
   stack1_stack_7->GetYaxis()->SetTitleOffset(1.25);
   stack1_stack_7->GetYaxis()->SetTitleFont(42);
   stack1_stack_7->GetZaxis()->SetLabelFont(42);
   stack1_stack_7->GetZaxis()->SetLabelSize(0.035);
   stack1_stack_7->GetZaxis()->SetTitleSize(0.035);
   stack1_stack_7->GetZaxis()->SetTitleFont(42);
   stack1->SetHistogram(stack1_stack_7);
   
   
   TH1F *BaseDM_METmag_Box0_plotType1 = new TH1F("BaseDM_METmag_Box0_plotType1","BaseDM_METmag_Box0_plotType1",20,0,1500);
   BaseDM_METmag_Box0_plotType1->SetBinContent(3,0.1814003);
   BaseDM_METmag_Box0_plotType1->SetBinContent(4,0.06080139);
   BaseDM_METmag_Box0_plotType1->SetEntries(6);
   BaseDM_METmag_Box0_plotType1->SetStats(0);

   ci = TColor::GetColor("#3300cc");
   BaseDM_METmag_Box0_plotType1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   BaseDM_METmag_Box0_plotType1->SetLineColor(ci);
   BaseDM_METmag_Box0_plotType1->GetXaxis()->SetLabelFont(42);
   BaseDM_METmag_Box0_plotType1->GetXaxis()->SetLabelSize(0.035);
   BaseDM_METmag_Box0_plotType1->GetXaxis()->SetTitleSize(0.035);
   BaseDM_METmag_Box0_plotType1->GetXaxis()->SetTitleFont(42);
   BaseDM_METmag_Box0_plotType1->GetYaxis()->SetTitle("Events/20 GeV");
   BaseDM_METmag_Box0_plotType1->GetYaxis()->SetLabelFont(42);
   BaseDM_METmag_Box0_plotType1->GetYaxis()->SetLabelSize(0.035);
   BaseDM_METmag_Box0_plotType1->GetYaxis()->SetTitleSize(0.035);
   BaseDM_METmag_Box0_plotType1->GetYaxis()->SetTitleFont(42);
   BaseDM_METmag_Box0_plotType1->GetZaxis()->SetLabelFont(42);
   BaseDM_METmag_Box0_plotType1->GetZaxis()->SetLabelSize(0.035);
   BaseDM_METmag_Box0_plotType1->GetZaxis()->SetTitleSize(0.035);
   BaseDM_METmag_Box0_plotType1->GetZaxis()->SetTitleFont(42);
   stack1->Add(BaseDM_METmag_Box0_plotType1,"");
   
   TH1F *BaseDM_METmag_Box0_plotType1 = new TH1F("BaseDM_METmag_Box0_plotType1","BaseDM_METmag_Box0_plotType1",20,0,1500);
   BaseDM_METmag_Box0_plotType1->SetBinContent(2,11.30238);
   BaseDM_METmag_Box0_plotType1->SetBinContent(3,111.969);
   BaseDM_METmag_Box0_plotType1->SetBinContent(4,59.30543);
   BaseDM_METmag_Box0_plotType1->SetBinContent(5,16.67349);
   BaseDM_METmag_Box0_plotType1->SetBinContent(6,3.552385);
   BaseDM_METmag_Box0_plotType1->SetBinContent(7,0.9859788);
   BaseDM_METmag_Box0_plotType1->SetBinContent(8,0.3316174);
   BaseDM_METmag_Box0_plotType1->SetBinContent(9,0.2339356);
   BaseDM_METmag_Box0_plotType1->SetEntries(2717);
   BaseDM_METmag_Box0_plotType1->SetStats(0);

   ci = TColor::GetColor("#ff33cc");
   BaseDM_METmag_Box0_plotType1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   BaseDM_METmag_Box0_plotType1->SetLineColor(ci);
   BaseDM_METmag_Box0_plotType1->GetXaxis()->SetLabelFont(42);
   BaseDM_METmag_Box0_plotType1->GetXaxis()->SetLabelSize(0.035);
   BaseDM_METmag_Box0_plotType1->GetXaxis()->SetTitleSize(0.035);
   BaseDM_METmag_Box0_plotType1->GetXaxis()->SetTitleFont(42);
   BaseDM_METmag_Box0_plotType1->GetYaxis()->SetTitle("Events/20 GeV");
   BaseDM_METmag_Box0_plotType1->GetYaxis()->SetLabelFont(42);
   BaseDM_METmag_Box0_plotType1->GetYaxis()->SetLabelSize(0.035);
   BaseDM_METmag_Box0_plotType1->GetYaxis()->SetTitleSize(0.035);
   BaseDM_METmag_Box0_plotType1->GetYaxis()->SetTitleFont(42);
   BaseDM_METmag_Box0_plotType1->GetZaxis()->SetLabelFont(42);
   BaseDM_METmag_Box0_plotType1->GetZaxis()->SetLabelSize(0.035);
   BaseDM_METmag_Box0_plotType1->GetZaxis()->SetTitleSize(0.035);
   BaseDM_METmag_Box0_plotType1->GetZaxis()->SetTitleFont(42);
   stack1->Add(BaseDM_METmag_Box0_plotType1,"");
   
   TH1F *BaseDM_METmag_Box0_plotType1 = new TH1F("BaseDM_METmag_Box0_plotType1","BaseDM_METmag_Box0_plotType1",20,0,1500);
   BaseDM_METmag_Box0_plotType1->SetBinContent(2,0.3018805);
   BaseDM_METmag_Box0_plotType1->SetBinContent(3,5.847709);
   BaseDM_METmag_Box0_plotType1->SetBinContent(4,5.276327);
   BaseDM_METmag_Box0_plotType1->SetBinContent(5,1.820297);
   BaseDM_METmag_Box0_plotType1->SetBinContent(6,0.2260302);
   BaseDM_METmag_Box0_plotType1->SetBinContent(7,0.1546898);
   BaseDM_METmag_Box0_plotType1->SetBinContent(8,0.2002451);
   BaseDM_METmag_Box0_plotType1->SetBinContent(9,0.1565408);
   BaseDM_METmag_Box0_plotType1->SetEntries(96);
   BaseDM_METmag_Box0_plotType1->SetStats(0);

   ci = TColor::GetColor("#ffff33");
   BaseDM_METmag_Box0_plotType1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   BaseDM_METmag_Box0_plotType1->SetLineColor(ci);
   BaseDM_METmag_Box0_plotType1->GetXaxis()->SetLabelFont(42);
   BaseDM_METmag_Box0_plotType1->GetXaxis()->SetLabelSize(0.035);
   BaseDM_METmag_Box0_plotType1->GetXaxis()->SetTitleSize(0.035);
   BaseDM_METmag_Box0_plotType1->GetXaxis()->SetTitleFont(42);
   BaseDM_METmag_Box0_plotType1->GetYaxis()->SetTitle("Events/20 GeV");
   BaseDM_METmag_Box0_plotType1->GetYaxis()->SetLabelFont(42);
   BaseDM_METmag_Box0_plotType1->GetYaxis()->SetLabelSize(0.035);
   BaseDM_METmag_Box0_plotType1->GetYaxis()->SetTitleSize(0.035);
   BaseDM_METmag_Box0_plotType1->GetYaxis()->SetTitleFont(42);
   BaseDM_METmag_Box0_plotType1->GetZaxis()->SetLabelFont(42);
   BaseDM_METmag_Box0_plotType1->GetZaxis()->SetLabelSize(0.035);
   BaseDM_METmag_Box0_plotType1->GetZaxis()->SetTitleSize(0.035);
   BaseDM_METmag_Box0_plotType1->GetZaxis()->SetTitleFont(42);
   stack1->Add(BaseDM_METmag_Box0_plotType1,"");
   
   TH1F *BaseDM_METmag_Box0_plotType1 = new TH1F("BaseDM_METmag_Box0_plotType1","BaseDM_METmag_Box0_plotType1",20,0,1500);
   BaseDM_METmag_Box0_plotType1->SetBinContent(2,1.868356);
   BaseDM_METmag_Box0_plotType1->SetBinContent(3,19.61724);
   BaseDM_METmag_Box0_plotType1->SetBinContent(4,14.69542);
   BaseDM_METmag_Box0_plotType1->SetBinContent(5,3.972588);
   BaseDM_METmag_Box0_plotType1->SetBinContent(6,1.965611);
   BaseDM_METmag_Box0_plotType1->SetBinContent(7,0.9121056);
   BaseDM_METmag_Box0_plotType1->SetBinContent(8,0.3821913);
   BaseDM_METmag_Box0_plotType1->SetBinContent(9,0.1655868);
   BaseDM_METmag_Box0_plotType1->SetBinContent(10,0.1277151);
   BaseDM_METmag_Box0_plotType1->SetBinContent(13,0.03392431);
   BaseDM_METmag_Box0_plotType1->SetEntries(674);
   BaseDM_METmag_Box0_plotType1->SetStats(0);

   ci = TColor::GetColor("#669900");
   BaseDM_METmag_Box0_plotType1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   BaseDM_METmag_Box0_plotType1->SetLineColor(ci);
   BaseDM_METmag_Box0_plotType1->GetXaxis()->SetLabelFont(42);
   BaseDM_METmag_Box0_plotType1->GetXaxis()->SetLabelSize(0.035);
   BaseDM_METmag_Box0_plotType1->GetXaxis()->SetTitleSize(0.035);
   BaseDM_METmag_Box0_plotType1->GetXaxis()->SetTitleFont(42);
   BaseDM_METmag_Box0_plotType1->GetYaxis()->SetTitle("Events/20 GeV");
   BaseDM_METmag_Box0_plotType1->GetYaxis()->SetLabelFont(42);
   BaseDM_METmag_Box0_plotType1->GetYaxis()->SetLabelSize(0.035);
   BaseDM_METmag_Box0_plotType1->GetYaxis()->SetTitleSize(0.035);
   BaseDM_METmag_Box0_plotType1->GetYaxis()->SetTitleFont(42);
   BaseDM_METmag_Box0_plotType1->GetZaxis()->SetLabelFont(42);
   BaseDM_METmag_Box0_plotType1->GetZaxis()->SetLabelSize(0.035);
   BaseDM_METmag_Box0_plotType1->GetZaxis()->SetTitleSize(0.035);
   BaseDM_METmag_Box0_plotType1->GetZaxis()->SetTitleFont(42);
   stack1->Add(BaseDM_METmag_Box0_plotType1,"");
   stack1->Draw("");
   
   TH1F *Data_METmag_Box0_plotType1 = new TH1F("Data_METmag_Box0_plotType1","Data_METmag_Box0_plotType1",20,0,1500);
   Data_METmag_Box0_plotType1->SetBinContent(2,23);
   Data_METmag_Box0_plotType1->SetBinContent(3,126);
   Data_METmag_Box0_plotType1->SetBinContent(4,69);
   Data_METmag_Box0_plotType1->SetBinContent(5,19);
   Data_METmag_Box0_plotType1->SetBinContent(6,7);
   Data_METmag_Box0_plotType1->SetBinContent(7,1);
   Data_METmag_Box0_plotType1->SetBinContent(8,2);
   Data_METmag_Box0_plotType1->SetBinError(2,4.795832);
   Data_METmag_Box0_plotType1->SetBinError(3,11.22497);
   Data_METmag_Box0_plotType1->SetBinError(4,8.306624);
   Data_METmag_Box0_plotType1->SetBinError(5,4.358899);
   Data_METmag_Box0_plotType1->SetBinError(6,2.645751);
   Data_METmag_Box0_plotType1->SetBinError(7,1);
   Data_METmag_Box0_plotType1->SetBinError(8,1.414214);
   Data_METmag_Box0_plotType1->SetEntries(247);
   Data_METmag_Box0_plotType1->SetStats(0);
   Data_METmag_Box0_plotType1->SetMarkerStyle(20);
   Data_METmag_Box0_plotType1->SetMarkerSize(0.7);
   Data_METmag_Box0_plotType1->GetXaxis()->SetLabelFont(42);
   Data_METmag_Box0_plotType1->GetXaxis()->SetLabelSize(0.035);
   Data_METmag_Box0_plotType1->GetXaxis()->SetTitleSize(0.035);
   Data_METmag_Box0_plotType1->GetXaxis()->SetTitleFont(42);
   Data_METmag_Box0_plotType1->GetYaxis()->SetLabelFont(42);
   Data_METmag_Box0_plotType1->GetYaxis()->SetLabelSize(0.035);
   Data_METmag_Box0_plotType1->GetYaxis()->SetTitleSize(0.035);
   Data_METmag_Box0_plotType1->GetYaxis()->SetTitleFont(42);
   Data_METmag_Box0_plotType1->GetZaxis()->SetLabelFont(42);
   Data_METmag_Box0_plotType1->GetZaxis()->SetLabelSize(0.035);
   Data_METmag_Box0_plotType1->GetZaxis()->SetTitleSize(0.035);
   Data_METmag_Box0_plotType1->GetZaxis()->SetTitleFont(42);
   Data_METmag_Box0_plotType1->Draw("same");
   pad1->Modified();
   C->cd();
   
   TLegend *leg = new TLegend(0.68,0.68,0.88,0.92,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.02);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("BaseDM_METmag_Box0_plotType1","W + jets","f");

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
   entry=leg->AddEntry("BaseDM_METmag_Box0_plotType1","Z(#nu#nu) + jets","f");

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
   entry=leg->AddEntry("BaseDM_METmag_Box0_plotType1","t #bar{t} + jets","f");

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
   entry=leg->AddEntry("BaseDM_METmag_Box0_plotType1","Z/#gamma^{*}(ll) + jets","f");

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
   entry=leg->AddEntry("Data_METmag_Box0_plotType1","Data","lep");
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
   
   TH1F *RATIO = new TH1F("RATIO","",20,0,1500);
   RATIO->SetBinContent(2,1.707166);
   RATIO->SetBinContent(3,0.9155958);
   RATIO->SetBinContent(4,0.8696969);
   RATIO->SetBinContent(5,0.8457083);
   RATIO->SetBinContent(6,1.218657);
   RATIO->SetBinContent(7,0.4871456);
   RATIO->SetBinContent(8,2.188055);
   RATIO->SetBinError(2,0.5856921);
   RATIO->SetBinError(3,0.1128939);
   RATIO->SetBinError(4,0.1431624);
   RATIO->SetBinError(5,0.2635878);
   RATIO->SetBinError(6,0.6860845);
   RATIO->SetBinError(7,0.5940672);
   RATIO->SetBinError(8,2.762525);
   RATIO->SetMinimum(0);
   RATIO->SetMaximum(3.05);
   RATIO->SetEntries(7.613393);
   RATIO->SetStats(0);
   RATIO->SetFillColor(4);
   RATIO->SetLineColor(4);
   RATIO->SetMarkerColor(4);
   RATIO->SetMarkerStyle(20);
   RATIO->SetMarkerSize(0.7);
   RATIO->GetXaxis()->SetTitle("#slash{E}_{T}  GeV");
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

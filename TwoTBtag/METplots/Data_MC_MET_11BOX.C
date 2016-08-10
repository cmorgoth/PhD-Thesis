{
//=========Macro generated from canvas: C/C      
//=========  (Fri Sep 12 02:07:07 2014) by ROOT version5.34/19
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
   
   THStack *stack4 = new THStack();
   stack4->SetName("stack4");
   stack4->SetTitle("");
   stack4->SetMinimum(1);
   stack4->SetMaximum(10000);
   
   TH1F *stack4_stack_10 = new TH1F("stack4_stack_10","",20,0,1500);
   stack4_stack_10->SetMinimum(0.3333333);
   stack4_stack_10->SetMaximum(18000);
   stack4_stack_10->SetDirectory(0);
   stack4_stack_10->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   stack4_stack_10->SetLineColor(ci);
   stack4_stack_10->GetXaxis()->SetLabelFont(42);
   stack4_stack_10->GetXaxis()->SetLabelSize(0.035);
   stack4_stack_10->GetXaxis()->SetTitleSize(0.035);
   stack4_stack_10->GetXaxis()->SetTitleFont(42);
   stack4_stack_10->GetYaxis()->SetTitle("Events/20 GeV");
   stack4_stack_10->GetYaxis()->SetLabelFont(42);
   stack4_stack_10->GetYaxis()->SetLabelSize(0.035);
   stack4_stack_10->GetYaxis()->SetTitleSize(0.035);
   stack4_stack_10->GetYaxis()->SetTitleOffset(1.25);
   stack4_stack_10->GetYaxis()->SetTitleFont(42);
   stack4_stack_10->GetZaxis()->SetLabelFont(42);
   stack4_stack_10->GetZaxis()->SetLabelSize(0.035);
   stack4_stack_10->GetZaxis()->SetTitleSize(0.035);
   stack4_stack_10->GetZaxis()->SetTitleFont(42);
   stack4->SetHistogram(stack4_stack_10);
   
   
   TH1F *BaseDM_METmag_Box1_plotType1 = new TH1F("BaseDM_METmag_Box1_plotType1","BaseDM_METmag_Box1_plotType1",20,0,1500);
   BaseDM_METmag_Box1_plotType1->SetBinContent(3,0.3436774);
   BaseDM_METmag_Box1_plotType1->SetBinContent(4,0.2381061);
   BaseDM_METmag_Box1_plotType1->SetBinContent(5,0.08447254);
   BaseDM_METmag_Box1_plotType1->SetBinContent(6,0.0226034);
   BaseDM_METmag_Box1_plotType1->SetBinContent(7,0.01251669);
   BaseDM_METmag_Box1_plotType1->SetBinContent(8,0.01488143);
   BaseDM_METmag_Box1_plotType1->SetEntries(20);
   BaseDM_METmag_Box1_plotType1->SetStats(0);

   ci = TColor::GetColor("#3300cc");
   BaseDM_METmag_Box1_plotType1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   BaseDM_METmag_Box1_plotType1->SetLineColor(ci);
   BaseDM_METmag_Box1_plotType1->GetXaxis()->SetLabelFont(42);
   BaseDM_METmag_Box1_plotType1->GetXaxis()->SetLabelSize(0.035);
   BaseDM_METmag_Box1_plotType1->GetXaxis()->SetTitleSize(0.035);
   BaseDM_METmag_Box1_plotType1->GetXaxis()->SetTitleFont(42);
   BaseDM_METmag_Box1_plotType1->GetYaxis()->SetLabelFont(42);
   BaseDM_METmag_Box1_plotType1->GetYaxis()->SetLabelSize(0.035);
   BaseDM_METmag_Box1_plotType1->GetYaxis()->SetTitleSize(0.035);
   BaseDM_METmag_Box1_plotType1->GetYaxis()->SetTitleFont(42);
   BaseDM_METmag_Box1_plotType1->GetZaxis()->SetLabelFont(42);
   BaseDM_METmag_Box1_plotType1->GetZaxis()->SetLabelSize(0.035);
   BaseDM_METmag_Box1_plotType1->GetZaxis()->SetTitleSize(0.035);
   BaseDM_METmag_Box1_plotType1->GetZaxis()->SetTitleFont(42);
   stack4->Add(BaseDM_METmag_Box1_plotType1,"");
   
   TH1F *BaseDM_METmag_Box1_plotType1 = new TH1F("BaseDM_METmag_Box1_plotType1","BaseDM_METmag_Box1_plotType1",20,0,1500);
   BaseDM_METmag_Box1_plotType1->SetBinContent(2,14.15822);
   BaseDM_METmag_Box1_plotType1->SetBinContent(3,177.0075);
   BaseDM_METmag_Box1_plotType1->SetBinContent(4,125.6546);
   BaseDM_METmag_Box1_plotType1->SetBinContent(5,35.96964);
   BaseDM_METmag_Box1_plotType1->SetBinContent(6,12.04196);
   BaseDM_METmag_Box1_plotType1->SetBinContent(7,4.740948);
   BaseDM_METmag_Box1_plotType1->SetBinContent(8,1.413913);
   BaseDM_METmag_Box1_plotType1->SetBinContent(9,0.5388912);
   BaseDM_METmag_Box1_plotType1->SetBinContent(10,0.1671293);
   BaseDM_METmag_Box1_plotType1->SetBinContent(11,0.0389887);
   BaseDM_METmag_Box1_plotType1->SetEntries(4920);
   BaseDM_METmag_Box1_plotType1->SetStats(0);

   ci = TColor::GetColor("#ff33cc");
   BaseDM_METmag_Box1_plotType1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   BaseDM_METmag_Box1_plotType1->SetLineColor(ci);
   BaseDM_METmag_Box1_plotType1->GetXaxis()->SetLabelFont(42);
   BaseDM_METmag_Box1_plotType1->GetXaxis()->SetLabelSize(0.035);
   BaseDM_METmag_Box1_plotType1->GetXaxis()->SetTitleSize(0.035);
   BaseDM_METmag_Box1_plotType1->GetXaxis()->SetTitleFont(42);
   BaseDM_METmag_Box1_plotType1->GetYaxis()->SetLabelFont(42);
   BaseDM_METmag_Box1_plotType1->GetYaxis()->SetLabelSize(0.035);
   BaseDM_METmag_Box1_plotType1->GetYaxis()->SetTitleSize(0.035);
   BaseDM_METmag_Box1_plotType1->GetYaxis()->SetTitleFont(42);
   BaseDM_METmag_Box1_plotType1->GetZaxis()->SetLabelFont(42);
   BaseDM_METmag_Box1_plotType1->GetZaxis()->SetLabelSize(0.035);
   BaseDM_METmag_Box1_plotType1->GetZaxis()->SetTitleSize(0.035);
   BaseDM_METmag_Box1_plotType1->GetZaxis()->SetTitleFont(42);
   stack4->Add(BaseDM_METmag_Box1_plotType1,"");
   
   TH1F *BaseDM_METmag_Box1_plotType1 = new TH1F("BaseDM_METmag_Box1_plotType1","BaseDM_METmag_Box1_plotType1",20,0,1500);
   BaseDM_METmag_Box1_plotType1->SetBinContent(2,0.41063);
   BaseDM_METmag_Box1_plotType1->SetBinContent(3,11.77478);
   BaseDM_METmag_Box1_plotType1->SetBinContent(4,5.787395);
   BaseDM_METmag_Box1_plotType1->SetBinContent(5,3.21688);
   BaseDM_METmag_Box1_plotType1->SetBinContent(6,1.025789);
   BaseDM_METmag_Box1_plotType1->SetBinContent(7,0.2413742);
   BaseDM_METmag_Box1_plotType1->SetBinContent(10,0.1295453);
   BaseDM_METmag_Box1_plotType1->SetEntries(143);
   BaseDM_METmag_Box1_plotType1->SetStats(0);

   ci = TColor::GetColor("#ffff33");
   BaseDM_METmag_Box1_plotType1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   BaseDM_METmag_Box1_plotType1->SetLineColor(ci);
   BaseDM_METmag_Box1_plotType1->GetXaxis()->SetLabelFont(42);
   BaseDM_METmag_Box1_plotType1->GetXaxis()->SetLabelSize(0.035);
   BaseDM_METmag_Box1_plotType1->GetXaxis()->SetTitleSize(0.035);
   BaseDM_METmag_Box1_plotType1->GetXaxis()->SetTitleFont(42);
   BaseDM_METmag_Box1_plotType1->GetYaxis()->SetLabelFont(42);
   BaseDM_METmag_Box1_plotType1->GetYaxis()->SetLabelSize(0.035);
   BaseDM_METmag_Box1_plotType1->GetYaxis()->SetTitleSize(0.035);
   BaseDM_METmag_Box1_plotType1->GetYaxis()->SetTitleFont(42);
   BaseDM_METmag_Box1_plotType1->GetZaxis()->SetLabelFont(42);
   BaseDM_METmag_Box1_plotType1->GetZaxis()->SetLabelSize(0.035);
   BaseDM_METmag_Box1_plotType1->GetZaxis()->SetTitleSize(0.035);
   BaseDM_METmag_Box1_plotType1->GetZaxis()->SetTitleFont(42);
   stack4->Add(BaseDM_METmag_Box1_plotType1,"");
   
   TH1F *BaseDM_METmag_Box1_plotType1 = new TH1F("BaseDM_METmag_Box1_plotType1","BaseDM_METmag_Box1_plotType1",20,0,1500);
   BaseDM_METmag_Box1_plotType1->SetStats(0);

   ci = TColor::GetColor("#669900");
   BaseDM_METmag_Box1_plotType1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   BaseDM_METmag_Box1_plotType1->SetLineColor(ci);
   BaseDM_METmag_Box1_plotType1->GetXaxis()->SetLabelFont(42);
   BaseDM_METmag_Box1_plotType1->GetXaxis()->SetLabelSize(0.035);
   BaseDM_METmag_Box1_plotType1->GetXaxis()->SetTitleSize(0.035);
   BaseDM_METmag_Box1_plotType1->GetXaxis()->SetTitleFont(42);
   BaseDM_METmag_Box1_plotType1->GetYaxis()->SetLabelFont(42);
   BaseDM_METmag_Box1_plotType1->GetYaxis()->SetLabelSize(0.035);
   BaseDM_METmag_Box1_plotType1->GetYaxis()->SetTitleSize(0.035);
   BaseDM_METmag_Box1_plotType1->GetYaxis()->SetTitleFont(42);
   BaseDM_METmag_Box1_plotType1->GetZaxis()->SetLabelFont(42);
   BaseDM_METmag_Box1_plotType1->GetZaxis()->SetLabelSize(0.035);
   BaseDM_METmag_Box1_plotType1->GetZaxis()->SetTitleSize(0.035);
   BaseDM_METmag_Box1_plotType1->GetZaxis()->SetTitleFont(42);
   stack4->Add(BaseDM_METmag_Box1_plotType1,"");
   stack4->Draw("");
   
   TH1F *Data_METmag_Box1_plotType1 = new TH1F("Data_METmag_Box1_plotType1","Data_METmag_Box1_plotType1",20,0,1500);
   Data_METmag_Box1_plotType1->SetBinContent(2,22);
   Data_METmag_Box1_plotType1->SetBinContent(3,157);
   Data_METmag_Box1_plotType1->SetBinContent(4,96);
   Data_METmag_Box1_plotType1->SetBinContent(5,29);
   Data_METmag_Box1_plotType1->SetBinContent(6,11);
   Data_METmag_Box1_plotType1->SetBinContent(7,1);
   Data_METmag_Box1_plotType1->SetBinContent(8,1);
   Data_METmag_Box1_plotType1->SetBinError(2,4.690416);
   Data_METmag_Box1_plotType1->SetBinError(3,12.52996);
   Data_METmag_Box1_plotType1->SetBinError(4,9.797959);
   Data_METmag_Box1_plotType1->SetBinError(5,5.385165);
   Data_METmag_Box1_plotType1->SetBinError(6,3.316625);
   Data_METmag_Box1_plotType1->SetBinError(7,1);
   Data_METmag_Box1_plotType1->SetBinError(8,1);
   Data_METmag_Box1_plotType1->SetEntries(317);
   Data_METmag_Box1_plotType1->SetStats(0);
   Data_METmag_Box1_plotType1->SetMarkerStyle(20);
   Data_METmag_Box1_plotType1->SetMarkerSize(0.7);
   Data_METmag_Box1_plotType1->GetXaxis()->SetLabelFont(42);
   Data_METmag_Box1_plotType1->GetXaxis()->SetLabelSize(0.035);
   Data_METmag_Box1_plotType1->GetXaxis()->SetTitleSize(0.035);
   Data_METmag_Box1_plotType1->GetXaxis()->SetTitleFont(42);
   Data_METmag_Box1_plotType1->GetYaxis()->SetLabelFont(42);
   Data_METmag_Box1_plotType1->GetYaxis()->SetLabelSize(0.035);
   Data_METmag_Box1_plotType1->GetYaxis()->SetTitleSize(0.035);
   Data_METmag_Box1_plotType1->GetYaxis()->SetTitleFont(42);
   Data_METmag_Box1_plotType1->GetZaxis()->SetLabelFont(42);
   Data_METmag_Box1_plotType1->GetZaxis()->SetLabelSize(0.035);
   Data_METmag_Box1_plotType1->GetZaxis()->SetTitleSize(0.035);
   Data_METmag_Box1_plotType1->GetZaxis()->SetTitleFont(42);
   Data_METmag_Box1_plotType1->Draw("same");
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
   TLegendEntry *entry=leg->AddEntry("BaseDM_METmag_Box1_plotType1","W + jets","f");

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
   entry=leg->AddEntry("BaseDM_METmag_Box1_plotType1","Z(#nu#nu) + jets","f");

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
   entry=leg->AddEntry("BaseDM_METmag_Box1_plotType1","t #bar{t} + jets","f");

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
   entry=leg->AddEntry("BaseDM_METmag_Box1_plotType1","Z/#gamma^{*}(ll) + jets","f");

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
   entry=leg->AddEntry("Data_METmag_Box1_plotType1","Data","lep");
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
   RATIO->SetBinContent(2,1.510071);
   RATIO->SetBinContent(3,0.8301346);
   RATIO->SetBinContent(4,0.7290398);
   RATIO->SetBinContent(5,0.7384586);
   RATIO->SetBinContent(6,0.8403133);
   RATIO->SetBinContent(7,0.2002067);
   RATIO->SetBinContent(8,0.6998908);
   RATIO->SetBinError(2,0.5100692);
   RATIO->SetBinError(3,0.08962728);
   RATIO->SetBinError(4,0.09784038);
   RATIO->SetBinError(5,0.1808045);
   RATIO->SetBinError(6,0.3437089);
   RATIO->SetBinError(7,0.2193343);
   RATIO->SetBinError(8,0.9125166);
   RATIO->SetMinimum(0);
   RATIO->SetMaximum(3.05);
   RATIO->SetEntries(23.50822);
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

{
//=========Macro generated from canvas: C/C      
//=========  (Fri Sep 12 00:53:04 2014) by ROOT version5.34/19
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
   
   THStack *stack6 = new THStack();
   stack6->SetName("stack6");
   stack6->SetTitle("");
   stack6->SetMinimum(1);
   stack6->SetMaximum(10000);
   
   TH1F *stack6_stack_11 = new TH1F("stack6_stack_11","",20,0,1500);
   stack6_stack_11->SetMinimum(0.3333333);
   stack6_stack_11->SetMaximum(18000);
   stack6_stack_11->SetDirectory(0);
   stack6_stack_11->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   stack6_stack_11->SetLineColor(ci);
   stack6_stack_11->GetXaxis()->SetLabelFont(42);
   stack6_stack_11->GetXaxis()->SetLabelSize(0.035);
   stack6_stack_11->GetXaxis()->SetTitleSize(0.035);
   stack6_stack_11->GetXaxis()->SetTitleFont(42);
   stack6_stack_11->GetYaxis()->SetTitle("Events/20 GeV");
   stack6_stack_11->GetYaxis()->SetLabelFont(42);
   stack6_stack_11->GetYaxis()->SetLabelSize(0.035);
   stack6_stack_11->GetYaxis()->SetTitleSize(0.035);
   stack6_stack_11->GetYaxis()->SetTitleOffset(1.25);
   stack6_stack_11->GetYaxis()->SetTitleFont(42);
   stack6_stack_11->GetZaxis()->SetLabelFont(42);
   stack6_stack_11->GetZaxis()->SetLabelSize(0.035);
   stack6_stack_11->GetZaxis()->SetTitleSize(0.035);
   stack6_stack_11->GetZaxis()->SetTitleFont(42);
   stack6->SetHistogram(stack6_stack_11);
   
   
   TH1F *BaseDM_METmag_Box2_plotType0 = new TH1F("BaseDM_METmag_Box2_plotType0","BaseDM_METmag_Box2_plotType0",20,0,1500);
   BaseDM_METmag_Box2_plotType0->SetBinContent(1,19.78205);
   BaseDM_METmag_Box2_plotType0->SetBinContent(2,0.4863975);
   BaseDM_METmag_Box2_plotType0->SetEntries(524);
   BaseDM_METmag_Box2_plotType0->SetStats(0);

   ci = TColor::GetColor("#3300cc");
   BaseDM_METmag_Box2_plotType0->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   BaseDM_METmag_Box2_plotType0->SetLineColor(ci);
   BaseDM_METmag_Box2_plotType0->GetXaxis()->SetLabelFont(42);
   BaseDM_METmag_Box2_plotType0->GetXaxis()->SetLabelSize(0.035);
   BaseDM_METmag_Box2_plotType0->GetXaxis()->SetTitleSize(0.035);
   BaseDM_METmag_Box2_plotType0->GetXaxis()->SetTitleFont(42);
   BaseDM_METmag_Box2_plotType0->GetYaxis()->SetLabelFont(42);
   BaseDM_METmag_Box2_plotType0->GetYaxis()->SetLabelSize(0.035);
   BaseDM_METmag_Box2_plotType0->GetYaxis()->SetTitleSize(0.035);
   BaseDM_METmag_Box2_plotType0->GetYaxis()->SetTitleFont(42);
   BaseDM_METmag_Box2_plotType0->GetZaxis()->SetLabelFont(42);
   BaseDM_METmag_Box2_plotType0->GetZaxis()->SetLabelSize(0.035);
   BaseDM_METmag_Box2_plotType0->GetZaxis()->SetTitleSize(0.035);
   BaseDM_METmag_Box2_plotType0->GetZaxis()->SetTitleFont(42);
   stack6->Add(BaseDM_METmag_Box2_plotType0,"");
   
   TH1F *BaseDM_METmag_Box2_plotType0 = new TH1F("BaseDM_METmag_Box2_plotType0","BaseDM_METmag_Box2_plotType0",20,0,1500);
   BaseDM_METmag_Box2_plotType0->SetBinContent(1,1.916189);
   BaseDM_METmag_Box2_plotType0->SetBinContent(2,4.052974);
   BaseDM_METmag_Box2_plotType0->SetBinContent(3,2.87393);
   BaseDM_METmag_Box2_plotType0->SetBinContent(4,0.4582382);
   BaseDM_METmag_Box2_plotType0->SetBinContent(5,0.04346196);
   BaseDM_METmag_Box2_plotType0->SetBinContent(6,0.0227185);
   BaseDM_METmag_Box2_plotType0->SetBinContent(7,0.01541019);
   BaseDM_METmag_Box2_plotType0->SetEntries(224);
   BaseDM_METmag_Box2_plotType0->SetStats(0);

   ci = TColor::GetColor("#ff33cc");
   BaseDM_METmag_Box2_plotType0->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   BaseDM_METmag_Box2_plotType0->SetLineColor(ci);
   BaseDM_METmag_Box2_plotType0->GetXaxis()->SetLabelFont(42);
   BaseDM_METmag_Box2_plotType0->GetXaxis()->SetLabelSize(0.035);
   BaseDM_METmag_Box2_plotType0->GetXaxis()->SetTitleSize(0.035);
   BaseDM_METmag_Box2_plotType0->GetXaxis()->SetTitleFont(42);
   BaseDM_METmag_Box2_plotType0->GetYaxis()->SetLabelFont(42);
   BaseDM_METmag_Box2_plotType0->GetYaxis()->SetLabelSize(0.035);
   BaseDM_METmag_Box2_plotType0->GetYaxis()->SetTitleSize(0.035);
   BaseDM_METmag_Box2_plotType0->GetYaxis()->SetTitleFont(42);
   BaseDM_METmag_Box2_plotType0->GetZaxis()->SetLabelFont(42);
   BaseDM_METmag_Box2_plotType0->GetZaxis()->SetLabelSize(0.035);
   BaseDM_METmag_Box2_plotType0->GetZaxis()->SetTitleSize(0.035);
   BaseDM_METmag_Box2_plotType0->GetZaxis()->SetTitleFont(42);
   stack6->Add(BaseDM_METmag_Box2_plotType0,"");
   
   TH1F *BaseDM_METmag_Box2_plotType0 = new TH1F("BaseDM_METmag_Box2_plotType0","BaseDM_METmag_Box2_plotType0",20,0,1500);
   BaseDM_METmag_Box2_plotType0->SetStats(0);

   ci = TColor::GetColor("#ffff33");
   BaseDM_METmag_Box2_plotType0->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   BaseDM_METmag_Box2_plotType0->SetLineColor(ci);
   BaseDM_METmag_Box2_plotType0->GetXaxis()->SetLabelFont(42);
   BaseDM_METmag_Box2_plotType0->GetXaxis()->SetLabelSize(0.035);
   BaseDM_METmag_Box2_plotType0->GetXaxis()->SetTitleSize(0.035);
   BaseDM_METmag_Box2_plotType0->GetXaxis()->SetTitleFont(42);
   BaseDM_METmag_Box2_plotType0->GetYaxis()->SetLabelFont(42);
   BaseDM_METmag_Box2_plotType0->GetYaxis()->SetLabelSize(0.035);
   BaseDM_METmag_Box2_plotType0->GetYaxis()->SetTitleSize(0.035);
   BaseDM_METmag_Box2_plotType0->GetYaxis()->SetTitleFont(42);
   BaseDM_METmag_Box2_plotType0->GetZaxis()->SetLabelFont(42);
   BaseDM_METmag_Box2_plotType0->GetZaxis()->SetLabelSize(0.035);
   BaseDM_METmag_Box2_plotType0->GetZaxis()->SetTitleSize(0.035);
   BaseDM_METmag_Box2_plotType0->GetZaxis()->SetTitleFont(42);
   stack6->Add(BaseDM_METmag_Box2_plotType0,"");
   
   TH1F *BaseDM_METmag_Box2_plotType0 = new TH1F("BaseDM_METmag_Box2_plotType0","BaseDM_METmag_Box2_plotType0",20,0,1500);
   BaseDM_METmag_Box2_plotType0->SetStats(0);

   ci = TColor::GetColor("#669900");
   BaseDM_METmag_Box2_plotType0->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   BaseDM_METmag_Box2_plotType0->SetLineColor(ci);
   BaseDM_METmag_Box2_plotType0->GetXaxis()->SetLabelFont(42);
   BaseDM_METmag_Box2_plotType0->GetXaxis()->SetLabelSize(0.035);
   BaseDM_METmag_Box2_plotType0->GetXaxis()->SetTitleSize(0.035);
   BaseDM_METmag_Box2_plotType0->GetXaxis()->SetTitleFont(42);
   BaseDM_METmag_Box2_plotType0->GetYaxis()->SetLabelFont(42);
   BaseDM_METmag_Box2_plotType0->GetYaxis()->SetLabelSize(0.035);
   BaseDM_METmag_Box2_plotType0->GetYaxis()->SetTitleSize(0.035);
   BaseDM_METmag_Box2_plotType0->GetYaxis()->SetTitleFont(42);
   BaseDM_METmag_Box2_plotType0->GetZaxis()->SetLabelFont(42);
   BaseDM_METmag_Box2_plotType0->GetZaxis()->SetLabelSize(0.035);
   BaseDM_METmag_Box2_plotType0->GetZaxis()->SetTitleSize(0.035);
   BaseDM_METmag_Box2_plotType0->GetZaxis()->SetTitleFont(42);
   stack6->Add(BaseDM_METmag_Box2_plotType0,"");
   stack6->Draw("");
   
   TH1F *Data_METmag_Box2_plotType0 = new TH1F("Data_METmag_Box2_plotType0","Data_METmag_Box2_plotType0",20,0,1500);
   Data_METmag_Box2_plotType0->SetBinContent(1,27);
   Data_METmag_Box2_plotType0->SetBinContent(2,3);
   Data_METmag_Box2_plotType0->SetBinContent(3,2);
   Data_METmag_Box2_plotType0->SetBinContent(4,1);
   Data_METmag_Box2_plotType0->SetBinContent(5,1);
   Data_METmag_Box2_plotType0->SetBinError(1,5.196152);
   Data_METmag_Box2_plotType0->SetBinError(2,1.732051);
   Data_METmag_Box2_plotType0->SetBinError(3,1.414214);
   Data_METmag_Box2_plotType0->SetBinError(4,1);
   Data_METmag_Box2_plotType0->SetBinError(5,1);
   Data_METmag_Box2_plotType0->SetEntries(34);
   Data_METmag_Box2_plotType0->SetStats(0);
   Data_METmag_Box2_plotType0->SetMarkerStyle(20);
   Data_METmag_Box2_plotType0->SetMarkerSize(0.7);
   Data_METmag_Box2_plotType0->GetXaxis()->SetLabelFont(42);
   Data_METmag_Box2_plotType0->GetXaxis()->SetLabelSize(0.035);
   Data_METmag_Box2_plotType0->GetXaxis()->SetTitleSize(0.035);
   Data_METmag_Box2_plotType0->GetXaxis()->SetTitleFont(42);
   Data_METmag_Box2_plotType0->GetYaxis()->SetLabelFont(42);
   Data_METmag_Box2_plotType0->GetYaxis()->SetLabelSize(0.035);
   Data_METmag_Box2_plotType0->GetYaxis()->SetTitleSize(0.035);
   Data_METmag_Box2_plotType0->GetYaxis()->SetTitleFont(42);
   Data_METmag_Box2_plotType0->GetZaxis()->SetLabelFont(42);
   Data_METmag_Box2_plotType0->GetZaxis()->SetLabelSize(0.035);
   Data_METmag_Box2_plotType0->GetZaxis()->SetTitleSize(0.035);
   Data_METmag_Box2_plotType0->GetZaxis()->SetTitleFont(42);
   Data_METmag_Box2_plotType0->Draw("same");
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
   TLegendEntry *entry=leg->AddEntry("BaseDM_METmag_Box2_plotType0","W + jets","f");

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
   entry=leg->AddEntry("BaseDM_METmag_Box2_plotType0","Z(#nu#nu) + jets","f");

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
   entry=leg->AddEntry("BaseDM_METmag_Box2_plotType0","t #bar{t} + jets","f");

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
   entry=leg->AddEntry("BaseDM_METmag_Box2_plotType0","Z/#gamma^{*}(ll) + jets","f");

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
   entry=leg->AddEntry("Data_METmag_Box2_plotType0","Data","lep");
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
   RATIO->SetBinContent(1,1.244341);
   RATIO->SetBinContent(2,0.6608844);
   RATIO->SetBinContent(3,0.6959111);
   RATIO->SetBinContent(4,2.182271);
   RATIO->SetBinContent(5,23.00863);
   RATIO->SetBinError(1,0.3587582);
   RATIO->SetBinError(2,0.4917389);
   RATIO->SetBinError(3,0.6408263);
   RATIO->SetBinError(4,3.892936);
   RATIO->SetBinError(5,112.739);
   RATIO->SetMinimum(0);
   RATIO->SetMaximum(3.05);
   RATIO->SetEntries(0.06069429);
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

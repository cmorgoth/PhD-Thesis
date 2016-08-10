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
   pad1->Range(-0.1250001,-0.544068,11.125,5.950485);
   pad1->SetFillColor(0);
   pad1->SetBorderMode(0);
   pad1->SetBorderSize(2);
   pad1->SetLogy();
   pad1->SetBottomMargin(0);
   pad1->SetFrameBorderMode(0);
   pad1->SetFrameBorderMode(0);
   
   THStack *stack11 = new THStack();
   stack11->SetName("stack11");
   stack11->SetTitle("");
   stack11->SetMinimum(1);
   stack11->SetMaximum(100000);
   
   TH1F *stack11_stack_15 = new TH1F("stack11_stack_15","",9,1,10);
   stack11_stack_15->SetMinimum(0.2857143);
   stack11_stack_15->SetMaximum(200000);
   stack11_stack_15->SetDirectory(0);
   stack11_stack_15->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   stack11_stack_15->SetLineColor(ci);
   stack11_stack_15->GetXaxis()->SetLabelFont(42);
   stack11_stack_15->GetXaxis()->SetLabelSize(0.035);
   stack11_stack_15->GetXaxis()->SetTitleSize(0.035);
   stack11_stack_15->GetXaxis()->SetTitleFont(42);
   stack11_stack_15->GetYaxis()->SetTitle("Events");
   stack11_stack_15->GetYaxis()->SetLabelFont(42);
   stack11_stack_15->GetYaxis()->SetLabelSize(0.035);
   stack11_stack_15->GetYaxis()->SetTitleSize(0.035);
   stack11_stack_15->GetYaxis()->SetTitleOffset(1.25);
   stack11_stack_15->GetYaxis()->SetTitleFont(42);
   stack11_stack_15->GetZaxis()->SetLabelFont(42);
   stack11_stack_15->GetZaxis()->SetLabelSize(0.035);
   stack11_stack_15->GetZaxis()->SetTitleSize(0.035);
   stack11_stack_15->GetZaxis()->SetTitleFont(42);
   stack11->SetHistogram(stack11_stack_15);
   
   
   TH1F *NJETS2_W = new TH1F("NJETS2_W","NJETS 2 BOX",9,1,10);
   NJETS2_W->SetBinContent(2,14.71655);
   NJETS2_W->SetBinContent(3,4.610685);
   NJETS2_W->SetBinContent(4,0.9110414);
   NJETS2_W->SetBinContent(5,0.03017195);
   NJETS2_W->SetEntries(524);
   NJETS2_W->SetStats(0);

   ci = TColor::GetColor("#3300cc");
   NJETS2_W->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   NJETS2_W->SetLineColor(ci);
   NJETS2_W->GetXaxis()->SetLabelFont(42);
   NJETS2_W->GetXaxis()->SetLabelSize(0.035);
   NJETS2_W->GetXaxis()->SetTitleSize(0.035);
   NJETS2_W->GetXaxis()->SetTitleFont(42);
   NJETS2_W->GetYaxis()->SetLabelFont(42);
   NJETS2_W->GetYaxis()->SetLabelSize(0.035);
   NJETS2_W->GetYaxis()->SetTitleSize(0.035);
   NJETS2_W->GetYaxis()->SetTitleFont(42);
   NJETS2_W->GetZaxis()->SetLabelFont(42);
   NJETS2_W->GetZaxis()->SetLabelSize(0.035);
   NJETS2_W->GetZaxis()->SetTitleSize(0.035);
   NJETS2_W->GetZaxis()->SetTitleFont(42);
   stack11->Add(NJETS2_W,"");
   
   TH1F *NJETS2_W__15 = new TH1F("NJETS2_W__15","NJETS 2 BOX",9,1,10);
   NJETS2_W__15->SetBinContent(2,5.78513);
   NJETS2_W__15->SetBinContent(3,2.922391);
   NJETS2_W__15->SetBinContent(4,0.6315679);
   NJETS2_W__15->SetBinContent(5,0.04383229);
   NJETS2_W__15->SetEntries(224);
   NJETS2_W__15->SetDirectory(0);
   NJETS2_W__15->SetStats(0);

   ci = TColor::GetColor("#ff33cc");
   NJETS2_W__15->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   NJETS2_W__15->SetLineColor(ci);
   NJETS2_W__15->GetXaxis()->SetLabelFont(42);
   NJETS2_W__15->GetXaxis()->SetLabelSize(0.035);
   NJETS2_W__15->GetXaxis()->SetTitleSize(0.035);
   NJETS2_W__15->GetXaxis()->SetTitleFont(42);
   NJETS2_W__15->GetYaxis()->SetLabelFont(42);
   NJETS2_W__15->GetYaxis()->SetLabelSize(0.035);
   NJETS2_W__15->GetYaxis()->SetTitleSize(0.035);
   NJETS2_W__15->GetYaxis()->SetTitleFont(42);
   NJETS2_W__15->GetZaxis()->SetLabelFont(42);
   NJETS2_W__15->GetZaxis()->SetLabelSize(0.035);
   NJETS2_W__15->GetZaxis()->SetTitleSize(0.035);
   NJETS2_W__15->GetZaxis()->SetTitleFont(42);
   stack11->Add(NJETS2_W,"");
   
   TH1F *NJETS2_W = new TH1F("NJETS2_W","NJETS 2 BOX",9,1,10);
   NJETS2_W->SetStats(0);

   ci = TColor::GetColor("#ffff33");
   NJETS2_W->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   NJETS2_W->SetLineColor(ci);
   NJETS2_W->GetXaxis()->SetLabelFont(42);
   NJETS2_W->GetXaxis()->SetLabelSize(0.035);
   NJETS2_W->GetXaxis()->SetTitleSize(0.035);
   NJETS2_W->GetXaxis()->SetTitleFont(42);
   NJETS2_W->GetYaxis()->SetLabelFont(42);
   NJETS2_W->GetYaxis()->SetLabelSize(0.035);
   NJETS2_W->GetYaxis()->SetTitleSize(0.035);
   NJETS2_W->GetYaxis()->SetTitleFont(42);
   NJETS2_W->GetZaxis()->SetLabelFont(42);
   NJETS2_W->GetZaxis()->SetLabelSize(0.035);
   NJETS2_W->GetZaxis()->SetTitleSize(0.035);
   NJETS2_W->GetZaxis()->SetTitleFont(42);
   stack11->Add(NJETS2_W,"");
   
   TH1F *NJETS2_W = new TH1F("NJETS2_W","NJETS 2 BOX",9,1,10);
   NJETS2_W->SetStats(0);

   ci = TColor::GetColor("#669900");
   NJETS2_W->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   NJETS2_W->SetLineColor(ci);
   NJETS2_W->GetXaxis()->SetLabelFont(42);
   NJETS2_W->GetXaxis()->SetLabelSize(0.035);
   NJETS2_W->GetXaxis()->SetTitleSize(0.035);
   NJETS2_W->GetXaxis()->SetTitleFont(42);
   NJETS2_W->GetYaxis()->SetLabelFont(42);
   NJETS2_W->GetYaxis()->SetLabelSize(0.035);
   NJETS2_W->GetYaxis()->SetTitleSize(0.035);
   NJETS2_W->GetYaxis()->SetTitleFont(42);
   NJETS2_W->GetZaxis()->SetLabelFont(42);
   NJETS2_W->GetZaxis()->SetLabelSize(0.035);
   NJETS2_W->GetZaxis()->SetTitleSize(0.035);
   NJETS2_W->GetZaxis()->SetTitleFont(42);
   stack11->Add(NJETS2_W,"");
   stack11->Draw("");
   
   TH1F *NJETS2_W = new TH1F("NJETS2_W","NJETS 2 BOX",9,1,10);
   NJETS2_W->SetBinContent(2,20);
   NJETS2_W->SetBinContent(3,13);
   NJETS2_W->SetBinContent(4,1);
   NJETS2_W->SetBinError(2,4.472136);
   NJETS2_W->SetBinError(3,3.605551);
   NJETS2_W->SetBinError(4,1);
   NJETS2_W->SetEntries(34);
   NJETS2_W->SetStats(0);
   NJETS2_W->SetMarkerStyle(20);
   NJETS2_W->SetMarkerSize(0.7);
   NJETS2_W->GetXaxis()->SetLabelFont(42);
   NJETS2_W->GetXaxis()->SetLabelSize(0.035);
   NJETS2_W->GetXaxis()->SetTitleSize(0.035);
   NJETS2_W->GetXaxis()->SetTitleFont(42);
   NJETS2_W->GetYaxis()->SetLabelFont(42);
   NJETS2_W->GetYaxis()->SetLabelSize(0.035);
   NJETS2_W->GetYaxis()->SetTitleSize(0.035);
   NJETS2_W->GetYaxis()->SetTitleFont(42);
   NJETS2_W->GetZaxis()->SetLabelFont(42);
   NJETS2_W->GetZaxis()->SetLabelSize(0.035);
   NJETS2_W->GetZaxis()->SetTitleSize(0.035);
   NJETS2_W->GetZaxis()->SetTitleFont(42);
   NJETS2_W->Draw("same");
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
   TLegendEntry *entry=leg->AddEntry("NJETS2_W","W + jets","f");

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
   entry=leg->AddEntry("NJETS2_W","Z(#nu#nu) + jets","f");

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
   entry=leg->AddEntry("NJETS2_W","t #bar{t} + jets","f");

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
   entry=leg->AddEntry("NJETS2_W","Z/#gamma^{*}(ll) + jets","f");

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
   entry=leg->AddEntry("NJETS2_W","Data","lep");
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
   
   TH1F *RATIO = new TH1F("RATIO","",9,1,10);
   RATIO->SetBinContent(2,0.9755301);
   RATIO->SetBinContent(3,1.725723);
   RATIO->SetBinContent(4,0.6482523);
   RATIO->SetBinError(2,0.3065967);
   RATIO->SetBinError(3,0.7902057);
   RATIO->SetBinError(4,0.8322541);
   RATIO->SetMinimum(0);
   RATIO->SetMaximum(3.05);
   RATIO->SetEntries(7.950815);
   RATIO->SetStats(0);
   RATIO->SetFillColor(4);
   RATIO->SetLineColor(4);
   RATIO->SetMarkerColor(4);
   RATIO->SetMarkerStyle(20);
   RATIO->SetMarkerSize(0.7);
   RATIO->GetXaxis()->SetTitle("Jet Multiplicity");
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

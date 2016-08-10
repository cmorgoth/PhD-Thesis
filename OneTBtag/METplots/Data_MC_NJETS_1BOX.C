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
   
   THStack *stack10 = new THStack();
   stack10->SetName("stack10");
   stack10->SetTitle("");
   stack10->SetMinimum(1);
   stack10->SetMaximum(100000);
   
   TH1F *stack10_stack_14 = new TH1F("stack10_stack_14","",9,1,10);
   stack10_stack_14->SetMinimum(0.2857143);
   stack10_stack_14->SetMaximum(200000);
   stack10_stack_14->SetDirectory(0);
   stack10_stack_14->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   stack10_stack_14->SetLineColor(ci);
   stack10_stack_14->GetXaxis()->SetLabelFont(42);
   stack10_stack_14->GetXaxis()->SetLabelSize(0.035);
   stack10_stack_14->GetXaxis()->SetTitleSize(0.035);
   stack10_stack_14->GetXaxis()->SetTitleFont(42);
   stack10_stack_14->GetYaxis()->SetTitle("Events");
   stack10_stack_14->GetYaxis()->SetLabelFont(42);
   stack10_stack_14->GetYaxis()->SetLabelSize(0.035);
   stack10_stack_14->GetYaxis()->SetTitleSize(0.035);
   stack10_stack_14->GetYaxis()->SetTitleOffset(1.25);
   stack10_stack_14->GetYaxis()->SetTitleFont(42);
   stack10_stack_14->GetZaxis()->SetLabelFont(42);
   stack10_stack_14->GetZaxis()->SetLabelSize(0.035);
   stack10_stack_14->GetZaxis()->SetTitleSize(0.035);
   stack10_stack_14->GetZaxis()->SetTitleFont(42);
   stack10->SetHistogram(stack10_stack_14);
   
   
   TH1F *NJETS1_W = new TH1F("NJETS1_W","NJETS 1 BOX",9,1,10);
   NJETS1_W->SetBinContent(2,7.293653);
   NJETS1_W->SetBinContent(3,2.108754);
   NJETS1_W->SetBinContent(4,0.4415841);
   NJETS1_W->SetBinContent(5,0.0254911);
   NJETS1_W->SetEntries(241);
   NJETS1_W->SetStats(0);

   ci = TColor::GetColor("#3300cc");
   NJETS1_W->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   NJETS1_W->SetLineColor(ci);
   NJETS1_W->GetXaxis()->SetLabelFont(42);
   NJETS1_W->GetXaxis()->SetLabelSize(0.035);
   NJETS1_W->GetXaxis()->SetTitleSize(0.035);
   NJETS1_W->GetXaxis()->SetTitleFont(42);
   NJETS1_W->GetYaxis()->SetLabelFont(42);
   NJETS1_W->GetYaxis()->SetLabelSize(0.035);
   NJETS1_W->GetYaxis()->SetTitleSize(0.035);
   NJETS1_W->GetYaxis()->SetTitleFont(42);
   NJETS1_W->GetZaxis()->SetLabelFont(42);
   NJETS1_W->GetZaxis()->SetLabelSize(0.035);
   NJETS1_W->GetZaxis()->SetTitleSize(0.035);
   NJETS1_W->GetZaxis()->SetTitleFont(42);
   stack10->Add(NJETS1_W,"");
   
   TH1F *NJETS1_W__14 = new TH1F("NJETS1_W__14","NJETS 1 BOX",9,1,10);
   NJETS1_W__14->SetBinContent(2,1135.173);
   NJETS1_W__14->SetBinContent(3,1111.379);
   NJETS1_W__14->SetBinContent(4,373.2919);
   NJETS1_W__14->SetBinContent(5,51.35846);
   NJETS1_W__14->SetBinContent(6,4.843263);
   NJETS1_W__14->SetBinContent(7,0.2844505);
   NJETS1_W__14->SetEntries(35626);
   NJETS1_W__14->SetDirectory(0);
   NJETS1_W__14->SetStats(0);

   ci = TColor::GetColor("#ff33cc");
   NJETS1_W__14->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   NJETS1_W__14->SetLineColor(ci);
   NJETS1_W__14->GetXaxis()->SetLabelFont(42);
   NJETS1_W__14->GetXaxis()->SetLabelSize(0.035);
   NJETS1_W__14->GetXaxis()->SetTitleSize(0.035);
   NJETS1_W__14->GetXaxis()->SetTitleFont(42);
   NJETS1_W__14->GetYaxis()->SetLabelFont(42);
   NJETS1_W__14->GetYaxis()->SetLabelSize(0.035);
   NJETS1_W__14->GetYaxis()->SetTitleSize(0.035);
   NJETS1_W__14->GetYaxis()->SetTitleFont(42);
   NJETS1_W__14->GetZaxis()->SetLabelFont(42);
   NJETS1_W__14->GetZaxis()->SetLabelSize(0.035);
   NJETS1_W__14->GetZaxis()->SetTitleSize(0.035);
   NJETS1_W__14->GetZaxis()->SetTitleFont(42);
   stack10->Add(NJETS1_W,"");
   
   TH1F *NJETS1_W = new TH1F("NJETS1_W","NJETS 1 BOX",9,1,10);
   NJETS1_W->SetBinContent(2,178.2406);
   NJETS1_W->SetBinContent(3,67.31708);
   NJETS1_W->SetBinContent(4,9.411227);
   NJETS1_W->SetBinContent(5,1.017706);
   NJETS1_W->SetBinContent(6,0.3627599);
   NJETS1_W->SetEntries(1748);
   NJETS1_W->SetStats(0);

   ci = TColor::GetColor("#ffff33");
   NJETS1_W->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   NJETS1_W->SetLineColor(ci);
   NJETS1_W->GetXaxis()->SetLabelFont(42);
   NJETS1_W->GetXaxis()->SetLabelSize(0.035);
   NJETS1_W->GetXaxis()->SetTitleSize(0.035);
   NJETS1_W->GetXaxis()->SetTitleFont(42);
   NJETS1_W->GetYaxis()->SetLabelFont(42);
   NJETS1_W->GetYaxis()->SetLabelSize(0.035);
   NJETS1_W->GetYaxis()->SetTitleSize(0.035);
   NJETS1_W->GetYaxis()->SetTitleFont(42);
   NJETS1_W->GetZaxis()->SetLabelFont(42);
   NJETS1_W->GetZaxis()->SetLabelSize(0.035);
   NJETS1_W->GetZaxis()->SetTitleSize(0.035);
   NJETS1_W->GetZaxis()->SetTitleFont(42);
   stack10->Add(NJETS1_W,"");
   
   TH1F *NJETS1_W = new TH1F("NJETS1_W","NJETS 1 BOX",9,1,10);
   NJETS1_W->SetBinContent(2,0.1841578);
   NJETS1_W->SetBinContent(3,0.02960601);
   NJETS1_W->SetEntries(9);
   NJETS1_W->SetStats(0);

   ci = TColor::GetColor("#669900");
   NJETS1_W->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   NJETS1_W->SetLineColor(ci);
   NJETS1_W->GetXaxis()->SetLabelFont(42);
   NJETS1_W->GetXaxis()->SetLabelSize(0.035);
   NJETS1_W->GetXaxis()->SetTitleSize(0.035);
   NJETS1_W->GetXaxis()->SetTitleFont(42);
   NJETS1_W->GetYaxis()->SetLabelFont(42);
   NJETS1_W->GetYaxis()->SetLabelSize(0.035);
   NJETS1_W->GetYaxis()->SetTitleSize(0.035);
   NJETS1_W->GetYaxis()->SetTitleFont(42);
   NJETS1_W->GetZaxis()->SetLabelFont(42);
   NJETS1_W->GetZaxis()->SetLabelSize(0.035);
   NJETS1_W->GetZaxis()->SetTitleSize(0.035);
   NJETS1_W->GetZaxis()->SetTitleFont(42);
   stack10->Add(NJETS1_W,"");
   stack10->Draw("");
   
   TH1F *NJETS1_W = new TH1F("NJETS1_W","NJETS 1 BOX",9,1,10);
   NJETS1_W->SetBinContent(2,1315);
   NJETS1_W->SetBinContent(3,994);
   NJETS1_W->SetBinContent(4,262);
   NJETS1_W->SetBinContent(5,27);
   NJETS1_W->SetBinContent(6,5);
   NJETS1_W->SetBinError(2,36.26293);
   NJETS1_W->SetBinError(3,31.52777);
   NJETS1_W->SetBinError(4,16.18641);
   NJETS1_W->SetBinError(5,5.196152);
   NJETS1_W->SetBinError(6,2.236068);
   NJETS1_W->SetEntries(2603);
   NJETS1_W->SetStats(0);
   NJETS1_W->SetMarkerStyle(20);
   NJETS1_W->SetMarkerSize(0.7);
   NJETS1_W->GetXaxis()->SetLabelFont(42);
   NJETS1_W->GetXaxis()->SetLabelSize(0.035);
   NJETS1_W->GetXaxis()->SetTitleSize(0.035);
   NJETS1_W->GetXaxis()->SetTitleFont(42);
   NJETS1_W->GetYaxis()->SetLabelFont(42);
   NJETS1_W->GetYaxis()->SetLabelSize(0.035);
   NJETS1_W->GetYaxis()->SetTitleSize(0.035);
   NJETS1_W->GetYaxis()->SetTitleFont(42);
   NJETS1_W->GetZaxis()->SetLabelFont(42);
   NJETS1_W->GetZaxis()->SetLabelSize(0.035);
   NJETS1_W->GetZaxis()->SetTitleSize(0.035);
   NJETS1_W->GetZaxis()->SetTitleFont(42);
   NJETS1_W->Draw("same");
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
   TLegendEntry *entry=leg->AddEntry("NJETS1_W","W + jets","f");

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
   entry=leg->AddEntry("NJETS1_W","Z(#nu#nu) + jets","f");

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
   entry=leg->AddEntry("NJETS1_W","t #bar{t} + jets","f");

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
   entry=leg->AddEntry("NJETS1_W","Z/#gamma^{*}(ll) + jets","f");

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
   entry=leg->AddEntry("NJETS1_W","Data","lep");
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
   RATIO->SetBinContent(2,0.9955398);
   RATIO->SetBinContent(3,0.8417779);
   RATIO->SetBinContent(4,0.6838147);
   RATIO->SetBinContent(5,0.515251);
   RATIO->SetBinContent(6,0.9604261);
   RATIO->SetBinError(2,0.03878162);
   RATIO->SetBinError(3,0.03623455);
   RATIO->SetBinError(4,0.05481948);
   RATIO->SetBinError(5,0.1220616);
   RATIO->SetBinError(6,0.6013872);
   RATIO->SetMinimum(0);
   RATIO->SetMaximum(3.05);
   RATIO->SetEntries(41.77562);
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

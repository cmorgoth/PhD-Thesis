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
   
   THStack *stack9 = new THStack();
   stack9->SetName("stack9");
   stack9->SetTitle("");
   stack9->SetMinimum(1);
   stack9->SetMaximum(100000);
   
   TH1F *stack9_stack_13 = new TH1F("stack9_stack_13","",9,1,10);
   stack9_stack_13->SetMinimum(0.2857143);
   stack9_stack_13->SetMaximum(200000);
   stack9_stack_13->SetDirectory(0);
   stack9_stack_13->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   stack9_stack_13->SetLineColor(ci);
   stack9_stack_13->GetXaxis()->SetLabelFont(42);
   stack9_stack_13->GetXaxis()->SetLabelSize(0.035);
   stack9_stack_13->GetXaxis()->SetTitleSize(0.035);
   stack9_stack_13->GetXaxis()->SetTitleFont(42);
   stack9_stack_13->GetYaxis()->SetTitle("Events");
   stack9_stack_13->GetYaxis()->SetLabelFont(42);
   stack9_stack_13->GetYaxis()->SetLabelSize(0.035);
   stack9_stack_13->GetYaxis()->SetTitleSize(0.035);
   stack9_stack_13->GetYaxis()->SetTitleOffset(1.25);
   stack9_stack_13->GetYaxis()->SetTitleFont(42);
   stack9_stack_13->GetZaxis()->SetLabelFont(42);
   stack9_stack_13->GetZaxis()->SetLabelSize(0.035);
   stack9_stack_13->GetZaxis()->SetTitleSize(0.035);
   stack9_stack_13->GetZaxis()->SetTitleFont(42);
   stack9->SetHistogram(stack9_stack_13);
   
   
   TH1F *NJETS0_W = new TH1F("NJETS0_W","NJETS 0 BOX",9,1,10);
   NJETS0_W->SetBinContent(2,1.442632);
   NJETS0_W->SetBinContent(3,0.783258);
   NJETS0_W->SetBinContent(4,0.1236462);
   NJETS0_W->SetBinContent(6,0.002799323);
   NJETS0_W->SetEntries(56);
   NJETS0_W->SetStats(0);

   ci = TColor::GetColor("#3300cc");
   NJETS0_W->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   NJETS0_W->SetLineColor(ci);
   NJETS0_W->GetXaxis()->SetLabelFont(42);
   NJETS0_W->GetXaxis()->SetLabelSize(0.035);
   NJETS0_W->GetXaxis()->SetTitleSize(0.035);
   NJETS0_W->GetXaxis()->SetTitleFont(42);
   NJETS0_W->GetYaxis()->SetLabelFont(42);
   NJETS0_W->GetYaxis()->SetLabelSize(0.035);
   NJETS0_W->GetYaxis()->SetTitleSize(0.035);
   NJETS0_W->GetYaxis()->SetTitleFont(42);
   NJETS0_W->GetZaxis()->SetLabelFont(42);
   NJETS0_W->GetZaxis()->SetLabelSize(0.035);
   NJETS0_W->GetZaxis()->SetTitleSize(0.035);
   NJETS0_W->GetZaxis()->SetTitleFont(42);
   stack9->Add(NJETS0_W,"");
   
   TH1F *NJETS0_W__13 = new TH1F("NJETS0_W__13","NJETS 0 BOX",9,1,10);
   NJETS0_W__13->SetBinContent(2,616.2874);
   NJETS0_W__13->SetBinContent(3,618.9736);
   NJETS0_W__13->SetBinContent(4,217.8237);
   NJETS0_W__13->SetBinContent(5,28.35505);
   NJETS0_W__13->SetBinContent(6,3.378609);
   NJETS0_W__13->SetBinContent(7,0.5959654);
   NJETS0_W__13->SetEntries(19603);
   NJETS0_W__13->SetDirectory(0);
   NJETS0_W__13->SetStats(0);

   ci = TColor::GetColor("#ff33cc");
   NJETS0_W__13->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   NJETS0_W__13->SetLineColor(ci);
   NJETS0_W__13->GetXaxis()->SetLabelFont(42);
   NJETS0_W__13->GetXaxis()->SetLabelSize(0.035);
   NJETS0_W__13->GetXaxis()->SetTitleSize(0.035);
   NJETS0_W__13->GetXaxis()->SetTitleFont(42);
   NJETS0_W__13->GetYaxis()->SetLabelFont(42);
   NJETS0_W__13->GetYaxis()->SetLabelSize(0.035);
   NJETS0_W__13->GetYaxis()->SetTitleSize(0.035);
   NJETS0_W__13->GetYaxis()->SetTitleFont(42);
   NJETS0_W__13->GetZaxis()->SetLabelFont(42);
   NJETS0_W__13->GetZaxis()->SetLabelSize(0.035);
   NJETS0_W__13->GetZaxis()->SetTitleSize(0.035);
   NJETS0_W__13->GetZaxis()->SetTitleFont(42);
   stack9->Add(NJETS0_W,"");
   
   TH1F *NJETS0_W = new TH1F("NJETS0_W","NJETS 0 BOX",9,1,10);
   NJETS0_W->SetBinContent(2,139.3395);
   NJETS0_W->SetBinContent(3,62.02122);
   NJETS0_W->SetBinContent(4,12.34679);
   NJETS0_W->SetBinContent(5,1.59971);
   NJETS0_W->SetBinContent(6,0.3044732);
   NJETS0_W->SetEntries(1397);
   NJETS0_W->SetStats(0);

   ci = TColor::GetColor("#ffff33");
   NJETS0_W->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   NJETS0_W->SetLineColor(ci);
   NJETS0_W->GetXaxis()->SetLabelFont(42);
   NJETS0_W->GetXaxis()->SetLabelSize(0.035);
   NJETS0_W->GetXaxis()->SetTitleSize(0.035);
   NJETS0_W->GetXaxis()->SetTitleFont(42);
   NJETS0_W->GetYaxis()->SetLabelFont(42);
   NJETS0_W->GetYaxis()->SetLabelSize(0.035);
   NJETS0_W->GetYaxis()->SetTitleSize(0.035);
   NJETS0_W->GetYaxis()->SetTitleFont(42);
   NJETS0_W->GetZaxis()->SetLabelFont(42);
   NJETS0_W->GetZaxis()->SetLabelSize(0.035);
   NJETS0_W->GetZaxis()->SetTitleSize(0.035);
   NJETS0_W->GetZaxis()->SetTitleFont(42);
   stack9->Add(NJETS0_W,"");
   
   TH1F *NJETS0_W = new TH1F("NJETS0_W","NJETS 0 BOX",9,1,10);
   NJETS0_W->SetBinContent(2,305.9769);
   NJETS0_W->SetBinContent(3,91.731);
   NJETS0_W->SetBinContent(4,17.15022);
   NJETS0_W->SetBinContent(5,2.380922);
   NJETS0_W->SetBinContent(6,0.1215024);
   NJETS0_W->SetEntries(6836);
   NJETS0_W->SetStats(0);

   ci = TColor::GetColor("#669900");
   NJETS0_W->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   NJETS0_W->SetLineColor(ci);
   NJETS0_W->GetXaxis()->SetLabelFont(42);
   NJETS0_W->GetXaxis()->SetLabelSize(0.035);
   NJETS0_W->GetXaxis()->SetTitleSize(0.035);
   NJETS0_W->GetXaxis()->SetTitleFont(42);
   NJETS0_W->GetYaxis()->SetLabelFont(42);
   NJETS0_W->GetYaxis()->SetLabelSize(0.035);
   NJETS0_W->GetYaxis()->SetTitleSize(0.035);
   NJETS0_W->GetYaxis()->SetTitleFont(42);
   NJETS0_W->GetZaxis()->SetLabelFont(42);
   NJETS0_W->GetZaxis()->SetLabelSize(0.035);
   NJETS0_W->GetZaxis()->SetTitleSize(0.035);
   NJETS0_W->GetZaxis()->SetTitleFont(42);
   stack9->Add(NJETS0_W,"");
   stack9->Draw("");
   
   TH1F *NJETS0_W = new TH1F("NJETS0_W","NJETS 0 BOX",9,1,10);
   NJETS0_W->SetBinContent(2,1237);
   NJETS0_W->SetBinContent(3,759);
   NJETS0_W->SetBinContent(4,250);
   NJETS0_W->SetBinContent(5,31);
   NJETS0_W->SetBinContent(6,5);
   NJETS0_W->SetBinError(2,35.17101);
   NJETS0_W->SetBinError(3,27.54995);
   NJETS0_W->SetBinError(4,15.81139);
   NJETS0_W->SetBinError(5,5.567764);
   NJETS0_W->SetBinError(6,2.236068);
   NJETS0_W->SetEntries(2282);
   NJETS0_W->SetStats(0);
   NJETS0_W->SetMarkerStyle(20);
   NJETS0_W->SetMarkerSize(0.7);
   NJETS0_W->GetXaxis()->SetLabelFont(42);
   NJETS0_W->GetXaxis()->SetLabelSize(0.035);
   NJETS0_W->GetXaxis()->SetTitleSize(0.035);
   NJETS0_W->GetXaxis()->SetTitleFont(42);
   NJETS0_W->GetYaxis()->SetLabelFont(42);
   NJETS0_W->GetYaxis()->SetLabelSize(0.035);
   NJETS0_W->GetYaxis()->SetTitleSize(0.035);
   NJETS0_W->GetYaxis()->SetTitleFont(42);
   NJETS0_W->GetZaxis()->SetLabelFont(42);
   NJETS0_W->GetZaxis()->SetLabelSize(0.035);
   NJETS0_W->GetZaxis()->SetTitleSize(0.035);
   NJETS0_W->GetZaxis()->SetTitleFont(42);
   NJETS0_W->Draw("same");
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
   TLegendEntry *entry=leg->AddEntry("NJETS0_W","W + jets","f");

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
   entry=leg->AddEntry("NJETS0_W","Z(#nu#nu) + jets","f");

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
   entry=leg->AddEntry("NJETS0_W","t #bar{t} + jets","f");

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
   entry=leg->AddEntry("NJETS0_W","Z/#gamma^{*}(ll) + jets","f");

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
   entry=leg->AddEntry("NJETS0_W","Data","lep");
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
   RATIO->SetBinContent(2,1.163637);
   RATIO->SetBinContent(3,0.9812425);
   RATIO->SetBinContent(4,1.010328);
   RATIO->SetBinContent(5,0.9586931);
   RATIO->SetBinContent(6,1.313238);
   RATIO->SetBinError(2,0.04866591);
   RATIO->SetBinError(3,0.05013307);
   RATIO->SetBinError(4,0.09059954);
   RATIO->SetBinError(5,0.2409805);
   RATIO->SetBinError(6,0.8932406);
   RATIO->SetMinimum(0);
   RATIO->SetMaximum(3.05);
   RATIO->SetEntries(33.89237);
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

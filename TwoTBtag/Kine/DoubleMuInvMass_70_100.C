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
   pad1->Range(77.5,-0.4547664,102.5,4.427716);
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
   stack1->SetMaximum(5000);
   
   TH1F *stack1_stack_43 = new TH1F("stack1_stack_43","",20,80,100);
   stack1_stack_43->SetMinimum(0.3509406);
   stack1_stack_43->SetMaximum(8698.97);
   stack1_stack_43->SetDirectory(0);
   stack1_stack_43->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   stack1_stack_43->SetLineColor(ci);
   stack1_stack_43->GetXaxis()->SetLabelFont(42);
   stack1_stack_43->GetXaxis()->SetLabelSize(0.035);
   stack1_stack_43->GetXaxis()->SetTitleSize(0.035);
   stack1_stack_43->GetXaxis()->SetTitleFont(42);
   stack1_stack_43->GetYaxis()->SetTitle("Events");
   stack1_stack_43->GetYaxis()->SetLabelFont(42);
   stack1_stack_43->GetYaxis()->SetLabelSize(0.035);
   stack1_stack_43->GetYaxis()->SetTitleSize(0.035);
   stack1_stack_43->GetYaxis()->SetTitleOffset(1.25);
   stack1_stack_43->GetYaxis()->SetTitleFont(42);
   stack1_stack_43->GetZaxis()->SetLabelFont(42);
   stack1_stack_43->GetZaxis()->SetLabelSize(0.035);
   stack1_stack_43->GetZaxis()->SetTitleSize(0.035);
   stack1_stack_43->GetZaxis()->SetTitleFont(42);
   stack1->SetHistogram(stack1_stack_43);
   
   
   TH1F *diMuMass = new TH1F("diMuMass","",20,80,100);
   diMuMass->SetBinContent(4,0.03259068);
   diMuMass->SetBinContent(6,0.02257641);
   diMuMass->SetBinContent(7,0.006014038);
   diMuMass->SetBinContent(8,0.1667451);
   diMuMass->SetBinContent(9,0.0349578);
   diMuMass->SetBinContent(10,0.2110388);
   diMuMass->SetBinContent(11,0.3379914);
   diMuMass->SetBinContent(12,0.3256495);
   diMuMass->SetBinContent(13,0.03507462);
   diMuMass->SetBinContent(14,0.01567212);
   diMuMass->SetBinContent(15,0.05250163);
   diMuMass->SetBinContent(16,0.0361954);
   diMuMass->SetBinContent(18,0.1028152);
   diMuMass->SetBinContent(20,0.05068696);
   diMuMass->SetEntries(42);
   diMuMass->SetStats(0);

   ci = TColor::GetColor("#3300cc");
   diMuMass->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   diMuMass->SetLineColor(ci);
   diMuMass->GetXaxis()->SetLabelFont(42);
   diMuMass->GetXaxis()->SetLabelSize(0.035);
   diMuMass->GetXaxis()->SetTitleSize(0.035);
   diMuMass->GetXaxis()->SetTitleFont(42);
   diMuMass->GetYaxis()->SetLabelFont(42);
   diMuMass->GetYaxis()->SetLabelSize(0.035);
   diMuMass->GetYaxis()->SetTitleSize(0.035);
   diMuMass->GetYaxis()->SetTitleFont(42);
   diMuMass->GetZaxis()->SetLabelFont(42);
   diMuMass->GetZaxis()->SetLabelSize(0.035);
   diMuMass->GetZaxis()->SetTitleSize(0.035);
   diMuMass->GetZaxis()->SetTitleFont(42);
   stack1->Add(diMuMass,"");
   
   TH1F *diMuMass = new TH1F("diMuMass","",20,80,100);
   diMuMass->SetBinContent(2,0.04496268);
   diMuMass->SetBinContent(3,0.02878124);
   diMuMass->SetBinContent(4,0.0990027);
   diMuMass->SetBinContent(6,0.0586713);
   diMuMass->SetBinContent(8,0.0164301);
   diMuMass->SetBinContent(9,0.1220788);
   diMuMass->SetBinContent(10,0.02447891);
   diMuMass->SetBinContent(11,0.009559126);
   diMuMass->SetBinContent(15,0.08039229);
   diMuMass->SetBinContent(17,0.04964542);
   diMuMass->SetBinContent(18,0.07812005);
   diMuMass->SetEntries(18);
   diMuMass->SetStats(0);

   ci = TColor::GetColor("#ff33cc");
   diMuMass->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   diMuMass->SetLineColor(ci);
   diMuMass->GetXaxis()->SetLabelFont(42);
   diMuMass->GetXaxis()->SetLabelSize(0.035);
   diMuMass->GetXaxis()->SetTitleSize(0.035);
   diMuMass->GetXaxis()->SetTitleFont(42);
   diMuMass->GetYaxis()->SetLabelFont(42);
   diMuMass->GetYaxis()->SetLabelSize(0.035);
   diMuMass->GetYaxis()->SetTitleSize(0.035);
   diMuMass->GetYaxis()->SetTitleFont(42);
   diMuMass->GetZaxis()->SetLabelFont(42);
   diMuMass->GetZaxis()->SetLabelSize(0.035);
   diMuMass->GetZaxis()->SetTitleSize(0.035);
   diMuMass->GetZaxis()->SetTitleFont(42);
   stack1->Add(diMuMass,"");
   
   TH1F *diMuMass = new TH1F("diMuMass","",20,80,100);
   diMuMass->SetStats(0);

   ci = TColor::GetColor("#ffff33");
   diMuMass->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   diMuMass->SetLineColor(ci);
   diMuMass->GetXaxis()->SetLabelFont(42);
   diMuMass->GetXaxis()->SetLabelSize(0.035);
   diMuMass->GetXaxis()->SetTitleSize(0.035);
   diMuMass->GetXaxis()->SetTitleFont(42);
   diMuMass->GetYaxis()->SetLabelFont(42);
   diMuMass->GetYaxis()->SetLabelSize(0.035);
   diMuMass->GetYaxis()->SetTitleSize(0.035);
   diMuMass->GetYaxis()->SetTitleFont(42);
   diMuMass->GetZaxis()->SetLabelFont(42);
   diMuMass->GetZaxis()->SetLabelSize(0.035);
   diMuMass->GetZaxis()->SetTitleSize(0.035);
   diMuMass->GetZaxis()->SetTitleFont(42);
   stack1->Add(diMuMass,"");
   
   TH1F *diMuMass = new TH1F("diMuMass","",20,80,100);
   diMuMass->SetStats(0);

   ci = TColor::GetColor("#669900");
   diMuMass->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   diMuMass->SetLineColor(ci);
   diMuMass->GetXaxis()->SetLabelFont(42);
   diMuMass->GetXaxis()->SetLabelSize(0.035);
   diMuMass->GetXaxis()->SetTitleSize(0.035);
   diMuMass->GetXaxis()->SetTitleFont(42);
   diMuMass->GetYaxis()->SetLabelFont(42);
   diMuMass->GetYaxis()->SetLabelSize(0.035);
   diMuMass->GetYaxis()->SetTitleSize(0.035);
   diMuMass->GetYaxis()->SetTitleFont(42);
   diMuMass->GetZaxis()->SetLabelFont(42);
   diMuMass->GetZaxis()->SetLabelSize(0.035);
   diMuMass->GetZaxis()->SetTitleSize(0.035);
   diMuMass->GetZaxis()->SetTitleFont(42);
   stack1->Add(diMuMass,"");
   stack1->Draw("");
   
   TH1F *diMuMass_errData = new TH1F("diMuMass_errData","",20,80,100);
   diMuMass_errData->SetBinContent(6,1);
   diMuMass_errData->SetBinContent(8,1);
   diMuMass_errData->SetBinContent(12,2);
   diMuMass_errData->SetBinContent(18,1);
   diMuMass_errData->SetBinError(6,1);
   diMuMass_errData->SetBinError(8,1);
   diMuMass_errData->SetBinError(12,1.414214);
   diMuMass_errData->SetBinError(18,1);
   diMuMass_errData->SetEntries(5);
   diMuMass_errData->SetStats(0);
   diMuMass_errData->SetMarkerStyle(20);
   diMuMass_errData->SetMarkerSize(0.7);
   diMuMass_errData->GetXaxis()->SetLabelFont(42);
   diMuMass_errData->GetXaxis()->SetLabelSize(0.035);
   diMuMass_errData->GetXaxis()->SetTitleSize(0.035);
   diMuMass_errData->GetXaxis()->SetTitleFont(42);
   diMuMass_errData->GetYaxis()->SetLabelFont(42);
   diMuMass_errData->GetYaxis()->SetLabelSize(0.035);
   diMuMass_errData->GetYaxis()->SetTitleSize(0.035);
   diMuMass_errData->GetYaxis()->SetTitleFont(42);
   diMuMass_errData->GetZaxis()->SetLabelFont(42);
   diMuMass_errData->GetZaxis()->SetLabelSize(0.035);
   diMuMass_errData->GetZaxis()->SetTitleSize(0.035);
   diMuMass_errData->GetZaxis()->SetTitleFont(42);
   diMuMass_errData->Draw("same");
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
   TLegendEntry *entry=leg->AddEntry("diMuMass","W + jets","f");

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
   entry=leg->AddEntry("diMuMass","Z(#nu#bar{#nu}) + jets","f");

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
   entry=leg->AddEntry("diMuMass","t #bar{t} + jets","f");

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
   entry=leg->AddEntry("diMuMass","Z/#gamma^{*}(ll) + jets","f");

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
   entry=leg->AddEntry("diMuMass_errData","Data","lep");
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
   
   TH1F *RATIO = new TH1F("RATIO","",20,80,100);
   RATIO->SetBinContent(6,12.30804);
   RATIO->SetBinContent(8,5.459254);
   RATIO->SetBinContent(12,6.141572);
   RATIO->SetBinContent(18,5.526839);
   RATIO->SetBinError(6,15.56216);
   RATIO->SetBinError(8,6.31122);
   RATIO->SetBinError(12,4.924378);
   RATIO->SetBinError(18,6.197281);
   RATIO->SetMinimum(0);
   RATIO->SetMaximum(3.05);
   RATIO->SetEntries(2.513898);
   RATIO->SetStats(0);
   RATIO->SetFillColor(4);
   RATIO->SetLineColor(4);
   RATIO->SetMarkerColor(4);
   RATIO->SetMarkerStyle(20);
   RATIO->SetMarkerSize(0.7);
   RATIO->GetXaxis()->SetTitle("M_{#mu#mu}");
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

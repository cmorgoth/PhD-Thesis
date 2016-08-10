{
//=========Macro generated from canvas: C/C      
//=========  (Fri Sep 12 02:22:55 2014) by ROOT version5.34/19
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
   pad1->Range(-3.926991,-0.5412198,3.926991,5.897114);
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
   stack1->SetMaximum(90000);
   
   TH1F *stack1_stack_49 = new TH1F("stack1_stack_49","",20,-3.141593,3.141593);
   stack1_stack_49->SetMinimum(0.2875942);
   stack1_stack_49->SetMaximum(179176.4);
   stack1_stack_49->SetDirectory(0);
   stack1_stack_49->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   stack1_stack_49->SetLineColor(ci);
   stack1_stack_49->GetXaxis()->SetLabelFont(42);
   stack1_stack_49->GetXaxis()->SetLabelSize(0.035);
   stack1_stack_49->GetXaxis()->SetTitleSize(0.035);
   stack1_stack_49->GetXaxis()->SetTitleFont(42);
   stack1_stack_49->GetYaxis()->SetTitle("Events");
   stack1_stack_49->GetYaxis()->SetLabelFont(42);
   stack1_stack_49->GetYaxis()->SetLabelSize(0.035);
   stack1_stack_49->GetYaxis()->SetTitleSize(0.035);
   stack1_stack_49->GetYaxis()->SetTitleOffset(1.25);
   stack1_stack_49->GetYaxis()->SetTitleFont(42);
   stack1_stack_49->GetZaxis()->SetLabelFont(42);
   stack1_stack_49->GetZaxis()->SetLabelSize(0.035);
   stack1_stack_49->GetZaxis()->SetTitleSize(0.035);
   stack1_stack_49->GetZaxis()->SetTitleFont(42);
   stack1->SetHistogram(stack1_stack_49);
   
   
   TH1F *Dphi_2mu_5 = new TH1F("Dphi_2mu_5","",20,-3.141593,3.141593);
   Dphi_2mu_5->SetBinContent(3,0.07420681);
   Dphi_2mu_5->SetBinContent(4,0.2126549);
   Dphi_2mu_5->SetBinContent(5,0.1362871);
   Dphi_2mu_5->SetBinContent(6,0.07302752);
   Dphi_2mu_5->SetBinContent(7,0.1681115);
   Dphi_2mu_5->SetBinContent(9,0.04356948);
   Dphi_2mu_5->SetBinContent(10,0.07994241);
   Dphi_2mu_5->SetBinContent(11,0.08926527);
   Dphi_2mu_5->SetBinContent(12,0.1173274);
   Dphi_2mu_5->SetBinContent(13,0.08109999);
   Dphi_2mu_5->SetBinContent(14,0.1404934);
   Dphi_2mu_5->SetBinContent(15,0.0261994);
   Dphi_2mu_5->SetBinContent(16,0.1278334);
   Dphi_2mu_5->SetBinContent(17,0.06049111);
   Dphi_2mu_5->SetEntries(42);
   Dphi_2mu_5->SetStats(0);

   ci = TColor::GetColor("#3300cc");
   Dphi_2mu_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Dphi_2mu_5->SetLineColor(ci);
   Dphi_2mu_5->GetXaxis()->SetLabelFont(42);
   Dphi_2mu_5->GetXaxis()->SetLabelSize(0.035);
   Dphi_2mu_5->GetXaxis()->SetTitleSize(0.035);
   Dphi_2mu_5->GetXaxis()->SetTitleFont(42);
   Dphi_2mu_5->GetYaxis()->SetLabelFont(42);
   Dphi_2mu_5->GetYaxis()->SetLabelSize(0.035);
   Dphi_2mu_5->GetYaxis()->SetTitleSize(0.035);
   Dphi_2mu_5->GetYaxis()->SetTitleFont(42);
   Dphi_2mu_5->GetZaxis()->SetLabelFont(42);
   Dphi_2mu_5->GetZaxis()->SetLabelSize(0.035);
   Dphi_2mu_5->GetZaxis()->SetTitleSize(0.035);
   Dphi_2mu_5->GetZaxis()->SetTitleFont(42);
   stack1->Add(Dphi_2mu_5,"");
   
   TH1F *Dphi_2mu_5 = new TH1F("Dphi_2mu_5","",20,-3.141593,3.141593);
   Dphi_2mu_5->SetBinContent(3,0.0586713);
   Dphi_2mu_5->SetBinContent(4,0.0378213);
   Dphi_2mu_5->SetBinContent(5,0.08872867);
   Dphi_2mu_5->SetBinContent(9,0.06378089);
   Dphi_2mu_5->SetBinContent(12,0.03881807);
   Dphi_2mu_5->SetBinContent(14,0.04496268);
   Dphi_2mu_5->SetBinContent(15,0.1672714);
   Dphi_2mu_5->SetBinContent(16,0.05413381);
   Dphi_2mu_5->SetBinContent(17,0.0197472);
   Dphi_2mu_5->SetBinContent(18,0.03818734);
   Dphi_2mu_5->SetEntries(18);
   Dphi_2mu_5->SetStats(0);

   ci = TColor::GetColor("#ff33cc");
   Dphi_2mu_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Dphi_2mu_5->SetLineColor(ci);
   Dphi_2mu_5->GetXaxis()->SetLabelFont(42);
   Dphi_2mu_5->GetXaxis()->SetLabelSize(0.035);
   Dphi_2mu_5->GetXaxis()->SetTitleSize(0.035);
   Dphi_2mu_5->GetXaxis()->SetTitleFont(42);
   Dphi_2mu_5->GetYaxis()->SetLabelFont(42);
   Dphi_2mu_5->GetYaxis()->SetLabelSize(0.035);
   Dphi_2mu_5->GetYaxis()->SetTitleSize(0.035);
   Dphi_2mu_5->GetYaxis()->SetTitleFont(42);
   Dphi_2mu_5->GetZaxis()->SetLabelFont(42);
   Dphi_2mu_5->GetZaxis()->SetLabelSize(0.035);
   Dphi_2mu_5->GetZaxis()->SetTitleSize(0.035);
   Dphi_2mu_5->GetZaxis()->SetTitleFont(42);
   stack1->Add(Dphi_2mu_5,"");
   
   TH1F *Dphi_2mu_5 = new TH1F("Dphi_2mu_5","",20,-3.141593,3.141593);
   Dphi_2mu_5->SetStats(0);

   ci = TColor::GetColor("#ffff33");
   Dphi_2mu_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Dphi_2mu_5->SetLineColor(ci);
   Dphi_2mu_5->GetXaxis()->SetLabelFont(42);
   Dphi_2mu_5->GetXaxis()->SetLabelSize(0.035);
   Dphi_2mu_5->GetXaxis()->SetTitleSize(0.035);
   Dphi_2mu_5->GetXaxis()->SetTitleFont(42);
   Dphi_2mu_5->GetYaxis()->SetLabelFont(42);
   Dphi_2mu_5->GetYaxis()->SetLabelSize(0.035);
   Dphi_2mu_5->GetYaxis()->SetTitleSize(0.035);
   Dphi_2mu_5->GetYaxis()->SetTitleFont(42);
   Dphi_2mu_5->GetZaxis()->SetLabelFont(42);
   Dphi_2mu_5->GetZaxis()->SetLabelSize(0.035);
   Dphi_2mu_5->GetZaxis()->SetTitleSize(0.035);
   Dphi_2mu_5->GetZaxis()->SetTitleFont(42);
   stack1->Add(Dphi_2mu_5,"");
   
   TH1F *Dphi_2mu_5 = new TH1F("Dphi_2mu_5","",20,-3.141593,3.141593);
   Dphi_2mu_5->SetStats(0);

   ci = TColor::GetColor("#669900");
   Dphi_2mu_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Dphi_2mu_5->SetLineColor(ci);
   Dphi_2mu_5->GetXaxis()->SetLabelFont(42);
   Dphi_2mu_5->GetXaxis()->SetLabelSize(0.035);
   Dphi_2mu_5->GetXaxis()->SetTitleSize(0.035);
   Dphi_2mu_5->GetXaxis()->SetTitleFont(42);
   Dphi_2mu_5->GetYaxis()->SetLabelFont(42);
   Dphi_2mu_5->GetYaxis()->SetLabelSize(0.035);
   Dphi_2mu_5->GetYaxis()->SetTitleSize(0.035);
   Dphi_2mu_5->GetYaxis()->SetTitleFont(42);
   Dphi_2mu_5->GetZaxis()->SetLabelFont(42);
   Dphi_2mu_5->GetZaxis()->SetLabelSize(0.035);
   Dphi_2mu_5->GetZaxis()->SetTitleSize(0.035);
   Dphi_2mu_5->GetZaxis()->SetTitleFont(42);
   stack1->Add(Dphi_2mu_5,"");
   stack1->Draw("");
   
   TH1F *Data_Dphi_2mu_2 = new TH1F("Data_Dphi_2mu_2","",20,-3.141593,3.141593);
   Data_Dphi_2mu_2->SetBinContent(4,1);
   Data_Dphi_2mu_2->SetBinContent(7,1);
   Data_Dphi_2mu_2->SetBinContent(13,2);
   Data_Dphi_2mu_2->SetBinContent(17,1);
   Data_Dphi_2mu_2->SetBinError(4,1);
   Data_Dphi_2mu_2->SetBinError(7,1);
   Data_Dphi_2mu_2->SetBinError(13,1.414214);
   Data_Dphi_2mu_2->SetBinError(17,1);
   Data_Dphi_2mu_2->SetEntries(5);
   Data_Dphi_2mu_2->SetStats(0);
   Data_Dphi_2mu_2->SetMarkerStyle(20);
   Data_Dphi_2mu_2->SetMarkerSize(0.7);
   Data_Dphi_2mu_2->GetXaxis()->SetLabelFont(42);
   Data_Dphi_2mu_2->GetXaxis()->SetLabelSize(0.035);
   Data_Dphi_2mu_2->GetXaxis()->SetTitleSize(0.035);
   Data_Dphi_2mu_2->GetXaxis()->SetTitleFont(42);
   Data_Dphi_2mu_2->GetYaxis()->SetLabelFont(42);
   Data_Dphi_2mu_2->GetYaxis()->SetLabelSize(0.035);
   Data_Dphi_2mu_2->GetYaxis()->SetTitleSize(0.035);
   Data_Dphi_2mu_2->GetYaxis()->SetTitleFont(42);
   Data_Dphi_2mu_2->GetZaxis()->SetLabelFont(42);
   Data_Dphi_2mu_2->GetZaxis()->SetLabelSize(0.035);
   Data_Dphi_2mu_2->GetZaxis()->SetTitleSize(0.035);
   Data_Dphi_2mu_2->GetZaxis()->SetTitleFont(42);
   Data_Dphi_2mu_2->Draw("same");
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
   TLegendEntry *entry=leg->AddEntry("Dphi_2mu_5","W + jets","f");

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
   entry=leg->AddEntry("Dphi_2mu_5","Z(#nu#bar{#nu}) + jets","f");

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
   entry=leg->AddEntry("Dphi_2mu_5","t #bar{t} + jets","f");

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
   entry=leg->AddEntry("Dphi_2mu_5","Z/#gamma^{*}(ll) + jets","f");

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
   entry=leg->AddEntry("Data_Dphi_2mu_2","Data","lep");
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
   
   TH1F *RATIO = new TH1F("RATIO","",20,-3.141593,3.141593);
   RATIO->SetBinContent(4,3.992395);
   RATIO->SetBinContent(7,5.948433);
   RATIO->SetBinContent(13,24.66091);
   RATIO->SetBinContent(17,12.46287);
   RATIO->SetBinError(4,8.920475);
   RATIO->SetBinError(7,15.68);
   RATIO->SetBinError(13,88.33448);
   RATIO->SetBinError(17,45.72852);
   RATIO->SetMinimum(0);
   RATIO->SetMaximum(3.05);
   RATIO->SetEntries(0.2167498);
   RATIO->SetStats(0);
   RATIO->SetFillColor(4);
   RATIO->SetLineColor(4);
   RATIO->SetMarkerColor(4);
   RATIO->SetMarkerStyle(20);
   RATIO->SetMarkerSize(0.7);
   RATIO->GetXaxis()->SetTitle("#Delta#phi(J_{1},J_{2})");
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

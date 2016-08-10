{
//=========Macro generated from canvas: C/C      
//=========  (Fri Sep 12 00:26:05 2014) by ROOT version5.34/19
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
   
   THStack *stackMR_2Box = new THStack();
   stackMR_2Box->SetName("stackMR_2Box");
   stackMR_2Box->SetTitle("");
   stackMR_2Box->SetMinimum(1);
   stackMR_2Box->SetMaximum(500000);
   
   TH1F *stackMR_2Box_stack_6 = new TH1F("stackMR_2Box_stack_6","",20,200,1700);
   stackMR_2Box_stack_6->SetMinimum(0.259775);
   stackMR_2Box_stack_6->SetMaximum(1069897);
   stackMR_2Box_stack_6->SetDirectory(0);
   stackMR_2Box_stack_6->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   stackMR_2Box_stack_6->SetLineColor(ci);
   stackMR_2Box_stack_6->GetXaxis()->SetTitle("R^{2} ");
   stackMR_2Box_stack_6->GetXaxis()->SetLabelFont(42);
   stackMR_2Box_stack_6->GetXaxis()->SetLabelSize(0.035);
   stackMR_2Box_stack_6->GetXaxis()->SetTitleSize(0.035);
   stackMR_2Box_stack_6->GetXaxis()->SetTitleFont(42);
   stackMR_2Box_stack_6->GetYaxis()->SetTitle("Events");
   stackMR_2Box_stack_6->GetYaxis()->SetLabelFont(42);
   stackMR_2Box_stack_6->GetYaxis()->SetLabelSize(0.035);
   stackMR_2Box_stack_6->GetYaxis()->SetTitleSize(0.035);
   stackMR_2Box_stack_6->GetYaxis()->SetTitleOffset(1.25);
   stackMR_2Box_stack_6->GetYaxis()->SetTitleFont(42);
   stackMR_2Box_stack_6->GetZaxis()->SetLabelFont(42);
   stackMR_2Box_stack_6->GetZaxis()->SetLabelSize(0.035);
   stackMR_2Box_stack_6->GetZaxis()->SetTitleSize(0.035);
   stackMR_2Box_stack_6->GetZaxis()->SetTitleFont(42);
   stackMR_2Box->SetHistogram(stackMR_2Box_stack_6);
   
   
   TH1F *MR_1D_5mu_Box = new TH1F("MR_1D_5mu_Box","",20,200,1700);
   MR_1D_5mu_Box->SetBinContent(1,5.320523);
   MR_1D_5mu_Box->SetBinContent(2,2.987866);
   MR_1D_5mu_Box->SetBinContent(3,0.7601786);
   MR_1D_5mu_Box->SetBinContent(4,0.05493788);
   MR_1D_5mu_Box->SetBinContent(5,0.1472576);
   MR_1D_5mu_Box->SetBinContent(6,0.08944);
   MR_1D_5mu_Box->SetBinContent(9,0.0227185);
   MR_1D_5mu_Box->SetEntries(224);
   MR_1D_5mu_Box->SetStats(0);

   ci = TColor::GetColor("#ff33cc");
   MR_1D_5mu_Box->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   MR_1D_5mu_Box->SetLineColor(ci);
   MR_1D_5mu_Box->GetXaxis()->SetLabelFont(42);
   MR_1D_5mu_Box->GetXaxis()->SetLabelSize(0.035);
   MR_1D_5mu_Box->GetXaxis()->SetTitleSize(0.035);
   MR_1D_5mu_Box->GetXaxis()->SetTitleFont(42);
   MR_1D_5mu_Box->GetYaxis()->SetLabelFont(42);
   MR_1D_5mu_Box->GetYaxis()->SetLabelSize(0.035);
   MR_1D_5mu_Box->GetYaxis()->SetTitleSize(0.035);
   MR_1D_5mu_Box->GetYaxis()->SetTitleFont(42);
   MR_1D_5mu_Box->GetZaxis()->SetLabelFont(42);
   MR_1D_5mu_Box->GetZaxis()->SetLabelSize(0.035);
   MR_1D_5mu_Box->GetZaxis()->SetTitleSize(0.035);
   MR_1D_5mu_Box->GetZaxis()->SetTitleFont(42);
   stackMR_2Box->Add(MR_1D_5mu_Box,"");
   
   TH1F *MR_1D_5mu_Box = new TH1F("MR_1D_5mu_Box","",20,200,1700);
   MR_1D_5mu_Box->SetBinContent(1,9.6305);
   MR_1D_5mu_Box->SetBinContent(2,5.910312);
   MR_1D_5mu_Box->SetBinContent(3,2.41392);
   MR_1D_5mu_Box->SetBinContent(4,1.193397);
   MR_1D_5mu_Box->SetBinContent(5,0.5941922);
   MR_1D_5mu_Box->SetBinContent(6,0.220677);
   MR_1D_5mu_Box->SetBinContent(7,0.1514016);
   MR_1D_5mu_Box->SetBinContent(8,0.1198533);
   MR_1D_5mu_Box->SetBinContent(9,0.01764303);
   MR_1D_5mu_Box->SetBinContent(10,0.01654808);
   MR_1D_5mu_Box->SetEntries(524);
   MR_1D_5mu_Box->SetStats(0);

   ci = TColor::GetColor("#3300cc");
   MR_1D_5mu_Box->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   MR_1D_5mu_Box->SetLineColor(ci);
   MR_1D_5mu_Box->GetXaxis()->SetLabelFont(42);
   MR_1D_5mu_Box->GetXaxis()->SetLabelSize(0.035);
   MR_1D_5mu_Box->GetXaxis()->SetTitleSize(0.035);
   MR_1D_5mu_Box->GetXaxis()->SetTitleFont(42);
   MR_1D_5mu_Box->GetYaxis()->SetLabelFont(42);
   MR_1D_5mu_Box->GetYaxis()->SetLabelSize(0.035);
   MR_1D_5mu_Box->GetYaxis()->SetTitleSize(0.035);
   MR_1D_5mu_Box->GetYaxis()->SetTitleFont(42);
   MR_1D_5mu_Box->GetZaxis()->SetLabelFont(42);
   MR_1D_5mu_Box->GetZaxis()->SetLabelSize(0.035);
   MR_1D_5mu_Box->GetZaxis()->SetTitleSize(0.035);
   MR_1D_5mu_Box->GetZaxis()->SetTitleFont(42);
   stackMR_2Box->Add(MR_1D_5mu_Box,"");
   stackMR_2Box->Draw("");
   
   TH1F *MR_1D_Data_2mu_Box = new TH1F("MR_1D_Data_2mu_Box","",20,200,1700);
   MR_1D_Data_2mu_Box->SetBinContent(1,20);
   MR_1D_Data_2mu_Box->SetBinContent(2,7);
   MR_1D_Data_2mu_Box->SetBinContent(4,2);
   MR_1D_Data_2mu_Box->SetBinContent(5,2);
   MR_1D_Data_2mu_Box->SetBinContent(6,2);
   MR_1D_Data_2mu_Box->SetBinContent(7,1);
   MR_1D_Data_2mu_Box->SetBinError(1,4.472136);
   MR_1D_Data_2mu_Box->SetBinError(2,2.645751);
   MR_1D_Data_2mu_Box->SetBinError(4,1.414214);
   MR_1D_Data_2mu_Box->SetBinError(5,1.414214);
   MR_1D_Data_2mu_Box->SetBinError(6,1.414214);
   MR_1D_Data_2mu_Box->SetBinError(7,1);
   MR_1D_Data_2mu_Box->SetEntries(34);
   MR_1D_Data_2mu_Box->SetStats(0);
   MR_1D_Data_2mu_Box->SetMarkerStyle(20);
   MR_1D_Data_2mu_Box->SetMarkerSize(0.7);
   MR_1D_Data_2mu_Box->GetXaxis()->SetRange(1,20);
   MR_1D_Data_2mu_Box->GetXaxis()->SetLabelFont(42);
   MR_1D_Data_2mu_Box->GetXaxis()->SetLabelSize(0.035);
   MR_1D_Data_2mu_Box->GetXaxis()->SetTitleSize(0.035);
   MR_1D_Data_2mu_Box->GetXaxis()->SetTitleFont(42);
   MR_1D_Data_2mu_Box->GetYaxis()->SetLabelFont(42);
   MR_1D_Data_2mu_Box->GetYaxis()->SetLabelSize(0.035);
   MR_1D_Data_2mu_Box->GetYaxis()->SetTitleSize(0.035);
   MR_1D_Data_2mu_Box->GetYaxis()->SetTitleFont(42);
   MR_1D_Data_2mu_Box->GetZaxis()->SetLabelFont(42);
   MR_1D_Data_2mu_Box->GetZaxis()->SetLabelSize(0.035);
   MR_1D_Data_2mu_Box->GetZaxis()->SetTitleSize(0.035);
   MR_1D_Data_2mu_Box->GetZaxis()->SetTitleFont(42);
   MR_1D_Data_2mu_Box->Draw("same");
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
   TLegendEntry *entry=leg->AddEntry("MR_1D_5mu_Box","t #bar{t} + jets","f");

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
   entry=leg->AddEntry("MR_1D_5mu_Box","Z/#gamma^{*}(ll) + jets","f");

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
   entry=leg->AddEntry("MR_1D_Data_2mu_Box","Data","lep");
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
   RATIO->SetBinContent(1,1.337701);
   RATIO->SetBinContent(2,0.7866779);
   RATIO->SetBinContent(4,1.602134);
   RATIO->SetBinContent(5,2.697418);
   RATIO->SetBinContent(6,6.449178);
   RATIO->SetBinContent(7,6.604949);
   RATIO->SetBinError(1,0.3114936);
   RATIO->SetBinError(2,0.3042513);
   RATIO->SetBinError(4,1.154014);
   RATIO->SetBinError(5,1.97649);
   RATIO->SetBinError(6,4.919243);
   RATIO->SetBinError(7,6.997954);
   RATIO->SetMinimum(0);
   RATIO->SetMaximum(3.05);
   RATIO->SetEntries(4.827017);
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

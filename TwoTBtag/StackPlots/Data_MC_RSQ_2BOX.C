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
   pad1->Range(0.3125,-0.544068,2.1875,5.950485);
   pad1->SetFillColor(0);
   pad1->SetBorderMode(0);
   pad1->SetBorderSize(2);
   pad1->SetLogy();
   pad1->SetBottomMargin(0);
   pad1->SetFrameBorderMode(0);
   pad1->SetFrameBorderMode(0);
   
   THStack *stackRSQ_2Box = new THStack();
   stackRSQ_2Box->SetName("stackRSQ_2Box");
   stackRSQ_2Box->SetTitle("");
   stackRSQ_2Box->SetMinimum(1);
   stackRSQ_2Box->SetMaximum(100000);
   
   TH1F *stackRSQ_2Box_stack_5 = new TH1F("stackRSQ_2Box_stack_5","",20,0.5,2);
   stackRSQ_2Box_stack_5->SetMinimum(0.2857143);
   stackRSQ_2Box_stack_5->SetMaximum(200000);
   stackRSQ_2Box_stack_5->SetDirectory(0);
   stackRSQ_2Box_stack_5->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   stackRSQ_2Box_stack_5->SetLineColor(ci);
   stackRSQ_2Box_stack_5->GetXaxis()->SetTitle("R^{2} ");
   stackRSQ_2Box_stack_5->GetXaxis()->SetLabelFont(42);
   stackRSQ_2Box_stack_5->GetXaxis()->SetLabelSize(0.035);
   stackRSQ_2Box_stack_5->GetXaxis()->SetTitleSize(0.035);
   stackRSQ_2Box_stack_5->GetXaxis()->SetTitleFont(42);
   stackRSQ_2Box_stack_5->GetYaxis()->SetTitle("Events");
   stackRSQ_2Box_stack_5->GetYaxis()->SetLabelFont(42);
   stackRSQ_2Box_stack_5->GetYaxis()->SetLabelSize(0.035);
   stackRSQ_2Box_stack_5->GetYaxis()->SetTitleSize(0.035);
   stackRSQ_2Box_stack_5->GetYaxis()->SetTitleOffset(1.25);
   stackRSQ_2Box_stack_5->GetYaxis()->SetTitleFont(42);
   stackRSQ_2Box_stack_5->GetZaxis()->SetLabelFont(42);
   stackRSQ_2Box_stack_5->GetZaxis()->SetLabelSize(0.035);
   stackRSQ_2Box_stack_5->GetZaxis()->SetTitleSize(0.035);
   stackRSQ_2Box_stack_5->GetZaxis()->SetTitleFont(42);
   stackRSQ_2Box->SetHistogram(stackRSQ_2Box_stack_5);
   
   
   TH1F *R2_1D_5mu_Box = new TH1F("R2_1D_5mu_Box","",20,0.5,2);
   R2_1D_5mu_Box->SetBinContent(1,0.2899982);
   R2_1D_5mu_Box->SetBinContent(2,0.1168733);
   R2_1D_5mu_Box->SetBinContent(3,0.04964542);
   R2_1D_5mu_Box->SetBinContent(4,0.02447891);
   R2_1D_5mu_Box->SetBinContent(5,0.09607345);
   R2_1D_5mu_Box->SetBinContent(6,0.03505334);
   R2_1D_5mu_Box->SetEntries(18);
   R2_1D_5mu_Box->SetStats(0);

   ci = TColor::GetColor("#ff33cc");
   R2_1D_5mu_Box->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   R2_1D_5mu_Box->SetLineColor(ci);
   R2_1D_5mu_Box->GetXaxis()->SetLabelFont(42);
   R2_1D_5mu_Box->GetXaxis()->SetLabelSize(0.035);
   R2_1D_5mu_Box->GetXaxis()->SetTitleSize(0.035);
   R2_1D_5mu_Box->GetXaxis()->SetTitleFont(42);
   R2_1D_5mu_Box->GetYaxis()->SetLabelFont(42);
   R2_1D_5mu_Box->GetYaxis()->SetLabelSize(0.035);
   R2_1D_5mu_Box->GetYaxis()->SetTitleSize(0.035);
   R2_1D_5mu_Box->GetYaxis()->SetTitleFont(42);
   R2_1D_5mu_Box->GetZaxis()->SetLabelFont(42);
   R2_1D_5mu_Box->GetZaxis()->SetLabelSize(0.035);
   R2_1D_5mu_Box->GetZaxis()->SetTitleSize(0.035);
   R2_1D_5mu_Box->GetZaxis()->SetTitleFont(42);
   stackRSQ_2Box->Add(R2_1D_5mu_Box,"");
   
   TH1F *R2_1D_5mu_Box = new TH1F("R2_1D_5mu_Box","",20,0.5,2);
   R2_1D_5mu_Box->SetBinContent(1,0.4516866);
   R2_1D_5mu_Box->SetBinContent(2,0.2453682);
   R2_1D_5mu_Box->SetBinContent(3,0.1814759);
   R2_1D_5mu_Box->SetBinContent(5,0.189169);
   R2_1D_5mu_Box->SetBinContent(6,0.2109881);
   R2_1D_5mu_Box->SetBinContent(7,0.1092293);
   R2_1D_5mu_Box->SetBinContent(8,0.03650344);
   R2_1D_5mu_Box->SetBinContent(11,0.006089232);
   R2_1D_5mu_Box->SetEntries(42);
   R2_1D_5mu_Box->SetStats(0);

   ci = TColor::GetColor("#3300cc");
   R2_1D_5mu_Box->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   R2_1D_5mu_Box->SetLineColor(ci);
   R2_1D_5mu_Box->GetXaxis()->SetLabelFont(42);
   R2_1D_5mu_Box->GetXaxis()->SetLabelSize(0.035);
   R2_1D_5mu_Box->GetXaxis()->SetTitleSize(0.035);
   R2_1D_5mu_Box->GetXaxis()->SetTitleFont(42);
   R2_1D_5mu_Box->GetYaxis()->SetLabelFont(42);
   R2_1D_5mu_Box->GetYaxis()->SetLabelSize(0.035);
   R2_1D_5mu_Box->GetYaxis()->SetTitleSize(0.035);
   R2_1D_5mu_Box->GetYaxis()->SetTitleFont(42);
   R2_1D_5mu_Box->GetZaxis()->SetLabelFont(42);
   R2_1D_5mu_Box->GetZaxis()->SetLabelSize(0.035);
   R2_1D_5mu_Box->GetZaxis()->SetTitleSize(0.035);
   R2_1D_5mu_Box->GetZaxis()->SetTitleFont(42);
   stackRSQ_2Box->Add(R2_1D_5mu_Box,"");
   stackRSQ_2Box->Draw("");
   
   TH1F *R2_1D_Data_2mu_Box = new TH1F("R2_1D_Data_2mu_Box","",20,0.5,2);
   R2_1D_Data_2mu_Box->SetBinContent(1,2);
   R2_1D_Data_2mu_Box->SetBinContent(6,2);
   R2_1D_Data_2mu_Box->SetBinContent(7,1);
   R2_1D_Data_2mu_Box->SetBinError(1,1.414214);
   R2_1D_Data_2mu_Box->SetBinError(6,1.414214);
   R2_1D_Data_2mu_Box->SetBinError(7,1);
   R2_1D_Data_2mu_Box->SetEntries(5);
   R2_1D_Data_2mu_Box->SetStats(0);
   R2_1D_Data_2mu_Box->SetMarkerStyle(20);
   R2_1D_Data_2mu_Box->SetMarkerSize(0.7);
   R2_1D_Data_2mu_Box->GetXaxis()->SetRange(1,20);
   R2_1D_Data_2mu_Box->GetXaxis()->SetLabelFont(42);
   R2_1D_Data_2mu_Box->GetXaxis()->SetLabelSize(0.035);
   R2_1D_Data_2mu_Box->GetXaxis()->SetTitleSize(0.035);
   R2_1D_Data_2mu_Box->GetXaxis()->SetTitleFont(42);
   R2_1D_Data_2mu_Box->GetYaxis()->SetLabelFont(42);
   R2_1D_Data_2mu_Box->GetYaxis()->SetLabelSize(0.035);
   R2_1D_Data_2mu_Box->GetYaxis()->SetTitleSize(0.035);
   R2_1D_Data_2mu_Box->GetYaxis()->SetTitleFont(42);
   R2_1D_Data_2mu_Box->GetZaxis()->SetLabelFont(42);
   R2_1D_Data_2mu_Box->GetZaxis()->SetLabelSize(0.035);
   R2_1D_Data_2mu_Box->GetZaxis()->SetTitleSize(0.035);
   R2_1D_Data_2mu_Box->GetZaxis()->SetTitleFont(42);
   R2_1D_Data_2mu_Box->Draw("same");
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
   TLegendEntry *entry=leg->AddEntry("R2_1D_5mu_Box","t #bar{t} + jets","f");

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
   entry=leg->AddEntry("R2_1D_5mu_Box","Z/#gamma^{*}(ll) + jets","f");

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
   entry=leg->AddEntry("R2_1D_Data_2mu_Box","Data","lep");
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
   
   TH1F *RATIO = new TH1F("RATIO","",20,0.5,2);
   RATIO->SetBinContent(1,2.696563);
   RATIO->SetBinContent(6,8.128713);
   RATIO->SetBinContent(7,9.155057);
   RATIO->SetBinError(1,2.057514);
   RATIO->SetBinError(6,6.376036);
   RATIO->SetBinError(7,11.21986);
   RATIO->SetMinimum(0);
   RATIO->SetMaximum(3.05);
   RATIO->SetEntries(2.337695);
   RATIO->SetStats(0);
   RATIO->SetFillColor(4);
   RATIO->SetLineColor(4);
   RATIO->SetMarkerColor(4);
   RATIO->SetMarkerStyle(20);
   RATIO->SetMarkerSize(0.7);
   RATIO->GetXaxis()->SetTitle("R^{2}");
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

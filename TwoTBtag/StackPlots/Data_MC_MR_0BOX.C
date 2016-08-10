{
//=========Macro generated from canvas: C/C      
//=========  (Fri Sep 12 01:40:51 2014) by ROOT version5.34/19
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
   
   THStack *stackMR_0Box = new THStack();
   stackMR_0Box->SetName("stackMR_0Box");
   stackMR_0Box->SetTitle("");
   stackMR_0Box->SetMinimum(1);
   stackMR_0Box->SetMaximum(500000);
   
   TH1F *stackMR_0Box_stack_2 = new TH1F("stackMR_0Box_stack_2","",20,200,1700);
   stackMR_0Box_stack_2->SetMinimum(0.259775);
   stackMR_0Box_stack_2->SetMaximum(1069897);
   stackMR_0Box_stack_2->SetDirectory(0);
   stackMR_0Box_stack_2->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   stackMR_0Box_stack_2->SetLineColor(ci);
   stackMR_0Box_stack_2->GetXaxis()->SetTitle("M_{R} (GeV)");
   stackMR_0Box_stack_2->GetXaxis()->SetLabelFont(42);
   stackMR_0Box_stack_2->GetXaxis()->SetLabelSize(0.035);
   stackMR_0Box_stack_2->GetXaxis()->SetTitleSize(0.035);
   stackMR_0Box_stack_2->GetXaxis()->SetTitleFont(42);
   stackMR_0Box_stack_2->GetYaxis()->SetTitle("Events");
   stackMR_0Box_stack_2->GetYaxis()->SetLabelFont(42);
   stackMR_0Box_stack_2->GetYaxis()->SetLabelSize(0.035);
   stackMR_0Box_stack_2->GetYaxis()->SetTitleSize(0.035);
   stackMR_0Box_stack_2->GetYaxis()->SetTitleOffset(1.25);
   stackMR_0Box_stack_2->GetYaxis()->SetTitleFont(42);
   stackMR_0Box_stack_2->GetZaxis()->SetLabelFont(42);
   stackMR_0Box_stack_2->GetZaxis()->SetLabelSize(0.035);
   stackMR_0Box_stack_2->GetZaxis()->SetTitleSize(0.035);
   stackMR_0Box_stack_2->GetZaxis()->SetTitleFont(42);
   stackMR_0Box->SetHistogram(stackMR_0Box_stack_2);
   
   
   TH1F *MR_1D_3mu_Box = new TH1F("MR_1D_3mu_Box","",20,200,1700);
   MR_1D_3mu_Box->SetBinContent(1,0.1358536);
   MR_1D_3mu_Box->SetBinContent(2,0.106348);
   MR_1D_3mu_Box->SetEntries(6);
   MR_1D_3mu_Box->SetStats(0);

   ci = TColor::GetColor("#3300cc");
   MR_1D_3mu_Box->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   MR_1D_3mu_Box->SetLineColor(ci);
   MR_1D_3mu_Box->GetXaxis()->SetLabelFont(42);
   MR_1D_3mu_Box->GetXaxis()->SetLabelSize(0.035);
   MR_1D_3mu_Box->GetXaxis()->SetTitleSize(0.035);
   MR_1D_3mu_Box->GetXaxis()->SetTitleFont(42);
   MR_1D_3mu_Box->GetYaxis()->SetLabelFont(42);
   MR_1D_3mu_Box->GetYaxis()->SetLabelSize(0.035);
   MR_1D_3mu_Box->GetYaxis()->SetTitleSize(0.035);
   MR_1D_3mu_Box->GetYaxis()->SetTitleFont(42);
   MR_1D_3mu_Box->GetZaxis()->SetLabelFont(42);
   MR_1D_3mu_Box->GetZaxis()->SetLabelSize(0.035);
   MR_1D_3mu_Box->GetZaxis()->SetTitleSize(0.035);
   MR_1D_3mu_Box->GetZaxis()->SetTitleFont(42);
   stackMR_0Box->Add(MR_1D_3mu_Box,"");
   
   TH1F *MR_1D_3mu_Box = new TH1F("MR_1D_3mu_Box","",20,200,1700);
   MR_1D_3mu_Box->SetBinContent(1,102.7078);
   MR_1D_3mu_Box->SetBinContent(2,66.82278);
   MR_1D_3mu_Box->SetBinContent(3,21.78607);
   MR_1D_3mu_Box->SetBinContent(4,9.104565);
   MR_1D_3mu_Box->SetBinContent(5,2.878077);
   MR_1D_3mu_Box->SetBinContent(6,0.4709777);
   MR_1D_3mu_Box->SetBinContent(7,0.07660775);
   MR_1D_3mu_Box->SetBinContent(8,0.3575484);
   MR_1D_3mu_Box->SetBinContent(9,0.07963759);
   MR_1D_3mu_Box->SetBinContent(10,0.07011189);
   MR_1D_3mu_Box->SetEntries(2717);
   MR_1D_3mu_Box->SetStats(0);

   ci = TColor::GetColor("#ff33cc");
   MR_1D_3mu_Box->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   MR_1D_3mu_Box->SetLineColor(ci);
   MR_1D_3mu_Box->GetXaxis()->SetLabelFont(42);
   MR_1D_3mu_Box->GetXaxis()->SetLabelSize(0.035);
   MR_1D_3mu_Box->GetXaxis()->SetTitleSize(0.035);
   MR_1D_3mu_Box->GetXaxis()->SetTitleFont(42);
   MR_1D_3mu_Box->GetYaxis()->SetLabelFont(42);
   MR_1D_3mu_Box->GetYaxis()->SetLabelSize(0.035);
   MR_1D_3mu_Box->GetYaxis()->SetTitleSize(0.035);
   MR_1D_3mu_Box->GetYaxis()->SetTitleFont(42);
   MR_1D_3mu_Box->GetZaxis()->SetLabelFont(42);
   MR_1D_3mu_Box->GetZaxis()->SetLabelSize(0.035);
   MR_1D_3mu_Box->GetZaxis()->SetTitleSize(0.035);
   MR_1D_3mu_Box->GetZaxis()->SetTitleFont(42);
   stackMR_0Box->Add(MR_1D_3mu_Box,"");
   
   TH1F *MR_1D_3mu_Box = new TH1F("MR_1D_3mu_Box","",20,200,1700);
   MR_1D_3mu_Box->SetBinContent(1,6.367549);
   MR_1D_3mu_Box->SetBinContent(2,4.613944);
   MR_1D_3mu_Box->SetBinContent(3,1.984186);
   MR_1D_3mu_Box->SetBinContent(4,0.506566);
   MR_1D_3mu_Box->SetBinContent(5,0.04555523);
   MR_1D_3mu_Box->SetBinContent(6,0.4659205);
   MR_1D_3mu_Box->SetEntries(96);
   MR_1D_3mu_Box->SetStats(0);

   ci = TColor::GetColor("#ffff33");
   MR_1D_3mu_Box->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   MR_1D_3mu_Box->SetLineColor(ci);
   MR_1D_3mu_Box->GetXaxis()->SetLabelFont(42);
   MR_1D_3mu_Box->GetXaxis()->SetLabelSize(0.035);
   MR_1D_3mu_Box->GetXaxis()->SetTitleSize(0.035);
   MR_1D_3mu_Box->GetXaxis()->SetTitleFont(42);
   MR_1D_3mu_Box->GetYaxis()->SetLabelFont(42);
   MR_1D_3mu_Box->GetYaxis()->SetLabelSize(0.035);
   MR_1D_3mu_Box->GetYaxis()->SetTitleSize(0.035);
   MR_1D_3mu_Box->GetYaxis()->SetTitleFont(42);
   MR_1D_3mu_Box->GetZaxis()->SetLabelFont(42);
   MR_1D_3mu_Box->GetZaxis()->SetLabelSize(0.035);
   MR_1D_3mu_Box->GetZaxis()->SetTitleSize(0.035);
   MR_1D_3mu_Box->GetZaxis()->SetTitleFont(42);
   stackMR_0Box->Add(MR_1D_3mu_Box,"");
   
   TH1F *MR_1D_3mu_Box = new TH1F("MR_1D_3mu_Box","",20,200,1700);
   MR_1D_3mu_Box->SetBinContent(1,23.65888);
   MR_1D_3mu_Box->SetBinContent(2,12.30443);
   MR_1D_3mu_Box->SetBinContent(3,3.877543);
   MR_1D_3mu_Box->SetBinContent(4,2.006961);
   MR_1D_3mu_Box->SetBinContent(5,1.109331);
   MR_1D_3mu_Box->SetBinContent(6,0.3402779);
   MR_1D_3mu_Box->SetBinContent(7,0.1928038);
   MR_1D_3mu_Box->SetBinContent(8,0.1131099);
   MR_1D_3mu_Box->SetBinContent(9,0.03579228);
   MR_1D_3mu_Box->SetBinContent(10,0.03901514);
   MR_1D_3mu_Box->SetBinContent(11,0.03709088);
   MR_1D_3mu_Box->SetBinContent(13,0.02550442);
   MR_1D_3mu_Box->SetEntries(674);
   MR_1D_3mu_Box->SetStats(0);

   ci = TColor::GetColor("#669900");
   MR_1D_3mu_Box->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   MR_1D_3mu_Box->SetLineColor(ci);
   MR_1D_3mu_Box->GetXaxis()->SetLabelFont(42);
   MR_1D_3mu_Box->GetXaxis()->SetLabelSize(0.035);
   MR_1D_3mu_Box->GetXaxis()->SetTitleSize(0.035);
   MR_1D_3mu_Box->GetXaxis()->SetTitleFont(42);
   MR_1D_3mu_Box->GetYaxis()->SetLabelFont(42);
   MR_1D_3mu_Box->GetYaxis()->SetLabelSize(0.035);
   MR_1D_3mu_Box->GetYaxis()->SetTitleSize(0.035);
   MR_1D_3mu_Box->GetYaxis()->SetTitleFont(42);
   MR_1D_3mu_Box->GetZaxis()->SetLabelFont(42);
   MR_1D_3mu_Box->GetZaxis()->SetLabelSize(0.035);
   MR_1D_3mu_Box->GetZaxis()->SetTitleSize(0.035);
   MR_1D_3mu_Box->GetZaxis()->SetTitleFont(42);
   stackMR_0Box->Add(MR_1D_3mu_Box,"");
   stackMR_0Box->Draw("");
   
   TH1F *MR_1D_Data_0mu_Box = new TH1F("MR_1D_Data_0mu_Box","",20,200,1700);
   MR_1D_Data_0mu_Box->SetBinContent(1,134);
   MR_1D_Data_0mu_Box->SetBinContent(2,69);
   MR_1D_Data_0mu_Box->SetBinContent(3,26);
   MR_1D_Data_0mu_Box->SetBinContent(4,13);
   MR_1D_Data_0mu_Box->SetBinContent(5,3);
   MR_1D_Data_0mu_Box->SetBinContent(6,2);
   MR_1D_Data_0mu_Box->SetBinError(1,11.57584);
   MR_1D_Data_0mu_Box->SetBinError(2,8.306624);
   MR_1D_Data_0mu_Box->SetBinError(3,5.09902);
   MR_1D_Data_0mu_Box->SetBinError(4,3.605551);
   MR_1D_Data_0mu_Box->SetBinError(5,1.732051);
   MR_1D_Data_0mu_Box->SetBinError(6,1.414214);
   MR_1D_Data_0mu_Box->SetEntries(247);
   MR_1D_Data_0mu_Box->SetStats(0);
   MR_1D_Data_0mu_Box->SetMarkerStyle(20);
   MR_1D_Data_0mu_Box->SetMarkerSize(0.7);
   MR_1D_Data_0mu_Box->GetXaxis()->SetRange(1,20);
   MR_1D_Data_0mu_Box->GetXaxis()->SetLabelFont(42);
   MR_1D_Data_0mu_Box->GetXaxis()->SetLabelSize(0.035);
   MR_1D_Data_0mu_Box->GetXaxis()->SetTitleSize(0.035);
   MR_1D_Data_0mu_Box->GetXaxis()->SetTitleFont(42);
   MR_1D_Data_0mu_Box->GetYaxis()->SetLabelFont(42);
   MR_1D_Data_0mu_Box->GetYaxis()->SetLabelSize(0.035);
   MR_1D_Data_0mu_Box->GetYaxis()->SetTitleSize(0.035);
   MR_1D_Data_0mu_Box->GetYaxis()->SetTitleFont(42);
   MR_1D_Data_0mu_Box->GetZaxis()->SetLabelFont(42);
   MR_1D_Data_0mu_Box->GetZaxis()->SetLabelSize(0.035);
   MR_1D_Data_0mu_Box->GetZaxis()->SetTitleSize(0.035);
   MR_1D_Data_0mu_Box->GetZaxis()->SetTitleFont(42);
   MR_1D_Data_0mu_Box->Draw("same");
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
   TLegendEntry *entry=leg->AddEntry("NULL","M_{R} Signal Region","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("MR_1D_3mu_Box","W + jets","f");

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
   entry=leg->AddEntry("MR_1D_3mu_Box","Z(#nu#nu) + jets","f");

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
   entry=leg->AddEntry("MR_1D_3mu_Box","t #bar{t} + jets","f");

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
   entry=leg->AddEntry("MR_1D_3mu_Box","Z/#gamma^{*}(ll) + jets","f");

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
   entry=leg->AddEntry("MR_1D_Data_0mu_Box","Data","lep");
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
   RATIO->SetBinContent(1,1.008504);
   RATIO->SetBinContent(2,0.8229226);
   RATIO->SetBinContent(3,0.9404003);
   RATIO->SetBinContent(4,1.118945);
   RATIO->SetBinContent(5,0.7438698);
   RATIO->SetBinContent(6,1.565955);
   RATIO->SetBinError(1,0.09230547);
   RATIO->SetBinError(2,0.1033585);
   RATIO->SetBinError(3,0.1917771);
   RATIO->SetBinError(4,0.3236754);
   RATIO->SetBinError(5,0.4406138);
   RATIO->SetBinError(6,1.184691);
   RATIO->SetMinimum(0);
   RATIO->SetMaximum(3.05);
   RATIO->SetEntries(21.86523);
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

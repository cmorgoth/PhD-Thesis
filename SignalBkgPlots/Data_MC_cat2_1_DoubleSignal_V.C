{
//=========Macro generated from canvas: C/C      
//=========  (Mon Jan 12 15:04:27 2015) by ROOT version5.34/11
   TCanvas *C = new TCanvas("C", "C", 0, 0, 800, 700);
  C->SetFillColor(0);
  C->SetBorderMode(0);
  C->SetFrameFillStyle(0);
  C->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "pad1",0,0.25,1,1);
   pad1->Draw();
   pad1->cd();
    //pad1->Range(0.4125,0.138068,1.2875,4.580473);
   pad1->SetFillColor(0);
  pad1->SetBorderMode(0);
  pad1->SetBorderSize(2);
  pad1->SetLogy();
  pad1->SetBottomMargin(0);
  pad1->SetTopMargin(0.08);
  pad1->SetLeftMargin(0.12);
  pad1->SetRightMargin(0.03);
  pad1->SetFrameBorderMode(0);
  pad1->SetFrameBorderMode(0);
  pad1->SetFillColor(0);
  pad1->SetBorderMode(0);
  pad1->SetTickx();
  pad1->SetTicky();

   THStack *stack1 = new THStack();
   stack1->SetName("stack1");
   stack1->SetTitle("");
   stack1->SetMinimum(1e0);
   stack1->SetMaximum(1e6);
   Double_t xAxis58[7] = {0.5, 0.575, 0.65, 0.75, 0.85, 0.95, 1.2}; 
   
   TH1F *stack1_stack_5_stack_6_stack_7_stack_8 = new TH1F("stack1_stack_5_stack_6_stack_7_stack_8","",6, xAxis58);
   stack1_stack_5_stack_6_stack_7_stack_8->SetMinimum(0.639864);
   stack1_stack_5_stack_6_stack_7_stack_8->SetMaximum(7312.357);
   stack1_stack_5_stack_6_stack_7_stack_8->SetDirectory(0);
   stack1_stack_5_stack_6_stack_7_stack_8->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#000099");
   stack1_stack_5_stack_6_stack_7_stack_8->SetLineColor(ci);
   stack1_stack_5_stack_6_stack_7_stack_8->GetXaxis()->SetTitle("R^{2}");
   stack1_stack_5_stack_6_stack_7_stack_8->GetXaxis()->SetLabelFont(42);
   stack1_stack_5_stack_6_stack_7_stack_8->GetXaxis()->SetLabelSize(0.035);
   stack1_stack_5_stack_6_stack_7_stack_8->GetXaxis()->SetTitleSize(0.035);
   stack1_stack_5_stack_6_stack_7_stack_8->GetXaxis()->SetTitleFont(42);
   
   stack1_stack_5_stack_6_stack_7_stack_8->GetYaxis()->SetTitle("Events / bin");
   //stack1_stack_5_stack_6_stack_7_stack_8->GetYaxis()->CenterTitle(true);
   stack1_stack_5_stack_6_stack_7_stack_8->GetYaxis()->SetLabelFont(42);
   stack1_stack_5_stack_6_stack_7_stack_8->GetYaxis()->SetLabelSize(0.05);
   stack1_stack_5_stack_6_stack_7_stack_8->GetYaxis()->SetTitleSize(0.0815);
   stack1_stack_5_stack_6_stack_7_stack_8->GetYaxis()->SetTitleOffset(0.65);
   stack1_stack_5_stack_6_stack_7_stack_8->GetYaxis()->SetTitleFont(42);
   
   stack1_stack_5_stack_6_stack_7_stack_8->GetZaxis()->SetLabelFont(42);
   stack1_stack_5_stack_6_stack_7_stack_8->GetZaxis()->SetLabelSize(0.035);
   stack1_stack_5_stack_6_stack_7_stack_8->GetZaxis()->SetTitleSize(0.035);
   stack1_stack_5_stack_6_stack_7_stack_8->GetZaxis()->SetTitleFont(42);
   stack1->SetHistogram(stack1_stack_5_stack_6_stack_7_stack_8);
   
   Double_t xAxis59[7] = {0.5, 0.575, 0.65, 0.75, 0.85, 0.95, 1.2}; 
   
   TH1F *cat2_dy = new TH1F("cat2_dy","",6, xAxis59);
   cat2_dy->SetBinContent(1,3.783998);
   cat2_dy->SetBinContent(2,2.334595);
   cat2_dy->SetBinContent(3,1.117639);
   cat2_dy->SetBinContent(4,0.8406829);
   cat2_dy->SetBinContent(5,0.3600724);
   cat2_dy->SetBinContent(6,0.09138267);
   cat2_dy->SetEntries(6);
   cat2_dy->SetStats(0);

   ci = TColor::GetColor("#3300cc");
   cat2_dy->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   cat2_dy->SetLineColor(ci);
   cat2_dy->GetXaxis()->SetLabelFont(42);
   cat2_dy->GetXaxis()->SetLabelSize(0.035);
   cat2_dy->GetXaxis()->SetTitleSize(0.035);
   cat2_dy->GetXaxis()->SetTitleFont(42);
   cat2_dy->GetYaxis()->SetLabelFont(42);
   cat2_dy->GetYaxis()->SetLabelSize(0.035);
   cat2_dy->GetYaxis()->SetTitleSize(0.035);
   cat2_dy->GetYaxis()->SetTitleFont(42);
   cat2_dy->GetZaxis()->SetLabelFont(42);
   cat2_dy->GetZaxis()->SetLabelSize(0.035);
   cat2_dy->GetZaxis()->SetTitleSize(0.035);
   cat2_dy->GetZaxis()->SetTitleFont(42);
   stack1->Add(cat2_dy,"");
   Double_t xAxis60[7] = {0.5, 0.575, 0.65, 0.75, 0.85, 0.95, 1.2}; 
   
   TH1F *cat2_tt = new TH1F("cat2_tt","",6, xAxis60);
   cat2_tt->SetBinContent(1,28.65729);
   cat2_tt->SetBinContent(2,19.58014);
   cat2_tt->SetBinContent(3,15.15639);
   cat2_tt->SetBinContent(4,13.7282);
   cat2_tt->SetBinContent(5,7.900019);
   cat2_tt->SetBinContent(6,2.207392);
   cat2_tt->SetEntries(6);
   cat2_tt->SetStats(0);

   ci = TColor::GetColor("#ff33cc");
   cat2_tt->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   cat2_tt->SetLineColor(ci);
   cat2_tt->GetXaxis()->SetLabelFont(42);
   cat2_tt->GetXaxis()->SetLabelSize(0.035);
   cat2_tt->GetXaxis()->SetTitleSize(0.035);
   cat2_tt->GetXaxis()->SetTitleFont(42);
   cat2_tt->GetYaxis()->SetLabelFont(42);
   cat2_tt->GetYaxis()->SetLabelSize(0.035);
   cat2_tt->GetYaxis()->SetTitleSize(0.035);
   cat2_tt->GetYaxis()->SetTitleFont(42);
   cat2_tt->GetZaxis()->SetLabelFont(42);
   cat2_tt->GetZaxis()->SetLabelSize(0.035);
   cat2_tt->GetZaxis()->SetTitleSize(0.035);
   cat2_tt->GetZaxis()->SetTitleFont(42);
   stack1->Add(cat2_tt,"");
   Double_t xAxis61[7] = {0.5, 0.575, 0.65, 0.75, 0.85, 0.95, 1.2}; 
   
   TH1F *cat2_z = new TH1F("cat2_z","",6, xAxis61);
   cat2_z->SetBinContent(1,692.4422);
   cat2_z->SetBinContent(2,481.576);
   cat2_z->SetBinContent(3,359.6151);
   cat2_z->SetBinContent(4,251.7793);
   cat2_z->SetBinContent(5,213.4687);
   cat2_z->SetBinContent(6,63.21546);
   cat2_z->SetEntries(6);
   cat2_z->SetStats(0);

   ci = TColor::GetColor("#ffff33");
   cat2_z->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   cat2_z->SetLineColor(ci);
   cat2_z->GetXaxis()->SetLabelFont(42);
   cat2_z->GetXaxis()->SetLabelSize(0.035);
   cat2_z->GetXaxis()->SetTitleSize(0.035);
   cat2_z->GetXaxis()->SetTitleFont(42);
   cat2_z->GetYaxis()->SetLabelFont(42);
   cat2_z->GetYaxis()->SetLabelSize(0.035);
   cat2_z->GetYaxis()->SetTitleSize(0.035);
   cat2_z->GetYaxis()->SetTitleFont(42);
   cat2_z->GetZaxis()->SetLabelFont(42);
   cat2_z->GetZaxis()->SetLabelSize(0.035);
   cat2_z->GetZaxis()->SetTitleSize(0.035);
   cat2_z->GetZaxis()->SetTitleFont(42);
   stack1->Add(cat2_z,"");
   Double_t xAxis62[7] = {0.5, 0.575, 0.65, 0.75, 0.85, 0.95, 1.2}; 
   
   TH1F *cat2_w = new TH1F("cat2_w","",6, xAxis62);
   cat2_w->SetBinContent(1,495.3982);
   cat2_w->SetBinContent(2,324.1746);
   cat2_w->SetBinContent(3,229.1888);
   cat2_w->SetBinContent(4,147.2352);
   cat2_w->SetBinContent(5,118.9591);
   cat2_w->SetBinContent(6,25.67984);
   cat2_w->SetEntries(6);
   cat2_w->SetStats(0);

   ci = TColor::GetColor("#669900");
   cat2_w->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   cat2_w->SetLineColor(ci);
   cat2_w->GetXaxis()->SetLabelFont(42);
   cat2_w->GetXaxis()->SetLabelSize(0.035);
   cat2_w->GetXaxis()->SetTitleSize(0.035);
   cat2_w->GetXaxis()->SetTitleFont(42);
   cat2_w->GetYaxis()->SetLabelFont(42);
   cat2_w->GetYaxis()->SetLabelSize(0.035);
   cat2_w->GetYaxis()->SetTitleSize(0.035);
   cat2_w->GetYaxis()->SetTitleFont(42);
   cat2_w->GetZaxis()->SetLabelFont(42);
   cat2_w->GetZaxis()->SetLabelSize(0.035);
   cat2_w->GetZaxis()->SetTitleSize(0.035);
   cat2_w->GetZaxis()->SetTitleFont(42);
   stack1->Add(cat2_w,"");
   stack1->Draw("");
   Double_t xAxis63[7] = {0.5, 0.575, 0.65, 0.75, 0.85, 0.95, 1.2}; 
   
   TH1F *cat2_data = new TH1F("cat2_data","",6, xAxis63);
   cat2_data->SetBinContent(1,1088);
   cat2_data->SetBinContent(2,765);
   cat2_data->SetBinContent(3,510.7498);
   cat2_data->SetBinContent(4,423.7498);
   cat2_data->SetBinContent(5,296.2501);
   cat2_data->SetBinContent(6,86.39996);
   cat2_data->SetBinError(1,32.98485);
   cat2_data->SetBinError(2,27.65863);
   cat2_data->SetBinError(3,19.57197);
   cat2_data->SetBinError(4,17.82729);
   cat2_data->SetBinError(5,14.90596);
   cat2_data->SetBinError(6,5.091167);
   cat2_data->SetEntries(6);
   cat2_data->SetStats(0);
   cat2_data->SetMarkerStyle(20);
   cat2_data->SetMarkerSize(0.7);
   cat2_data->SetLineColor(kBlack);
   cat2_data->GetXaxis()->SetRange(1,6);
   cat2_data->GetXaxis()->SetLabelFont(42);
   cat2_data->GetXaxis()->SetLabelSize(0.035);
   cat2_data->GetXaxis()->SetTitleSize(0.035);
   cat2_data->GetXaxis()->SetTitleFont(42);
   cat2_data->GetYaxis()->SetLabelFont(42);
   cat2_data->GetYaxis()->SetLabelSize(0.035);
   cat2_data->GetYaxis()->SetTitleSize(0.035);
   cat2_data->GetYaxis()->SetTitleFont(42);
   cat2_data->GetZaxis()->SetLabelFont(42);
   cat2_data->GetZaxis()->SetLabelSize(0.035);
   cat2_data->GetZaxis()->SetTitleSize(0.035);
   cat2_data->GetZaxis()->SetTitleFont(42);
   cat2_data->Draw("same");
   Double_t xAxis64[7] = {0.5, 0.575, 0.65, 0.75, 0.85, 0.95, 1.2}; 
   
   TH1F *signal15_cat1 = new TH1F("signal15_cat1","signal15_cat1",6, xAxis64);
   signal15_cat1->SetBinContent(1,20.17385);
   signal15_cat1->SetBinContent(2,19.54796);
   signal15_cat1->SetBinContent(3,29.42256);
   signal15_cat1->SetBinContent(4,20.69629);
   signal15_cat1->SetBinContent(5,24.25734);
   signal15_cat1->SetBinContent(6,25.32612);
   signal15_cat1->SetEntries(870);
   signal15_cat1->SetStats(0);
   signal15_cat1->SetLineStyle(2);
   signal15_cat1->SetLineWidth(3);
   signal15_cat1->GetXaxis()->SetLabelFont(42);
   signal15_cat1->GetXaxis()->SetLabelSize(0.035);
   signal15_cat1->GetXaxis()->SetTitleSize(0.035);
   signal15_cat1->GetXaxis()->SetTitleFont(42);
   signal15_cat1->GetYaxis()->SetLabelFont(42);
   signal15_cat1->GetYaxis()->SetLabelSize(0.035);
   signal15_cat1->GetYaxis()->SetTitleSize(0.035);
   signal15_cat1->GetYaxis()->SetTitleFont(42);
   signal15_cat1->GetZaxis()->SetLabelFont(42);
   signal15_cat1->GetZaxis()->SetLabelSize(0.035);
   signal15_cat1->GetZaxis()->SetTitleSize(0.035);
   signal15_cat1->GetZaxis()->SetTitleFont(42);
   signal15_cat1->Draw("same");
   Double_t xAxis65[7] = {0.5, 0.575, 0.65, 0.75, 0.85, 0.95, 1.2}; 
   
   TH1F *signal14_cat1 = new TH1F("signal14_cat1","signal14_cat1",6, xAxis65);
   signal14_cat1->SetBinContent(1,20.35883);
   signal14_cat1->SetBinContent(2,21.18083);
   signal14_cat1->SetBinContent(3,25.45788);
   signal14_cat1->SetBinContent(4,19.03563);
   signal14_cat1->SetBinContent(5,23.67757);
   signal14_cat1->SetBinContent(6,19.46846);
   signal14_cat1->SetEntries(808);
   signal14_cat1->SetStats(0);
   signal14_cat1->SetLineStyle(9);
   signal14_cat1->SetLineWidth(3);
   signal14_cat1->GetXaxis()->SetLabelFont(42);
   signal14_cat1->GetXaxis()->SetLabelSize(0.035);
   signal14_cat1->GetXaxis()->SetTitleSize(0.035);
   signal14_cat1->GetXaxis()->SetTitleFont(42);
   signal14_cat1->GetYaxis()->SetLabelFont(42);
   signal14_cat1->GetYaxis()->SetLabelSize(0.035);
   signal14_cat1->GetYaxis()->SetTitleSize(0.035);
   signal14_cat1->GetYaxis()->SetTitleFont(42);
   signal14_cat1->GetZaxis()->SetLabelFont(42);
   signal14_cat1->GetZaxis()->SetLabelSize(0.035);
   signal14_cat1->GetZaxis()->SetTitleSize(0.035);
   signal14_cat1->GetZaxis()->SetTitleFont(42);
   signal14_cat1->Draw("same");
   pad1->Modified();
   
   TLegend *leg = new TLegend(0.6,0.48,0.94,0.91,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(42);
   leg->SetTextSize(0.05);
   leg->SetTextAlign(11);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   //TLegendEntry *entry=leg->AddEntry("cat2_w"," W(l#nu)+jets","f");
   TLegendEntry *entry = leg->AddEntry("cat2_data"," Data","lep");;
   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);

   ci = TColor::GetColor("#669900");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   leg->AddEntry("cat2_w"," W(l#nu)+jets","f");
 
   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("cat2_z"," Z(#nu#bar{#nu})+jets","f");

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
   entry=leg->AddEntry("cat2_tt"," t#bar{t}+jets","f");

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
   entry=leg->AddEntry("cat2_dy"," Z(ll)+jets","f");

   ci = TColor::GetColor("#3300cc");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   
   /*
   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("cat2_data"," Data","lep");
   */
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.7);
   entry->SetTextFont(42);
   entry=leg->AddEntry("signal15_cat1"," Vu-DM m = 1 GeV","l");
   entry->SetLineColor(1);
   entry->SetLineStyle(2);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("signal14_cat1"," Vd-DM m = 1 GeV","l");
   entry->SetLineColor(1);
   entry->SetLineStyle(9);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   
   float lumix = 0.96;
   float lumiy = 0.935;
   float lumifont = 42;
   
   float cmsx = 0.24;
   float cmsy = 0.85;
   TString CMSText = "CMS";
   float cmsTextFont   = 61;  // default is helvetic-bold
   float extrax = cmsx + 0.045;
   float extray = cmsy - 0.04;
   TString extraText   = "Preliminary";
   float extraTextFont = 52;  // default is helvetica-italics
   // ratio of "CMS" and extra text size
   float extraOverCmsTextSize  = 0.76;
   float cmsSize = 0.06;
   TString lumiText = "18.8 fb^{-1} (8 TeV)";
   TLatex latex;
   latex.SetNDC();
   latex.SetTextAngle(0);
   latex.SetTextColor(kBlack);    
   float extraTextSize = extraOverCmsTextSize*cmsSize;
   latex.SetTextFont(lumifont);
   latex.SetTextAlign(31); 
   latex.SetTextSize(cmsSize);    
   latex.DrawLatex(lumix, lumiy,lumiText);

   latex.SetTextFont(cmsTextFont);
   latex.SetTextAlign(31); 
   latex.SetTextSize(cmsSize);
   latex.DrawLatex(cmsx, cmsy, CMSText);
   
   latex.SetTextFont(extraTextFont);
   latex.SetTextAlign(31); 
   latex.SetTextSize(extraTextSize);
   //latex.DrawLatex(extrax, extray, extraText);

   latex.SetTextFont(52);
   latex.SetTextAlign(31); 
   latex.SetTextSize(0.05);
   latex.SetLineWidth(2);
   latex.DrawLatex(0.395,0.75,"Low M_{R} category");
   latex.DrawLatex(0.405,0.69,"0#mu search sample");
   
   C->cd();
// ------------>Primitives in pad: pad2
   pad2 = new TPad("pad2", "pad2",0,0,1,0.24);
   pad2->Draw();
   pad2->cd();
   pad2->Range(0.4125,-1.027628,1.2875,3.082884);
   pad2->SetFillColor(0);
   pad2->SetBorderMode(0);
   pad2->SetBorderSize(2);
   pad2->SetGridy();
   pad2->SetTopMargin(0.008);
   pad2->SetLeftMargin(0.12);
   pad2->SetTopMargin(0.04);
   pad2->SetBottomMargin(0.35);
   pad2->SetFrameBorderMode(0);
   pad2->SetFrameBorderMode(0);
   pad2->SetRightMargin(0.03);
   pad2->SetTickx();
   pad2->SetTicky();
   
   Double_t xAxis66[7] = {0.5, 0.575, 0.65, 0.75, 0.85, 0.95, 1.2}; 
   
   TH1F *RATIO = new TH1F("RATIO","",6, xAxis66);
   RATIO->SetBinContent(1,0.8915974);
   RATIO->SetBinContent(2,0.9242865);
   RATIO->SetBinContent(3,0.8441057);
   RATIO->SetBinContent(4,1.024581);
   RATIO->SetBinContent(5,0.8695645);
   RATIO->SetBinContent(6,0.9474295);
   RATIO->SetBinError(1,0.09161367);
   RATIO->SetBinError(2,0.08000566);
   RATIO->SetBinError(3,0.2254212);
   RATIO->SetBinError(4,0.1177751);
   RATIO->SetBinError(5,0.07591);
   RATIO->SetBinError(6,0.144947);
   RATIO->SetMinimum(0);
   RATIO->SetMaximum(3.05);
   RATIO->SetEntries(284.8636);
   RATIO->SetStats(0);
   RATIO->SetFillColor(4);
   RATIO->SetLineColor(4);
   RATIO->SetMarkerColor(4);
   RATIO->SetMarkerStyle(20);
   RATIO->SetMarkerSize(0.7);
   RATIO->GetXaxis()->SetTitle("R^{2}");
   RATIO->GetXaxis()->SetRange(1,6);
   RATIO->SetMinimum(0);
   RATIO->SetMaximum(3.0);
   RATIO->GetXaxis()->SetLabelOffset(0.025);
   RATIO->GetYaxis()->SetNdivisions(10503, true);
   RATIO->GetXaxis()->SetLabelFont(42);
   RATIO->GetXaxis()->SetLabelSize(0.15);
   RATIO->GetXaxis()->SetTitleSize(0.21);
   RATIO->GetXaxis()->SetLabelOffset(0.035);
   RATIO->GetXaxis()->SetTitleOffset(0.735);
   RATIO->GetXaxis()->SetTitleFont(42);
   RATIO->GetYaxis()->SetTitle("Data/Bkg");
   RATIO->GetYaxis()->CenterTitle(true);
   RATIO->GetYaxis()->SetLabelFont(42);
   RATIO->GetYaxis()->SetLabelSize(0.13);
   RATIO->GetYaxis()->SetTitleSize(0.15);
   RATIO->GetYaxis()->SetTitleOffset(0.3);
   RATIO->GetYaxis()->SetTitleFont(42);
   RATIO->GetZaxis()->SetLabelFont(42);
   RATIO->GetZaxis()->SetLabelSize(0.035);
   RATIO->GetZaxis()->SetTitleSize(0.035);
   RATIO->GetZaxis()->SetLabelSize(0.035);
   RATIO->GetZaxis()->SetTitleFont(42);
   RATIO->Draw("");
   pad2->Modified();
   C->cd();
   C->Modified();
   C->cd();
   C->SetSelected(C);
   C->SaveAs("Data_MC_cat2_1_DoubleSignal_V.pdf");
}

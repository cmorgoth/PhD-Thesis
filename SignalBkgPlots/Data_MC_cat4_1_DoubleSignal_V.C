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
  //pad1->Range(0.4125,-1.977665,1.2875,3.379083);
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
   stack1->SetMinimum(2e-2);
   stack1->SetMaximum(1e5);
   Double_t xAxis124[5] = {0.5, 0.6, 0.7, 0.95, 1.2}; 
   
   TH1F *stack1_stack_13_stack_14_stack_15_stack_16 = new TH1F("stack1_stack_13_stack_14_stack_15_stack_16","",4, xAxis124);
   stack1_stack_13_stack_14_stack_15_stack_16->SetMinimum(0.01052773);
   stack1_stack_13_stack_14_stack_15_stack_16->SetMaximum(697.2811);
   stack1_stack_13_stack_14_stack_15_stack_16->SetDirectory(0);
   stack1_stack_13_stack_14_stack_15_stack_16->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#000099");
   stack1_stack_13_stack_14_stack_15_stack_16->SetLineColor(ci);
   stack1_stack_13_stack_14_stack_15_stack_16->GetXaxis()->SetTitle("R^{2}");
   stack1_stack_13_stack_14_stack_15_stack_16->GetXaxis()->SetLabelFont(42);
   stack1_stack_13_stack_14_stack_15_stack_16->GetXaxis()->SetLabelSize(0.035);
   stack1_stack_13_stack_14_stack_15_stack_16->GetXaxis()->SetTitleSize(0.035);
   stack1_stack_13_stack_14_stack_15_stack_16->GetXaxis()->SetTitleFont(42);
   stack1_stack_13_stack_14_stack_15_stack_16->GetYaxis()->SetTitle("Events / bin");
   //stack1_stack_13_stack_14_stack_15_stack_16->GetYaxis()->CenterTitle(true);
   stack1_stack_13_stack_14_stack_15_stack_16->GetYaxis()->SetLabelFont(42);
   stack1_stack_13_stack_14_stack_15_stack_16->GetYaxis()->SetLabelSize(0.05);
   stack1_stack_13_stack_14_stack_15_stack_16->GetYaxis()->SetTitleSize(0.0815);
   stack1_stack_13_stack_14_stack_15_stack_16->GetYaxis()->SetTitleOffset(0.65);
   stack1_stack_13_stack_14_stack_15_stack_16->GetYaxis()->SetTitleFont(42);

   stack1_stack_13_stack_14_stack_15_stack_16->GetZaxis()->SetLabelSize(0.035);
   stack1_stack_13_stack_14_stack_15_stack_16->GetZaxis()->SetTitleSize(0.035);
   stack1_stack_13_stack_14_stack_15_stack_16->GetZaxis()->SetTitleFont(42);
   stack1->SetHistogram(stack1_stack_13_stack_14_stack_15_stack_16);
   
   Double_t xAxis125[5] = {0.5, 0.6, 0.7, 0.95, 1.2}; 
   
   TH1F *cat4_dy = new TH1F("cat4_dy","",4, xAxis125);
   cat4_dy->SetBinContent(1,0.01983298);
   cat4_dy->SetBinContent(2,0.02015837);
   cat4_dy->SetEntries(4);
   cat4_dy->SetStats(0);

   ci = TColor::GetColor("#3300cc");
   cat4_dy->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   cat4_dy->SetLineColor(ci);
   cat4_dy->GetXaxis()->SetLabelFont(42);
   cat4_dy->GetXaxis()->SetLabelSize(0.035);
   cat4_dy->GetXaxis()->SetTitleSize(0.035);
   cat4_dy->GetXaxis()->SetTitleFont(42);
   cat4_dy->GetYaxis()->SetLabelFont(42);
   cat4_dy->GetYaxis()->SetLabelSize(0.035);
   cat4_dy->GetYaxis()->SetTitleSize(0.035);
   cat4_dy->GetYaxis()->SetTitleFont(42);
   cat4_dy->GetZaxis()->SetLabelFont(42);
   cat4_dy->GetZaxis()->SetLabelSize(0.035);
   cat4_dy->GetZaxis()->SetTitleSize(0.035);
   cat4_dy->GetZaxis()->SetTitleFont(42);
   stack1->Add(cat4_dy,"");
   Double_t xAxis126[5] = {0.5, 0.6, 0.7, 0.95, 1.2}; 
   
   TH1F *cat4_tt = new TH1F("cat4_tt","",4, xAxis126);
   cat4_tt->SetBinContent(1,1.390939);
   cat4_tt->SetBinContent(2,0.4514818);
   cat4_tt->SetBinContent(3,0.1978144);
   cat4_tt->SetBinContent(4,0.04809364);
   cat4_tt->SetEntries(4);
   cat4_tt->SetStats(0);

   ci = TColor::GetColor("#ff33cc");
   cat4_tt->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   cat4_tt->SetLineColor(ci);
   cat4_tt->GetXaxis()->SetLabelFont(42);
   cat4_tt->GetXaxis()->SetLabelSize(0.035);
   cat4_tt->GetXaxis()->SetTitleSize(0.035);
   cat4_tt->GetXaxis()->SetTitleFont(42);
   cat4_tt->GetYaxis()->SetLabelFont(42);
   cat4_tt->GetYaxis()->SetLabelSize(0.035);
   cat4_tt->GetYaxis()->SetTitleSize(0.035);
   cat4_tt->GetYaxis()->SetTitleFont(42);
   cat4_tt->GetZaxis()->SetLabelFont(42);
   cat4_tt->GetZaxis()->SetLabelSize(0.035);
   cat4_tt->GetZaxis()->SetTitleSize(0.035);
   cat4_tt->GetZaxis()->SetTitleFont(42);
   stack1->Add(cat4_tt,"");
   Double_t xAxis127[5] = {0.5, 0.6, 0.7, 0.95, 1.2}; 
   
   TH1F *cat4_z = new TH1F("cat4_z","",4, xAxis127);
   cat4_z->SetBinContent(1,45.43365);
   cat4_z->SetBinContent(2,18.72238);
   cat4_z->SetBinContent(3,9.124085);
   cat4_z->SetBinContent(4,0.4788209);
   cat4_z->SetEntries(4);
   cat4_z->SetStats(0);

   ci = TColor::GetColor("#ffff33");
   cat4_z->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   cat4_z->SetLineColor(ci);
   cat4_z->GetXaxis()->SetLabelFont(42);
   cat4_z->GetXaxis()->SetLabelSize(0.035);
   cat4_z->GetXaxis()->SetTitleSize(0.035);
   cat4_z->GetXaxis()->SetTitleFont(42);
   cat4_z->GetYaxis()->SetLabelFont(42);
   cat4_z->GetYaxis()->SetLabelSize(0.035);
   cat4_z->GetYaxis()->SetTitleSize(0.035);
   cat4_z->GetYaxis()->SetTitleFont(42);
   cat4_z->GetZaxis()->SetLabelFont(42);
   cat4_z->GetZaxis()->SetLabelSize(0.035);
   cat4_z->GetZaxis()->SetTitleSize(0.035);
   cat4_z->GetZaxis()->SetTitleFont(42);
   stack1->Add(cat4_z,"");
   Double_t xAxis128[5] = {0.5, 0.6, 0.7, 0.95, 1.2}; 
   
   TH1F *cat4_w = new TH1F("cat4_w","",4, xAxis128);
   cat4_w->SetBinContent(1,24.06277);
   cat4_w->SetBinContent(2,10.27834);
   cat4_w->SetBinContent(3,3.838187);
   cat4_w->SetBinContent(4,0.1508434);
   cat4_w->SetEntries(4);
   cat4_w->SetStats(0);

   ci = TColor::GetColor("#669900");
   cat4_w->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   cat4_w->SetLineColor(ci);
   cat4_w->GetXaxis()->SetLabelFont(42);
   cat4_w->GetXaxis()->SetLabelSize(0.035);
   cat4_w->GetXaxis()->SetTitleSize(0.035);
   cat4_w->GetXaxis()->SetTitleFont(42);
   cat4_w->GetYaxis()->SetLabelFont(42);
   cat4_w->GetYaxis()->SetLabelSize(0.035);
   cat4_w->GetYaxis()->SetTitleSize(0.035);
   cat4_w->GetYaxis()->SetTitleFont(42);
   cat4_w->GetZaxis()->SetLabelFont(42);
   cat4_w->GetZaxis()->SetLabelSize(0.035);
   cat4_w->GetZaxis()->SetTitleSize(0.035);
   cat4_w->GetZaxis()->SetTitleFont(42);
   stack1->Add(cat4_w,"");
   stack1->Draw("");
   Double_t xAxis129[5] = {0.5, 0.6, 0.7, 0.95, 1.2}; 
   
   TH1F *cat4_data = new TH1F("cat4_data","",4, xAxis129);
   cat4_data->SetBinContent(1,96);
   cat4_data->SetBinContent(2,37.00002);
   cat4_data->SetBinContent(3,12.8);
   cat4_data->SetBinContent(4,1.6);
   cat4_data->SetBinError(1,9.797959);
   cat4_data->SetBinError(2,6.082766);
   cat4_data->SetBinError(3,2.262742);
   cat4_data->SetBinError(4,0.8);
   cat4_data->SetEntries(4);
   cat4_data->SetStats(0);
   cat4_data->SetMarkerStyle(20);
   cat4_data->SetMarkerSize(0.7);
   cat4_data->SetLineColor(kBlack);
   cat4_data->GetXaxis()->SetRange(1,4);
   cat4_data->GetXaxis()->SetLabelFont(42);
   cat4_data->GetXaxis()->SetLabelSize(0.035);
   cat4_data->GetXaxis()->SetTitleSize(0.035);
   cat4_data->GetXaxis()->SetTitleFont(42);
   cat4_data->GetYaxis()->SetLabelFont(42);
   cat4_data->GetYaxis()->SetLabelSize(0.035);
   cat4_data->GetYaxis()->SetTitleSize(0.035);
   cat4_data->GetYaxis()->SetTitleFont(42);
   cat4_data->GetZaxis()->SetLabelFont(42);
   cat4_data->GetZaxis()->SetLabelSize(0.035);
   cat4_data->GetZaxis()->SetTitleSize(0.035);
   cat4_data->GetZaxis()->SetTitleFont(42);
   cat4_data->Draw("same");
   Double_t xAxis130[5] = {0.5, 0.6, 0.7, 0.95, 1.2}; 
   
   TH1F *signal15_cat3 = new TH1F("signal15_cat3","signal15_cat3",4, xAxis130);
   signal15_cat3->SetBinContent(1,15.58152);
   signal15_cat3->SetBinContent(2,10.96046);
   signal15_cat3->SetBinContent(3,19.78247);
   signal15_cat3->SetBinContent(4,6.526484);
   signal15_cat3->SetEntries(384);
   signal15_cat3->SetStats(0);
   signal15_cat3->SetLineStyle(2);
   signal15_cat3->SetLineWidth(3);
   signal15_cat3->GetXaxis()->SetLabelFont(42);
   signal15_cat3->GetXaxis()->SetLabelSize(0.035);
   signal15_cat3->GetXaxis()->SetTitleSize(0.035);
   signal15_cat3->GetXaxis()->SetTitleFont(42);
   signal15_cat3->GetYaxis()->SetLabelFont(42);
   signal15_cat3->GetYaxis()->SetLabelSize(0.035);
   signal15_cat3->GetYaxis()->SetTitleSize(0.035);
   signal15_cat3->GetYaxis()->SetTitleFont(42);
   signal15_cat3->GetZaxis()->SetLabelFont(42);
   signal15_cat3->GetZaxis()->SetLabelSize(0.035);
   signal15_cat3->GetZaxis()->SetTitleSize(0.035);
   signal15_cat3->GetZaxis()->SetTitleFont(42);
   signal15_cat3->Draw("same");
   Double_t xAxis131[5] = {0.5, 0.6, 0.7, 0.95, 1.2}; 
   
   TH1F *signal14_cat3 = new TH1F("signal14_cat3","signal14_cat3",4, xAxis131);
   signal14_cat3->SetBinContent(1,12.18467);
   signal14_cat3->SetBinContent(2,7.580066);
   signal14_cat3->SetBinContent(3,14.62763);
   signal14_cat3->SetBinContent(4,3.624391);
   signal14_cat3->SetEntries(263);
   signal14_cat3->SetStats(0);
   signal14_cat3->SetLineStyle(9);
   signal14_cat3->SetLineWidth(3);
   signal14_cat3->GetXaxis()->SetLabelFont(42);
   signal14_cat3->GetXaxis()->SetLabelSize(0.035);
   signal14_cat3->GetXaxis()->SetTitleSize(0.035);
   signal14_cat3->GetXaxis()->SetTitleFont(42);
   signal14_cat3->GetYaxis()->SetLabelFont(42);
   signal14_cat3->GetYaxis()->SetLabelSize(0.035);
   signal14_cat3->GetYaxis()->SetTitleSize(0.035);
   signal14_cat3->GetYaxis()->SetTitleFont(42);
   signal14_cat3->GetZaxis()->SetLabelFont(42);
   signal14_cat3->GetZaxis()->SetLabelSize(0.035);
   signal14_cat3->GetZaxis()->SetTitleSize(0.035);
   signal14_cat3->GetZaxis()->SetTitleFont(42);
   signal14_cat3->Draw("same");
   pad1->Modified();
   
   TLegend *leg = new TLegend(0.6,0.48,0.94,0.91,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(42);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   //leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   //TLegendEntry *entry=leg->AddEntry("cat4_w"," W(l#nu)+jets","f");
   TLegendEntry *entry = leg->AddEntry("cat4_data"," Data","lep");;
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
   leg->AddEntry("cat4_w"," W(l#nu)+jets","f");

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("cat4_z"," Z(#nu#bar{#nu})+jets","f");

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
   entry=leg->AddEntry("cat4_tt"," t#bar{t}+jets","f");

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
   entry=leg->AddEntry("cat4_dy"," Z(ll)+jets","f");

   ci = TColor::GetColor("#3300cc");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   /*ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("cat4_data","Data","lep");*/
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.7);
   entry->SetTextFont(42);
   entry=leg->AddEntry("signal15_cat3","Vu-DM m = 1 GeV","l");
   entry->SetLineColor(1);
   entry->SetLineStyle(2);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("signal14_cat3","Vd-DM m = 1 GeV","l");
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
   latex.DrawLatex(0.465,0.75,"Very high M_{R} category");
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
   pad2->SetLeftMargin(0.12);
   pad2->SetTopMargin(0.04);
   pad2->SetBottomMargin(0.35);
   pad2->SetFrameBorderMode(0);
   pad2->SetFrameBorderMode(0);
   pad2->SetRightMargin(0.03);
   pad2->SetTickx();
   pad2->SetTicky();
   Double_t xAxis132[5] = {0.5, 0.6, 0.7, 0.95, 1.2}; 
   
   TH1F *RATIO = new TH1F("RATIO","",4, xAxis132);
   RATIO->SetBinContent(1,1.353882);
   RATIO->SetBinContent(2,1.255414);
   RATIO->SetBinContent(3,0.9726381);
   RATIO->SetBinContent(4,2.360725);
   RATIO->SetBinError(1,1.991381);
   RATIO->SetBinError(2,0.7953847);
   RATIO->SetBinError(3,0.4462125);
   RATIO->SetBinError(4,2.6168);
   RATIO->SetMinimum(0);
   RATIO->SetMaximum(3.0);
   RATIO->GetXaxis()->SetLabelOffset(0.025);
   RATIO->GetYaxis()->SetNdivisions(10503, true);
   RATIO->SetEntries(3.032655);
   RATIO->SetStats(0);
   RATIO->SetFillColor(4);
   RATIO->SetLineColor(4);
   RATIO->SetMarkerColor(4);
   RATIO->SetMarkerStyle(20);
   RATIO->SetMarkerSize(0.7);
   RATIO->GetXaxis()->SetTitle("R^{2}");
   RATIO->GetXaxis()->SetRange(1,4);
   //RATIO->GetXaxis()->CenterTitle(true);
   RATIO->GetXaxis()->SetLabelFont(42);
   RATIO->GetXaxis()->SetLabelSize(0.15);
   RATIO->GetXaxis()->SetLabelOffset(0.035);
   RATIO->GetXaxis()->SetTitleSize(0.21);
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
   RATIO->GetZaxis()->SetTitleFont(42);
   RATIO->Draw("");
   pad2->Modified();
   C->cd();
   C->Modified();
   C->cd();
   C->SetSelected(C);
   C->SaveAs("Data_MC_cat4_1_DoubleSignal_V.pdf");
}

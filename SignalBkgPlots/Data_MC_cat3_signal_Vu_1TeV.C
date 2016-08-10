{
//=========Macro generated from canvas: C/C      
//=========  (Thu Sep 11 01:16:26 2014) by ROOT version5.34/20
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
   pad1->Range(0.4125,-0.7399452,1.2875,4.02437);
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
   stack1->SetMinimum(0.5099998);
   stack1->SetMaximum(2052);
   Double_t xAxis38[7] = {0.5, 0.575, 0.65, 0.75, 0.85, 0.95, 1.2}; 
   
   TH1F *stack1_stack_5_stack_6 = new TH1F("stack1_stack_5_stack_6","",6, xAxis38);
   stack1_stack_5_stack_6->SetMinimum(0.1819931);
   stack1_stack_5_stack_6->SetMaximum(3531.331);
   stack1_stack_5_stack_6->SetDirectory(0);
   stack1_stack_5_stack_6->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   stack1_stack_5_stack_6->SetLineColor(ci);
   stack1_stack_5_stack_6->GetXaxis()->SetTitle("R^{2}");
   stack1_stack_5_stack_6->GetXaxis()->SetLabelFont(42);
   stack1_stack_5_stack_6->GetXaxis()->SetLabelSize(0.035);
   stack1_stack_5_stack_6->GetXaxis()->SetTitleSize(0.035);
   stack1_stack_5_stack_6->GetXaxis()->SetTitleFont(42);
   stack1_stack_5_stack_6->GetYaxis()->SetTitle("Events/0.075");
   stack1_stack_5_stack_6->GetYaxis()->CenterTitle(true);
   stack1_stack_5_stack_6->GetYaxis()->SetLabelFont(42);
   stack1_stack_5_stack_6->GetYaxis()->SetLabelSize(0.035);
   stack1_stack_5_stack_6->GetYaxis()->SetTitleSize(0.035);
   stack1_stack_5_stack_6->GetYaxis()->SetTitleOffset(1.45);
   stack1_stack_5_stack_6->GetYaxis()->SetTitleFont(42);
   stack1_stack_5_stack_6->GetZaxis()->SetLabelFont(42);
   stack1_stack_5_stack_6->GetZaxis()->SetLabelSize(0.035);
   stack1_stack_5_stack_6->GetZaxis()->SetTitleSize(0.035);
   stack1_stack_5_stack_6->GetZaxis()->SetTitleFont(42);
   stack1->SetHistogram(stack1_stack_5_stack_6);
   
   Double_t xAxis39[7] = {0.5, 0.575, 0.65, 0.75, 0.85, 0.95, 1.2}; 
   
   TH1F *cat3_dy = new TH1F("cat3_dy","",6, xAxis39);
   cat3_dy->SetBinContent(1,0.4538952);
   cat3_dy->SetBinContent(2,0.2498966);
   cat3_dy->SetBinContent(3,0.3671177);
   cat3_dy->SetBinContent(4,0.1680761);
   cat3_dy->SetBinContent(5,0.05055774);
   cat3_dy->SetBinContent(6,0.02079789);
   cat3_dy->SetEntries(6);
   cat3_dy->SetStats(0);

   ci = TColor::GetColor("#3300cc");
   cat3_dy->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   cat3_dy->SetLineColor(ci);
   cat3_dy->GetXaxis()->SetLabelFont(42);
   cat3_dy->GetXaxis()->SetLabelSize(0.035);
   cat3_dy->GetXaxis()->SetTitleSize(0.035);
   cat3_dy->GetXaxis()->SetTitleFont(42);
   cat3_dy->GetYaxis()->SetLabelFont(42);
   cat3_dy->GetYaxis()->SetLabelSize(0.035);
   cat3_dy->GetYaxis()->SetTitleSize(0.035);
   cat3_dy->GetYaxis()->SetTitleFont(42);
   cat3_dy->GetZaxis()->SetLabelFont(42);
   cat3_dy->GetZaxis()->SetLabelSize(0.035);
   cat3_dy->GetZaxis()->SetTitleSize(0.035);
   cat3_dy->GetZaxis()->SetTitleFont(42);
   stack1->Add(cat3_dy,"");
   Double_t xAxis40[7] = {0.5, 0.575, 0.65, 0.75, 0.85, 0.95, 1.2}; 
   
   TH1F *cat3_tt = new TH1F("cat3_tt","",6, xAxis40);
   cat3_tt->SetBinContent(1,7.793638);
   cat3_tt->SetBinContent(2,4.945467);
   cat3_tt->SetBinContent(3,2.810393);
   cat3_tt->SetBinContent(4,2.269882);
   cat3_tt->SetBinContent(5,2.320774);
   cat3_tt->SetBinContent(6,0.3155612);
   cat3_tt->SetEntries(6);
   cat3_tt->SetStats(0);

   ci = TColor::GetColor("#ff33cc");
   cat3_tt->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   cat3_tt->SetLineColor(ci);
   cat3_tt->GetXaxis()->SetLabelFont(42);
   cat3_tt->GetXaxis()->SetLabelSize(0.035);
   cat3_tt->GetXaxis()->SetTitleSize(0.035);
   cat3_tt->GetXaxis()->SetTitleFont(42);
   cat3_tt->GetYaxis()->SetLabelFont(42);
   cat3_tt->GetYaxis()->SetLabelSize(0.035);
   cat3_tt->GetYaxis()->SetTitleSize(0.035);
   cat3_tt->GetYaxis()->SetTitleFont(42);
   cat3_tt->GetZaxis()->SetLabelFont(42);
   cat3_tt->GetZaxis()->SetLabelSize(0.035);
   cat3_tt->GetZaxis()->SetTitleSize(0.035);
   cat3_tt->GetZaxis()->SetTitleFont(42);
   stack1->Add(cat3_tt,"");
   Double_t xAxis41[7] = {0.5, 0.575, 0.65, 0.75, 0.85, 0.95, 1.2}; 
   
   TH1F *cat3_z = new TH1F("cat3_z","",6, xAxis41);
   cat3_z->SetBinContent(1,334.7418);
   cat3_z->SetBinContent(2,207.101);
   cat3_z->SetBinContent(3,133.1329);
   cat3_z->SetBinContent(4,114.5317);
   cat3_z->SetBinContent(5,86.86328);
   cat3_z->SetBinContent(6,15.84645);
   cat3_z->SetEntries(6);
   cat3_z->SetStats(0);

   ci = TColor::GetColor("#ffff33");
   cat3_z->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   cat3_z->SetLineColor(ci);
   cat3_z->GetXaxis()->SetLabelFont(42);
   cat3_z->GetXaxis()->SetLabelSize(0.035);
   cat3_z->GetXaxis()->SetTitleSize(0.035);
   cat3_z->GetXaxis()->SetTitleFont(42);
   cat3_z->GetYaxis()->SetLabelFont(42);
   cat3_z->GetYaxis()->SetLabelSize(0.035);
   cat3_z->GetYaxis()->SetTitleSize(0.035);
   cat3_z->GetYaxis()->SetTitleFont(42);
   cat3_z->GetZaxis()->SetLabelFont(42);
   cat3_z->GetZaxis()->SetLabelSize(0.035);
   cat3_z->GetZaxis()->SetTitleSize(0.035);
   cat3_z->GetZaxis()->SetTitleFont(42);
   stack1->Add(cat3_z,"");
   Double_t xAxis42[7] = {0.5, 0.575, 0.65, 0.75, 0.85, 0.95, 1.2}; 
   
   TH1F *cat3_w = new TH1F("cat3_w","",6, xAxis42);
   cat3_w->SetBinContent(1,219.6641);
   cat3_w->SetBinContent(2,116.1119);
   cat3_w->SetBinContent(3,70.25496);
   cat3_w->SetBinContent(4,64.55685);
   cat3_w->SetBinContent(5,39.34071);
   cat3_w->SetBinContent(6,5.993948);
   cat3_w->SetEntries(6);
   cat3_w->SetStats(0);

   ci = TColor::GetColor("#669900");
   cat3_w->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   cat3_w->SetLineColor(ci);
   cat3_w->GetXaxis()->SetLabelFont(42);
   cat3_w->GetXaxis()->SetLabelSize(0.035);
   cat3_w->GetXaxis()->SetTitleSize(0.035);
   cat3_w->GetXaxis()->SetTitleFont(42);
   cat3_w->GetYaxis()->SetLabelFont(42);
   cat3_w->GetYaxis()->SetLabelSize(0.035);
   cat3_w->GetYaxis()->SetTitleSize(0.035);
   cat3_w->GetYaxis()->SetTitleFont(42);
   cat3_w->GetZaxis()->SetLabelFont(42);
   cat3_w->GetZaxis()->SetLabelSize(0.035);
   cat3_w->GetZaxis()->SetTitleSize(0.035);
   cat3_w->GetZaxis()->SetTitleFont(42);
   stack1->Add(cat3_w,"");
   stack1->Draw("");
   Double_t xAxis43[7] = {0.5, 0.575, 0.65, 0.75, 0.85, 0.95, 1.2}; 
   
   TH1F *cat3_data = new TH1F("cat3_data","",6, xAxis43);
   cat3_data->SetBinContent(1,513);
   cat3_data->SetBinContent(2,328);
   cat3_data->SetBinContent(3,209.2499);
   cat3_data->SetBinContent(4,152.2499);
   cat3_data->SetBinContent(5,113.25);
   cat3_data->SetBinContent(6,25.49999);
   cat3_data->SetBinError(1,22.6495);
   cat3_data->SetBinError(2,18.11077);
   cat3_data->SetBinError(3,12.52746);
   cat3_data->SetBinError(4,10.68585);
   cat3_data->SetBinError(5,9.216156);
   cat3_data->SetBinError(6,2.765862);
   cat3_data->SetEntries(6);
   cat3_data->SetStats(0);
   cat3_data->SetMarkerStyle(20);
   cat3_data->SetMarkerSize(0.7);
   cat3_data->GetXaxis()->SetRange(1,6);
   cat3_data->GetXaxis()->SetLabelFont(42);
   cat3_data->GetXaxis()->SetLabelSize(0.035);
   cat3_data->GetXaxis()->SetTitleSize(0.035);
   cat3_data->GetXaxis()->SetTitleFont(42);
   cat3_data->GetYaxis()->SetLabelFont(42);
   cat3_data->GetYaxis()->SetLabelSize(0.035);
   cat3_data->GetYaxis()->SetTitleSize(0.035);
   cat3_data->GetYaxis()->SetTitleFont(42);
   cat3_data->GetZaxis()->SetLabelFont(42);
   cat3_data->GetZaxis()->SetLabelSize(0.035);
   cat3_data->GetZaxis()->SetTitleSize(0.035);
   cat3_data->GetZaxis()->SetTitleFont(42);
   cat3_data->Draw("same");
   Double_t xAxis44[7] = {0.5, 0.575, 0.65, 0.75, 0.85, 0.95, 1.2}; 
   
   TH1F *signal3_cat2 = new TH1F("signal3_cat2","signal3_cat2",6, xAxis44);
   signal3_cat2->SetBinContent(1,36.76912);
   signal3_cat2->SetBinContent(2,33.95126);
   signal3_cat2->SetBinContent(3,32.65584);
   signal3_cat2->SetBinContent(4,34.8572);
   signal3_cat2->SetBinContent(5,37.41829);
   signal3_cat2->SetBinContent(6,31.98604);
   signal3_cat2->SetEntries(1471);
   signal3_cat2->SetStats(0);

   ci = TColor::GetColor("#000099");
   signal3_cat2->SetLineColor(ci);
   signal3_cat2->GetXaxis()->SetLabelFont(42);
   signal3_cat2->GetXaxis()->SetLabelSize(0.035);
   signal3_cat2->GetXaxis()->SetTitleSize(0.035);
   signal3_cat2->GetXaxis()->SetTitleFont(42);
   signal3_cat2->GetYaxis()->SetLabelFont(42);
   signal3_cat2->GetYaxis()->SetLabelSize(0.035);
   signal3_cat2->GetYaxis()->SetTitleSize(0.035);
   signal3_cat2->GetYaxis()->SetTitleFont(42);
   signal3_cat2->GetZaxis()->SetLabelFont(42);
   signal3_cat2->GetZaxis()->SetLabelSize(0.035);
   signal3_cat2->GetZaxis()->SetTitleSize(0.035);
   signal3_cat2->GetZaxis()->SetTitleFont(42);
   signal3_cat2->Draw("same");
   pad1->Modified();
   C->cd();
   
   TLegend *leg = new TLegend(0.65,0.7,0.89,0.92,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.02);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("cat3_w","W + jets","f");

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
   entry=leg->AddEntry("cat3_z","Z(#nu#bar{#nu}) + jets","f");

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
   entry=leg->AddEntry("cat3_tt","t #bar{t} + jets","f");

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
   entry=leg->AddEntry("cat3_dy","Z/#gamma^{*}(ll) + jets","f");

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
   entry=leg->AddEntry("cat3_data","Data","lep");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.7);
   entry->SetTextFont(42);
   entry=leg->AddEntry("signal3_cat2"," Vu-DM m = 1 TeV","l");

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
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
   pad2->Range(0.4125,-1.027628,1.2875,3.082884);
   pad2->SetFillColor(0);
   pad2->SetBorderMode(0);
   pad2->SetBorderSize(2);
   pad2->SetGridy();
   pad2->SetTopMargin(0.008);
   pad2->SetBottomMargin(0.25);
   pad2->SetFrameBorderMode(0);
   pad2->SetFrameBorderMode(0);
   Double_t xAxis45[7] = {0.5, 0.575, 0.65, 0.75, 0.85, 0.95, 1.2}; 
   
   TH1F *RATIO = new TH1F("RATIO","",6, xAxis45);
   RATIO->SetBinContent(1,0.9117513);
   RATIO->SetBinContent(2,0.9987569);
   RATIO->SetBinContent(3,1.012996);
   RATIO->SetBinContent(4,0.8387201);
   RATIO->SetBinContent(5,0.8808069);
   RATIO->SetBinContent(6,1.149852);
   RATIO->SetBinError(1,0.900815);
   RATIO->SetBinError(2,1.099294);
   RATIO->SetBinError(3,0.160969);
   RATIO->SetBinError(4,0.08661597);
   RATIO->SetBinError(5,0.8916853);
   RATIO->SetBinError(6,0.2971891);
   RATIO->SetMinimum(0);
   RATIO->SetMaximum(3.05);
   RATIO->SetEntries(11.42673);
   RATIO->SetStats(0);
   RATIO->SetFillColor(4);
   RATIO->SetLineColor(4);
   RATIO->SetMarkerColor(4);
   RATIO->SetMarkerStyle(20);
   RATIO->SetMarkerSize(0.7);
   RATIO->GetXaxis()->SetTitle("R^{2}");
   RATIO->GetXaxis()->SetRange(1,6);
   RATIO->GetXaxis()->CenterTitle(true);
   RATIO->GetXaxis()->SetLabelFont(42);
   RATIO->GetXaxis()->SetLabelSize(0.1);
   RATIO->GetXaxis()->SetTitleSize(0.11);
   RATIO->GetXaxis()->SetTitleOffset(0.88);
   RATIO->GetXaxis()->SetTitleFont(42);
   RATIO->GetYaxis()->SetTitle("Data/MC");
   RATIO->GetYaxis()->CenterTitle(true);
   RATIO->GetYaxis()->SetLabelFont(42);
   RATIO->GetYaxis()->SetLabelSize(0.07);
   RATIO->GetYaxis()->SetTitleSize(0.09);
   RATIO->GetYaxis()->SetTitleOffset(0.5);
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

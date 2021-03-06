{
//=========Macro generated from canvas: C/C      
//=========  (Mon Aug 25 18:17:32 2014) by ROOT version5.34/11
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
   pad1->Range(0.4125,0.1346231,1.2875,4.593715);
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
   stack1->SetMinimum(3.655);
   stack1->SetMaximum(8404);
   Double_t xAxis8[12] = {0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1, 1.2}; 
   
   TH1F *stack1_stack_1_stack_2 = new TH1F("stack1_stack_1_stack_2","",11, xAxis8);
   stack1_stack_1_stack_2->SetMinimum(1.363399);
   stack1_stack_1_stack_2->SetMaximum(14054.18);
   stack1_stack_1_stack_2->SetDirectory(0);
   stack1_stack_1_stack_2->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#000099");
   stack1_stack_1_stack_2->SetLineColor(ci);
   stack1_stack_1_stack_2->GetXaxis()->SetTitle("R^{2}");
   stack1_stack_1_stack_2->GetXaxis()->SetLabelFont(42);
   stack1_stack_1_stack_2->GetXaxis()->SetLabelSize(0.035);
   stack1_stack_1_stack_2->GetXaxis()->SetTitleSize(0.035);
   stack1_stack_1_stack_2->GetXaxis()->SetTitleFont(42);
   stack1_stack_1_stack_2->GetYaxis()->SetTitle("Events/0.05");
   stack1_stack_1_stack_2->GetYaxis()->CenterTitle(true);
   stack1_stack_1_stack_2->GetYaxis()->SetLabelFont(42);
   stack1_stack_1_stack_2->GetYaxis()->SetLabelSize(0.035);
   stack1_stack_1_stack_2->GetYaxis()->SetTitleSize(0.035);
   stack1_stack_1_stack_2->GetYaxis()->SetTitleOffset(1.45);
   stack1_stack_1_stack_2->GetYaxis()->SetTitleFont(42);
   stack1_stack_1_stack_2->GetZaxis()->SetLabelFont(42);
   stack1_stack_1_stack_2->GetZaxis()->SetLabelSize(0.035);
   stack1_stack_1_stack_2->GetZaxis()->SetTitleSize(0.035);
   stack1_stack_1_stack_2->GetZaxis()->SetTitleFont(42);
   stack1->SetHistogram(stack1_stack_1_stack_2);
   
   Double_t xAxis9[12] = {0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1, 1.2}; 
   
   TH1F *cat1_dy = new TH1F("cat1_dy","",11, xAxis9);
   cat1_dy->SetBinContent(1,8.903445);
   cat1_dy->SetBinContent(2,8.38953);
   cat1_dy->SetBinContent(3,6.864005);
   cat1_dy->SetBinContent(4,6.054441);
   cat1_dy->SetBinContent(5,4.784766);
   cat1_dy->SetBinContent(6,3.778961);
   cat1_dy->SetBinContent(7,2.351006);
   cat1_dy->SetBinContent(8,4.816055);
   cat1_dy->SetBinContent(9,3.513348);
   cat1_dy->SetBinContent(10,1.147766);
   cat1_dy->SetBinContent(11,0.4228744);
   cat1_dy->SetEntries(11);
   cat1_dy->SetStats(0);

   ci = TColor::GetColor("#3300cc");
   cat1_dy->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   cat1_dy->SetLineColor(ci);
   cat1_dy->GetXaxis()->SetLabelFont(42);
   cat1_dy->GetXaxis()->SetLabelSize(0.035);
   cat1_dy->GetXaxis()->SetTitleSize(0.035);
   cat1_dy->GetXaxis()->SetTitleFont(42);
   cat1_dy->GetYaxis()->SetLabelFont(42);
   cat1_dy->GetYaxis()->SetLabelSize(0.035);
   cat1_dy->GetYaxis()->SetTitleSize(0.035);
   cat1_dy->GetYaxis()->SetTitleFont(42);
   cat1_dy->GetZaxis()->SetLabelFont(42);
   cat1_dy->GetZaxis()->SetLabelSize(0.035);
   cat1_dy->GetZaxis()->SetTitleSize(0.035);
   cat1_dy->GetZaxis()->SetTitleFont(42);
   stack1->Add(cat1_dy,"");
   Double_t xAxis10[12] = {0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1, 1.2}; 
   
   TH1F *cat1_tt = new TH1F("cat1_tt","",11, xAxis10);
   cat1_tt->SetBinContent(1,59.29506);
   cat1_tt->SetBinContent(2,57.47789);
   cat1_tt->SetBinContent(3,55.09097);
   cat1_tt->SetBinContent(4,58.28963);
   cat1_tt->SetBinContent(5,55.30998);
   cat1_tt->SetBinContent(6,48.82632);
   cat1_tt->SetBinContent(7,47.36334);
   cat1_tt->SetBinContent(8,41.94503);
   cat1_tt->SetBinContent(9,32.18947);
   cat1_tt->SetBinContent(10,22.74292);
   cat1_tt->SetBinContent(11,10.38777);
   cat1_tt->SetEntries(11);
   cat1_tt->SetStats(0);

   ci = TColor::GetColor("#ff33cc");
   cat1_tt->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   cat1_tt->SetLineColor(ci);
   cat1_tt->GetXaxis()->SetLabelFont(42);
   cat1_tt->GetXaxis()->SetLabelSize(0.035);
   cat1_tt->GetXaxis()->SetTitleSize(0.035);
   cat1_tt->GetXaxis()->SetTitleFont(42);
   cat1_tt->GetYaxis()->SetLabelFont(42);
   cat1_tt->GetYaxis()->SetLabelSize(0.035);
   cat1_tt->GetYaxis()->SetTitleSize(0.035);
   cat1_tt->GetYaxis()->SetTitleFont(42);
   cat1_tt->GetZaxis()->SetLabelFont(42);
   cat1_tt->GetZaxis()->SetLabelSize(0.035);
   cat1_tt->GetZaxis()->SetTitleSize(0.035);
   cat1_tt->GetZaxis()->SetTitleFont(42);
   stack1->Add(cat1_tt,"");
   Double_t xAxis11[12] = {0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1, 1.2}; 
   
   TH1F *cat1_z = new TH1F("cat1_z","",11, xAxis11);
   cat1_z->SetBinContent(1,1108.514);
   cat1_z->SetBinContent(2,857.5839);
   cat1_z->SetBinContent(3,721.7492);
   cat1_z->SetBinContent(4,610.1376);
   cat1_z->SetBinContent(5,586.9797);
   cat1_z->SetBinContent(6,584.2031);
   cat1_z->SetBinContent(7,491.894);
   cat1_z->SetBinContent(8,489.2176);
   cat1_z->SetBinContent(9,398.8841);
   cat1_z->SetBinContent(10,310.3881);
   cat1_z->SetBinContent(11,120.2543);
   cat1_z->SetEntries(11);
   cat1_z->SetStats(0);

   ci = TColor::GetColor("#ffff33");
   cat1_z->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   cat1_z->SetLineColor(ci);
   cat1_z->GetXaxis()->SetLabelFont(42);
   cat1_z->GetXaxis()->SetLabelSize(0.035);
   cat1_z->GetXaxis()->SetTitleSize(0.035);
   cat1_z->GetXaxis()->SetTitleFont(42);
   cat1_z->GetYaxis()->SetLabelFont(42);
   cat1_z->GetYaxis()->SetLabelSize(0.035);
   cat1_z->GetYaxis()->SetTitleSize(0.035);
   cat1_z->GetYaxis()->SetTitleFont(42);
   cat1_z->GetZaxis()->SetLabelFont(42);
   cat1_z->GetZaxis()->SetLabelSize(0.035);
   cat1_z->GetZaxis()->SetTitleSize(0.035);
   cat1_z->GetZaxis()->SetTitleFont(42);
   stack1->Add(cat1_z,"");
   Double_t xAxis12[12] = {0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1, 1.2}; 
   
   TH1F *cat1_w = new TH1F("cat1_w","",11, xAxis12);
   cat1_w->SetBinContent(1,1109.204);
   cat1_w->SetBinContent(2,808.6479);
   cat1_w->SetBinContent(3,691.5914);
   cat1_w->SetBinContent(4,546.2347);
   cat1_w->SetBinContent(5,448.4087);
   cat1_w->SetBinContent(6,450.7336);
   cat1_w->SetBinContent(7,382.9482);
   cat1_w->SetBinContent(8,361.655);
   cat1_w->SetBinContent(9,244.6125);
   cat1_w->SetBinContent(10,170.4326);
   cat1_w->SetBinContent(11,60.39807);
   cat1_w->SetEntries(11);
   cat1_w->SetStats(0);

   ci = TColor::GetColor("#669900");
   cat1_w->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   cat1_w->SetLineColor(ci);
   cat1_w->GetXaxis()->SetLabelFont(42);
   cat1_w->GetXaxis()->SetLabelSize(0.035);
   cat1_w->GetXaxis()->SetTitleSize(0.035);
   cat1_w->GetXaxis()->SetTitleFont(42);
   cat1_w->GetYaxis()->SetLabelFont(42);
   cat1_w->GetYaxis()->SetLabelSize(0.035);
   cat1_w->GetYaxis()->SetTitleSize(0.035);
   cat1_w->GetYaxis()->SetTitleFont(42);
   cat1_w->GetZaxis()->SetLabelFont(42);
   cat1_w->GetZaxis()->SetLabelSize(0.035);
   cat1_w->GetZaxis()->SetTitleSize(0.035);
   cat1_w->GetZaxis()->SetTitleFont(42);
   stack1->Add(cat1_w,"");
   stack1->Draw("");
   Double_t xAxis13[12] = {0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1, 1.2}; 
   
   TH1F *cat1_data = new TH1F("cat1_data","",11, xAxis13);
   cat1_data->SetBinContent(1,2101);
   cat1_data->SetBinContent(2,1656);
   cat1_data->SetBinContent(3,1365.002);
   cat1_data->SetBinContent(4,1146);
   cat1_data->SetBinContent(5,1049);
   cat1_data->SetBinContent(6,888);
   cat1_data->SetBinContent(7,892);
   cat1_data->SetBinContent(8,745.0009);
   cat1_data->SetBinContent(9,682);
   cat1_data->SetBinContent(10,502);
   cat1_data->SetBinContent(11,182.75);
   cat1_data->SetBinError(1,45.83667);
   cat1_data->SetBinError(2,40.69398);
   cat1_data->SetBinError(3,36.94595);
   cat1_data->SetBinError(4,33.85262);
   cat1_data->SetBinError(5,32.38827);
   cat1_data->SetBinError(6,29.79933);
   cat1_data->SetBinError(7,29.86637);
   cat1_data->SetBinError(8,27.29472);
   cat1_data->SetBinError(9,26.11513);
   cat1_data->SetBinError(10,22.40536);
   cat1_data->SetBinError(11,6.759253);
   cat1_data->SetEntries(11);
   cat1_data->SetStats(0);
   cat1_data->SetMarkerStyle(20);
   cat1_data->SetMarkerSize(0.7);
   cat1_data->GetXaxis()->SetRange(1,11);
   cat1_data->GetXaxis()->SetLabelFont(42);
   cat1_data->GetXaxis()->SetLabelSize(0.035);
   cat1_data->GetXaxis()->SetTitleSize(0.035);
   cat1_data->GetXaxis()->SetTitleFont(42);
   cat1_data->GetYaxis()->SetLabelFont(42);
   cat1_data->GetYaxis()->SetLabelSize(0.035);
   cat1_data->GetYaxis()->SetTitleSize(0.035);
   cat1_data->GetYaxis()->SetTitleFont(42);
   cat1_data->GetZaxis()->SetLabelFont(42);
   cat1_data->GetZaxis()->SetLabelSize(0.035);
   cat1_data->GetZaxis()->SetTitleSize(0.035);
   cat1_data->GetZaxis()->SetTitleFont(42);
   cat1_data->Draw("same");
   Double_t xAxis14[12] = {0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1, 1.2}; 
   
   TH1F *signal23_cat0 = new TH1F("signal23_cat0","signal23_cat0",11, xAxis14);
   signal23_cat0->SetBinContent(1,23.33549);
   signal23_cat0->SetBinContent(2,21.27724);
   signal23_cat0->SetBinContent(3,19.17029);
   signal23_cat0->SetBinContent(4,23.93702);
   signal23_cat0->SetBinContent(5,26.51065);
   signal23_cat0->SetBinContent(6,26.01722);
   signal23_cat0->SetBinContent(7,27.60071);
   signal23_cat0->SetBinContent(8,35.39354);
   signal23_cat0->SetBinContent(9,32.35945);
   signal23_cat0->SetBinContent(10,28.8881);
   signal23_cat0->SetBinContent(11,49.43954);
   signal23_cat0->SetEntries(1809);
   signal23_cat0->SetStats(0);

   ci = TColor::GetColor("#3333cc");
   signal23_cat0->SetLineColor(ci);
   signal23_cat0->SetLineStyle(2);
   signal23_cat0->SetLineWidth(3);
   signal23_cat0->GetXaxis()->SetLabelFont(42);
   signal23_cat0->GetXaxis()->SetLabelSize(0.035);
   signal23_cat0->GetXaxis()->SetTitleSize(0.035);
   signal23_cat0->GetXaxis()->SetTitleFont(42);
   signal23_cat0->GetYaxis()->SetLabelFont(42);
   signal23_cat0->GetYaxis()->SetLabelSize(0.035);
   signal23_cat0->GetYaxis()->SetTitleSize(0.035);
   signal23_cat0->GetYaxis()->SetTitleFont(42);
   signal23_cat0->GetZaxis()->SetLabelFont(42);
   signal23_cat0->GetZaxis()->SetLabelSize(0.035);
   signal23_cat0->GetZaxis()->SetTitleSize(0.035);
   signal23_cat0->GetZaxis()->SetTitleFont(42);
   signal23_cat0->Draw("same");
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
   TLegendEntry *entry=leg->AddEntry("cat1_w","W + jets","f");

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
   entry=leg->AddEntry("cat1_z","Z(#nu#bar{#nu}) + jets","f");

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
   entry=leg->AddEntry("cat1_tt","t #bar{t} + jets","f");

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
   entry=leg->AddEntry("cat1_dy","Z/#gamma^{*}(ll) + jets","f");

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
   entry=leg->AddEntry("cat1_data","Data","lep");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.7);
   entry->SetTextFont(42);
   entry=leg->AddEntry("signal23_cat0","V-DM m = 1 GeV","l");

   ci = TColor::GetColor("#3333cc");
   entry->SetLineColor(ci);
   entry->SetLineStyle(2);
   entry->SetLineWidth(3);
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
      tex = new TLatex(0.62,0.95,"#int L dt = 18.836 fb^{-1}");
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
   Double_t xAxis15[12] = {0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1, 1.2}; 
   
   TH1F *RATIO = new TH1F("RATIO","",11, xAxis15);
   RATIO->SetBinContent(1,0.9191062);
   RATIO->SetBinContent(2,0.9560653);
   RATIO->SetBinContent(3,0.9252394);
   RATIO->SetBinContent(4,0.9387929);
   RATIO->SetBinContent(5,0.9575683);
   RATIO->SetBinContent(6,0.8165202);
   RATIO->SetBinContent(7,0.9647869);
   RATIO->SetBinContent(8,0.829961);
   RATIO->SetBinContent(9,1.004123);
   RATIO->SetBinContent(10,0.9946279);
   RATIO->SetBinContent(11,0.9544925);
   RATIO->SetBinError(1,0.1875567);
   RATIO->SetBinError(2,0.1831128);
   RATIO->SetBinError(3,0.06123077);
   RATIO->SetBinError(4,0.1180398);
   RATIO->SetBinError(5,0.05825461);
   RATIO->SetBinError(6,0.07697972);
   RATIO->SetBinError(7,0.1397189);
   RATIO->SetBinError(8,0.1632482);
   RATIO->SetBinError(9,0.168271);
   RATIO->SetBinError(10,0.2075761);
   RATIO->SetBinError(11,0.07284874);
   RATIO->SetMinimum(0);
   RATIO->SetMaximum(3.05);
   RATIO->SetEntries(481.6936);
   RATIO->SetStats(0);
   RATIO->SetFillColor(4);
   RATIO->SetLineColor(4);
   RATIO->SetMarkerColor(4);
   RATIO->SetMarkerStyle(20);
   RATIO->SetMarkerSize(0.7);
   RATIO->GetXaxis()->SetTitle("R^{2}");
   RATIO->GetXaxis()->SetRange(1,11);
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

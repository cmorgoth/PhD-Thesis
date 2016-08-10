{
//=========Macro generated from canvas: C/C      
//=========  (Thu Sep 11 01:15:50 2014) by ROOT version5.34/20
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
   pad1->Range(0.4125,-1.512321,1.2875,3.403679);
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
   stack1->SetMinimum(0.088);
   stack1->SetMaximum(468);
   Double_t xAxis53[5] = {0.5, 0.6, 0.7, 0.95, 1.2}; 
   
   TH1F *stack1_stack_7_stack_8 = new TH1F("stack1_stack_7_stack_8","",4, xAxis53);
   stack1_stack_7_stack_8->SetMinimum(0.03073826);
   stack1_stack_7_stack_8->SetMaximum(816.7314);
   stack1_stack_7_stack_8->SetDirectory(0);
   stack1_stack_7_stack_8->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   stack1_stack_7_stack_8->SetLineColor(ci);
   stack1_stack_7_stack_8->GetXaxis()->SetTitle("R^{2}");
   stack1_stack_7_stack_8->GetXaxis()->SetLabelFont(42);
   stack1_stack_7_stack_8->GetXaxis()->SetLabelSize(0.035);
   stack1_stack_7_stack_8->GetXaxis()->SetTitleSize(0.035);
   stack1_stack_7_stack_8->GetXaxis()->SetTitleFont(42);
   stack1_stack_7_stack_8->GetYaxis()->SetTitle("Events/0.1");
   stack1_stack_7_stack_8->GetYaxis()->CenterTitle(true);
   stack1_stack_7_stack_8->GetYaxis()->SetLabelFont(42);
   stack1_stack_7_stack_8->GetYaxis()->SetLabelSize(0.035);
   stack1_stack_7_stack_8->GetYaxis()->SetTitleSize(0.035);
   stack1_stack_7_stack_8->GetYaxis()->SetTitleOffset(1.45);
   stack1_stack_7_stack_8->GetYaxis()->SetTitleFont(42);
   stack1_stack_7_stack_8->GetZaxis()->SetLabelFont(42);
   stack1_stack_7_stack_8->GetZaxis()->SetLabelSize(0.035);
   stack1_stack_7_stack_8->GetZaxis()->SetTitleSize(0.035);
   stack1_stack_7_stack_8->GetZaxis()->SetTitleFont(42);
   stack1->SetHistogram(stack1_stack_7_stack_8);
   
   Double_t xAxis54[5] = {0.5, 0.6, 0.7, 0.95, 1.2}; 
   
   TH1F *cat4_dy = new TH1F("cat4_dy","",4, xAxis54);
   cat4_dy->SetBinContent(1,0.01619102);
   cat4_dy->SetBinContent(2,0.02749948);
   cat4_dy->SetBinContent(3,0.006720053);
   cat4_dy->SetBinContent(4,0.009208253);
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
   Double_t xAxis55[5] = {0.5, 0.6, 0.7, 0.95, 1.2}; 
   
   TH1F *cat4_tt = new TH1F("cat4_tt","",4, xAxis55);
   cat4_tt->SetBinContent(1,1.818315);
   cat4_tt->SetBinContent(2,0.5223877);
   cat4_tt->SetBinContent(3,0.1978144);
   cat4_tt->SetBinContent(4,0.09117119);
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
   Double_t xAxis56[5] = {0.5, 0.6, 0.7, 0.95, 1.2}; 
   
   TH1F *cat4_z = new TH1F("cat4_z","",4, xAxis56);
   cat4_z->SetBinContent(1,65.73908);
   cat4_z->SetBinContent(2,38.6414);
   cat4_z->SetBinContent(3,21.43576);
   cat4_z->SetBinContent(4,2.81153);
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
   Double_t xAxis57[5] = {0.5, 0.6, 0.7, 0.95, 1.2}; 
   
   TH1F *cat4_w = new TH1F("cat4_w","",4, xAxis57);
   cat4_w->SetBinContent(1,33.19231);
   cat4_w->SetBinContent(2,19.30806);
   cat4_w->SetBinContent(3,8.327709);
   cat4_w->SetBinContent(4,0.7417204);
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
   Double_t xAxis58[5] = {0.5, 0.6, 0.7, 0.95, 1.2}; 
   
   TH1F *cat4_data = new TH1F("cat4_data","",4, xAxis58);
   cat4_data->SetBinContent(1,117);
   cat4_data->SetBinContent(2,58.00003);
   cat4_data->SetBinContent(3,30.00001);
   cat4_data->SetBinContent(4,4.4);
   cat4_data->SetBinError(1,10.81665);
   cat4_data->SetBinError(2,7.615778);
   cat4_data->SetBinError(3,3.464102);
   cat4_data->SetBinError(4,1.32665);
   cat4_data->SetEntries(4);
   cat4_data->SetStats(0);
   cat4_data->SetMarkerStyle(20);
   cat4_data->SetMarkerSize(0.7);
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
   Double_t xAxis59[5] = {0.5, 0.6, 0.7, 0.95, 1.2}; 
   
   TH1F *signal2_cat3 = new TH1F("signal2_cat3","signal2_cat3",4, xAxis59);
   signal2_cat3->SetBinContent(1,27.97774);
   signal2_cat3->SetBinContent(2,19.16645);
   signal2_cat3->SetBinContent(3,35.68865);
   signal2_cat3->SetBinContent(4,8.502809);
   signal2_cat3->SetEntries(637);
   signal2_cat3->SetStats(0);

   ci = TColor::GetColor("#000099");
   signal2_cat3->SetLineColor(ci);
   signal2_cat3->GetXaxis()->SetLabelFont(42);
   signal2_cat3->GetXaxis()->SetLabelSize(0.035);
   signal2_cat3->GetXaxis()->SetTitleSize(0.035);
   signal2_cat3->GetXaxis()->SetTitleFont(42);
   signal2_cat3->GetYaxis()->SetLabelFont(42);
   signal2_cat3->GetYaxis()->SetLabelSize(0.035);
   signal2_cat3->GetYaxis()->SetTitleSize(0.035);
   signal2_cat3->GetYaxis()->SetTitleFont(42);
   signal2_cat3->GetZaxis()->SetLabelFont(42);
   signal2_cat3->GetZaxis()->SetLabelSize(0.035);
   signal2_cat3->GetZaxis()->SetTitleSize(0.035);
   signal2_cat3->GetZaxis()->SetTitleFont(42);
   signal2_cat3->Draw("same");
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
   TLegendEntry *entry=leg->AddEntry("cat4_w","W + jets","f");

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
   entry=leg->AddEntry("cat4_z","Z(#nu#bar{#nu}) + jets","f");

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
   entry=leg->AddEntry("cat4_tt","t #bar{t} + jets","f");

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
   entry=leg->AddEntry("cat4_dy","Z/#gamma^{*}(ll) + jets","f");

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
   entry=leg->AddEntry("cat4_data","Data","lep");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.7);
   entry->SetTextFont(42);
   entry=leg->AddEntry("signal2_cat3"," Vd-DM m = 1 TeV","l");

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
   Double_t xAxis60[5] = {0.5, 0.6, 0.7, 0.95, 1.2}; 
   
   TH1F *RATIO = new TH1F("RATIO","",4, xAxis60);
   RATIO->SetBinContent(1,1.161107);
   RATIO->SetBinContent(2,0.9914645);
   RATIO->SetBinContent(3,1.001068);
   RATIO->SetBinContent(4,1.204282);
   RATIO->SetBinError(1,1.718503);
   RATIO->SetBinError(2,0.6162856);
   RATIO->SetBinError(3,0.4171758);
   RATIO->SetBinError(4,1.003758);
   RATIO->SetMinimum(0);
   RATIO->SetMaximum(3.05);
   RATIO->SetEntries(4.206657);
   RATIO->SetStats(0);
   RATIO->SetFillColor(4);
   RATIO->SetLineColor(4);
   RATIO->SetMarkerColor(4);
   RATIO->SetMarkerStyle(20);
   RATIO->SetMarkerSize(0.7);
   RATIO->GetXaxis()->SetTitle("R^{2}");
   RATIO->GetXaxis()->SetRange(1,4);
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

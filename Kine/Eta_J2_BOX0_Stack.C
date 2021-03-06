{
//=========Macro generated from canvas: C/C      
//=========  (Thu Sep 11 21:29:09 2014) by ROOT version5.34/19
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
   pad1->Range(-3.75,-0.524978,3.75,5.599137);
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
   stack1->SetMaximum(50000);
   
   TH1F *stack1_stack_20 = new TH1F("stack1_stack_20","",20,-3,3);
   stack1_stack_20->SetMinimum(0.2985534);
   stack1_stack_20->SetMaximum(96989.7);
   stack1_stack_20->SetDirectory(0);
   stack1_stack_20->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   stack1_stack_20->SetLineColor(ci);
   stack1_stack_20->GetXaxis()->SetLabelFont(42);
   stack1_stack_20->GetXaxis()->SetLabelSize(0.035);
   stack1_stack_20->GetXaxis()->SetTitleSize(0.035);
   stack1_stack_20->GetXaxis()->SetTitleFont(42);
   stack1_stack_20->GetYaxis()->SetTitle("Events");
   stack1_stack_20->GetYaxis()->SetLabelFont(42);
   stack1_stack_20->GetYaxis()->SetLabelSize(0.035);
   stack1_stack_20->GetYaxis()->SetTitleSize(0.035);
   stack1_stack_20->GetYaxis()->SetTitleOffset(1.25);
   stack1_stack_20->GetYaxis()->SetTitleFont(42);
   stack1_stack_20->GetZaxis()->SetLabelFont(42);
   stack1_stack_20->GetZaxis()->SetLabelSize(0.035);
   stack1_stack_20->GetZaxis()->SetTitleSize(0.035);
   stack1_stack_20->GetZaxis()->SetTitleFont(42);
   stack1->SetHistogram(stack1_stack_20);
   
   
   TH1F *ETA_1D_J2_3mu_BoxMC = new TH1F("ETA_1D_J2_3mu_BoxMC","",20,-3,3);
   ETA_1D_J2_3mu_BoxMC->SetBinContent(3,0.8754637);
   ETA_1D_J2_3mu_BoxMC->SetBinContent(4,2.284373);
   ETA_1D_J2_3mu_BoxMC->SetBinContent(5,3.481869);
   ETA_1D_J2_3mu_BoxMC->SetBinContent(6,3.699041);
   ETA_1D_J2_3mu_BoxMC->SetBinContent(7,4.346644);
   ETA_1D_J2_3mu_BoxMC->SetBinContent(8,5.504796);
   ETA_1D_J2_3mu_BoxMC->SetBinContent(9,6.528774);
   ETA_1D_J2_3mu_BoxMC->SetBinContent(10,6.43998);
   ETA_1D_J2_3mu_BoxMC->SetBinContent(11,5.365022);
   ETA_1D_J2_3mu_BoxMC->SetBinContent(12,6.635155);
   ETA_1D_J2_3mu_BoxMC->SetBinContent(13,5.17926);
   ETA_1D_J2_3mu_BoxMC->SetBinContent(14,4.344415);
   ETA_1D_J2_3mu_BoxMC->SetBinContent(15,3.482872);
   ETA_1D_J2_3mu_BoxMC->SetBinContent(16,2.247137);
   ETA_1D_J2_3mu_BoxMC->SetBinContent(17,1.44122);
   ETA_1D_J2_3mu_BoxMC->SetBinContent(18,0.7490521);
   ETA_1D_J2_3mu_BoxMC->SetEntries(1318);
   ETA_1D_J2_3mu_BoxMC->SetStats(0);

   ci = TColor::GetColor("#3300cc");
   ETA_1D_J2_3mu_BoxMC->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   ETA_1D_J2_3mu_BoxMC->SetLineColor(ci);
   ETA_1D_J2_3mu_BoxMC->GetXaxis()->SetLabelFont(42);
   ETA_1D_J2_3mu_BoxMC->GetXaxis()->SetLabelSize(0.035);
   ETA_1D_J2_3mu_BoxMC->GetXaxis()->SetTitleSize(0.035);
   ETA_1D_J2_3mu_BoxMC->GetXaxis()->SetTitleFont(42);
   ETA_1D_J2_3mu_BoxMC->GetYaxis()->SetLabelFont(42);
   ETA_1D_J2_3mu_BoxMC->GetYaxis()->SetLabelSize(0.035);
   ETA_1D_J2_3mu_BoxMC->GetYaxis()->SetTitleSize(0.035);
   ETA_1D_J2_3mu_BoxMC->GetYaxis()->SetTitleFont(42);
   ETA_1D_J2_3mu_BoxMC->GetZaxis()->SetLabelFont(42);
   ETA_1D_J2_3mu_BoxMC->GetZaxis()->SetLabelSize(0.035);
   ETA_1D_J2_3mu_BoxMC->GetZaxis()->SetTitleSize(0.035);
   ETA_1D_J2_3mu_BoxMC->GetZaxis()->SetTitleFont(42);
   stack1->Add(ETA_1D_J2_3mu_BoxMC,"");
   
   TH1F *ETA_1D_J2_3mu_BoxMC = new TH1F("ETA_1D_J2_3mu_BoxMC","",20,-3,3);
   ETA_1D_J2_3mu_BoxMC->SetBinContent(3,5.578424);
   ETA_1D_J2_3mu_BoxMC->SetBinContent(4,12.61768);
   ETA_1D_J2_3mu_BoxMC->SetBinContent(5,23.0435);
   ETA_1D_J2_3mu_BoxMC->SetBinContent(6,38.85168);
   ETA_1D_J2_3mu_BoxMC->SetBinContent(7,52.59426);
   ETA_1D_J2_3mu_BoxMC->SetBinContent(8,60.78206);
   ETA_1D_J2_3mu_BoxMC->SetBinContent(9,75.90922);
   ETA_1D_J2_3mu_BoxMC->SetBinContent(10,79.71631);
   ETA_1D_J2_3mu_BoxMC->SetBinContent(11,80.24359);
   ETA_1D_J2_3mu_BoxMC->SetBinContent(12,70.7554);
   ETA_1D_J2_3mu_BoxMC->SetBinContent(13,58.94658);
   ETA_1D_J2_3mu_BoxMC->SetBinContent(14,51.97952);
   ETA_1D_J2_3mu_BoxMC->SetBinContent(15,39.48745);
   ETA_1D_J2_3mu_BoxMC->SetBinContent(16,20.56174);
   ETA_1D_J2_3mu_BoxMC->SetBinContent(17,11.14635);
   ETA_1D_J2_3mu_BoxMC->SetBinContent(18,6.178557);
   ETA_1D_J2_3mu_BoxMC->SetEntries(9131);
   ETA_1D_J2_3mu_BoxMC->SetStats(0);

   ci = TColor::GetColor("#ff33cc");
   ETA_1D_J2_3mu_BoxMC->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   ETA_1D_J2_3mu_BoxMC->SetLineColor(ci);
   ETA_1D_J2_3mu_BoxMC->GetXaxis()->SetLabelFont(42);
   ETA_1D_J2_3mu_BoxMC->GetXaxis()->SetLabelSize(0.035);
   ETA_1D_J2_3mu_BoxMC->GetXaxis()->SetTitleSize(0.035);
   ETA_1D_J2_3mu_BoxMC->GetXaxis()->SetTitleFont(42);
   ETA_1D_J2_3mu_BoxMC->GetYaxis()->SetLabelFont(42);
   ETA_1D_J2_3mu_BoxMC->GetYaxis()->SetLabelSize(0.035);
   ETA_1D_J2_3mu_BoxMC->GetYaxis()->SetTitleSize(0.035);
   ETA_1D_J2_3mu_BoxMC->GetYaxis()->SetTitleFont(42);
   ETA_1D_J2_3mu_BoxMC->GetZaxis()->SetLabelFont(42);
   ETA_1D_J2_3mu_BoxMC->GetZaxis()->SetLabelSize(0.035);
   ETA_1D_J2_3mu_BoxMC->GetZaxis()->SetTitleSize(0.035);
   ETA_1D_J2_3mu_BoxMC->GetZaxis()->SetTitleFont(42);
   stack1->Add(ETA_1D_J2_3mu_BoxMC,"");
   
   TH1F *ETA_1D_J2_3mu_BoxMC = new TH1F("ETA_1D_J2_3mu_BoxMC","",20,-3,3);
   ETA_1D_J2_3mu_BoxMC->SetBinContent(3,88.9216);
   ETA_1D_J2_3mu_BoxMC->SetBinContent(4,175.1374);
   ETA_1D_J2_3mu_BoxMC->SetBinContent(5,282.6041);
   ETA_1D_J2_3mu_BoxMC->SetBinContent(6,409.1413);
   ETA_1D_J2_3mu_BoxMC->SetBinContent(7,537.6464);
   ETA_1D_J2_3mu_BoxMC->SetBinContent(8,635.6456);
   ETA_1D_J2_3mu_BoxMC->SetBinContent(9,707.0371);
   ETA_1D_J2_3mu_BoxMC->SetBinContent(10,740.3849);
   ETA_1D_J2_3mu_BoxMC->SetBinContent(11,706.537);
   ETA_1D_J2_3mu_BoxMC->SetBinContent(12,659.9291);
   ETA_1D_J2_3mu_BoxMC->SetBinContent(13,596.1545);
   ETA_1D_J2_3mu_BoxMC->SetBinContent(14,539.6124);
   ETA_1D_J2_3mu_BoxMC->SetBinContent(15,431.225);
   ETA_1D_J2_3mu_BoxMC->SetBinContent(16,274.4943);
   ETA_1D_J2_3mu_BoxMC->SetBinContent(17,184.5429);
   ETA_1D_J2_3mu_BoxMC->SetBinContent(18,91.63825);
   ETA_1D_J2_3mu_BoxMC->SetEntries(44062);
   ETA_1D_J2_3mu_BoxMC->SetStats(0);

   ci = TColor::GetColor("#ffff33");
   ETA_1D_J2_3mu_BoxMC->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   ETA_1D_J2_3mu_BoxMC->SetLineColor(ci);
   ETA_1D_J2_3mu_BoxMC->GetXaxis()->SetLabelFont(42);
   ETA_1D_J2_3mu_BoxMC->GetXaxis()->SetLabelSize(0.035);
   ETA_1D_J2_3mu_BoxMC->GetXaxis()->SetTitleSize(0.035);
   ETA_1D_J2_3mu_BoxMC->GetXaxis()->SetTitleFont(42);
   ETA_1D_J2_3mu_BoxMC->GetYaxis()->SetLabelFont(42);
   ETA_1D_J2_3mu_BoxMC->GetYaxis()->SetLabelSize(0.035);
   ETA_1D_J2_3mu_BoxMC->GetYaxis()->SetTitleSize(0.035);
   ETA_1D_J2_3mu_BoxMC->GetYaxis()->SetTitleFont(42);
   ETA_1D_J2_3mu_BoxMC->GetZaxis()->SetLabelFont(42);
   ETA_1D_J2_3mu_BoxMC->GetZaxis()->SetLabelSize(0.035);
   ETA_1D_J2_3mu_BoxMC->GetZaxis()->SetTitleSize(0.035);
   ETA_1D_J2_3mu_BoxMC->GetZaxis()->SetTitleFont(42);
   stack1->Add(ETA_1D_J2_3mu_BoxMC,"");
   
   TH1F *ETA_1D_J2_3mu_BoxMC = new TH1F("ETA_1D_J2_3mu_BoxMC","",20,-3,3);
   ETA_1D_J2_3mu_BoxMC->SetBinContent(3,111.0341);
   ETA_1D_J2_3mu_BoxMC->SetBinContent(4,230.5003);
   ETA_1D_J2_3mu_BoxMC->SetBinContent(5,375.8434);
   ETA_1D_J2_3mu_BoxMC->SetBinContent(6,544.3705);
   ETA_1D_J2_3mu_BoxMC->SetBinContent(7,751.2122);
   ETA_1D_J2_3mu_BoxMC->SetBinContent(8,904.7222);
   ETA_1D_J2_3mu_BoxMC->SetBinContent(9,997.4938);
   ETA_1D_J2_3mu_BoxMC->SetBinContent(10,1069.512);
   ETA_1D_J2_3mu_BoxMC->SetBinContent(11,1058.91);
   ETA_1D_J2_3mu_BoxMC->SetBinContent(12,999.0219);
   ETA_1D_J2_3mu_BoxMC->SetBinContent(13,917.0283);
   ETA_1D_J2_3mu_BoxMC->SetBinContent(14,741.4485);
   ETA_1D_J2_3mu_BoxMC->SetBinContent(15,568.7842);
   ETA_1D_J2_3mu_BoxMC->SetBinContent(16,379.5281);
   ETA_1D_J2_3mu_BoxMC->SetBinContent(17,234.9911);
   ETA_1D_J2_3mu_BoxMC->SetBinContent(18,117.2243);
   ETA_1D_J2_3mu_BoxMC->SetEntries(149384);
   ETA_1D_J2_3mu_BoxMC->SetStats(0);

   ci = TColor::GetColor("#669900");
   ETA_1D_J2_3mu_BoxMC->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   ETA_1D_J2_3mu_BoxMC->SetLineColor(ci);
   ETA_1D_J2_3mu_BoxMC->GetXaxis()->SetLabelFont(42);
   ETA_1D_J2_3mu_BoxMC->GetXaxis()->SetLabelSize(0.035);
   ETA_1D_J2_3mu_BoxMC->GetXaxis()->SetTitleSize(0.035);
   ETA_1D_J2_3mu_BoxMC->GetXaxis()->SetTitleFont(42);
   ETA_1D_J2_3mu_BoxMC->GetYaxis()->SetLabelFont(42);
   ETA_1D_J2_3mu_BoxMC->GetYaxis()->SetLabelSize(0.035);
   ETA_1D_J2_3mu_BoxMC->GetYaxis()->SetTitleSize(0.035);
   ETA_1D_J2_3mu_BoxMC->GetYaxis()->SetTitleFont(42);
   ETA_1D_J2_3mu_BoxMC->GetZaxis()->SetLabelFont(42);
   ETA_1D_J2_3mu_BoxMC->GetZaxis()->SetLabelSize(0.035);
   ETA_1D_J2_3mu_BoxMC->GetZaxis()->SetTitleSize(0.035);
   ETA_1D_J2_3mu_BoxMC->GetZaxis()->SetTitleFont(42);
   stack1->Add(ETA_1D_J2_3mu_BoxMC,"");
   stack1->Draw("");
   
   TH1F *ETA_1D_J2_Data_0mu_Box = new TH1F("ETA_1D_J2_Data_0mu_Box","",20,-3,3);
   ETA_1D_J2_Data_0mu_Box->SetBinContent(3,202);
   ETA_1D_J2_Data_0mu_Box->SetBinContent(4,369);
   ETA_1D_J2_Data_0mu_Box->SetBinContent(5,603);
   ETA_1D_J2_Data_0mu_Box->SetBinContent(6,895);
   ETA_1D_J2_Data_0mu_Box->SetBinContent(7,1357);
   ETA_1D_J2_Data_0mu_Box->SetBinContent(8,1548);
   ETA_1D_J2_Data_0mu_Box->SetBinContent(9,1772);
   ETA_1D_J2_Data_0mu_Box->SetBinContent(10,1948);
   ETA_1D_J2_Data_0mu_Box->SetBinContent(11,1921);
   ETA_1D_J2_Data_0mu_Box->SetBinContent(12,1759);
   ETA_1D_J2_Data_0mu_Box->SetBinContent(13,1521);
   ETA_1D_J2_Data_0mu_Box->SetBinContent(14,1264);
   ETA_1D_J2_Data_0mu_Box->SetBinContent(15,924);
   ETA_1D_J2_Data_0mu_Box->SetBinContent(16,569);
   ETA_1D_J2_Data_0mu_Box->SetBinContent(17,390);
   ETA_1D_J2_Data_0mu_Box->SetBinContent(18,186);
   ETA_1D_J2_Data_0mu_Box->SetBinError(3,14.21267);
   ETA_1D_J2_Data_0mu_Box->SetBinError(4,19.20937);
   ETA_1D_J2_Data_0mu_Box->SetBinError(5,24.55606);
   ETA_1D_J2_Data_0mu_Box->SetBinError(6,29.91655);
   ETA_1D_J2_Data_0mu_Box->SetBinError(7,36.83748);
   ETA_1D_J2_Data_0mu_Box->SetBinError(8,39.34463);
   ETA_1D_J2_Data_0mu_Box->SetBinError(9,42.09513);
   ETA_1D_J2_Data_0mu_Box->SetBinError(10,44.13615);
   ETA_1D_J2_Data_0mu_Box->SetBinError(11,43.82921);
   ETA_1D_J2_Data_0mu_Box->SetBinError(12,41.94043);
   ETA_1D_J2_Data_0mu_Box->SetBinError(13,39);
   ETA_1D_J2_Data_0mu_Box->SetBinError(14,35.55278);
   ETA_1D_J2_Data_0mu_Box->SetBinError(15,30.39737);
   ETA_1D_J2_Data_0mu_Box->SetBinError(16,23.85372);
   ETA_1D_J2_Data_0mu_Box->SetBinError(17,19.74842);
   ETA_1D_J2_Data_0mu_Box->SetBinError(18,13.63818);
   ETA_1D_J2_Data_0mu_Box->SetEntries(17228);
   ETA_1D_J2_Data_0mu_Box->SetStats(0);
   ETA_1D_J2_Data_0mu_Box->SetMarkerStyle(20);
   ETA_1D_J2_Data_0mu_Box->SetMarkerSize(0.7);
   ETA_1D_J2_Data_0mu_Box->GetXaxis()->SetLabelFont(42);
   ETA_1D_J2_Data_0mu_Box->GetXaxis()->SetLabelSize(0.035);
   ETA_1D_J2_Data_0mu_Box->GetXaxis()->SetTitleSize(0.035);
   ETA_1D_J2_Data_0mu_Box->GetXaxis()->SetTitleFont(42);
   ETA_1D_J2_Data_0mu_Box->GetYaxis()->SetLabelFont(42);
   ETA_1D_J2_Data_0mu_Box->GetYaxis()->SetLabelSize(0.035);
   ETA_1D_J2_Data_0mu_Box->GetYaxis()->SetTitleSize(0.035);
   ETA_1D_J2_Data_0mu_Box->GetYaxis()->SetTitleFont(42);
   ETA_1D_J2_Data_0mu_Box->GetZaxis()->SetLabelFont(42);
   ETA_1D_J2_Data_0mu_Box->GetZaxis()->SetLabelSize(0.035);
   ETA_1D_J2_Data_0mu_Box->GetZaxis()->SetTitleSize(0.035);
   ETA_1D_J2_Data_0mu_Box->GetZaxis()->SetTitleFont(42);
   ETA_1D_J2_Data_0mu_Box->Draw("same");
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
   TLegendEntry *entry=leg->AddEntry("ETA_1D_J2_3mu_BoxMC","W + jets","f");

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
   entry=leg->AddEntry("ETA_1D_J2_3mu_BoxMC","Z(#nu#bar{#nu}) + jets","f");

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
   entry=leg->AddEntry("ETA_1D_J2_3mu_BoxMC","t #bar{t} + jets","f");

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
   entry=leg->AddEntry("ETA_1D_J2_3mu_BoxMC","Z/#gamma^{*}(ll) + jets","f");

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
   entry=leg->AddEntry("ETA_1D_J2_Data_0mu_Box","Data","lep");
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
   
   TH1F *RATIO = new TH1F("RATIO","",20,-3,3);
   RATIO->SetBinContent(3,0.9786366);
   RATIO->SetBinContent(4,0.8774438);
   RATIO->SetBinContent(5,0.8803269);
   RATIO->SetBinContent(6,0.8985379);
   RATIO->SetBinContent(7,1.008322);
   RATIO->SetBinContent(8,0.9634926);
   RATIO->SetBinContent(9,0.9916232);
   RATIO->SetBinContent(10,1.027397);
   RATIO->SetBinContent(11,1.037786);
   RATIO->SetBinContent(12,1.013049);
   RATIO->SetBinContent(13,0.9643008);
   RATIO->SetBinContent(14,0.9451281);
   RATIO->SetBinContent(15,0.8859234);
   RATIO->SetBinContent(16,0.8406823);
   RATIO->SetBinContent(17,0.9025239);
   RATIO->SetBinContent(18,0.8619484);
   RATIO->SetBinError(3,0.07492976);
   RATIO->SetBinError(4,0.04929472);
   RATIO->SetBinError(5,0.03866192);
   RATIO->SetBinError(6,0.03242272);
   RATIO->SetBinError(7,0.02978024);
   RATIO->SetBinError(8,0.02656686);
   RATIO->SetBinError(9,0.02559524);
   RATIO->SetBinError(10,0.02530722);
   RATIO->SetBinError(11,0.02574675);
   RATIO->SetBinError(12,0.02623989);
   RATIO->SetBinError(13,0.02682853);
   RATIO->SetBinError(14,0.02880151);
   RATIO->SetBinError(15,0.03144786);
   RATIO->SetBinError(16,0.03799117);
   RATIO->SetBinError(17,0.04963474);
   RATIO->SetBinError(18,0.06819615);
   RATIO->SetMinimum(0);
   RATIO->SetMaximum(3.05);
   RATIO->SetEntries(8768.021);
   RATIO->SetStats(0);
   RATIO->SetFillColor(4);
   RATIO->SetLineColor(4);
   RATIO->SetMarkerColor(4);
   RATIO->SetMarkerStyle(20);
   RATIO->SetMarkerSize(0.7);
   RATIO->GetXaxis()->SetTitle("#eta");
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

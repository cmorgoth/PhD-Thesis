{
//=========Macro generated from canvas: C/C      
//=========  (Fri Sep 12 02:22:54 2014) by ROOT version5.34/19
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
   
   TH1F *stack1_stack_41 = new TH1F("stack1_stack_41","",20,-3,3);
   stack1_stack_41->SetMinimum(0.2985534);
   stack1_stack_41->SetMaximum(96989.7);
   stack1_stack_41->SetDirectory(0);
   stack1_stack_41->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   stack1_stack_41->SetLineColor(ci);
   stack1_stack_41->GetXaxis()->SetLabelFont(42);
   stack1_stack_41->GetXaxis()->SetLabelSize(0.035);
   stack1_stack_41->GetXaxis()->SetTitleSize(0.035);
   stack1_stack_41->GetXaxis()->SetTitleFont(42);
   stack1_stack_41->GetYaxis()->SetTitle("Events");
   stack1_stack_41->GetYaxis()->SetLabelFont(42);
   stack1_stack_41->GetYaxis()->SetLabelSize(0.035);
   stack1_stack_41->GetYaxis()->SetTitleSize(0.035);
   stack1_stack_41->GetYaxis()->SetTitleOffset(1.25);
   stack1_stack_41->GetYaxis()->SetTitleFont(42);
   stack1_stack_41->GetZaxis()->SetLabelFont(42);
   stack1_stack_41->GetZaxis()->SetLabelSize(0.035);
   stack1_stack_41->GetZaxis()->SetTitleSize(0.035);
   stack1_stack_41->GetZaxis()->SetTitleFont(42);
   stack1->SetHistogram(stack1_stack_41);
   
   
   TH1F *ETA_1D_m1_1mu_BoxMC_v1 = new TH1F("ETA_1D_m1_1mu_BoxMC_v1","",20,-3,3);
   ETA_1D_m1_1mu_BoxMC_v1->SetBinContent(5,0.05432213);
   ETA_1D_m1_1mu_BoxMC_v1->SetBinContent(6,0.0226034);
   ETA_1D_m1_1mu_BoxMC_v1->SetBinContent(8,0.05763596);
   ETA_1D_m1_1mu_BoxMC_v1->SetBinContent(9,0.04568181);
   ETA_1D_m1_1mu_BoxMC_v1->SetBinContent(10,0.1776971);
   ETA_1D_m1_1mu_BoxMC_v1->SetBinContent(11,0.07784203);
   ETA_1D_m1_1mu_BoxMC_v1->SetBinContent(12,0.020026);
   ETA_1D_m1_1mu_BoxMC_v1->SetBinContent(13,0.1233497);
   ETA_1D_m1_1mu_BoxMC_v1->SetBinContent(14,0.1140871);
   ETA_1D_m1_1mu_BoxMC_v1->SetBinContent(15,0.0230123);
   ETA_1D_m1_1mu_BoxMC_v1->SetEntries(20);
   ETA_1D_m1_1mu_BoxMC_v1->SetStats(0);

   ci = TColor::GetColor("#3300cc");
   ETA_1D_m1_1mu_BoxMC_v1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   ETA_1D_m1_1mu_BoxMC_v1->SetLineColor(ci);
   ETA_1D_m1_1mu_BoxMC_v1->GetXaxis()->SetLabelFont(42);
   ETA_1D_m1_1mu_BoxMC_v1->GetXaxis()->SetLabelSize(0.035);
   ETA_1D_m1_1mu_BoxMC_v1->GetXaxis()->SetTitleSize(0.035);
   ETA_1D_m1_1mu_BoxMC_v1->GetXaxis()->SetTitleFont(42);
   ETA_1D_m1_1mu_BoxMC_v1->GetYaxis()->SetLabelFont(42);
   ETA_1D_m1_1mu_BoxMC_v1->GetYaxis()->SetLabelSize(0.035);
   ETA_1D_m1_1mu_BoxMC_v1->GetYaxis()->SetTitleSize(0.035);
   ETA_1D_m1_1mu_BoxMC_v1->GetYaxis()->SetTitleFont(42);
   ETA_1D_m1_1mu_BoxMC_v1->GetZaxis()->SetLabelFont(42);
   ETA_1D_m1_1mu_BoxMC_v1->GetZaxis()->SetLabelSize(0.035);
   ETA_1D_m1_1mu_BoxMC_v1->GetZaxis()->SetTitleSize(0.035);
   ETA_1D_m1_1mu_BoxMC_v1->GetZaxis()->SetTitleFont(42);
   stack1->Add(ETA_1D_m1_1mu_BoxMC_v1,"");
   
   TH1F *ETA_1D_m1_1mu_BoxMC_v1 = new TH1F("ETA_1D_m1_1mu_BoxMC_v1","",20,-3,3);
   ETA_1D_m1_1mu_BoxMC_v1->SetBinContent(2,0.07599175);
   ETA_1D_m1_1mu_BoxMC_v1->SetBinContent(3,2.38003);
   ETA_1D_m1_1mu_BoxMC_v1->SetBinContent(4,5.086955);
   ETA_1D_m1_1mu_BoxMC_v1->SetBinContent(5,10.65626);
   ETA_1D_m1_1mu_BoxMC_v1->SetBinContent(6,19.30021);
   ETA_1D_m1_1mu_BoxMC_v1->SetBinContent(7,26.42192);
   ETA_1D_m1_1mu_BoxMC_v1->SetBinContent(8,36.89754);
   ETA_1D_m1_1mu_BoxMC_v1->SetBinContent(9,40.59126);
   ETA_1D_m1_1mu_BoxMC_v1->SetBinContent(10,46.84976);
   ETA_1D_m1_1mu_BoxMC_v1->SetBinContent(11,47.06503);
   ETA_1D_m1_1mu_BoxMC_v1->SetBinContent(12,43.09161);
   ETA_1D_m1_1mu_BoxMC_v1->SetBinContent(13,33.69465);
   ETA_1D_m1_1mu_BoxMC_v1->SetBinContent(14,25.47348);
   ETA_1D_m1_1mu_BoxMC_v1->SetBinContent(15,15.16855);
   ETA_1D_m1_1mu_BoxMC_v1->SetBinContent(16,10.62552);
   ETA_1D_m1_1mu_BoxMC_v1->SetBinContent(17,5.52664);
   ETA_1D_m1_1mu_BoxMC_v1->SetBinContent(18,2.826213);
   ETA_1D_m1_1mu_BoxMC_v1->SetEntries(4920);
   ETA_1D_m1_1mu_BoxMC_v1->SetStats(0);

   ci = TColor::GetColor("#ff33cc");
   ETA_1D_m1_1mu_BoxMC_v1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   ETA_1D_m1_1mu_BoxMC_v1->SetLineColor(ci);
   ETA_1D_m1_1mu_BoxMC_v1->GetXaxis()->SetLabelFont(42);
   ETA_1D_m1_1mu_BoxMC_v1->GetXaxis()->SetLabelSize(0.035);
   ETA_1D_m1_1mu_BoxMC_v1->GetXaxis()->SetTitleSize(0.035);
   ETA_1D_m1_1mu_BoxMC_v1->GetXaxis()->SetTitleFont(42);
   ETA_1D_m1_1mu_BoxMC_v1->GetYaxis()->SetLabelFont(42);
   ETA_1D_m1_1mu_BoxMC_v1->GetYaxis()->SetLabelSize(0.035);
   ETA_1D_m1_1mu_BoxMC_v1->GetYaxis()->SetTitleSize(0.035);
   ETA_1D_m1_1mu_BoxMC_v1->GetYaxis()->SetTitleFont(42);
   ETA_1D_m1_1mu_BoxMC_v1->GetZaxis()->SetLabelFont(42);
   ETA_1D_m1_1mu_BoxMC_v1->GetZaxis()->SetLabelSize(0.035);
   ETA_1D_m1_1mu_BoxMC_v1->GetZaxis()->SetTitleSize(0.035);
   ETA_1D_m1_1mu_BoxMC_v1->GetZaxis()->SetTitleFont(42);
   stack1->Add(ETA_1D_m1_1mu_BoxMC_v1,"");
   
   TH1F *ETA_1D_m1_1mu_BoxMC_v1 = new TH1F("ETA_1D_m1_1mu_BoxMC_v1","",20,-3,3);
   ETA_1D_m1_1mu_BoxMC_v1->SetBinContent(3,0.269826);
   ETA_1D_m1_1mu_BoxMC_v1->SetBinContent(4,1.375536);
   ETA_1D_m1_1mu_BoxMC_v1->SetBinContent(5,2.763845);
   ETA_1D_m1_1mu_BoxMC_v1->SetBinContent(6,1.005255);
   ETA_1D_m1_1mu_BoxMC_v1->SetBinContent(7,1.815595);
   ETA_1D_m1_1mu_BoxMC_v1->SetBinContent(8,1.829715);
   ETA_1D_m1_1mu_BoxMC_v1->SetBinContent(9,1.05749);
   ETA_1D_m1_1mu_BoxMC_v1->SetBinContent(10,1.952165);
   ETA_1D_m1_1mu_BoxMC_v1->SetBinContent(11,0.7463825);
   ETA_1D_m1_1mu_BoxMC_v1->SetBinContent(12,1.280485);
   ETA_1D_m1_1mu_BoxMC_v1->SetBinContent(13,1.494545);
   ETA_1D_m1_1mu_BoxMC_v1->SetBinContent(14,1.59184);
   ETA_1D_m1_1mu_BoxMC_v1->SetBinContent(15,2.337689);
   ETA_1D_m1_1mu_BoxMC_v1->SetBinContent(16,1.29458);
   ETA_1D_m1_1mu_BoxMC_v1->SetBinContent(17,1.383017);
   ETA_1D_m1_1mu_BoxMC_v1->SetBinContent(18,0.3884313);
   ETA_1D_m1_1mu_BoxMC_v1->SetEntries(143);
   ETA_1D_m1_1mu_BoxMC_v1->SetStats(0);

   ci = TColor::GetColor("#ffff33");
   ETA_1D_m1_1mu_BoxMC_v1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   ETA_1D_m1_1mu_BoxMC_v1->SetLineColor(ci);
   ETA_1D_m1_1mu_BoxMC_v1->GetXaxis()->SetLabelFont(42);
   ETA_1D_m1_1mu_BoxMC_v1->GetXaxis()->SetLabelSize(0.035);
   ETA_1D_m1_1mu_BoxMC_v1->GetXaxis()->SetTitleSize(0.035);
   ETA_1D_m1_1mu_BoxMC_v1->GetXaxis()->SetTitleFont(42);
   ETA_1D_m1_1mu_BoxMC_v1->GetYaxis()->SetLabelFont(42);
   ETA_1D_m1_1mu_BoxMC_v1->GetYaxis()->SetLabelSize(0.035);
   ETA_1D_m1_1mu_BoxMC_v1->GetYaxis()->SetTitleSize(0.035);
   ETA_1D_m1_1mu_BoxMC_v1->GetYaxis()->SetTitleFont(42);
   ETA_1D_m1_1mu_BoxMC_v1->GetZaxis()->SetLabelFont(42);
   ETA_1D_m1_1mu_BoxMC_v1->GetZaxis()->SetLabelSize(0.035);
   ETA_1D_m1_1mu_BoxMC_v1->GetZaxis()->SetTitleSize(0.035);
   ETA_1D_m1_1mu_BoxMC_v1->GetZaxis()->SetTitleFont(42);
   stack1->Add(ETA_1D_m1_1mu_BoxMC_v1,"");
   
   TH1F *ETA_1D_m1_1mu_BoxMC_v1 = new TH1F("ETA_1D_m1_1mu_BoxMC_v1","",20,-3,3);
   ETA_1D_m1_1mu_BoxMC_v1->SetStats(0);

   ci = TColor::GetColor("#669900");
   ETA_1D_m1_1mu_BoxMC_v1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   ETA_1D_m1_1mu_BoxMC_v1->SetLineColor(ci);
   ETA_1D_m1_1mu_BoxMC_v1->GetXaxis()->SetLabelFont(42);
   ETA_1D_m1_1mu_BoxMC_v1->GetXaxis()->SetLabelSize(0.035);
   ETA_1D_m1_1mu_BoxMC_v1->GetXaxis()->SetTitleSize(0.035);
   ETA_1D_m1_1mu_BoxMC_v1->GetXaxis()->SetTitleFont(42);
   ETA_1D_m1_1mu_BoxMC_v1->GetYaxis()->SetLabelFont(42);
   ETA_1D_m1_1mu_BoxMC_v1->GetYaxis()->SetLabelSize(0.035);
   ETA_1D_m1_1mu_BoxMC_v1->GetYaxis()->SetTitleSize(0.035);
   ETA_1D_m1_1mu_BoxMC_v1->GetYaxis()->SetTitleFont(42);
   ETA_1D_m1_1mu_BoxMC_v1->GetZaxis()->SetLabelFont(42);
   ETA_1D_m1_1mu_BoxMC_v1->GetZaxis()->SetLabelSize(0.035);
   ETA_1D_m1_1mu_BoxMC_v1->GetZaxis()->SetTitleSize(0.035);
   ETA_1D_m1_1mu_BoxMC_v1->GetZaxis()->SetTitleFont(42);
   stack1->Add(ETA_1D_m1_1mu_BoxMC_v1,"");
   stack1->Draw("");
   
   TH1F *ETA_1D_m1_Data_1mu_Box_v0 = new TH1F("ETA_1D_m1_Data_1mu_Box_v0","",20,-3,3);
   ETA_1D_m1_Data_1mu_Box_v0->SetBinContent(3,5);
   ETA_1D_m1_Data_1mu_Box_v0->SetBinContent(4,2);
   ETA_1D_m1_Data_1mu_Box_v0->SetBinContent(5,6);
   ETA_1D_m1_Data_1mu_Box_v0->SetBinContent(6,20);
   ETA_1D_m1_Data_1mu_Box_v0->SetBinContent(7,26);
   ETA_1D_m1_Data_1mu_Box_v0->SetBinContent(8,32);
   ETA_1D_m1_Data_1mu_Box_v0->SetBinContent(9,31);
   ETA_1D_m1_Data_1mu_Box_v0->SetBinContent(10,35);
   ETA_1D_m1_Data_1mu_Box_v0->SetBinContent(11,35);
   ETA_1D_m1_Data_1mu_Box_v0->SetBinContent(12,38);
   ETA_1D_m1_Data_1mu_Box_v0->SetBinContent(13,35);
   ETA_1D_m1_Data_1mu_Box_v0->SetBinContent(14,22);
   ETA_1D_m1_Data_1mu_Box_v0->SetBinContent(15,17);
   ETA_1D_m1_Data_1mu_Box_v0->SetBinContent(16,9);
   ETA_1D_m1_Data_1mu_Box_v0->SetBinContent(17,4);
   ETA_1D_m1_Data_1mu_Box_v0->SetBinError(3,2.236068);
   ETA_1D_m1_Data_1mu_Box_v0->SetBinError(4,1.414214);
   ETA_1D_m1_Data_1mu_Box_v0->SetBinError(5,2.44949);
   ETA_1D_m1_Data_1mu_Box_v0->SetBinError(6,4.472136);
   ETA_1D_m1_Data_1mu_Box_v0->SetBinError(7,5.09902);
   ETA_1D_m1_Data_1mu_Box_v0->SetBinError(8,5.656854);
   ETA_1D_m1_Data_1mu_Box_v0->SetBinError(9,5.567764);
   ETA_1D_m1_Data_1mu_Box_v0->SetBinError(10,5.91608);
   ETA_1D_m1_Data_1mu_Box_v0->SetBinError(11,5.91608);
   ETA_1D_m1_Data_1mu_Box_v0->SetBinError(12,6.164414);
   ETA_1D_m1_Data_1mu_Box_v0->SetBinError(13,5.91608);
   ETA_1D_m1_Data_1mu_Box_v0->SetBinError(14,4.690416);
   ETA_1D_m1_Data_1mu_Box_v0->SetBinError(15,4.123106);
   ETA_1D_m1_Data_1mu_Box_v0->SetBinError(16,3);
   ETA_1D_m1_Data_1mu_Box_v0->SetBinError(17,2);
   ETA_1D_m1_Data_1mu_Box_v0->SetEntries(317);
   ETA_1D_m1_Data_1mu_Box_v0->SetStats(0);
   ETA_1D_m1_Data_1mu_Box_v0->SetMarkerStyle(20);
   ETA_1D_m1_Data_1mu_Box_v0->SetMarkerSize(0.7);
   ETA_1D_m1_Data_1mu_Box_v0->GetXaxis()->SetLabelFont(42);
   ETA_1D_m1_Data_1mu_Box_v0->GetXaxis()->SetLabelSize(0.035);
   ETA_1D_m1_Data_1mu_Box_v0->GetXaxis()->SetTitleSize(0.035);
   ETA_1D_m1_Data_1mu_Box_v0->GetXaxis()->SetTitleFont(42);
   ETA_1D_m1_Data_1mu_Box_v0->GetYaxis()->SetLabelFont(42);
   ETA_1D_m1_Data_1mu_Box_v0->GetYaxis()->SetLabelSize(0.035);
   ETA_1D_m1_Data_1mu_Box_v0->GetYaxis()->SetTitleSize(0.035);
   ETA_1D_m1_Data_1mu_Box_v0->GetYaxis()->SetTitleFont(42);
   ETA_1D_m1_Data_1mu_Box_v0->GetZaxis()->SetLabelFont(42);
   ETA_1D_m1_Data_1mu_Box_v0->GetZaxis()->SetLabelSize(0.035);
   ETA_1D_m1_Data_1mu_Box_v0->GetZaxis()->SetTitleSize(0.035);
   ETA_1D_m1_Data_1mu_Box_v0->GetZaxis()->SetTitleFont(42);
   ETA_1D_m1_Data_1mu_Box_v0->Draw("same");
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
   TLegendEntry *entry=leg->AddEntry("ETA_1D_m1_1mu_BoxMC_v1","W + jets","f");

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
   entry=leg->AddEntry("ETA_1D_m1_1mu_BoxMC_v1","Z(#nu#bar{#nu}) + jets","f");

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
   entry=leg->AddEntry("ETA_1D_m1_1mu_BoxMC_v1","t #bar{t} + jets","f");

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
   entry=leg->AddEntry("ETA_1D_m1_1mu_BoxMC_v1","Z/#gamma^{*}(ll) + jets","f");

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
   entry=leg->AddEntry("ETA_1D_m1_Data_1mu_Box_v0","Data","lep");
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
   RATIO->SetBinContent(3,1.886895);
   RATIO->SetBinContent(4,0.3094782);
   RATIO->SetBinContent(5,0.4452879);
   RATIO->SetBinContent(6,0.9838615);
   RATIO->SetBinContent(7,0.9207609);
   RATIO->SetBinContent(8,0.8250635);
   RATIO->SetBinContent(9,0.7435045);
   RATIO->SetBinContent(10,0.714583);
   RATIO->SetBinContent(11,0.7308528);
   RATIO->SetBinContent(12,0.8560078);
   RATIO->SetBinContent(13,0.9911492);
   RATIO->SetBinContent(14,0.8094363);
   RATIO->SetBinContent(15,0.9698074);
   RATIO->SetBinContent(16,0.7550269);
   RATIO->SetBinContent(17,0.5788999);
   RATIO->SetBinError(3,0.9146725);
   RATIO->SetBinError(4,0.222388);
   RATIO->SetBinError(5,0.1865743);
   RATIO->SetBinError(6,0.230044);
   RATIO->SetBinError(7,0.1885025);
   RATIO->SetBinError(8,0.1514573);
   RATIO->SetBinError(9,0.1379516);
   RATIO->SetBinError(10,0.1247418);
   RATIO->SetBinError(11,0.1274822);
   RATIO->SetBinError(12,0.1442813);
   RATIO->SetBinError(13,0.1750459);
   RATIO->SetBinError(14,0.179128);
   RATIO->SetBinError(15,0.2473428);
   RATIO->SetBinError(16,0.26126);
   RATIO->SetBinError(17,0.2989466);
   RATIO->SetMinimum(0);
   RATIO->SetMaximum(3.05);
   RATIO->SetEntries(113.1493);
   RATIO->SetStats(0);
   RATIO->SetFillColor(4);
   RATIO->SetLineColor(4);
   RATIO->SetMarkerColor(4);
   RATIO->SetMarkerStyle(20);
   RATIO->SetMarkerSize(0.7);
   RATIO->GetXaxis()->SetTitle("#eta_{#mu}");
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

{
//=========Macro generated from canvas: C/C
//=========  (Thu Sep 11 01:31:56 2014) by ROOT version5.34/11
   TCanvas *C = new TCanvas("C", "C",0,22,640,640);
   C->Range(0,0,1,1);
   C->SetFillColor(0);
   C->SetBorderMode(0);
   C->SetBorderSize(2);
   C->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "pad1",0,0,1,1);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-0.4615385,-45.86289,3.384615,-27.23402);
   pad1->SetFillColor(0);
   pad1->SetBorderMode(0);
   pad1->SetBorderSize(2);
   pad1->SetLogx();
   pad1->SetLogy();
   pad1->SetLeftMargin(0.12);
   pad1->SetFrameBorderMode(0);
   pad1->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   TGraph *graph = new TGraph(8);
   graph->SetName("Graph");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);
   graph->SetLineColor(8);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetPoint(0,1,1.38e-41);
   graph->SetPoint(1,10,4.15e-41);
   graph->SetPoint(2,100,6.2e-41);
   graph->SetPoint(3,200,8.62e-41);
   graph->SetPoint(4,300,1.41e-40);
   graph->SetPoint(5,400,1.79e-40);
   graph->SetPoint(6,700,7.47e-40);
   graph->SetPoint(7,1000,3.79e-39);
   
   TH1F *Graph_Graph1 = new TH1F("Graph_Graph1","Graph",100,0.9,1099.9);
   Graph_Graph1->SetMinimum(1.242e-41);
   Graph_Graph1->SetMaximum(4.16762e-39);
   Graph_Graph1->SetDirectory(0);
   Graph_Graph1->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#000099");
   Graph_Graph1->SetLineColor(ci);
   Graph_Graph1->GetXaxis()->SetLabelFont(42);
   Graph_Graph1->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1->GetXaxis()->SetTitleFont(42);
   Graph_Graph1->GetYaxis()->SetLabelFont(42);
   Graph_Graph1->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1->GetYaxis()->SetTitleFont(42);
   Graph_Graph1->GetZaxis()->SetLabelFont(42);
   Graph_Graph1->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1);
   
   multigraph->Add(graph,"L");
   
   graph = new TGraph(6);
   graph->SetName("Graph");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);
   graph->SetPoint(0,1,8.47662e-42);
   graph->SetPoint(1,10,2.81103e-41);
   graph->SetPoint(2,100,3.32371e-41);
   graph->SetPoint(3,400,1.04759e-40);
   graph->SetPoint(4,700,4.32774e-40);
   graph->SetPoint(5,1000,2.21894e-39);
   
   TH1F *Graph_Graph2 = new TH1F("Graph_Graph2","Graph",100,0.9,1099.9);
   Graph_Graph2->SetMinimum(7.628958e-42);
   Graph_Graph2->SetMaximum(2.439986e-39);
   Graph_Graph2->SetDirectory(0);
   Graph_Graph2->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph2->SetLineColor(ci);
   Graph_Graph2->GetXaxis()->SetLabelFont(42);
   Graph_Graph2->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph2->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph2->GetXaxis()->SetTitleFont(42);
   Graph_Graph2->GetYaxis()->SetLabelFont(42);
   Graph_Graph2->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph2->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph2->GetYaxis()->SetTitleFont(42);
   Graph_Graph2->GetZaxis()->SetLabelFont(42);
   Graph_Graph2->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph2->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph2->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2);
   
   multigraph->Add(graph,"L");
   
   graph = new TGraph(7);
   graph->SetName("Graph");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#ff33ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);
   graph->SetPoint(0,1,3.1e-40);
   graph->SetPoint(1,5,9.6e-40);
   graph->SetPoint(2,10,7.5e-40);
   graph->SetPoint(3,50,9e-40);
   graph->SetPoint(4,100,2.1e-39);
   graph->SetPoint(5,200,9.1e-39);
   graph->SetPoint(6,300,3.1e-38);
   
   TH1F *Graph_Graph3 = new TH1F("Graph_Graph3","Graph",100,0.9,329.9);
   Graph_Graph3->SetMinimum(2.79e-40);
   Graph_Graph3->SetMaximum(3.4069e-38);
   Graph_Graph3->SetDirectory(0);
   Graph_Graph3->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3->SetLineColor(ci);
   Graph_Graph3->GetXaxis()->SetLabelFont(42);
   Graph_Graph3->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph3->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph3->GetXaxis()->SetTitleFont(42);
   Graph_Graph3->GetYaxis()->SetLabelFont(42);
   Graph_Graph3->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph3->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph3->GetYaxis()->SetTitleFont(42);
   Graph_Graph3->GetZaxis()->SetLabelFont(42);
   Graph_Graph3->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph3->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph3->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph3);
   
   multigraph->Add(graph,"L");
   
   graph = new TGraph(50);
   graph->SetName("Graph");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#ffcc33");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);
   graph->SetPoint(0,4,2.0565e-33);
   graph->SetPoint(1,4.065,1.4073e-33);
   graph->SetPoint(2,4.231,7.8339e-34);
   graph->SetPoint(3,4.396,4.8569e-34);
   graph->SetPoint(4,4.561,3.2249e-34);
   graph->SetPoint(5,4.727,2.2565e-34);
   graph->SetPoint(6,4.892,1.6402e-34);
   graph->SetPoint(7,5.057,1.2301e-34);
   graph->SetPoint(8,5.222,9.5605e-35);
   graph->SetPoint(9,5.388,7.6546e-35);
   graph->SetPoint(10,5.553,6.2842e-35);
   graph->SetPoint(11,5.718,5.2712e-35);
   graph->SetPoint(12,5.884,4.4607e-35);
   graph->SetPoint(13,6.049,3.8308e-35);
   graph->SetPoint(14,6.214,3.3385e-35);
   graph->SetPoint(15,6.38,2.9476e-35);
   graph->SetPoint(16,6.545,2.6327e-35);
   graph->SetPoint(17,6.71,2.3758e-35);
   graph->SetPoint(18,6.876,2.1594e-35);
   graph->SetPoint(19,7.041,1.9771e-35);
   graph->SetPoint(20,7.206,1.8213e-35);
   graph->SetPoint(21,7.371,1.6801e-35);
   graph->SetPoint(22,7.537,1.5492e-35);
   graph->SetPoint(23,7.702,1.4361e-35);
   graph->SetPoint(24,7.867,1.3389e-35);
   graph->SetPoint(25,8.033,1.2536e-35);
   graph->SetPoint(26,8.198,1.1735e-35);
   graph->SetPoint(27,8.363,1.1033e-35);
   graph->SetPoint(28,8.529,1.0415e-35);
   graph->SetPoint(29,8.694,9.869e-36);
   graph->SetPoint(30,8.859,9.3842e-36);
   graph->SetPoint(31,9.024,8.9522e-36);
   graph->SetPoint(32,9.19,8.5503e-36);
   graph->SetPoint(33,9.355,8.1773e-36);
   graph->SetPoint(34,9.52,7.8277e-36);
   graph->SetPoint(35,9.686,7.5083e-36);
   graph->SetPoint(36,9.851,7.2197e-36);
   graph->SetPoint(37,10.016,6.9583e-36);
   graph->SetPoint(38,10.182,6.721e-36);
   graph->SetPoint(39,10.347,6.5051e-36);
   graph->SetPoint(40,10.512,6.3082e-36);
   graph->SetPoint(41,10.678,6.1162e-36);
   graph->SetPoint(42,10.843,5.9391e-36);
   graph->SetPoint(43,11.008,5.7764e-36);
   graph->SetPoint(44,11.173,5.6265e-36);
   graph->SetPoint(45,11.339,5.4885e-36);
   graph->SetPoint(46,11.504,5.361e-36);
   graph->SetPoint(47,11.669,5.2345e-36);
   graph->SetPoint(48,11.835,5.1039e-36);
   graph->SetPoint(49,12,4.981e-36);
   
   TH1F *Graph_Graph4 = new TH1F("Graph_Graph4","Graph",100,3.2,12.8);
   Graph_Graph4->SetMinimum(0);
   Graph_Graph4->SetMaximum(2.261652e-33);
   Graph_Graph4->SetDirectory(0);
   Graph_Graph4->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph4->SetLineColor(ci);
   Graph_Graph4->GetXaxis()->SetLabelFont(42);
   Graph_Graph4->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph4->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph4->GetXaxis()->SetTitleFont(42);
   Graph_Graph4->GetYaxis()->SetLabelFont(42);
   Graph_Graph4->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph4->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph4->GetYaxis()->SetTitleFont(42);
   Graph_Graph4->GetZaxis()->SetLabelFont(42);
   Graph_Graph4->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph4->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph4->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph4);
   
   multigraph->Add(graph,"L");
   
   graph = new TGraph(48);
   graph->SetName("Graph");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#333366");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);
   graph->SetPoint(0,4.06,4.0809e-35);
   graph->SetPoint(1,4.183,3.0188e-35);
   graph->SetPoint(2,4.287,2.2683e-35);
   graph->SetPoint(3,4.42,1.7007e-35);
   graph->SetPoint(4,4.566,1.2608e-35);
   graph->SetPoint(5,4.687,9.312e-36);
   graph->SetPoint(6,4.814,7.008e-36);
   graph->SetPoint(7,4.991,5.275e-36);
   graph->SetPoint(8,5.272,3.97e-36);
   graph->SetPoint(9,5.604,2.988e-36);
   graph->SetPoint(10,5.916,2.249e-36);
   graph->SetPoint(11,6.43,1.709e-36);
   graph->SetPoint(12,7.036,1.274e-36);
   graph->SetPoint(13,7.809,9.67e-37);
   graph->SetPoint(14,8.965,7.35e-37);
   graph->SetPoint(15,10.451,5.8e-37);
   graph->SetPoint(16,12.506,4.72e-37);
   graph->SetPoint(17,15.541,4.01e-37);
   graph->SetPoint(18,19.179,3.44e-37);
   graph->SetPoint(19,24.244,3.09e-37);
   graph->SetPoint(20,30.662,2.86e-37);
   graph->SetPoint(21,39.083,2.73e-37);
   graph->SetPoint(22,49.818,2.75e-37);
   graph->SetPoint(23,64.099,2.88e-37);
   graph->SetPoint(24,80.942,3.14e-37);
   graph->SetPoint(25,103.174,3.57e-37);
   graph->SetPoint(26,130.016,4.13e-37);
   graph->SetPoint(27,162.676,4.83e-37);
   graph->SetPoint(28,203.553,5.62e-37);
   graph->SetPoint(29,251.201,6.5e-37);
   graph->SetPoint(30,298.021,7.5e-37);
   graph->SetPoint(31,363.862,9.12e-37);
   graph->SetPoint(32,442.53,1.091e-36);
   graph->SetPoint(33,546.088,1.305e-36);
   graph->SetPoint(34,668.429,1.585e-36);
   graph->SetPoint(35,814,1.913e-36);
   graph->SetPoint(36,1001.41,2.313e-36);
   graph->SetPoint(37,1215.191,2.797e-36);
   graph->SetPoint(38,1473.606,3.384e-36);
   graph->SetPoint(39,1790.57,4.09e-36);
   graph->SetPoint(40,2174.538,4.943e-36);
   graph->SetPoint(41,2623.267,5.944e-36);
   graph->SetPoint(42,3180.817,7.175e-36);
   graph->SetPoint(43,3856.736,8.66e-36);
   graph->SetPoint(44,4664.508,1.0507e-35);
   graph->SetPoint(45,5675.894,1.2692e-35);
   graph->SetPoint(46,6879.286,1.535e-35);
   graph->SetPoint(47,8358.695,1.8573e-35);
   
   TH1F *Graph_Graph5 = new TH1F("Graph_Graph5","Graph",100,3.654,9194.158);
   Graph_Graph5->SetMinimum(2.457e-37);
   Graph_Graph5->SetMaximum(4.48626e-35);
   Graph_Graph5->SetDirectory(0);
   Graph_Graph5->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph5->SetLineColor(ci);
   Graph_Graph5->GetXaxis()->SetLabelFont(42);
   Graph_Graph5->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph5->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph5->GetXaxis()->SetTitleFont(42);
   Graph_Graph5->GetYaxis()->SetLabelFont(42);
   Graph_Graph5->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph5->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph5->GetYaxis()->SetTitleFont(42);
   Graph_Graph5->GetZaxis()->SetLabelFont(42);
   Graph_Graph5->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph5->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph5->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph5);
   
   multigraph->Add(graph,"L");
   
   graph = new TGraph(5);
   graph->SetName("Graph");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#00cccc");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);
   graph->SetPoint(0,250,2.8e-40);
   graph->SetPoint(1,500,3e-40);
   graph->SetPoint(2,1000,8.7e-40);
   graph->SetPoint(3,3000,9.9e-39);
   graph->SetPoint(4,5000,3.6e-38);
   
   TH1F *Graph_Graph6 = new TH1F("Graph_Graph6","Graph",100,225,5475);
   Graph_Graph6->SetMinimum(2.52e-40);
   Graph_Graph6->SetMaximum(3.9572e-38);
   Graph_Graph6->SetDirectory(0);
   Graph_Graph6->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph6->SetLineColor(ci);
   Graph_Graph6->GetXaxis()->SetLabelFont(42);
   Graph_Graph6->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph6->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph6->GetXaxis()->SetTitleFont(42);
   Graph_Graph6->GetYaxis()->SetLabelFont(42);
   Graph_Graph6->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph6->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph6->GetYaxis()->SetTitleFont(42);
   Graph_Graph6->GetZaxis()->SetLabelFont(42);
   Graph_Graph6->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph6->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph6->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph6);
   
   multigraph->Add(graph,"L");
   
   graph = new TGraph(13);
   graph->SetName("Graph");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#cc66ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);
   graph->SetPoint(0,10,1.062999111e-34);
   graph->SetPoint(1,10,3.896069839e-35);
   graph->SetPoint(2,20,2.622683223e-35);
   graph->SetPoint(3,30,1.98402781e-35);
   graph->SetPoint(4,40,1.868130067e-35);
   graph->SetPoint(5,50,1.888875171e-35);
   graph->SetPoint(6,70,2.066359565e-35);
   graph->SetPoint(7,100,2.444212153e-35);
   graph->SetPoint(8,200,3.902724678e-35);
   graph->SetPoint(9,300,5.423239926e-35);
   graph->SetPoint(10,500,8.497833856e-35);
   graph->SetPoint(11,700,1.158464789e-34);
   graph->SetPoint(12,1000,1.622154313e-34);
   
   TH1F *Graph_Graph7 = new TH1F("Graph_Graph7","Graph",100,9,1099);
   Graph_Graph7->SetMinimum(4.327888e-36);
   Graph_Graph7->SetMaximum(1.765688e-34);
   Graph_Graph7->SetDirectory(0);
   Graph_Graph7->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph7->SetLineColor(ci);
   Graph_Graph7->GetXaxis()->SetLabelFont(42);
   Graph_Graph7->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph7->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph7->GetXaxis()->SetTitleFont(42);
   Graph_Graph7->GetYaxis()->SetLabelFont(42);
   Graph_Graph7->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph7->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph7->GetYaxis()->SetTitleFont(42);
   Graph_Graph7->GetZaxis()->SetLabelFont(42);
   Graph_Graph7->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph7->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph7->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph7);
   
   multigraph->Add(graph,"L");
   
   graph = new TGraph(11);
   graph->SetName("Graph");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#009900");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);
   graph->SetPoint(0,10,6.46362e-36);
   graph->SetPoint(1,20,1.5641e-36);
   graph->SetPoint(2,30,1.18947e-36);
   graph->SetPoint(3,50,1.13887e-36);
   graph->SetPoint(4,70,1.24922e-36);
   graph->SetPoint(5,100,1.48071e-36);
   graph->SetPoint(6,200,2.37014e-36);
   graph->SetPoint(7,300,3.29633e-36);
   graph->SetPoint(8,500,5.16861e-36);
   graph->SetPoint(9,700,7.04815e-36);
   graph->SetPoint(10,1000,9.87142e-36);
   
   TH1F *Graph_Graph8 = new TH1F("Graph_Graph8","Graph",100,9,1099);
   Graph_Graph8->SetMinimum(2.65615e-37);
   Graph_Graph8->SetMaximum(1.074468e-35);
   Graph_Graph8->SetDirectory(0);
   Graph_Graph8->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph8->SetLineColor(ci);
   Graph_Graph8->GetXaxis()->SetLabelFont(42);
   Graph_Graph8->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph8->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph8->GetXaxis()->SetTitleFont(42);
   Graph_Graph8->GetYaxis()->SetLabelFont(42);
   Graph_Graph8->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph8->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph8->GetYaxis()->SetTitleFont(42);
   Graph_Graph8->GetZaxis()->SetLabelFont(42);
   Graph_Graph8->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph8->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph8->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph8);
   
   multigraph->Add(graph,"L");
   
   graph = new TGraph(36);
   graph->SetName("Graph");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#99ccff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);
   graph->SetPoint(0,18,2.5e-38);
   graph->SetPoint(1,19.952623,2.3198985e-38);
   graph->SetPoint(2,22.387211,2.1450074e-38);
   graph->SetPoint(3,25.118864,1.9942191e-38);
   graph->SetPoint(4,28.183829,1.8642374e-38);
   graph->SetPoint(5,31.622777,1.7523216e-38);
   graph->SetPoint(6,35.481339,1.6561919e-38);
   graph->SetPoint(7,39.810717,1.5739531e-38);
   graph->SetPoint(8,44.668359,1.5040323e-38);
   graph->SetPoint(9,50.118723,1.4451296e-38);
   graph->SetPoint(10,56.234133,1.3961777e-38);
   graph->SetPoint(11,63.095734,1.3563097e-38);
   graph->SetPoint(12,70.794578,1.3248335e-38);
   graph->SetPoint(13,79.432823,1.3012118e-38);
   graph->SetPoint(14,89.125094,3.811501e-39);
   graph->SetPoint(15,100,3.6325677e-39);
   graph->SetPoint(16,112.20185,3.474086e-39);
   graph->SetPoint(17,125.89254,3.3340843e-39);
   graph->SetPoint(18,141.25375,3.2108629e-39);
   graph->SetPoint(19,158.48932,3.1029595e-39);
   graph->SetPoint(20,177.82794,3.0091208e-39);
   graph->SetPoint(21,199.52623,4.9855412e-39);
   graph->SetPoint(22,223.87211,5.0298024e-39);
   graph->SetPoint(23,251.18864,5.1395608e-39);
   graph->SetPoint(24,281.83829,5.319093e-39);
   graph->SetPoint(25,316.22777,5.5755233e-39);
   graph->SetPoint(26,354.81339,5.9192974e-39);
   graph->SetPoint(27,398.10717,6.364894e-39);
   graph->SetPoint(28,446.68359,6.9318421e-39);
   graph->SetPoint(29,501.18723,7.6461468e-39);
   graph->SetPoint(30,562.34133,8.5422657e-39);
   graph->SetPoint(31,630.95734,9.665849e-39);
   graph->SetPoint(32,707.94578,1.1077542e-38);
   graph->SetPoint(33,794.32823,1.2858292e-38);
   graph->SetPoint(34,891.25094,1.5116793e-38);
   graph->SetPoint(35,1000,1.8e-38);
   
   TH1F *Graph_Graph9 = new TH1F("Graph_Graph9","Graph",100,16.2,1098.2);
   Graph_Graph9->SetMinimum(8.100329e-40);
   Graph_Graph9->SetMaximum(2.719909e-38);
   Graph_Graph9->SetDirectory(0);
   Graph_Graph9->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph9->SetLineColor(ci);
   Graph_Graph9->GetXaxis()->SetLabelFont(42);
   Graph_Graph9->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph9->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph9->GetXaxis()->SetTitleFont(42);
   Graph_Graph9->GetYaxis()->SetLabelFont(42);
   Graph_Graph9->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph9->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph9->GetYaxis()->SetTitleFont(42);
   Graph_Graph9->GetZaxis()->SetLabelFont(42);
   Graph_Graph9->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph9->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph9->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph9);
   
   multigraph->Add(graph,"L");
   multigraph->Draw("A");
   multigraph->GetXaxis()->SetTitle("M_{#chi} (GeV)");
   multigraph->GetXaxis()->CenterTitle(true);
   multigraph->GetXaxis()->SetLabelFont(42);
   multigraph->GetXaxis()->SetLabelSize(0.035);
   multigraph->GetXaxis()->SetTitleSize(0.035);
   multigraph->GetXaxis()->SetTitleOffset(1.1);
   multigraph->GetXaxis()->SetTitleFont(42);
   multigraph->GetYaxis()->SetTitle("#sigma_{N-#chi} (cm^{2})");
   multigraph->GetYaxis()->CenterTitle(true);
   multigraph->GetYaxis()->SetLabelFont(42);
   multigraph->GetYaxis()->SetLabelSize(0.035);
   multigraph->GetYaxis()->SetTitleSize(0.035);
   multigraph->GetYaxis()->SetTitleOffset(1.7);
   multigraph->GetYaxis()->SetTitleFont(42);
   TLatex *   tex = new TLatex(0.25,0.93,"CMS Preliminary: ");
tex->SetNDC();
   tex->SetTextAlign(22);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.45,0.93,"#sqrt{s} = 8 TeV,");
tex->SetNDC();
   tex->SetTextAlign(22);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.63,0.93,"#int L dt = 18.836 fb^{-1}");
tex->SetNDC();
   tex->SetTextAlign(22);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TLegend *leg = new TLegend(0.45,0.65,0.89,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.022);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Graph","Razor SD (18.836 fb^{-1})","l");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph","Monojet SD combined limit (19.5 fb^{-1})","l");
   entry->SetLineColor(8);
   entry->SetLineStyle(2);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph","CDF 2012","l");

   ci = TColor::GetColor("#ff33ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph","CDMSII 2010","l");

   ci = TColor::GetColor("#ffcc33");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph","COUPP","l");

   ci = TColor::GetColor("#333366");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph","IceCube W^{+}W^{-}","l");

   ci = TColor::GetColor("#00cccc");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph","SIMPLE 2005 Neutron","l");

   ci = TColor::GetColor("#cc66ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph","SIMPLE 2005 Proton","l");

   ci = TColor::GetColor("#009900");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph","SuperK-W^{+}W^{-}","l");

   ci = TColor::GetColor("#99ccff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   pad1->Modified();
   C->cd();
   C->Modified();
   C->cd();
   C->SetSelected(C);
}

{
	y = new TH1D("y","Histogram of p1s",25,0.01,0.014);
	g = new TGraph("p1s_lambda.txt");
	for(int i=0;i<g->GetN();i++){
		y->Fill(g->GetX()[i]);
	}
	y->Draw();
}

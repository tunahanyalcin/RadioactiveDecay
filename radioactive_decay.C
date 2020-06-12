{
	h = new TGraphErrors("3.5kV_2.txt","%*lg%*lg%*lg%*lg%lg%lg%lg%lg");
	h ->SetTitle("3500 V 11 pumps;Tau(seconds);ln(s)");
	h ->SetMarkerStyle(23);
	h ->Draw("AP");
	h ->Fit("pol1");
}

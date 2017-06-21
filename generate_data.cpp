#include<iostream>
#include<fstream>
#include<cmath>
#include<random>
using namespace std;
double g(double x)
{
	double p[5] = {3.e0, -2.e0, -8.e0, 5.e0, 1.e0};
	double gx = 0.e0;
	for(int i=0; i<5; i++)
		gx += p[i]*pow(x,i);
	gx *= exp(cos(x))/pow(abs(x)+2.e0,4);
	return gx;

}
int main()
{
	int ns = 100;
	double y[ns],x[ns];
	std::ofstream xydata;
  	xydata.open ("xydata.dat");
    
	std::default_random_engine generator;
  	std::normal_distribution<double> distn(0.0,1.0);
	std::uniform_real_distribution<double> distu(0.0,1.0);
	for(int i=0; i<ns; i++)
	{
		x[i] = 8.0*distu(generator) - 4.0;
		y[i] = g(x[i]) + 0.01*distn(generator);
		xydata<<x[i]<<' '<<y[i]<<'\n'; 

	}
 
	xydata.close();
	return 0;
}	

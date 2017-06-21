#include<iostream>
#include<fstream>
#include<cmath>
#include<random>
using namespace std;
void gpr(double **x, double *y, double sigmasq, double *xtest)
{
	std::cout<<x[9][0];

}
void cov(double **x)
{
	std::cout<<x[0][0];
}
int main()
{
	int ns = 100;
	double **x = new double *[10];
	double *y = new double [2];
	for(int i = 0;i<10; i++)
	{
		x[i] = new double [2];
	}
	gpr(x,y,0.5,y);
	/*std::ofstream xydata;
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
	*/
	return 0;
}	

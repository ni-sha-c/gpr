#include<iostream>
#include<fstream>
#include<cmath>
#include<random>
using namespace std;
void gpr(double **x, double *y, double sigmasq, double *xtest)
{
	int n_train, m;
	std::cout<<sizeof(*x)<<'\n';	
	//for(int i=0; i < n_train; i++)
	//	for(int j=0; j < m; j++)
	//		L[i][j] = K[i][j] + sigmasq;
		


}
void cov(double **x)
{
	std::cout<<x[0][0];
}
int main()
{
	
	int ns = 100;
	double **x;
	double *y;
	double a,b;
	int count;
	int n_in = 0, m = 0;
	//Assume data of the form
	// x_i[0] x_i[1] ... x_i[m-1] y_i \newline, for 1 \leq i \leq n_in
	// where n_in is the number of training points and m is the input dimension.
	std::ifstream infile;
	infile.open("xydata.dat");


	
	
    std::string line;
	char linei;
   	bool alpha = true;

    while (std::getline(infile, line))
    {
	    ++n_in;
		if(n_in==1)
			for(char c : line)
				if (c==' ') 
					++m;
		
	}

	infile.close();			
	infile.clear();
	infile.open("xydata.dat");
		
	
    x = new double *[n_in];
	y = new double [n_in];
	
	for(int i=0;i<n_in;i++)
	{
		x[i] = new double [m];	
	}

	//populate training data
	 
	for(int i=0;i<n_in;i++)
	{
		for(int j=0;j<m;j++)
		{
			infile >> x[i][j];
		}
		infile >> y[i];
	}

	infile.close();		
	gpr(x,y,1.0,y);
		
	return 0;
}	

#include "RungeKutta4.h"
#include <math.h>
#include <iostream>

RungeKutta4::RungeKutta4(const double N, const double h, const double y0, const double t0)
  : n_(N),
    h_(h),
    t0_(t0),
    y0_(y0)
{
}

void RungeKutta4::DoRungeKutta4()
{
  

	////Ititial value given
	//double y0 = 0.5;
	//double t0 = 1.0;

	//Declaraiton/Initialization. Variables will be changed, so do not use CONST
	double k1 = 0.0, k2 = 0.0, k3 = 0.0, k4 = 0.0;
	double t = 0.0, t2 = 0.0;
	double y = 0.0;

	int n;
	for(n = 0; n < n_; n++)
	{
		t = t + n * h_;
		t2 = t0_ + h_;
		k1 = h_ * f(t0_, y0_);
		k2 = h_ * f(t2, y0_ + (1/2) * k1);
		k3 = h_ * f(t2, y0_ + (1/2) * k2);
		k4 = h_ * f(t, y0_ + k3);
		y = y0_ + (1.0/6.0)*(k1 + 2.0 * k2 + 2.0 * k3 + k4);
		y0_ = y;
		t0_ = t;
		printf("%f\n", y0);
	}
}

double RungeKutta4::f(double t, double y)
{
	double log_result = 0.0;
	double result = 0.0;
	
	log_result = log(y);
	result = -y * log_result;
	return result;
}

RungeKutta4::~RungeKutta4()
{
}

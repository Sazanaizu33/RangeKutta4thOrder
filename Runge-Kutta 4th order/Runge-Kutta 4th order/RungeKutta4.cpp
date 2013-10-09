#include "RungeKutta4.h"
#include <math.h>
#include <iostream>

RungeKutta4::RungeKutta4()
{
}

RungeKutta4::~RungeKutta4()
{
}

double RungeKutta4::DoRungeKutta4(const double N, const double h, const double yInitValue, const double tInitValue)
{
	//Declaration/Initialization. Variables will be changed, so do NOT use CONST
	double k1 = 0.0; 
  double k2 = 0.0; 
  double k3 = 0.0; 
  double k4 = 0.0;
	double t = 0.0; 
  double t2 = 0.0;
	double y = 0.0;
  double y0 = yInitValue;
  double t0 = tInitValue;

	int n;
	for(n = 0; n < N; n++)
	{
		t = t + n * h;
		t2 = t0 + h;
		k1 = h * f(t0, y0);
		k2 = h * f(t2, y0 + (1/2) * k1);
		k3 = h * f(t2, y0 + (1/2) * k2);
		k4 = h * f(t, y0 + k3);
		y = y0 + (1.0/6.0)*(k1 + 2.0 * k2 + 2.0 * k3 + k4);
		y0 = y;
		t0 = t;
		printf("%f\n", y0);
	}

  return y0;
}

double RungeKutta4::f(const double t, const double y)
{
	double log_result = 0.0;
	double result = 0.0;
	
	log_result = log(y);
	result = -y * log_result;
	return result;
}


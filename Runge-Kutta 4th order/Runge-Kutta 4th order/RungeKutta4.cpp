#include <math.h>
#include <iostream>
#include "RungeKutta4.h"

RungeKutta4::RungeKutta4()
{
}

RungeKutta4::~RungeKutta4()
{
}

/*This function is responsible for the 4th-order Runge-Kutta method. It returns the calculated value at each t.*/
double RungeKutta4::DoRungeKutta4(const double N, const double h, const double yInitValue, const double tInitValue)
{
	//Declaration and Initialization. Variables will be changed, so do NOT use CONST
	double k1 = 0.0; 
  double k2 = 0.0; 
  double k3 = 0.0; 
  double k4 = 0.0;
	double t = 0.0; 
  double t2 = 0.0;
	double y = 0.0;
  double y0 = yInitValue;
  double t0 = tInitValue;

	int j;
	for(j = 1; j <= N; j++)
	{
		t = j * h;
		t2 = t0 + 0.5 * h;
		k1 = f(t0, y0);
		k2 = f(t2, y0 + 0.5 * k1);
		k3 = f(t2, y0 + 0.5 * k2);
		k4 = f(t0 + h, y0 + k3);
		y = y0 + (h/6.0)*(k1 + 2.0 * (k2 + k3) + k4);
    y0 = y;
		t0 = t;
    printf("The approximate value at t = %0.3f is %0.14f\n", t0, y0);
		
	}

  return y0;
}

/*This function is responsible for generating equation to be used in the Runge-Kutta method above.*/
double RungeKutta4::f(const double t, const double y)
{
	double log_result = 0.0;
	double result = 0.0;
	
	log_result = log(y);
	result = -y * log_result;
	return result;
}


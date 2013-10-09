#include<iostream>
#include "RungeKutta4.h"

#define N 10 //Upperbound for incrementaion
#define h 1.0/2.0 //Number of distance btw points
#define y0 0.5
#define t0 1.0


void main()
{
	RungeKutta4 obj(N, h, y0, t0);
	obj.DoRungeKutta4();

	system("PAUSE");
}
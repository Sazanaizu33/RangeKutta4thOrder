#include <iostream>
#include "RungeKutta4.h"

#define N 10 //Upper bound for incrementation
#define h 1.0/2.0 //the distance between points
#define yInitValue 0.5
#define tInitValue 1.0

int main(int argc, char* argv[])
{
  double result = 0.0;
	result = RungeKutta4 ::DoRungeKutta4(N, h, yInitValue, tInitValue);
  printf("Final result is: %f\n", result);
	system("PAUSE");

  return 0;
}
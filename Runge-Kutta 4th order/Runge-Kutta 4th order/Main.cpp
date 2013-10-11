#include <iostream>
#include "RungeKutta4.h"

int main(int argc, char* argv[])
{
  /*The following variables and equation to be solved are from the book 
    "An Introduction to Numerical Methods and Analysis", Page 356*/
  double upperBound = 4.0; //Upper bound for incrementation. Larger the value is, more precise result we can get.
  double h = 1/upperBound; //the distance between points. Smaller the distance is, more precise result we can get.

  //Initial values have to be given to solve.
  double yInitValue = 0.5;
  double tInitValue = 0.0;

  double result = 0.0;
	result = RungeKutta4 ::DoRungeKutta4(upperBound, h, yInitValue, tInitValue);
  printf("Final result is: %0.14f\n", result);

	system("PAUSE");

  return 0;
}
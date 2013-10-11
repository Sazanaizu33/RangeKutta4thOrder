#ifndef RUNGEKUTTA4_H
#define RUNGEKUTTA4_H

/*Class description*/
/*This is the fourth-order Runge-Kutta method which calculates the approximate value of
  the unsolvable equations. In this class, this method solves following equation:
                         y' = -y*ln(y)
  The equation can be changed by modifying the function f().*/
class RungeKutta4
{
public:
	RungeKutta4();
  ~RungeKutta4();
	static double DoRungeKutta4(const double N, const double h, const double yInitValue, const double tInitValue);
	static double f(const double t, const double y);
};

#endif RUNGEKUTTA4_H

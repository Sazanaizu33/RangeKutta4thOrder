#ifndef RUNGEKUTTA4_H
#define RUNGEKUTTA4_H

class RungeKutta4
{
public:
	RungeKutta4();
  ~RungeKutta4();
	static double DoRungeKutta4(const double N, const double h, const double yInitValue, const double tInitValue);
	static double f(const double t, const double y);
};

#endif RUNGEKUTTA4_H

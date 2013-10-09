#ifndef RUNGEKUTTA4_H
#define RUNGEKUTTA4_H

class RungeKutta4
{
public:
	RungeKutta4(const double N, const double h, const double y0, const double t0);
  ~RungeKutta4();
	void DoRungeKutta4();
	double f(double t, double y);
	
private:
  const double n_;
  const double h_;
  const double y0_;
  const double t0_;
};

#endif RUNGEKUTTA4_H

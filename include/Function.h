#ifndef FUNCTION_H
#define FUNCTION_H

#include "Point.h"
#include <iostream>
#include <ostream>

class Function {
public:
  class CritPointNotFound {};

  Function(int k = 0, Point pk = {});

  virtual double f(Point p);
  virtual double Gradient_x(Point p);
  virtual double Gradient_y(Point p);
  double CurrentError(double f_in_pk, double min_value);
  Point GradientDescent(Point p0, double f_in_p0);

private:
  int k;
  Point pk;
  double GradientNorm(double gradient_x_in_p, double gradient_y_in_p);
  Point NextStep(Point pk, double gradient_x_in_pk, double gradient_y_in_pk,
                 double a);
  std::ostream &toString();
};

#endif

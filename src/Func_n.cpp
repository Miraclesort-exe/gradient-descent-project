#include "../include/Func_n.h"

// f1(x, y) = (x^2 + y^2) / 2
double Func_1::f(Point p) const
{
  return (p.GetX() * p.GetX() + p.GetY() * p.GetY()) / 2.0;
}
double Func_1::Gradient_x(Point p) const
{
  return p.GetX();
}
double Func_1::Gradient_y(Point p) const
{
  return p.GetY();
}

// f3(x, y) =
double Func_3::f(Point p) const
{
  return 0;
}
double Func_3::Gradient_x(Point p) const
{
  return p.GetX();
}
double Func_3::Gradient_y(Point p) const
{
  return p.GetY();
}

// f5(x, y) =
double Func_5::f(Point p) const
{
  return 0;
}
double Func_5::Gradient_x(Point p) const
{
  return p.GetX();
}
double Func_5::Gradient_y(Point p) const
{
  return p.GetY();
}

// f7(x, y) =
double Func_7::f(Point p) const
{
  return 0;
}
double Func_7::Gradient_x(Point p) const
{
  return p.GetX();
}
double Func_7::Gradient_y(Point p) const
{
  return p.GetY();
}

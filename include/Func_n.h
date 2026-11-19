#ifndef FUNC_N_H
#define FUNC_N_H
#include "Function.h"

//In questo header vengono definite 8 sottoclassi che si rifanno alle funzioni fornite dalle specifiche del progetto
//Ogni classe sovvrascrive i 3 metodi "virtual" di Function

class Func_1 : public Function                      
{
  double f(Point p) const override;
  double Gradient_x(Point p) const override;
  double Gradient_y(Point p) const override;
};

class Func_2 : public Function                  // f2(x, y) = (x^2 + 16y^2)/2
{
  double f(Point p) const override;
  double Gradient_x(Point p) const override;    // f2'(x)= x
  double Gradient_y(Point p) const override;    // f2'(y)= 16y
};

class Func_3 : public Function
{
  double f(Point p) const override;
  double Gradient_x(Point p) const override;    
  double Gradient_y(Point p) const override;
};

class Func_4 : public Function                  // f4(x, y) = [x^2 -1]^2 + [(x-1)^2]/5 + y^2
{
  double f(Point p) const override;
  double Gradient_x(Point p) const override;    // f4'(x)= 4x(x^2 -1)+ (2X -1)/5
  double Gradient_y(Point p) const override;    // f4'(y) = y
};

class Func_5 : public Function
{
  double f(Point p) const override;
  double Gradient_x(Point p) const override;
  double Gradient_y(Point p) const override;
};

class Func_6 : public Function                  // f6(x, y) = ln(1+ x^2 + y^2)
{
  double f(Point p) const override;
  double Gradient_x(Point p) const override;    // f6'(x) = 2x/(1+ x^2 + y^2)
  double Gradient_y(Point p) const override;    // f6'(y) = 2y/(1+ x^2 + y^2)
};

class Func_7 : public Function
{
  double f(Point p) const override;
  double Gradient_x(Point p) const override;
  double Gradient_y(Point p) const override;
};

class Func_8 : public Function                  // f8(x, y) = 2 -cos(pi*x) -cos(pi*y)
{
  double f(Point p) const override;
  double Gradient_x(Point p) const override;    // f8'(x)= pi * sin( pi* x)
  double Gradient_y(Point p) const override;    // f8'(y)= pi * sin( pi* y)
};

#endif

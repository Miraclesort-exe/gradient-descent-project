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

class Func_2 : public Function
{
  double f(Point p) const override;
  double Gradient_x(Point p) const override;
  double Gradient_y(Point p) const override;
};

class Func_3 : public Function
{
  double f(Point p) const override;
  double Gradient_x(Point p) const override;
  double Gradient_y(Point p) const override;
};

class Func_4 : public Function
{
  double f(Point p) const override;
  double Gradient_x(Point p) const override;
  double Gradient_y(Point p) const override;
};

class Func_5 : public Function
{
  double f(Point p) const override;
  double Gradient_x(Point p) const override;
  double Gradient_y(Point p) const override;
};

class Func_6 : public Function
{
  double f(Point p) const override;
  double Gradient_x(Point p) const override;
  double Gradient_y(Point p) const override;
};

class Func_7 : public Function
{
  double f(Point p) const override;
  double Gradient_x(Point p) const override;
  double Gradient_y(Point p) const override;
};

class Func_8 : public Function
{
  double f(Point p) const override;
  double Gradient_x(Point p) const override;
  double Gradient_y(Point p) const override;
};

#endif

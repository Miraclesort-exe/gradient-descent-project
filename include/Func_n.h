#ifndef FUNC_N_H
#define FUNC_N_H
#include "Function.h"

//In questo header vengono definite 8 sottoclassi che si rifanno alle funzioni fornite dalle specifiche del progetto
//Ogni classe sovvrascrive i 3 metodi "virtual" di Function

class Func_1 : public Function                      
{
public:
    Func_1();                                   
    double f(Point p) const override;               //f1(x,y) = (x^2 +y^2)/2
    double Gradient_x(Point p) const override;      //f1'(x)= x
    double Gradient_y(Point p) const override;      //f1'(y)= y
};

class Func_2 : public Function                  
{
public:
    Func_2();
    double f(Point p) const override;               // f2(x, y) = (x^2 + 16y^2)/2
    double Gradient_x(Point p) const override;      // f2'(x)= x
    double Gradient_y(Point p) const override;      // f2'(y)= 16y
};

class Func_3 : public Function
{
public:
    Func_3();
    double f(Point p) const override;               // f3(x, y) = (x^2 -1)^2 +y^2
    double Gradient_x(Point p) const override;      // f3'(x) = 4x(x^2 - 1)
    double Gradient_y(Point p) const override;      // f3'(y) = 2y
};

class Func_4 : public Function                  
{
public:
    Func_4();
    double f(Point p) const override;               // f4(x, y) = [x^2 -1]^2 + [(x-1)^2]/5 + y^2
    double Gradient_x(Point p) const override;      // f4'(x)= 4x(x^2 -1)+ (2X -1)/5
    double Gradient_y(Point p) const override;      // f4'(y) = y
};

class Func_5 : public Function
{
public:
    Func_5();
    double f(Point p) const override;               // f5(x, y) = 4 * sinh^2(x / 2) + y^2
    double Gradient_x(Point p) const override;      // f5'(x) = 4 * sinh(x/2) * cosh(x/2)
    double Gradient_y(Point p) const override;      // f5'(y) = 2y
};

class Func_6 : public Function                  
{
public:
    Func_6();
    double f(Point p) const override;               // f6(x, y) = ln(1+ x^2 + y^2)
    double Gradient_x(Point p) const override;      // f6'(x) = 2x/(1+ x^2 + y^2)
    double Gradient_y(Point p) const override;      // f6'(y) = 2y/(1+ x^2 + y^2)
};

class Func_7 : public Function
{
public:
    Func_7();
    double f(Point p) const override;               // f7(x, y) = 1 - e^{-(x^2 + y^2)}
    double Gradient_x(Point p) const override;      // f7'(x) = 2x * e^{-(x^2 + y^2)}
    double Gradient_y(Point p) const override;      // f7'(y) = 2y * e^{-(x^2 + y^2)}
};

class Func_8 : public Function                  
{
public:
    Func_8();
    double f(Point p) const override;               // f8(x, y) = 2 -cos(pi*x) -cos(pi*y)
    double Gradient_x(Point p) const override;      // f8'(x)= pi * sin( pi* x)
    double Gradient_y(Point p) const override;      // f8'(y)= pi * sin( pi* y)
};

#endif

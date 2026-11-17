#ifndef FUNCTION_H
#define FUNCTION_H
#include "Point.h"

class Function
{
    public:
        Function(int k = 0, Point pk);
        double f(Point p);
        double Gradient_x(Point p);
        double Gradient_y(Point p);
        double CurrentError(double f_in_pk, double min_value);
        Point GradientDescent(Point p0, double f_in_p0);
    private:
        int k;
        Point pk;
        double GradientNorm(double gradient_x_in_p, double gradient_y_in_p);
        Point NextStep(Point pk, double gradient_x_in_pk, double gradient_y_in_pk, double a); // da capire cosa intendono i prof con pk - a∇f(pk), perché ∇f è un vettore
};

#endif
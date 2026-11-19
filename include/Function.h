#ifndef FUNCTION_H
#define FUNCTION_H

#include "Point.h"
#include <iostream>
#include <ostream>

class Function
{
  public:
    class CritPointNotFound {};
    // costruttore
    Function(int k = 0, Point pk = {});
    double CurrentError(double f_in_pk, double min_value);
    Point GradientDescent(Point p0, double f_in_p0);
    
    
    // funzioni che vanno = 0 cosi' da non poter essere
    // invocare dalla classe padre
    virtual double f(Point p) const = 0;  // calcolo della funzione nel punto, nel caso sia chiamata direttamente dall'utente da come risultato 0
    virtual double Gradient_x(Point p) const = 0;  // componente x del gradiente nel punto
    virtual double Gradient_y(Point p) const = 0;  // componente y del gradiente nel punto
    // funzioni comuni a tutte e 8 le funzioni
    

  private:
    int k;
    Point pk;
    double GradientNorm(double gradient_x_in_p, double gradient_y_in_p);
    Point NextStep(Point pk, double gradient_x_in_pk, double gradient_y_in_pk, double a);
    std::ostream &toString();
};

#endif

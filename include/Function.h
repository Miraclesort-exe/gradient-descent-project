#ifndef FUNCTION_H
#define FUNCTION_H

#include "Point.h"
#include <iostream>
#include <ostream>

class Function
{
  public:
    class CritPointNotFound {};                                 // classe di supporto in caso GradientDescent non trovi un punto critico
    // costruttore
    Function(int k = 0, Point pk = {}); // costruttore della funzione (k: numero corrente iterazione GradientDescent, pk: punto di partenza per GradientDescent)

    double CurrentError(double f_in_pk, double min_value);      // calcolo errore nel punto corrente
    Point GradientDescent(Point p0, double f_in_p0);            // algoritmo di discesa del gradiente per trovare il minimo
    
    
    // funzioni che vanno = 0 cosi' da non poter essere
    // invocare dalla classe padre
    virtual double f(Point p) const;  // calcolo della funzione nel punto, nel caso sia chiamata direttamente dall'utente da come risultato 0
    virtual double Gradient_x(Point p) const;  // componente x del gradiente nel punto
    virtual double Gradient_y(Point p) const;  // componente y del gradiente nel punto
    // funzioni comuni a tutte e 8 le funzioni
    

  private:
    int k;
    Point pk;
    double GradientNorm(double gradient_x_in_p, double gradient_y_in_p);                    // norma del gradiente per calcolo GradientDescent
    Point NextStep(Point pk, double gradient_x_in_pk, double gradient_y_in_pk, double a);   // passo successivo per GradientDescent (ovvero il prossimo punto da controllare)
    std::ostream &toString();                                                               // toString come da specifiche
};

#endif

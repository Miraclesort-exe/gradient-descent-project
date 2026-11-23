#ifndef FUNCTION_H
#define FUNCTION_H

#include "Point.h"
#include <iostream>
#include <ostream>

class Function
{
  public:
    class CritPointNotFoundException {}; // eccezione per GradientDescent
    
    // gestione degli oggetti
    Function(double expected_min = 0); // costruttore della funzione
    Function(Function& f) = delete; // costruttore di copia disabilitato
    Function& operator=(const Function&) = delete; // assegnamento di copia disabilitato
    virtual ~Function() = default; // in caso venisse creato Function* f = new Function

    // ricerca dei punti critici
    double CurrentError(double f_in_pk); // errore nel punto corrente
    Point GradientDescent(Point p0, int max_iterations = 100000, double tolerance = 0.00001, double step = 0.25);
    
    // funzioni e gradienti
    virtual double f(Point p) const = 0; // funzione nel punto
    virtual double Gradient_x(Point p) const = 0; // componente x del gradiente nel punto
    virtual double Gradient_y(Point p) const = 0; // componente y del gradiente nel punto
    

  private:
    // dati membro
    int k = 0;
    Point pk;
    double expected_min;

    double GradientNorm(double gradient_x_in_p, double gradient_y_in_p);                    // norma del gradiente
    Point NextStep(const Point& pk, double gradient_x_in_pk, double gradient_y_in_pk, double a);   // punto successivo per GradientDescent
    double MinValue() {return expected_min;}
    std::ostream& toString();
};

double Pi(); // alternativa c++17 a std::numbers::pi (solo c++20)

#endif
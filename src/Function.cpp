#include "../include/Function.h"
#include <cmath>

Function::Function(int k, Point pk)
  : k{k}, pk{pk}
{}
// le 3 funzioni per ogni classe func_n
double Function::f(Point pk) const
{
  return 0.0;
}
double Function::Gradient_x(Point p) const
{
  return 0.0;
}
double Function::Gradient_y(Point p) const
{
  return 0.0;
}

// funzioni comuni da definire qui'
double Function::CurrentError(double f_in_pk, double min_value)
{
  return f_in_pk - min_value;
}

// credo che mi da' un loop infinito se la richiamo :(
// ho messo una prova di una mia Func_1 commentata nel main
Point Function::GradientDescent(Point p0, double f_in_p0)
{
  int max_iterations = 10000; // numero massimo possibile di iterazioni, da decidere
  double tolerance = 0.00001; // tolleranza per il punto quasi-critico, da decidere
  double a = 0.25;
  while (k <= max_iterations)
  {
    if (GradientNorm(Gradient_x(p0), Gradient_y(p0)) < tolerance)
    {
      toString();
      return p0;
    }
    else
    {
      p0 = NextStep(p0, Gradient_x(p0), Gradient_y(p0), a);
      if (k % 10 == 0)
      {
        toString();
      }
      ++k;
    }
  }
  throw CritPointNotFound();
}

  double Function::GradientNorm(double gradient_x_in_p, double gradient_y_in_p)
{
  return sqrt(pow(gradient_x_in_p, 2) + pow(gradient_y_in_p, 2));
}

Point Function::NextStep(Point pk, double gradient_x_in_pk, double gradient_y_in_pk, double a)
{
  double new_x = pk.GetX() - (a * gradient_x_in_pk);
  double new_y = pk.GetY() - (a * gradient_y_in_pk);
  Point next_p{new_x, new_y};
  return next_p;
}

std::ostream &Function::toString()
{
  return std::cout << "Numero iterazioni: " << k << '\t'
                   << "Passo corrente: " << pk << '\t'
                   << "Funzione nel passo corrente: " << f(pk) << '\t'
                   << "Errore corrente: "
                   << CurrentError(f(pk), f(GradientDescent(pk, f(pk)))) << '\t' // possibile problema di stack overflow
                   << "Norma del gradiente nel passo corrente: "
                   << GradientNorm(Gradient_x(pk), Gradient_y(pk));
}

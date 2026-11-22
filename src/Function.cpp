#include "../include/Function.h"
#include <cmath>

Function::Function(double min_value)     //costruttore
  : min_value{min_value}
{}

double Function::CurrentError(double f_in_pk)
            {
            return f_in_pk - MinValue();
            }

Point Function::GradientDescent(Point p0, int max_iterations, double tolerance, double a)
{
  k = 0;
  while (k < max_iterations)
  {
    pk = p0;
    if (GradientNorm(Gradient_x(p0), Gradient_y(p0)) < tolerance)       // si ferma se è nella tolleranza
    {
      std::cout << "Trovato un possibile punto critico: ";
      toString();                                                   // e chiama toString
      return p0;
    }
    else
    {
      p0 = NextStep(p0, Gradient_x(p0), Gradient_y(p0), a);
      if (k % 10 == 0)
      {
        toString(); // toString viene chiamato comunque ogni 10 iterazioni
      }
      ++k;
    }
  }
  toString();
  throw CritPointNotFound();
}

double Function::GradientNorm(double gradient_x_in_p, double gradient_y_in_p)
{
  return sqrt(std::pow(gradient_x_in_p, 2) + std::pow(gradient_y_in_p, 2));
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
                   << CurrentError(f(pk)) << '\t'
                   << "Norma del gradiente nel passo corrente: "
                   << GradientNorm(Gradient_x(pk), Gradient_y(pk)) << '\n';
}

double Pi()
{
  return atan(1) * 4;
}
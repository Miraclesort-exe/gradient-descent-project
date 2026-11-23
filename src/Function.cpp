#include <cmath>
#include "../include/Function.h"

Function::Function(double expected_min)     //costruttore
  : expected_min{expected_min}
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
      std::cout << "Trovato un possibile punto critico: " << '\n';
      toString();                                                   // e chiama toString
      return p0;
    }
    p0 = NextStep(p0, Gradient_x(p0), Gradient_y(p0), a);
    if (k % 10 == 0)
    {
      toString(); // toString viene chiamato comunque ogni 10 iterazioni
    }
    ++k;
  }
  pk = p0;
  toString();
  throw CritPointNotFound();
}

double Function::GradientNorm(double gradient_x_in_p, double gradient_y_in_p)
{
  return sqrt(std::pow(gradient_x_in_p, 2) + std::pow(gradient_y_in_p, 2));
}

Point Function::NextStep(Point pk, double gradient_x_in_pk, double gradient_y_in_pk, double step)
{
  double new_x = pk.GetX() - (step * gradient_x_in_pk);
  double new_y = pk.GetY() - (step * gradient_y_in_pk);
  Point next_p{new_x, new_y};
  return next_p;
}

std::ostream &Function::toString()
{
  return std::cout << "---------------------------------" << '\n'
                   << "Numero iterazioni: " << k << '\n'
                   << "Passo corrente: " << pk << '\n'
                   << "Funzione nel passo corrente: " << f(pk) << '\n'
                   << "Errore corrente: "
                   << CurrentError(f(pk)) << '\n'
                   << "Norma del gradiente nel passo corrente: "
                   << GradientNorm(Gradient_x(pk), Gradient_y(pk)) << '\n'
                   << "---------------------------------" << '\n';
}

double Pi()
{
  return atan(1) * 4;
}
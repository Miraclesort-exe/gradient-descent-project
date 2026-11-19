#include "../include/Func_n.h"
#include <iostream>

int main()
{
  std::cout << "prova build\n";
  std::cout << "prova funzione 1\n";
  Function *f1 = new Func_1();

  // leggere Function.cpp riga 17 (0_-)
  // std::cout << f1->GradientDescent(Point(1, 2), 5.0);
  return 0;
}

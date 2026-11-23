#include "../include/Func_n.h"
#include <iostream>

void test_f(Function &fun, int num_f, Point partenza_p);

int main() {
    Func_1 f1;
    Func_2 f2;
    Func_3 f3;
    Func_4 f4;
    Func_5 f5;
    Func_6 f6;
    Func_7 f7;
    Func_8 f8;
  
    test_f(f1, 1, Point{1000, 1000});
    test_f(f2, 2, Point{1000, 1000});
    test_f(f3, 3, Point{1000, 1000});
    test_f(f4, 4, Point{1000, 1000});
    test_f(f5, 5, Point{1000, 1000});
    test_f(f6, 6, Point{1000, 1000});
    test_f(f7, 7, Point{1000, 1000});
    test_f(f8, 8, Point{1000, 1000});
  
    return 0;
}

void test_f(Function &fun, int num_f, Point partenza_p)
{
    try
    {
        std::cout << "Test della funzione n°" << num_f << " con a = 0.25\n";
        std::cout << "\nFunzione nel punto " << partenza_p << ": "
                  << fun.f(partenza_p) << '\n'
                  << "Derivata parziale in x nel punto " << partenza_p << ": "
                  << fun.Gradient_x(partenza_p) << '\n'
                  << "Derivata parziale in y nel punto " << partenza_p << ": "
                  << fun.Gradient_y(partenza_p) << '\n'
                  << "Ricerca di un possibile punto critico a partire da "
                  << partenza_p << ": "
                  << fun.GradientDescent(partenza_p, 100000, 0.00001, 0.25)
                  << "\n\n";
    }
    catch (const Function::CritPointNotFoundException &)
    {
        std::cerr << "Non sono stati trovati punti critici per la funzione f1\n\n";
    }

    try
    {
        std::cout << "Test della funzione n°" << num_f << " con a = 0.99\n";
        std::cout << "\nFunzione nel punto " << partenza_p << ": "
                  << fun.f(partenza_p) << '\n'
                  << "Derivata parziale in x nel punto " << partenza_p << ": "
                  << fun.Gradient_x(partenza_p) << '\n'
                  << "Derivata parziale in y nel punto " << partenza_p << ": "
                  << fun.Gradient_y(partenza_p) << '\n'
                  << "Ricerca di un possibile punto critico a partire da "
                  << partenza_p << ": "
                  << fun.GradientDescent(partenza_p, 100, 0.00001, 0.99) << "\n\n";
    }
    catch (const Function::CritPointNotFoundException &) {
        std::cerr << "Non sono stati trovati punti critici per la funzione f1\n\n";
    }
}

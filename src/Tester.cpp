#include "../include/Func_n.h"
#include <iostream>

void test_f(Function &fun, int num_f, Point partenza_p, double given_a, double chosen_a);

int main() {
    Func_1 f1;
    Func_2 f2;
    Func_3 f3;
    Func_4 f4;
    Func_5 f5;
    Func_6 f6;
    Func_7 f7;
    Func_8 f8;
  
    test_f(f1, 1, Point{-3, 2}, 0.25, 0.99);
    test_f(f2, 2, Point{-2, 4}, 0.08, 0.50);
    test_f(f3, 3, Point{-1.2, 0.8}, 0.05, 0.1);
    test_f(f4, 4, Point{-1.5, 0.1}, 0.05, 0.2);
    test_f(f5, 5, Point{-1, 1}, 0.15, 0.45);
    test_f(f6, 6, Point{-2, 1}, 0.3, 0.7);
    test_f(f7, 7, Point{-0.3, 1.2}, 0.25, 0.93);
    test_f(f8, 8, Point{-2, 2}, 0.1, 0.4);
  
    return 0;
}

void test_f(Function &fun, int num_f, Point partenza_p, double given_a, double chosen_a)
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
                  << fun.GradientDescent(partenza_p, 100000, 0.00001, given_a)
                  << "\n\n";
    }
    catch (const Function::CritPointNotFoundException &)
    {
        std::cerr << "Non sono stati trovati punti critici per la funzione f" << num_f << "\n\n";
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
                  << fun.GradientDescent(partenza_p, 100, 0.00001, chosen_a) << "\n\n";
    }
    catch (const Function::CritPointNotFoundException &) {
        std::cerr << "Non sono stati trovati punti critici per la funzione f" << num_f << "\n\n";
    }
}

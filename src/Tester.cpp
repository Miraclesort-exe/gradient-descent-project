#include <iostream>
#include <ostream>

#include "../include/Func_n.h"

int main() {
    std::cout<< "Test della funzione n°1 con a = 0.25" << '\n';
    Point p{1000, 1000};
    Func_1 f1;
    std::cout << "Funzione nel punto " << p << ": " << f1.f(p) << '\n'
              << "Derivata parziale in x nel punto " << p << ": " << f1.Gradient_x(p) << '\n'
              << "Derivata parziale in y nel punto " << p << ": "<< f1.Gradient_y(p) << '\n'
              << "Ricerca di un possibile punto critico a partire da " << p << ": "<< f1.GradientDescent(p, 100000, 0.00001, 0.25);

    std::cout<< "Test della funzione n°1 con a = 0.99" << '\n';
    std::cout << "Funzione nel punto " << p << ": " << f1.f(p) << '\n'
              << "Derivata parziale in x nel punto " << p << ": " << f1.Gradient_x(p) << '\n'
              << "Derivata parziale in y nel punto " << p << ": "<< f1.Gradient_y(p) << '\n'
              << "Ricerca di un possibile punto critico a partire da " << p << ": "<< f1.GradientDescent(p, 100, 0.00001, 0.99);
    
    return 0;
}

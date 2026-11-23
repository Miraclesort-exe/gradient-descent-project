#include <iostream>
#include <ostream>

#include "../include/Func_n.h"

int main() {
    std::cout<< "Test della funzione n°1";
    Point p{15, 15};
    Func_1 f1;
    std::cout << "Funzione nel punto (0,0): " << f1.f(p) << '\n'
              << "Derivata parziale in x nel punto (0,0): " << f1.Gradient_x(p) << '\n'
              << "Derivata parziale in y nel punto (0,0): " << f1.Gradient_y(p) << '\n'
              << "Ricerca di un possibile punto critico a partire da (0,0):" << f1.GradientDescent(p, 100000, 0.00001, 0.25);
    
    return 0;
}

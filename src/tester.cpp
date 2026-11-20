#include "../include/Func_n.h"
#include <iostream>
#include <string>
#include <sstream>
#include "../include/Point.h"
#include "../src/Point.cpp"


class TestError{};

int main()
{
    std::cout << "prova aggiornata a build branch fed.5.0\n";
    
    std::cout << "TEST CLASSE POINT\n";
    
    std::cout << "prova costruttori oggetto Point fatta 4 volte: senza parametri, 1 parametro, 2 parametri, prendendo come input il terzo oggetto Point \n";
    try{
        Point punto1();
        Point punto2(5);
        Point punto3(100, 500);
        Point punto4(punto3);
        
        std::cout << "creazioni riuscite\n";
        //delete data by scope closing
    
    }
    catch(Point::PointNotExpected() e){
        std::cout << "creazione oggetti Point NON riuscita\n";
    }
    std::cout << "----------------------------------------------------------------------------\n";
    std::cout << "Creazione oggetto Point che verrà usato nei prossimi test valori x=5.0, y=2.0\n";
    Point punto(5.0, 2.0);
    std::cout << "----------------------------------------------------------------------------\n";
    std::cout << "Prova funzioni GetX() e GetY()\n";
    try{
        double x= punto.GetX();
        if(x=! 5.0)
        {
            throw TestError();
        }
        double y= punto.GetY();
        if(y=! 2.0)
        {
            throw TestError();
        }
        std::cout << "Operazioni riuscite\n";
        //delete delle variabili x e y fatta da chiusura scope
    }
    catch(TestError e)
    {
        std::cout << "funzione GetX o GetY NON riuscite\n";
    }

    std::cout << "----------------------------------------------------------------------------\n";
    /* non ho avuto il tempo di debuggare
    
    std::cout << "Prova funzione helper operator<<\n";
    try{
        std::ostringstream result << punto;
        std::string expected = "(5.0,2.0)";
        if(result != expected)
        {
            throw TestError();
        }
        else
        {
            std::cout << "operator<< riuscito\n";
        }
    }
    catch
    {
                    std::cout << "operator<< NON riuscito\n";
    }
    std::cout << "----------------------------------------------------------------------------\n";
    
    */

  return 0;
};
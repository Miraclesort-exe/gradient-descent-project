#include "../include/Func_n.h"
#include <iostream>
#include <string>


int main()
{
    std::cout << "prova aggiornata a build branch fed.5.0\n";
    
    std::cout << "TEST CLASSE POINT\n";
    
    std::cout << "prova creazione oggetto Point 4 volte: senza parametri, 1 parametro, 2 parametri, prendendo come input il terzo oggetto Point \n";
    try{
        Point punto1= new Point();
        Point punto2= new Point(5);
        Point punto3= new Point(100, 500);
        Point punto4= new Point(punto3);
        
        std::cout << "creazioni riuscite\n";
        //delete data by scope closing
    
    }
    catch(Point::PointNotExpected() e){
        std::cout << "creazione oggetti Point non riuscita\n";
    }
    std::cout << "----------------------------------------------------------------------------\n";
    std::cout << "Creazione oggetto Point che verrà usato nei prossimi test valori x=5.0, y=2.0\n";
    Point punto= new Point(5.0, 2.0);
    std::cout << "----------------------------------------------------------------------------\n";
    std::cout << "Prova funzioni GetX() e GetY()\n";
    try{
        x= punto.GetX();
        if(x=! 5.0)
        {
        //    throw
        }
        y= punto.GetY();
    }

    /*
    std::cout << "----------------------------------------------------------------------------\n";
    std::cout << "Prova funzione operator<<\n";

    std::cout << punto;
    
    
    std::cout << "----------------------------------------------------------------------------\n";
    
    */

  return 0;
}
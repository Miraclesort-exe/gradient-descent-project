#ifndef POINT_H
#define POINT_H
#include <ostream>

class Point
{
    public:
        Point(double x, double y);
        double GetX() const {return x;}
        double GetY() const {return y;}
    private:
        double x, y;
};
std::ostream& operator<<(std::ostream& os, const Point& p); // siamo costretti a fare l'overloading come helper function

#endif
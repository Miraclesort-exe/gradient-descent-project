#include "../include/Point.h"

Point::Point(double x = 0, double y = 0) 
  : x{x}, y{y} 
{}

Point::Point(const Point& p)
  : x{p.GetX()}, y{p.GetY()}
{}

std::ostream &operator<<(std::ostream &os, const Point &p) {
  return os << "(" << p.GetX() << "," << p.GetY() << ")";
}

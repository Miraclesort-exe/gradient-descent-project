#include "../include/Point.h"

Point::Point(double x, double y)
  : x{x}, y{y}
{}

std::ostream &operator<<(std::ostream &os, const Point &p)
{
  return os << "(" << p.GetX() << "," << p.GetY() << ")";
}

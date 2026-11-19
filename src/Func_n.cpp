#include "../include/Func_n.h"
#include <cmath>
#include <numbers>
// f1(x, y) = (x^2 + y^2) / 2
double Func_1::f(Point p) const
{
    return (p.GetX() * p.GetX() + p.GetY() * p.GetY()) / 2.0;
}
double Func_1::Gradient_x(Point p) const
{
    return p.GetX();
}
double Func_1::Gradient_y(Point p) const
{
    return p.GetY();
}

//---------------------------------------------------------------------
// f2(x, y) = (x^2 + 16y^2)/2
double Func_2::f(Point p) const
{
    double res = (std::pow(p.GetX(), 2) + 16.0 * (std::pow(p.GetY(), 2))) / 2.0;
    return res;
};
double Func_2::Gradient_x(Point p) const                    // f2'(x)= x
{
    return p.GetX();
};
double Func_2::Gradient_y(Point p) const                    // f2'(y)= 16y
{
    return (16.0 * p.GetY());
};
//---------------------------------------------------------------------
/*
// f3(x, y) =
double Func_3::f(Point p) const
{
    return 0;
}
double Func_3::Gradient_x(Point p) const
{
    return p.GetX();
}
double Func_3::Gradient_y(Point p) const
{
    return p.GetY();
}
*/
//---------------------------------------------------------------------
// f4(x, y) = [x^2 -1]^2 + [(x-1)^2]/5 + y^2
double Func_4::f(Point p) const
{
    double res = pow(pow(p.GetX(), 2.0) - 1.0, 2.0) + (pow(p.GetX() - 1, 2.0)) / 5.0 + pow(p.GetY(), 2.0);
    return res;
};
double Func_4::Gradient_x(Point p) const                    // f4'(x)= 4x(x^2 -1)+ (2X -1)/5
{
    double x = p.GetX();
    double res = 4.0 * x * (std::pow(x, 2.0) - 1) + (2.0 * x - 1.0) / 5.0;
    return p.GetX();
};
double Func_4::Gradient_y(Point p) const                    // f4'(y) = y
{
    return p.GetY();
};
//---------------------------------------------------------------------
/*
// f5(x, y) =
double Func_5::f(Point p) const
{
    return 0;
}
double Func_5::Gradient_x(Point p) const
{
    return p.GetX();
}
double Func_5::Gradient_y(Point p) const
{
    return p.GetY();
}
*/
//---------------------------------------------------------------------
// f6(x, y) = ln(1+ x^2 + y^2)
double Func_6::f(Point p) const
{
    return std::log(1 + std::pow(p.GetX(), 2) + std::pow(p.GetY(), 2));
};
double Func_6::Gradient_x(Point p) const                    // f6'(x) = 2x/(1+ x^2 + y^2)
{
    return (2 * p.GetX()) / (1 + std::pow(p.GetX(), 2) + std::pow(p.GetY(), 2));
};
double Func_6::Gradient_y(Point p) const                    // f6'(y) = 2y/(1+ x^2 + y^2)
{
    return (2 * p.GetY()) / (1 + std::pow(p.GetX(), 2) + std::pow(p.GetY(), 2));
};
//---------------------------------------------------------------------

/*
// f7(x, y) =
double Func_7::f(Point p) const
{
    return 0;
}
double Func_7::Gradient_x(Point p) const
{
    return p.GetX();
}
double Func_7::Gradient_y(Point p) const
{
    return p.GetY();
}
*/

//---------------------------------------------------------------------
// f8(x, y) = 2 -cos(pi*x) -cos(pi*y)
double Func_8::f(Point p) const
{
    return (2.0 - std::cos((std::numbers::pi)*p.GetX())) - std::cos((std::numbers::pi)*p.GetY());
};
double Func_8::Gradient_x(Point p) const                    // f8'(x)= pi * sin( pi* x)
{
    return ((std::numbers::pi)*sin((std::numbers::pi)*p.GetX()));
};
double Func_8::Gradient_y(Point p) const                    // f8'(x)= pi * sin( pi* y)
{
    return ((std::numbers::pi)*sin((std::numbers::pi)*p.GetY()));
};
//---------------------------------------------------------------------
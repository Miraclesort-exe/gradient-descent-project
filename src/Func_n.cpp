#include <cmath>
#include "../include/Func_n.h"

// f1(x, y) = (x^2+y^2) / 2
Func_1::Func_1()
    : Function{0}
{}
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

// f2(x, y) = (x^2+16y^2) / 2
Func_2::Func_2()
    : Function{0}
{}
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

// f3(x, y) = (x^2-1)^2 + y^2
Func_3::Func_3()
    : Function{0}
{}
double Func_3::f(Point p) const
{
    double x = p.GetX();
    double y = p.GetY();
    return std::pow(x * x - 1.0, 2.0) + y * y;
}
double Func_3::Gradient_x(Point p) const                    // f3'(x) = 4x(x^2-1)
{
    double x = p.GetX();
    return 4.0 * x * (x * x - 1.0);
}
double Func_3::Gradient_y(Point p) const                    // f3'(y) = 2y
{
    return 2.0 * p.GetY();
}

// f4(x, y) = [x^2-1]^2 + [(x-1)^2]/5 + y^2
Func_4::Func_4()
    : Function{0}
{}
double Func_4::f(Point p) const
{
    double res = pow(pow(p.GetX(), 2.0) - 1.0, 2.0) + (pow(p.GetX() - 1, 2.0)) / 5.0 + pow(p.GetY(), 2.0);
    return res;
};
double Func_4::Gradient_x(Point p) const                    // f4'(x)= 4x(x^2-1) + 2(x-1)/5
{
    double x = p.GetX();
    double res = 4.0 * x * (std::pow(x, 2.0) - 1) + (2.0 * (x - 1.0) / 5.0);
    return res;
};
double Func_4::Gradient_y(Point p) const                    // f4'(y) = 2y
{
    return 2 * p.GetY();
};

// f5(x, y) = 4sinh^2(x/2) + y^2
Func_5::Func_5()
    : Function{0}
{}
double Func_5::f(Point p) const{
    double x = p.GetX();
    double y = p.GetY();
    return 4.0 * std::pow(std::sinh(x / 2.0), 2.0) + y * y;
}
double Func_5::Gradient_x(Point p) const                    // f5'(x) = 4sinh(x/2) * cosh(x/2)
{
    double x = p.GetX();
    return 4.0 * std::sinh(x / 2.0) * std::cosh(x / 2.0);
}
double Func_5::Gradient_y(Point p) const                    // f5'(y) = 2y
{
    return 2.0 * p.GetY();
}

// f6(x, y) = ln(1+x^2+y^2)
Func_6::Func_6()
    : Function{0}
{}
double Func_6::f(Point p) const
{
    return std::log(1 + std::pow(p.GetX(), 2) + std::pow(p.GetY(), 2));
};
double Func_6::Gradient_x(Point p) const                    // f6'(x) = 2x/(1+x^2+y^2)
{
    return (2 * p.GetX()) / (1 + std::pow(p.GetX(), 2) + std::pow(p.GetY(), 2));
};
double Func_6::Gradient_y(Point p) const                    // f6'(y) = 2y/(1+x^2+y^2)
{
    return (2 * p.GetY()) / (1 + std::pow(p.GetX(), 2) + std::pow(p.GetY(), 2));
};

// f7(x, y) = 1 - e^{-(x^2+y^2)}
Func_7::Func_7()
    : Function{0}
{}
double Func_7::f(Point p) const
{
    double x = p.GetX();
    double y = p.GetY();
    return 1.0 - std::exp(-(x * x + y * y));
}
double Func_7::Gradient_x(Point p) const                    // f7'(x) = 2x * e^{-(x^2+y^2)}
{
    double x = p.GetX();
    double y = p.GetY();
    return 2.0 * x * std::exp(-(x * x + y * y));
}
double Func_7::Gradient_y(Point p) const                    // f7'(y) = 2y * e^{-(x^2+y^2)}
{
    double x = p.GetX();
    double y = p.GetY();
    return 2.0 * y * std::exp(-(x * x + y * y));
}

// f8(x, y) = 2 - cos(pi*x) - cos(pi*y)
Func_8::Func_8()
    : Function{0}
{}
double Func_8::f(Point p) const
{
    return (2.0 - std::cos((Pi())*p.GetX())) - std::cos((Pi())*p.GetY());
};
double Func_8::Gradient_x(Point p) const                    // f8'(x)= pi * sin(pi*x)
{
    return ((Pi())*std::sin((Pi())*p.GetX()));
};
double Func_8::Gradient_y(Point p) const                    // f8'(y)= pi * sin(pi*y)
{
    return ((Pi())*std::sin((Pi())*p.GetY()));
};

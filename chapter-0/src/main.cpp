#include <iostream>
#include <cmath>

#include "Point2D.hpp"

void DisplayPoint2D(Point2D point2D) {
    std::cout << "Abscissa: " << point2D.Abscissa() << " Ordinate: " << point2D.Ordinate() << std::endl;
}

int main()
{
    Point2D p1(2, 2);

    std::cout << p1.Rho() << std::endl;
    std::cout << p1.Theta() * 180 / M_PI << std::endl;

    p1.Rotate(M_PI/2);

    std::cout << p1.Rho() << std::endl;
    std::cout << p1.Theta() * 180 / M_PI << std::endl;

    DisplayPoint2D(p1);

    return 0;
}
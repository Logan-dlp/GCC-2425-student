#include <iostream>

#include "Point2D.hpp"

void DisplayPoint2D(Point2D point2D) {
    std::cout << "Abscissa: " << point2D.Abscissa() << " Ordinate: " << point2D.Ordinate() << std::endl;
}

int main()
{
    Point2D p1 = Point2D(2, 2);
    Point2D p2 = Point2D(4, 5);

    Point2D p3;
    p3.Homothety(p1, p2, 1);

    DisplayPoint2D(p3);

    return 0;
}
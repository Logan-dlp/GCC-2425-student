#include <iostream>

#include "Point2D.hpp"

void DisplayPoint2D(Point2D point2D) {
    std::cout << "Abscissa: " << point2D.Abscissa() << " Ordinate: " << point2D.Ordinate() << std::endl;
}

int main()
{
    Point2D point2D = Point2D(2, 4);

    DisplayPoint2D(point2D);

    point2D.Translate(2, 4);

    DisplayPoint2D(point2D);

    std::cout << "Hello, World!" << std::endl;
    return 0;
}
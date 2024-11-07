#include <iostream>
#include <cmath>

#include "Point2D.hpp"

void DisplayPoint2D(Point2D &point2D) {
    std::cout << point2D << std::endl;
}

int main()
{
    Point2D p1 = Point2D(1, 5);

    std::cout << p1.ToString() << std::endl;

    return 0;
}
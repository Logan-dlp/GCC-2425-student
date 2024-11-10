#include <iostream>
#include <cmath>

#include "Point2D.hpp"
#include "WeightedPoint.hpp"

void DisplayPoint2D(Point2D& point2D) {
    std::cout << point2D << std::endl;
}

int main()
{
    Point2D p1 = Point2D(1, 5);
    WeightedPoint wp1 = WeightedPoint(1, 3, 2);

    DisplayPoint2D(p1);

    return 0;
}
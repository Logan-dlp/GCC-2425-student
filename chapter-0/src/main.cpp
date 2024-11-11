#include <iostream>

#include "Point2D.hpp"
#include "WeightedPoint.hpp"
#include "ColouredPoint.hpp"

void TranslateAll(Point2D** points, int size, float dx, float dy) {
    for (int i = 0; i < size; ++i) {
        points[i]->Translate(dx, dy);
    }
}

void DisplayPoint(const Point2D& point2D){
    std::cout << point2D.ToString() << std::endl;
}

int main()
{
    Point2D p1 = Point2D(1, 5);
    WeightedPoint wp1 = WeightedPoint(1, 3, 2);
    ColouredPoint cp1 = ColouredPoint(3, 4, 255);

    Point2D* points[] = {&p1, &wp1, &cp1};

    TranslateAll(points, std::size(points), 2, 3);

    DisplayPoint(p1);
    DisplayPoint(wp1);
    DisplayPoint(cp1);

    return 0;
}
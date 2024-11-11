#include <iostream>
#include <vector>

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

void DisplayPoints(const std::vector<Point2D*>& points) {
    for (int i = 0; i < (int)points.size(); ++i) {
        std::cout << points[i]->ToString() << std::endl;
    }
}

int main()
{
    WeightedPoint wp1 = WeightedPoint(1, 3, 2);
    ColouredPoint cp1 = ColouredPoint(3, 4, 255);

    Point2D* points[] = {&wp1, &cp1 };
    std::vector<Point2D*> pointVector = { &wp1, &cp1 };

    TranslateAll(points, std::size(points), 2, 3);

    DisplayPoints(pointVector);

    std::cout << wp1.DistanceFromOrigin() << std::endl;

    return 0;
}
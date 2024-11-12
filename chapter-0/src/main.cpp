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
    ColouredPoint wp1 = ColouredPoint(2, 2, 255);
    ColouredPoint wp2 = ColouredPoint(2, 2, 255);

    ColouredPoint wp = wp1 + wp2;

    std::cout << wp << std::endl;

    return 0;
}
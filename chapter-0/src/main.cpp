#include <iostream>

#include "Point2D.hpp"

int main()
{
    Point2D point2D = Point2D(2, 4);
    point2D.Translate(2, 4);

    std::cout << "Hello, World!" << std::endl;
    return 0;
}
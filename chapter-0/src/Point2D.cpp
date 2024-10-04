#include "Point2D.hpp"

Point2D::Point2D() {
    this->_x = 0;
    this->_y = 0;
}

Point2D::Point2D(float x, float y) {
    this->_x = x;
    this->_y = y;
}

Point2D::Point2D(const Point2D &point2D) {
    this->_x = point2D._x;
    this->_y = point2D._y;
}

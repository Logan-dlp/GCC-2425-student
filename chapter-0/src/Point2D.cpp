#include "Point2D.hpp"

int Point2D::allPointNumber = 0;

Point2D::Point2D() {
    this->_x = 0;
    this->_y = 0;

    this->allPointNumber++;
    this->_pointNumber = allPointNumber;
}

Point2D::Point2D(float x, float y) {
    this->_x = x;
    this->_y = y;

    this->allPointNumber++;
    this->_pointNumber = allPointNumber;
}

Point2D::Point2D(const Point2D &point2D) {
    this->_x = point2D._x;
    this->_y = point2D._y;

    this->allPointNumber++;
    this->_pointNumber = allPointNumber;
}

Point2D::~Point2D() {
    this->allPointNumber--;
}

float Point2D::DistanceFromOrigin() const {
    return std::sqrt(std::pow((0 - this->_x), 2) + std::pow((0 - this->_y), 2));
}

void Point2D::Translate(float x, float y) {
    this->_x += x;
    this->_y += y;
}

int Point2D::GetNumber() {
    return this->_pointNumber;
}

std::string Point2D::ToString() const {
    return "Abscissa: " + std::to_string(this->_x) + " Ordinate: " + std::to_string(this->_y);
}

std::ostream& operator<<(std::ostream& os, const Point2D& point2D) {
    os << "Abscissa: " << point2D._x << " Ordinate: " << point2D._y;
    return os;
}
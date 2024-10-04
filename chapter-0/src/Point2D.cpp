#include "Point2D.hpp"

#include <cmath>

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

void Point2D::Translate(float x, float y) {
    this->_x += x;
    this->_y += y;
}

float Point2D::Abscissa() {
    return this->_x;
}

float Point2D::Ordinate() {
    return this->_y;
}

void Point2D::Homothety(Point2D point2D_1, Point2D point2D_2, float ratio) {
    this->_x = point2D_1.Abscissa() + ((point2D_2.Abscissa() - point2D_1.Abscissa()) * ratio);
    this->_y = point2D_1.Ordinate() + ((point2D_2.Ordinate() - point2D_1.Ordinate()) * ratio);
}

float Point2D::Rho() {
    return std::sqrt(std::pow(this->_x, 2) + std::pow(this->_y, 2));
}

float Point2D::Theta() {
    return std::atan(this->_y / this->_x);
}

void Point2D::Rotate(float rad) {
    float x = this->_x;
    float y = this->_y;

    this->_x = - x * std::sin(rad) + y * std::cos(rad);
    this->_y = x * std::cos(rad) + y * std::sin(rad);
}
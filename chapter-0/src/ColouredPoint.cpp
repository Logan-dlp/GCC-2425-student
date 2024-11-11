#include "ColouredPoint.hpp"

ColouredPoint::ColouredPoint() {
    this->_colour = 0;
}

ColouredPoint::ColouredPoint(float x, float y, float colour) : Point2D(x, y) {
    this->_colour = colour;
}

ColouredPoint::ColouredPoint(const Point2D &point2D) : Point2D(point2D) {
    this->_colour = 0;
}

ColouredPoint::ColouredPoint(const ColouredPoint &colouredPoint) : Point2D(colouredPoint) {
    this->_colour = colouredPoint._colour;
}

void ColouredPoint::SetColour(float colour) {
    this->_colour = colour;
}

float ColouredPoint::GetColour() {
    return this->_colour;
}

std::string ColouredPoint::ToString() const {
    return Point2D::ToString() + " Colour: " + std::to_string(this->_colour);
}

std::ostream& operator<<(std::ostream& os, const ColouredPoint& colouredPoint) {
    os << "Abscissa: " << colouredPoint._x << " Ordinate: " << colouredPoint._y << " Colour: " << colouredPoint._colour;
    return os;
}
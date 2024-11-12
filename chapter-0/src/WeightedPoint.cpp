#include "WeightedPoint.hpp"

WeightedPoint::WeightedPoint() {
    this->_weight = 0;
}

WeightedPoint::WeightedPoint(float x, float y, float weight) : Point2D(x, y) {
    this->_weight = weight;
}

WeightedPoint::WeightedPoint(const Point2D &point2D) : Point2D(point2D) {
    this->_weight = 0;
}

WeightedPoint::WeightedPoint(const WeightedPoint &weightedPoint) : Point2D(weightedPoint) {
    this->_weight = weightedPoint._weight;
}

float WeightedPoint::DistanceFromOrigin() const {
    return Point2D::DistanceFromOrigin();
}

void WeightedPoint::SetWeight(float weight) {
    this->_weight = weight;
}

float WeightedPoint::GetWeight() {
    return this->_weight;
}

std::string WeightedPoint::ToString() const {
    return Point2D::ToString() + " Weight: " + std::to_string(this->_weight);
}

std::ostream& operator<<(std::ostream& os, const WeightedPoint& weightedPoint) {
    os << "Abscissa: " << weightedPoint._x << " Ordinate: " << weightedPoint._y << " Weight: " << weightedPoint._weight;
    return os;
}

bool operator==(const WeightedPoint& weightedPoint, const WeightedPoint& weightedPoint1) {
    return weightedPoint._x == weightedPoint1._x && weightedPoint._y == weightedPoint1._y && weightedPoint._weight == weightedPoint1._weight;
}

WeightedPoint operator+(const WeightedPoint& weightedPoint, const WeightedPoint& weightedPoint1) {
    float x = weightedPoint._x + weightedPoint1._x;
    float y = weightedPoint._y + weightedPoint1._y;
    float weight = weightedPoint._weight + weightedPoint1._weight;
    return WeightedPoint(x, y, weight);
}
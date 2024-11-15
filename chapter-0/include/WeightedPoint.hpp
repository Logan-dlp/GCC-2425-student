#ifndef CHAPTER_0_WEIGHTEDPOINT_HPP
#define CHAPTER_0_WEIGHTEDPOINT_HPP

#include "Point2D.hpp"

class WeightedPoint : public Point2D {
public:
    WeightedPoint();
    WeightedPoint(float x, float y, float weight = 0);
    WeightedPoint(const Point2D &point2D);
    WeightedPoint(const WeightedPoint &weightedPoint);
    ~WeightedPoint() = default;

    float DistanceFromOrigin() const override;

    void SetWeight(float weight);
    float GetWeight();

    std::string ToString() const override;
    friend std::ostream& operator<<(std::ostream& os, const WeightedPoint& weightedPoint);
    friend bool operator==(const WeightedPoint& weightedPoint, const WeightedPoint& weightedPoint1);
    friend WeightedPoint operator+(const WeightedPoint& weightedPoint, const WeightedPoint& weightedPoint1);

private:
    float _weight;
};

#endif //CHAPTER_0_WEIGHTEDPOINT_HPP

#ifndef CHAPTER_0_WEIGHTEDPOINT_HPP
#define CHAPTER_0_WEIGHTEDPOINT_HPP

#include "Point2D.hpp"

class WeightedPoint : Point2D {
public:
    WeightedPoint();
    WeightedPoint(float x, float y, float weight = 0);
    WeightedPoint(const Point2D &point2D);
    WeightedPoint(const WeightedPoint &weightedPoint);
    ~WeightedPoint() = default;

    void SetWeight(float weight);
    float GetWeight();

    std::string ToString() override;
    friend std::ostream& operator<<(std::ostream& os, const WeightedPoint& weightedPoint);

private:
    float _weight;
};

#endif //CHAPTER_0_WEIGHTEDPOINT_HPP

#ifndef CHAPTER_0_WEIGHTEDPOINT_HPP
#define CHAPTER_0_WEIGHTEDPOINT_HPP

#include "Point2D.hpp"

class WeightedPoint : Point2D {
public:
    std::string Tostring() override;
private:
    float _weight;
};

#endif //CHAPTER_0_WEIGHTEDPOINT_HPP

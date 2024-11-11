#ifndef CHAPTER_0_COLOUREDPOINT_HPP
#define CHAPTER_0_COLOUREDPOINT_HPP

#include "Point2D.hpp"
#include <ostream>

class ColouredPoint : public Point2D {
public:
    ColouredPoint();
    ColouredPoint(float x, float y, float colour = 0);
    ColouredPoint(const Point2D &point2D);
    ColouredPoint(const ColouredPoint &colouredPoint);
    ~ColouredPoint() = default;

    float DistanceFromOrigin() const override;

    void SetColour(float colour);
    float GetColour();

    std::string ToString() const override;
    friend std::ostream& operator<<(std::ostream& os, const ColouredPoint& colouredPoint);
private:
    float _colour;
};

#endif //CHAPTER_0_COLOUREDPOINT_HPP

#ifndef CHAPTER_0_COLOUREDPOINT_HPP
#define CHAPTER_0_COLOUREDPOINT_HPP

#include "Point2D.hpp"

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
    friend bool operator==(const ColouredPoint& colouredPoint, const ColouredPoint& colouredPoint1);
    friend ColouredPoint operator+(const ColouredPoint& colouredPoint, const ColouredPoint& colouredPoint1);
private:
    float _colour;
};

#endif //CHAPTER_0_COLOUREDPOINT_HPP

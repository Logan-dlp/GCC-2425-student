#ifndef _CHAPTER_O_POINT_2D_HPP_
#define _CHAPTER_O_POINT_2D_HPP_

class Point2D {
public:
    Point2D(); // Constructor
    Point2D(float x, float y); // Parameterized Constructor
    Point2D(const Point2D &point2D); // Constructor by copy
    ~Point2D() = default; // Destructor
private:
    float _x;
    float _y;
};

#endif // _CHAPTER_O_POINT_2D_HPP_
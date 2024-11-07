#ifndef _CHAPTER_O_POINT_2D_HPP_
#define _CHAPTER_O_POINT_2D_HPP_

#include <string>

/*
 * Réponse au question :
 * 3.a  Les champs x et y sont mis en private pour bloquer l'accès à la modification.
 * 3.b  Cela implique que personne n'y a accès à par lui-même.
 */

class Point2D {
public:
    Point2D(); // Constructor
    Point2D(float x, float y); // Parameterized Constructor
    Point2D(const Point2D &point2D); // Constructor by copy
    ~Point2D(); // Destructor

    void Translate(float x, float y);
    int GetNumber();

    virtual std::string ToString();
    friend std::ostream& operator<<(std::ostream& os, const Point2D& point2D);

    // Variable en static car il englobe tout les class Point2D, il va donc être le même pour toute les class.
    static int allPointNumber;
private:
    float _x;
    float _y;

    int _pointNumber;
};



#endif // _CHAPTER_O_POINT_2D_HPP_
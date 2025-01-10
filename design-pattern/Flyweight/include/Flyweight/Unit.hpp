#ifndef DESIGN_PATTERN_FLYWEIGHT_UNIT_HPP
#define DESIGN_PATTERN_FLYWEIGHT_UNIT_HPP

#include <vector>
#include <algorithm>
#include "Texture.hpp"

class Unit 
{
public:
    Unit() {
        _texture = new Texture();
    }

    Unit(std::string textureName) {
        _texture = new Texture(textureName);
    }

    ~Unit() {
        delete _texture;
    }

    void DisplayTexture() {
        _texture->Display();
    }

private:
    Texture* _texture;
};

#endif //DESIGN_PATTERN_FLYWEIGHT_UNIT_HPP
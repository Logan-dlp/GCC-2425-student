#ifndef DESIGN_PATTERN_FLYWEIGHT_TEXTURE_HPP
#define DESIGN_PATTERN_FLYWEIGHT_TEXTURE_HPP

#include <iostream>

class Texture
{
public:
    Texture() {
        std::cout << "Chargement de la texture\n";
        _textureName = "RandomTexture";
    }

    Texture(std::string textureName) {
        std::cout << "Chargement de la texture " << textureName << "\n";
        _textureName = textureName;
    }

    void Display() {
        std::cout << "Affichage de la texture\n";
    }

private:
    std::string _textureName;
};

#endif //DESIGN_PATTERN_FLYWEIGHT_TEXTURE_HPP
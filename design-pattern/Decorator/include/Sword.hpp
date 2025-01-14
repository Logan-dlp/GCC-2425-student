#ifndef SWORD_HPP
#define SWORD_HPP

#include <iostream>

#include "IWeapon.hpp"

class Sword : IWeapon {
    void Attack() override {
        std::cout << "Sword Attack !" << std::endl;
    }
};

#endif // SWORD_HPP
#ifndef SHARPENDING_DECORATOR_HPP
#define SHARPENDING_DECORATOR_HPP

#include "WeaponUpgrade.hpp"

#include <iostream>

class SharpendingDecorator : public WeaponUpgrade {
public:
    SharpendingDecorator(IWeapon* weapon) {
        WeaponUpgrade::m_weapon = weapon;
    }

    int GetDamage() override {
        return WeaponUpgrade::m_weapon->GetDamage() + 5;
    }
};

#endif // SHARPENDING_DECORATOR_HPP
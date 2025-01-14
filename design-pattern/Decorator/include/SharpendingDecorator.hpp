#ifndef SHARPENDING_DECORATOR_HPP
#define SHARPENDING_DECORATOR_HPP

#include "WeaponUpgrade.hpp"

class SharpendingDecorator : public WeaponUpgrade {
public:
    SharpendingDecorator(IWeapon* weapon) {
        this->m_weapon = weapon;
    }

    int GetDamage() override {
        this->m_weapon->GetDamage() + 5;
    }
};

#endif // SHARPENDING_DECORATOR_HPP
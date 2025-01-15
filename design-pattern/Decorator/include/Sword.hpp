#ifndef SWORD_HPP
#define SWORD_HPP

#include "IWeapon.hpp"

class Sword : public IWeapon {
public: 
    int GetDamage() override {
        return m_damage;
    }

private:
    int m_damage = 5;
};

#endif // SWORD_HPP
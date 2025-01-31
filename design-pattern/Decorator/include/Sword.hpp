#ifndef SWORD_HPP
#define SWORD_HPP

#include "IWeapon.hpp"

class Sword : public IWeapon {
public: 
    [[nodiscard]] int GetDamage() const override {
        return DEFAULT_DAMAGE;
    }

protected:
    static constexpr int DEFAULT_DAMAGE = 10;
};

#endif // SWORD_HPP
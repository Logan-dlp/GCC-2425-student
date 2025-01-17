#ifndef SHARPENDING_DECORATOR_HPP
#define SHARPENDING_DECORATOR_HPP

#include "WeaponUpgrade.hpp"

class SharpendingDecorator final : public WeaponUpgrade {
    public:
        explicit SharpendingDecorator(IWeapon* weapon) : WeaponUpgrade(weapon) {}

        [[nodiscard]] int GetDamage() const override {
            return WeaponUpgrade::GetDamage() + SHARPENING_ADDITIONAL_DAMAGE;
        }

    private:
        static constexpr int SHARPENING_ADDITIONAL_DAMAGE = 25;
};

#endif // SHARPENDING_DECORATOR_HPP
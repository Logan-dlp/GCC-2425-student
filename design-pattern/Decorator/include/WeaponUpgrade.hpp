#ifndef WEAPONUPGRADE_HPP
#define WEAPONUPGRADE_HPP

#include "IWeapon.hpp"

class WeaponUpgrade : public IWeapon {
    public:
        explicit WeaponUpgrade(IWeapon* weapon) : m_weapon(weapon) {};

        ~WeaponUpgrade() {
            m_weapon = nullptr;
            delete m_weapon;
        }

        [[nodiscard]] int GetDamage() const override {
            return this->m_weapon->GetDamage();
        }

    protected:
        IWeapon* m_weapon;
};

#endif // WEAPONUPGRADE_HPP
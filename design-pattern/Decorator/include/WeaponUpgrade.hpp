#ifndef WEAPONUPGRADE_HPP
#define WEAPONUPGRADE_HPP

#include "IWeapon.hpp"

class WeaponUpgrade : public IWeapon {
    public:
        WeaponUpgrade() = default;

        ~WeaponUpgrade() {
            delete m_weapon;
        }

        int GetDamage() override {
            return this->m_weapon->GetDamage();
        }

    protected:
        IWeapon* m_weapon;
};

#endif // WEAPONUPGRADE_HPP
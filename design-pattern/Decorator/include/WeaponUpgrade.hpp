#ifndef WEAPONUPGRADE_HPP
#define WEAPONUPGRADE_HPP

#include "IWeapon.hpp"

class WeaponUpgrade : public IWeapon {
    public:
        WeaponUpgrade(IWeapon* weapon) {
            this->m_weapon = weapon;
        }

        int GetDamage() override {
            this->m_weapon->GetDamage();
        }

    protected:
        IWeapon* m_weapon;
};

#endif // WEAPONUPGRADE_HPP
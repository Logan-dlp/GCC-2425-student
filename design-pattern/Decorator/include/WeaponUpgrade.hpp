#ifndef WEAPONUPGRADE_HPP
#define WEAPONUPGRADE_HPP

#include "IWeapon.hpp"

class WeaponUpgrade {
        virtual void Decorator(IWeapon& component) = 0;
    protected:
        IWeapon* m_component;
};

#endif // WEAPONUPGRADE_HPP
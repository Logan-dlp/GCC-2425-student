#ifndef IWEAPON_HPP
#define IWEAPON_HPP

struct IWeapon {
    virtual ~IWeapon() = default;
    virtual void Attack() = 0;
};


#endif // IWEAPON_HPP
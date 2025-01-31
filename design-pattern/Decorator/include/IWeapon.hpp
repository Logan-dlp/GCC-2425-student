#ifndef IWEAPON_HPP
#define IWEAPON_HPP

struct IWeapon {
    virtual ~IWeapon() = default;
    [[nodiscard]] virtual int GetDamage() const = 0;
};


#endif // IWEAPON_HPP
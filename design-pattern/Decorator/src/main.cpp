#include <iostream>

#include "SharpendingDecorator.hpp"
#include "Sword.hpp"

int main() {
    IWeapon* a = new Sword();
    IWeapon* b = new SharpendingDecorator(a);

    std::cout << a->GetDamage() << std::endl;
    std::cout << b->GetDamage() << std::endl;

    return 0;
}
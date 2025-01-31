#include <iostream>

#include "SharpendingDecorator.hpp"
#include "Sword.hpp"

int main() {
    IWeapon* sword = new Sword();
    
    std::cout << "Sword damages: " << sword->GetDamage() << std::endl;

    IWeapon* upgradedSword = new SharpendingDecorator(sword);

    std::cout << "Sword damages with sharpening: " << upgradedSword->GetDamage() << std::endl;

    delete upgradedSword;
    delete sword;

    return 0;
}
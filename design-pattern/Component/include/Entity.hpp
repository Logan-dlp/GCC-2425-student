#ifndef DESIGN_PATTERN_COMPONENT_ENTITY_HPP
#define DESIGN_PATTERN_COMPONENT_ENTITY_HPP

#include <iostream>
#include "Component.hpp"

class Entity : public Component {
public:
    void Update() override {
        std::cout << "Entity update !\n";
    }
};

#endif //DESIGN_PATTERN_COMPONENT_ENTITY_HPP

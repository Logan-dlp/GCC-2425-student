#ifndef DESIGN_PATTERN_COMPONENT_GROUP_HPP
#define DESIGN_PATTERN_COMPONENT_GROUP_HPP

#include <iostream>
#include <vector>
#include <algorithm>

#include "Component.hpp"

class Group : public Component {
public:
    void Update() override {
        std::cout << "Group update !\n";
        for (auto& child : children) {
            child->Update();
        }
    };

    void Add(const std::shared_ptr<Component>& component) override {
        children.push_back(component);
    }

    void Remove(const std::shared_ptr<Component>& component) override {
        children.erase(
                std::remove_if(children.begin(), children.end(),
                [&component](const std::shared_ptr<Component>& c){
                    return c == component;
                }), children.end()
                );
    }

private:
    std::vector<std::shared_ptr<Component>> children;
};

#endif //DESIGN_PATTERN_COMPONENT_GROUP_HPP

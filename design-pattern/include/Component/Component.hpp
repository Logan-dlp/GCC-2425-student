#ifndef DESIGN_PATTERN_COMPONENT_HPP
#define DESIGN_PATTERN_COMPONENT_HPP

#include <memory>

class Component {
public:
    virtual ~Component() = default;
    virtual void Update() = 0;
    virtual void Add(const std::shared_ptr<Component>& component) {};
    virtual void Remove(const std::shared_ptr<Component>& component) {};
};

#endif //DESIGN_PATTERN_COMPONENT_HPP

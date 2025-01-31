#include <iostream>
#include <string>

#include "Entity.hpp"
#include "Group.hpp"

int main()
{
    const std::shared_ptr<Entity> entity1 = std::make_shared<Entity>();
    const std::shared_ptr<Entity> entity2 = std::make_shared<Entity>();
    const std::shared_ptr<Group> group = std::make_shared<Group>();

    group->Add(entity1);
    group->Add(entity2);

    group->Update();
    
    group->Remove(entity1);

    group->Update();
    
    return 0;
}
#include "../include/Component/Entity.hpp"
#include "../include/Component/Group.hpp"

int main()
{
    const auto entity1 = std::make_shared<Entity>();
    const auto entity2 = std::make_shared<Entity>();
    const auto group = std::make_shared<Group>();

    group->Add(entity1);
    group->Add(entity2);

    group->Update();

    group->Remove(entity1);

    group->Update();

    return 0;
}
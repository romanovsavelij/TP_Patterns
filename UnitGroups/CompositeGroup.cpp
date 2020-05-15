
#include <iostream>
#include "CompositeGroup.h"

void CompositeGroup::add(UnitsGroup* group) {
    std::cout << "new unit in this army" << std::endl;
    _children.push_back(group);
}

void CompositeGroup::remove(UnitsGroup *group) {
    _children.erase(std::remove(_children.begin(), _children.end(), group), _children.end());
}

std::vector<UnitsGroup *> CompositeGroup::getChildren() {
    return _children;
}

void CompositeGroup::execute() {
    for (auto& child : _children) {
        child->execute();
    }
}

void CompositeGroup::moveRight() {
    for (auto& child : _children) {
        child->moveRight();
    }
}

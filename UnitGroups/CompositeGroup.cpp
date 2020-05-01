
#include "CompositeGroup.h"

void CompositeGroup::add(UnitsGroup *group) {
    _children.push_back(group);
}

void CompositeGroup::remove(UnitsGroup *group) {
    _children.erase(std::remove(_children.begin(), _children.end(), group), _children.end());
}

std::vector<UnitsGroup *> CompositeGroup::get_children() {
    return _children;
}

void CompositeGroup::execute() {
    for (auto& child : _children) {
        child->execute();
    }
}
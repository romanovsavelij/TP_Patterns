
#include "CompositeGroup.h"

void CompositeGroup::add(UnitsGroup *group) {
    children.push_back(group);
}

void CompositeGroup::remove(UnitsGroup *group) {
    children.erase(std::remove(children.begin(), children.end(), group), children.end());
}

std::vector<UnitsGroup *> CompositeGroup::get_children() {
    return children;
}

void CompositeGroup::execute() {
    for (auto& child : children) {
        child->execute();
    }
}

#ifndef TP_PATTERNS_COMPOSITEGROUP_H
#define TP_PATTERNS_COMPOSITEGROUP_H


#include <vector>
#include "UnitsGroup.h"

class CompositeGroup {
    std::vector<UnitsGroup*> children;
public:
    void add(UnitsGroup* group);
    void remove(UnitsGroup* group);
    std::vector<UnitsGroup*> get_children();
    void execute();
};

#endif //TP_PATTERNS_COMPOSITEGROUP_H

#ifndef ABILITY_H
#define ABILITY_H

#include "../Units/Unit.h"

class Unit;

class Ability {
protected:
    std::string name;
    Unit* owner;

public:
    Ability(Unit* owner, const std::string& name);
    ~Ability();

    virtual void action(Unit* target) = 0;
    const std::string& getName() const;
};

#endif
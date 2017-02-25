#ifndef DEFAULTABILITY_H
#define DEFAULTABILITY_H

#include "../Abilities/Ability.h"

class DefaultAbility: public Ability {
    public:
        DefaultAbility(Unit* owner, const std::string& name);
        ~DefaultAbility();

        void action(Unit* target);
    
};

#endif
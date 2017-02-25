#ifndef ROGUEABILITY_H
#define ROGUEABILITY_H

#include "../Abilities/Ability.h"

class RogueAbility: public Ability {
    public:
        RogueAbility(Unit* owner, const std::string& name);
        ~RogueAbility();

        void action(Unit* target);
    
};

#endif
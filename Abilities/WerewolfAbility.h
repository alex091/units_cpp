#ifndef WEREWOLFABILITY_H
#define WEREWOLFABILITY_H

#include "../Abilities/Ability.h"
#include "../States/State.h"
#include "../States/WerewolfState.h"
#include "../Exceptions/Exceptions.h"

class WerewolfAbility : public Ability {
private:
    int chanceToInfect;
    
public:
    WerewolfAbility(Unit* owner, const std::string& name);
    ~WerewolfAbility();

    void action(Unit* target);
    void infect(Unit* target);
};

#endif
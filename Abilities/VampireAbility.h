#ifndef VAMPIREABILITY_H
#define VAMPIREABILITY_H

#include "../Abilities/Ability.h"
#include "../States/State.h"
#include "../Exceptions/Exceptions.h"

class VampireAbility : public Ability {    
    private:
        int chanceToInfect;

    public:
        VampireAbility(Unit* owner, const std::string& name);
        ~VampireAbility();

        void action(Unit* target);
        void infect(Unit* target);
};

#endif
#ifndef ROGUE_H
#define ROGUE_H

#include "../Units/Unit.h"
#include "../Abilities/RogueAbility.h"
#include "../States/State.h"

class Rogue : public Unit {
    public:
        Rogue();
        ~Rogue();

        void attack(Unit* enemy);

};

#endif
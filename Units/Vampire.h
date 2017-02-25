#ifndef VAMPIRE_H
#define VAMPIRE_H

#include "../Units/Unit.h"
#include "../States/State.h"
#include "../Abilities/VampireAbility.h"

class Vampire : public Unit {
public:
    Vampire();
    ~Vampire();

    void attack(Unit* enemy);
};

#endif
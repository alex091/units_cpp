#ifndef SOLDIER_H
#define SOLDIER_H

#include "../Units/Unit.h"
#include "../Abilities/DefaultAbility.h"
#include "../States/State.h"

class Soldier: public Unit {
    public:
        Soldier();
        ~Soldier();

        void attack(Unit* enemy);

};

#endif
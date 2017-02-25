#ifndef BERSERKER_H
#define BERSERKER_H

#include "../Units/Unit.h"
#include "../Abilities/DefaultAbility.h"
#include "../States/BerserkerState.h"

class Berserker: public Unit {
    public:
        Berserker();
        ~Berserker();

        void attack(Unit* enemy);

};

#endif
#ifndef WEREWOLF_H
#define WEREWOLF_H

#include "../Units/Unit.h"
#include "../States/State.h"
#include "../States/WerewolfState.h"
#include "../Abilities/WerewolfAbility.h"
#include "../Abilities/DefaultAbility.h"

class Werewolf : public Unit {
private:
    State* alternative;
    Ability* alternativeAbility;

public:
    Werewolf();
    ~Werewolf();

    void attack(Unit* enemy);
    void transform();
};

#endif
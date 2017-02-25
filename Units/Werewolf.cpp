#include "Werewolf.h"

Werewolf::Werewolf() : Unit(new State(this, "Werewolf", 100, 30), new DefaultAbility(this, "Sword")) {
        this->alternative = new WerewolfState(this, "Werewolf", 200, 60);
        this->alternativeAbility = new WerewolfAbility(this, "Claw");
    }

Werewolf::~Werewolf() {
    delete alternative;
}

void Werewolf::attack(Unit* enemy) {
    getState()->isAlive();
    ability->action(enemy);
}

void Werewolf::transform() {
    int newHp = (state->hp * alternative->maxHp) / state->maxHp;

    State* tempState;
    Ability* tempAbility;

    tempState = state;
    state = alternative;
    alternative = tempState;
    tempAbility = ability;
    ability = alternativeAbility;
    alternativeAbility = tempAbility;

    state->hp = newHp;
}
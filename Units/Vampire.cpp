#include "Vampire.h"

Vampire::Vampire() : Unit (new State(this, "Vampire", 100, 30), new VampireAbility(this, "Fangs")) {}
Vampire::~Vampire() {}

void Vampire::attack(Unit* enemy) {
    getState()->isAlive();
    ability->action(enemy);
}
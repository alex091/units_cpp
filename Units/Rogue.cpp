#include "Rogue.h"

Rogue::Rogue() : Unit (new State(this, "Rogue", 120, 20), new RogueAbility(this, "Sword")) {

}

Rogue::~Rogue(){

}

void Rogue::attack(Unit* enemy) {
    this->getState()->isAlive();
    ability->action(enemy);
}
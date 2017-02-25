#include "Soldier.h"

Soldier::Soldier() : Unit (new State(this, "Soldier", 100, 30), new DefaultAbility(this, "Sword")) {

}

Soldier::~Soldier(){

}

void Soldier::attack(Unit* enemy) {
    this->getState()->isAlive();
    ability->action(enemy);
}
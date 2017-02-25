#include "Berserker.h"

Berserker::Berserker() : Unit (new BerserkerState(this, "Berserker", 150, 50), new DefaultAbility(this, "Axe")) {

}

Berserker::~Berserker(){

}

void Berserker::attack(Unit* enemy) {
    this->getState()->isAlive();
    ability->action(enemy);
}
#include "Priest.h"

Priest::Priest() : SpellCaster (new State(this, "Priest", 50, 10, 200), new DefaultAbility(this, "Sword")) {
    isHealer = true;
    isPriest = true;
}

Priest::~Priest(){

}

void Priest::attack(Unit* enemy) {
    this->getState()->isAlive();
    ability->action(enemy);
}

void Priest::cast(const std::string& spellName, Unit* enemy) {
    this->getState()->isAlive();
    this->spendMana(spellbook[spellName]->spellCost);
    spellbook[spellName]->action(enemy);    
}
#include "Healer.h"

Healer::Healer() : SpellCaster (new State(this, "Healer", 50, 10, 200), new DefaultAbility(this, "Sword")) {
    isHealer = true;

}

Healer::~Healer(){

}

void Healer::attack(Unit* enemy) {
    this->getState()->isAlive();
    ability->action(enemy);
}

void Healer::cast(const std::string& spellName, Unit* enemy) {
    this->getState()->isAlive();
    this->spendMana(spellbook[spellName]->spellCost);
    spellbook[spellName]->action(enemy);    
}
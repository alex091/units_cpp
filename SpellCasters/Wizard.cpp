#include "Wizard.h"

Wizard::Wizard() : SpellCaster (new State(this, "Wizard", 50, 10, 200), new DefaultAbility(this, "Sword")) {
    isHealer = false;

}

Wizard::~Wizard(){

}

void Wizard::attack(Unit* enemy) {
    this->getState()->isAlive();
    ability->action(enemy);
}

void Wizard::cast(const std::string& spellName, Unit* enemy) {
    this->getState()->isAlive();
    this->spendMana(spellbook[spellName]->spellCost);
    spellbook[spellName]->action(enemy);    
}
#include "Necromancer.h"

Necromancer::Necromancer() : SpellCaster (new State(this, "Necromancer", 50, 10, 200), new DefaultAbility(this, "Sword")) {
    isHealer = false;

}

Necromancer::~Necromancer(){
    Observer::sendNotification();
}

void Necromancer::attack(Unit* enemy) {
    this->getState()->isAlive();
    addObservable(enemy);
    ability->action(enemy);
}

void Necromancer::cast(const std::string& spellName, Unit* enemy) {
    this->getState()->isAlive();
    this->spendMana(spellbook[spellName]->spellCost);
    addObservable(enemy);
    spellbook[spellName]->action(enemy);    
}
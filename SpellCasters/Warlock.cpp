#include "Warlock.h"

Warlock::Warlock() : SpellCaster (new State(this, "Warlock", 50, 10, 200), new DefaultAbility(this, "Sword")) {
    isHealer = false;
    this->slave = NULL;

}

Warlock::~Warlock(){
    if ( slave != NULL ) {
        freeSlave();
    }
}

void Warlock::attack(Unit* enemy) {
    this->getState()->isAlive();
    ability->action(enemy);
}

void Warlock::cast(const std::string& spellName, Unit* enemy) {
    this->getState()->isAlive();
    this->spendMana(spellbook[spellName]->spellCost);
    spellbook[spellName]->action(enemy);    
}

void Warlock::callDemon(){
    this->spendMana(100);
    if ( slave != NULL ) {
        freeSlave();
    }
    slave = new Demon();
}

void Warlock::demonAttack(Unit* enemy){
    slave->attack(enemy);
}

void Warlock::freeSlave(){
    delete slave;
    slave = NULL;
}

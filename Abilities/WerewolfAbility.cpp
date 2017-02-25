#include "WerewolfAbility.h"

WerewolfAbility::WerewolfAbility(Unit* owner, const std::string& name) 
    : Ability(owner, name) {
        this->chanceToInfect = 1;
    }

WerewolfAbility::~WerewolfAbility() {}

void WerewolfAbility::action(Unit* target) {
    target->getState()->takePhysicalDamage(owner->getState()->damage);
    owner->getState()->takePhysicalDamage(target->getState()->damage / 2);
    if( chanceToInfect % 2 == 0 ) {
        infect(target);
    }
    this->chanceToInfect += 1;
}

void WerewolfAbility::infect(Unit* target) {
    if (target->getState()->name == "Vampire") {
        throw IncompatibleAbility();
    }
     
    target->setAbility(new WerewolfAbility(target, "Claw"));
    target->setState(new WerewolfState(target, "Werewolf", target->getState()->maxHp, owner->getState()->damage));
}
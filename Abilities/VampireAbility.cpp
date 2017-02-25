#include "VampireAbility.h"

VampireAbility::VampireAbility(Unit* owner, const std::string& name) 
    : Ability(owner, name) {
        this->chanceToInfect = 1;
    }

VampireAbility::~VampireAbility() {}

void VampireAbility::action(Unit* target) {
    target->getState()->takePhysicalDamage(owner->getState()->damage);
    owner->getState()->addHp(owner->getState()->damage / 2);

    if( chanceToInfect % 2 == 0 ) {
        infect(target);
    }
    this->chanceToInfect += 1;
}

void VampireAbility::infect(Unit* target) {
    if (target->getState()->name == "Werewolf") {
        throw IncompatibleAbility();
    }
    target->setAbility(new VampireAbility(target, "Fang"));
    target->setState(new State(target, "Vampire", target->getState()->maxHp, owner->getState()->damage));
}
#include "DefaultAbility.h"

DefaultAbility::DefaultAbility(Unit* owner, const std::string& name) : Ability(owner, name) {

}

DefaultAbility::~DefaultAbility() {

}

void DefaultAbility::action(Unit* target) {
    target->getState()->takePhysicalDamage(owner->getState()->damage);
    owner->getState()->takePhysicalDamage(target->getState()->damage / 2);
}
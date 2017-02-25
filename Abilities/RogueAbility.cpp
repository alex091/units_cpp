#include "RogueAbility.h"

RogueAbility::RogueAbility(Unit* owner, const std::string& name) : Ability(owner, name) {

}

RogueAbility::~RogueAbility() {

}

void RogueAbility::action(Unit* target) {
    target->getState()->takePhysicalDamage(owner->getState()->damage);
    //Rogue can't be counterattacked
}
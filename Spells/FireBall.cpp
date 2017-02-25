#include "FireBall.h"

FireBall::FireBall(SpellCaster* owner, const std::string& name, int spellPower, int spellCost) : Spell(owner, name, spellPower, spellCost) {}

FireBall::~FireBall() {}

void FireBall::action(Unit* target) {
    if (owner->isHealer) {
        if ((owner->isPriest) && (target->getState()->name == "Necromancer" || target->getState()->name == "Vampire")) {
            target->getState()->takeMagicDamage(spellPower*2);
            owner->getState()->takePhysicalDamage(target->getState()->damage / 2);
        } else {
            target->getState()->takeMagicDamage(spellPower/2);
            owner->getState()->takePhysicalDamage(target->getState()->damage / 2);
        }
    } else {
        target->getState()->takeMagicDamage(spellPower);
        owner->getState()->takePhysicalDamage(target->getState()->damage / 2);
    }
}

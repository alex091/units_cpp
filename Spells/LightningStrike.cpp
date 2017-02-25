#include "LightningStrike.h"

LightningStrike::LightningStrike(SpellCaster* owner, const std::string& name, int spellPower, int spellCost) : Spell(owner, name, spellPower, spellCost) {}

LightningStrike::~LightningStrike() {}

void LightningStrike::action(Unit* target) {
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

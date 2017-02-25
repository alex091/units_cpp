#include "Heal.h"

Heal::Heal(SpellCaster* owner, const std::string& name, int spellPower, int spellCost) : Spell(owner, name, spellPower, spellCost) {}

Heal::~Heal() {}

void Heal::action(Unit* target) {
    if (owner->isHealer) {
        target->getState()->addHp(spellPower);
    } else {
        target->getState()->addHp(spellPower/2);
    }
}
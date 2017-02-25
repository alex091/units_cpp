#include "Spell.h"

Spell::Spell(SpellCaster* owner, const std::string& name, int spellPower, int spellCost) {
    this->owner = owner;
    this->name = name;
    this->spellPower = spellPower;
    this->spellCost = spellCost;
}

Spell::~Spell() {}

std::ostream& operator<<(std::ostream& out, const Spell& spell) {
    out << spell.name << ": POWER(" << spell.spellPower << ") COST(" << spell.spellCost << ")";

    return out;
}

#ifndef HEAL_H
#define HEAL_H

#include "../Spells/Spell.h"
#include "../SpellCasters/SpellCaster.h"

class Heal : public Spell {
    public:
        Heal(SpellCaster* owner, const std::string& name, int spellPower, int spellCost);
        ~Heal();

        void action(Unit* target);
};

#endif

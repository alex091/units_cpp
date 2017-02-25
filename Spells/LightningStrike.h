#ifndef LIGHTNINGSTRIKE_H
#define LIGHTNINGSTRIKE_H

#include "../Spells/Spell.h"
#include "../SpellCasters/SpellCaster.h"

class LightningStrike : public Spell {
    public:
        LightningStrike(SpellCaster* owner, const std::string& name, int spellPower, int spellCost);
        ~LightningStrike();

        void action(Unit* target);
};

#endif

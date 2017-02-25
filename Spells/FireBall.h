#ifndef FIREBALL_H
#define FIREBALL_H

#include "../Spells/Spell.h"
#include "../SpellCasters/SpellCaster.h"

class FireBall : public Spell {
    public:
        FireBall(SpellCaster* owner, const std::string& name, int spellPower, int spellCost);
        ~FireBall();

        void action(Unit* target);
};

#endif

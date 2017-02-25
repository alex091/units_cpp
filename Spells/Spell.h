#ifndef SPELL_H
#define SPELL_H

#include <iostream>
#include "../Units/Unit.h"

class SpellCaster;

class Spell {
    public:
        SpellCaster* owner;
        std::string name;
        int spellPower;
        int spellCost;

        Spell(SpellCaster* owner, const std::string& name, int spellPower, int spellCost);
        ~Spell();
        
        virtual void action(Unit* target) = 0;
};

std::ostream& operator<<(std::ostream& out, const Spell& spell);

#endif

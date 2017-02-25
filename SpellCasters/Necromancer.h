#ifndef NECROMANCER_H
#define NECROMANCER_H

#include "../Units/Unit.h"
#include "../Exceptions/Exceptions.h"
#include "../SpellCasters/SpellCaster.h"
#include "../Abilities/DefaultAbility.h"

class Necromancer: public SpellCaster {
    public:
        Necromancer();
        ~Necromancer();

        void attack(Unit* enemy);
        void cast(const std::string& spellName, Unit* enemy);

};

#endif
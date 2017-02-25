#ifndef PRIEST_H
#define PRIEST_H

#include "../Units/Unit.h"
#include "../Exceptions/Exceptions.h"
#include "../SpellCasters/SpellCaster.h"
#include "../Abilities/DefaultAbility.h"

class Priest: public SpellCaster {
    public:
        Priest();
        ~Priest();

        void attack(Unit* enemy);
        void cast(const std::string& spellName, Unit* enemy);

};

#endif
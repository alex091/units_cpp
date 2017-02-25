#ifndef HEALER_H
#define HEALER_H

#include "../Units/Unit.h"
#include "../Exceptions/Exceptions.h"
#include "../SpellCasters/SpellCaster.h"
#include "../Abilities/DefaultAbility.h"

class Healer: public SpellCaster {
    public:
        Healer();
        ~Healer();

        void attack(Unit* enemy);
        void cast(const std::string& spellName, Unit* enemy);

};

#endif
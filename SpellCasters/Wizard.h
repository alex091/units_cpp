#ifndef WIZARD_H
#define WIZARD_H

#include "../Units/Unit.h"
#include "../Exceptions/Exceptions.h"
#include "../SpellCasters/SpellCaster.h"
#include "../Abilities/DefaultAbility.h"

class Wizard: public SpellCaster {
    public:
        Wizard();
        ~Wizard();

        void attack(Unit* enemy);
        void cast(const std::string& spellName, Unit* enemy);

};

#endif
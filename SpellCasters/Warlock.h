#ifndef WARLOCK_H
#define WARLOCK_H

#include "../Units/Unit.h"
#include "../Exceptions/Exceptions.h"
#include "../SpellCasters/SpellCaster.h"
#include "../Abilities/DefaultAbility.h"
#include "../Units/Demon.h"

class Demon;

class Warlock: public SpellCaster {
    private:
        Demon* slave;

    public:
        Warlock();
        ~Warlock();

        void attack(Unit* enemy);
        void cast(const std::string& spellName, Unit* enemy);
        void callDemon();
        void demonAttack(Unit* enemy);
        void freeSlave();

};

#endif
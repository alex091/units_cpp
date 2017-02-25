#ifndef SPELLCASTER_H
#define SPELLCASTER_H

#include <map>
#include <iostream>

#include "../Units/Unit.h"
#include "../States/State.h"
#include "../Spells/Spell.h"
#include "../Spells/FireBall.h"
#include "../Spells/Heal.h"
#include "../Spells/LightningStrike.h"
#include "../Exceptions/Exceptions.h"

class Spell;

class SpellCaster : public Unit {
    protected:
        std::map<std::string,Spell*> spellbook;

    public:
        bool isHealer;
        bool isPriest;

        SpellCaster(State* state, Ability* ability);
        ~SpellCaster();

        const std::map<std::string,Spell*>& getSpellbook() const;

        virtual void attack(Unit* enemy) = 0;
        virtual void cast(const std::string& spellName, Unit* target) = 0;
        void addSpell(Spell* newSpell);
        void spendMana(int cost);
        void addMana(int extra);

};

std::ostream& operator<<(std::ostream& out, const SpellCaster& spellcaster);

#endif

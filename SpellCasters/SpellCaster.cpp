#include "SpellCaster.h"

SpellCaster::SpellCaster(State* state, Ability* ability) : Unit(state, ability) {
    addSpell(new FireBall(this, "FireBall", 40, 20));
    addSpell(new Heal(this, "Heal", 20, 10));
    addSpell(new LightningStrike(this, "LightningStrike", 30, 10));
    isHealer = false;
    isPriest = false;

}

SpellCaster::~SpellCaster() {}

const std::map<std::string,Spell*>& SpellCaster::getSpellbook() const {
    return spellbook;
}

void SpellCaster::addSpell(Spell* newSpell) {
    this->spellbook.insert(std::pair<std::string,Spell*>(newSpell->name,newSpell));
}

void SpellCaster::spendMana(int cost) {
    if ( cost > this->getState()->mana ) {
        throw OutOfMana();
    }
    this->getState()->mana -= cost;
}

void SpellCaster::addMana(int extra) {
    this->getState()->isAlive();
    int total = this->getState()->mana + extra;

    if ( total > this->getState()->maxMana ) {
        this->getState()->mana = this->getState()->maxMana;
    } else {
        this->getState()->mana = total;
    }
}

std::ostream& operator<<(std::ostream& out, const SpellCaster& spellcaster) {
    out<<(Unit&)spellcaster;
    out<<" MP(" << spellcaster.Unit::getState()->mana<<'/'<< spellcaster.Unit::getState()->maxMana << ')';

   return out;
}

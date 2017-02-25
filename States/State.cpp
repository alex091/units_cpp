#include "State.h"

State::State(Unit* owner, const std::string& name, int hp, int damage, int mana) {
    this->owner = owner;
    this->name = name;
    this->hp = hp;
    this->maxHp = hp;
    this->mana = mana;
    this->maxMana = mana;
    this->damage = damage;
}

State::~State() {}

void State::isAlive() {
    if( hp == 0 ) {
        throw UnitIsDeadException();
    }
}
void State::takePhysicalDamage(int dmg) {
    isAlive();

    this->hp -= dmg;
    if( hp < 0 ) {
        owner->notify();
        hp = 0;
    }
}

void State::takeMagicDamage(int dmg) {
    isAlive();

    this->hp -= dmg;
    if( hp < 0 ) {
        owner->notify();
        hp = 0;
    }
}

void State::addHp(int amount) {
    if( amount + this->hp <= this->maxHp ) {
        this->hp += amount;
    } else {
       this->hp = this->maxHp;
    }
}
#ifndef STATE_H
#define STATE_H

#include "../Units/Unit.h"
#include "../Interfaces/Observer.h"
#include "../Interfaces/Observable.h"
#include "../Exceptions/Exceptions.h"

class Unit;

class State {
    public:
        int hp;
        int maxHp;
        int mana;
        int maxMana;
        int damage;
        std::string name;
        Unit* owner;

    State(Unit* owner, const std::string& name, int hp, int damage, int mana = 0);
    ~State();

    void isAlive();
    virtual void takePhysicalDamage(int dmg);
    virtual void takeMagicDamage(int dmg);
    void addHp(int amount);
};

#endif
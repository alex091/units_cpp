#ifndef UNIT_H
#define UNIT_H

#include <iostream>
#include "../States/State.h"
#include "../Abilities/Ability.h"
#include "../Interfaces/Observer.h"
#include "../Interfaces/Observable.h"

class State;
class Ability;

class Unit : public Observer, public Observable {
    protected:
        State* state;
        Ability* ability;

    public:
        Unit(State* state, Ability* ability);
        virtual ~Unit();

        State* getState() const ;
        Ability* getAbility() const;

        void setState(State* newState);
        void setAbility(Ability* newAbility);

        virtual void attack(Unit* enemy) = 0;

        virtual void notify();
        virtual void sendNotification();

};

std::ostream& operator<<(std::ostream& out, Unit& unit);

#endif
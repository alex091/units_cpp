#include "Unit.h"

Unit::Unit(State* state, Ability* ability) {
    this->state = state;
    this->ability = ability;
}

Unit::~Unit() {
    delete state;
    delete ability;
}

State* Unit::getState() const {
    return state;
}
Ability* Unit::getAbility() const {
    return ability;
}

void Unit::setState(State* newState) {
    if( state != NULL ) {
        delete state;
    }
    this->state = newState;
}

void Unit::setAbility(Ability* newAbility) {
    if( ability != NULL ) {
        delete ability;
    }
    this->ability = newAbility;
}

void Unit::notify() {
    std::set<Observer*>::iterator it = observers.begin();

    for ( ; it != observers.end(); it++ ) {
        ((Unit*)(*it))->getState()->addHp(10);
        (*it)->removeObservable(this);
    }
}

void Unit::sendNotification() {
    std::set<Observable*>::iterator it = observables.begin();

    for ( ; it != observables.end(); it++ ) {
        (*it)->removeObserver(this);
    }
}

std::ostream& operator<<(std::ostream& out, Unit& unit) {
    out << unit.getState()->name << ": HP(";
    out << unit.getState()->hp << '/';
    out << unit.getState()->maxHp << ") DMG(";
    out << unit.getState()->damage << ") ABL(";
    out << unit.getAbility()->getName() << ')';

    return out;
}
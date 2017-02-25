#ifndef OBSERVABLE_H
#define OBSERVABLE_H

#include <iostream>
#include <set>
#include "../Interfaces/Observer.h"
#include "../Exceptions/Exceptions.h"

class Observer;

class Observable {
    protected:
        std::set<Observer*> observers;

    public:
        Observable();
        ~Observable();

        const std::set<Observer*>& getObservers() const;

        void addObserver(Observer* observer);
        void removeObserver(Observer* observer);
        virtual void notify() = 0;
};

#endif

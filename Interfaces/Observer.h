#ifndef OBSERVER_H
#define OBSERVER_H

#include <iostream>
#include <set>
#include "../Interfaces/Observable.h"
#include "../Exceptions/Exceptions.h"

class Observable;

class Observer {
    protected:
        std::set<Observable*> observables;

    public:
        Observer();
        ~Observer();

        const std::set<Observable*>& getObservables() const;

        void addObservable(Observable* observable);
        void removeObservable(Observable* observable);
        virtual void sendNotification() = 0;
};

#endif

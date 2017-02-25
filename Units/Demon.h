#ifndef DEMON_H
#define DEMON_H

#include "../Units/Soldier.h"
#include "../SpellCasters/Warlock.h"
#include "../States/State.h"

class Warlock;

class Demon : public Soldier {
    public:
        Demon();
        ~Demon();
};

#endif //DEMON_H
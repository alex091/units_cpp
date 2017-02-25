#ifndef BERSERKERSTATE_H
#define BERSERKERSTATE_H
    
#include "../States/State.h"

class BerserkerState: public State {
    public:
        BerserkerState(Unit* owner, const std::string& name, int hp, int damage);
        ~BerserkerState();

        void takePhysicalDamage(int dmg);
        void takeMagicDamage(int dmg);
        
};

#endif
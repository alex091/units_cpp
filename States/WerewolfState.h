#ifndef WEREWOLFSTATE_H
#define WEREWOLFSTATE_H
    
#include "../States/State.h"

class WerewolfState: public State {
    public:
        WerewolfState(Unit* owner, const std::string& name, int hp, int damage);
        ~WerewolfState();

        void takePhysicalDamage(int dmg);
        void takeMagicDamage(int dmg);
        
};

#endif
#include "WerewolfState.h"

WerewolfState::WerewolfState(Unit* owner, const std::string& name, int hp, int damage) : State(owner, name, hp, damage) {

}

WerewolfState::~WerewolfState(){
    
}

void WerewolfState::takePhysicalDamage(int dmg) {
    isAlive();

    this->hp -= dmg;
    if( hp < 0 ) {
        hp = 0;
    }
}

void WerewolfState::takeMagicDamage(int dmg) {
    isAlive();

    this->hp -= dmg * 2;
    if( hp < 0 ) {
        hp = 0;
    }
}

#include "BerserkerState.h"

BerserkerState::BerserkerState(Unit* owner, const std::string& name, int hp, int damage) : State(owner, name, hp, damage) {

}

BerserkerState::~BerserkerState(){
    
}

void BerserkerState::takePhysicalDamage(int dmg) {
    isAlive();

    this->hp -= dmg;
    if( hp < 0 ) {
        hp = 0;
    }
}

void BerserkerState::takeMagicDamage(int dmg) {
    isAlive();

    this->hp -= 0;
}

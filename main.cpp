#include <iostream>
#include "Units/Soldier.h"
#include "Units/Vampire.h"
#include "Units/Werewolf.h"
#include "Units/Berserker.h"
#include "Units/Rogue.h"
#include "Units/Demon.h"
#include "SpellCasters/Wizard.h"
#include "SpellCasters/Healer.h"
#include "SpellCasters/Necromancer.h"
#include "SpellCasters/Priest.h"
#include "SpellCasters/Warlock.h"

int main() {
    Soldier* s1 = new Soldier();
    Soldier* s2 = new Soldier();
    Vampire* v1 = new Vampire();
    Werewolf* w1 = new Werewolf();
    Berserker* b1 = new Berserker();
    Wizard* wiz1 = new Wizard();

    std::cout << *s1 << std::endl;
    std::cout << *s2 << std::endl;
    std::cout << *v1 << std::endl;
    std::cout << *w1 << std::endl;
    std::cout << *b1 << std::endl;
    std::cout << *wiz1 << std::endl;

    std::cout << "---------------------------------------------------" << std::endl;

    s1->attack(v1);
    v1->attack(s2);
    v1->attack(s2);
    v1->attack(s2);
    b1->attack(s1);
    wiz1->cast("FireBall", w1);


    std::cout << *s1 << std::endl;
    std::cout << *s2 << std::endl;
    std::cout << *v1 << std::endl;
    std::cout << *w1 << std::endl;
    std::cout << *b1 << std::endl;
    std::cout << *wiz1 << std::endl;

    delete s1;
    delete s2;

    return 0;
}
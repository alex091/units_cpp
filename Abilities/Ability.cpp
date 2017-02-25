#include "Ability.h"

Ability::Ability(Unit* owner, const std::string& name) {
    this->owner = owner;
    this->name = name;
}

Ability::~Ability() {}

const std::string& Ability::getName() const {
    return name;
}
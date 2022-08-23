#include "ASpell.hpp"

ASpell::ASpell(){}

ASpell::ASpell(std::string name, std::string effects) : _name(name), _effects(effects){}

const std::string     &ASpell::getName() const
{
    return this->_name;
}

const std::string     &ASpell::getEffects() const
{
    return this->_effects;
}

void            ASpell::launch(ATarget const &atarget) const
{
    atarget.getHitBySpell();
}

ASpell::~ASpell(){}
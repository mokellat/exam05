#include "ASpell.hpp"

ASpell::ASpell(){}

ASpell::ASpell(std::string name, std::string effects)
{
    this->name = name;
    this->effects = effects;
}

const std::string           &ASpell::getName() const
{
    return this->name;
}

const std::string           &ASpell::getEffects() const
{
    return this->effects;
}

ASpell::ASpell(const ASpell &cp)
{
    this->name = cp.name;
    this->effects = cp.effects;
}

ASpell &ASpell::operator=(ASpell &cp)
{
    this->name = cp.name;
    this->effects = cp.effects;
    return *this;
}

void    ASpell::launch(ATarget &cp) const
{
    cp.getHitBySpell(*this);
}

ASpell::~ASpell(){}
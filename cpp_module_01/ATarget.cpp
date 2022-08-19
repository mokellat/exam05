#include "ATarget.hpp"
#include "ASpell.hpp"

ATarget::ATarget(std::string type)
{
    this->type = type;
}

const std::string           &ATarget::getType() const
{
    return this->type;
}

void    ATarget::getHitBySpell(const ASpell &cp)
{
    std::cout << getType() << " has been " << cp.getEffects() << "!" << std::endl; 
}
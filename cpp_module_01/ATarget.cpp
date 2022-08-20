#include "ATarget.hpp"

ATarget::ATarget(){}

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

ATarget::ATarget(ATarget &cp)
{
    this->type = cp.type;
}

ATarget &ATarget::operator=(ATarget &cp)
{
    this->type = cp.type;
    return *this;
}

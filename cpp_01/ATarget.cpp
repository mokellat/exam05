#include "ATarget.hpp"

ATarget::ATarget(){}

ATarget::ATarget(std::string type) : _type(type){}

const std::string     &ATarget::getType() const
{
    return this->_type;
}

void            ATarget::getHitBySpell(ASpell const &aspell) const
{
    std::cout << this->_type << " has been " << aspell.getEffects() << "!" << std::endl;
}

ATarget::~ATarget(){}
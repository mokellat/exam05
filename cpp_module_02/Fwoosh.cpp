#include "Fwoosh.hpp"

Fwoosh::Fwoosh()
{
    this->name = "Fwoosh";
    this->effects = "fwooshed";
}

ASpell *Fwoosh::pure() const
{
    return (new Fwoosh());
}

Fwoosh::~Fwoosh(){}
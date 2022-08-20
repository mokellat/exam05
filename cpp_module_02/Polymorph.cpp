#include "Polymorph.hpp"

Polymorph::Polymorph()
{
    this->name = "Polymorph";
    this->effects = "turned into a critter";
}

ASpell *Polymorph::pure() const
{
    return (new Polymorph());
}

Polymorph::~Polymorph(){}
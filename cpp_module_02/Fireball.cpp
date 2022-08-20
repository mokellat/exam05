#include "Fireball.hpp"

Fireball::Fireball()
{
    this->name = "Fireball";
    this->effects = "burnt to a crisp";
}

ASpell *Fireball::pure() const
{
    return (new Fireball());
}

Fireball::~Fireball(){}
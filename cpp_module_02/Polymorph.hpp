#ifndef FIREBALL_HPP
#define FIREBALL_HPP

#include <iostream>
#include "ASpell.hpp"

class Polymorph : public ASpell
{
    public:
        Polymorph();
        ~Polymorph();
        virtual ASpell *pure() const;
};

#endif
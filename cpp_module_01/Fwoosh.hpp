#ifndef FWOOSH_HPP
#define FWOOSH_HPP

#include <iostream>
#include "ASpell.hpp"

class Fwoosh : ASpell
{
    public:
        Fwoosh();
        ~Fwoosh();
        virtual ASpell *pure() const;
};

#endif
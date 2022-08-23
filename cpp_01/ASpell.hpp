#ifndef ASPELL_HPP
#define ASPELL_HPP

#include <iostream>
#include "ATarget.hpp"

class ASpell
{
    protected:
        std::string _name;
        std::string _effects;
    
    public:
        const std::string     &getName() const;
        const std::string     &getEffects() const;
        virtual ASpell          *clone() const = 0;
        void            launch(ATarget const &) const;

    public:
        ASpell();
        ASpell(std::string, std::string);
        ASpell(ASpell &cp);
        ASpell &operator=(ASpell &cp);
        virtual ~ASpell();
};

#endif
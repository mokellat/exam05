#ifndef ATARGET_HPP
#define ATARGET_HPP

#include <iostream>

class ASpell;

#include "ASpell.hpp"

class ATarget
{
    protected:
        std::string _type;

    public:
        const std::string         &getType() const; 
        virtual ATarget     *clone() const = 0;
        void                getHitBySpell(ASpell const &) const;
    
    public:
        ATarget();
        ATarget(std::string);
        ATarget(ATarget &cp);
        ATarget &operator=(ATarget &cp);
        virtual ~ATarget();
};

#endif
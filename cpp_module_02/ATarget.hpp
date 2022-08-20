#ifndef ATARGET_HPP
#define ATARGET_HPP

#include <iostream>

class ASpell;

#include "ASpell.hpp"
class ATarget
{   
    public:
        ATarget(ATarget &cp);
        ATarget &operator=(ATarget &cp);

    protected:
        std::string type;

    public:
        const std::string           &getType() const;
        virtual ATarget *pure() const = 0;
        void    getHitBySpell(const ASpell &);

    public:
        ATarget();
        ATarget(std::string);
        ~ATarget();
};

#endif

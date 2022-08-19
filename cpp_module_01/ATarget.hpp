#ifndef ATARGET_HPP
#define ATARGET_HPP

#include <iostream>
#include "ASpell.hpp"

class ATarget
{   
    private:
        ATarget();
        ATarget &operator=(ATarget &cp);

    private:
        std::string type;

    public:
        const std::string           &getType() const;
        virtual ATarget *pure() = 0;
        void    getHitBySpell(const ASpell&);

    public:
        ATarget(std::string);
        ~ATarget();
};

#endif
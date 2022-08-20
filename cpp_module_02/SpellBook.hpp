#ifndef ATARGET_HPP
#define ATARGET_HPP

#include <iostream>
#include "ASpell.hpp"


class SpellBook
{   
    
    public:
        SpellBook();
        SpellBook(std::string);
        SpellBook(SpellBook &cp);
        SpellBook &operator=(SpellBook &cp);
        ~SpellBook();

    private:
        std::string type;
    
    public:
        void    learnSpell(ASpell*);
        void    forgetSpell(std::string const &);
        ASpell* createSpell(std::string const &);

};

#endif

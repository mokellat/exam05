#ifndef ATARGET_HPP
#define ATARGET_HPP

#include <iostream>
#include <vector>
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
        std:vector<ASpell *> _store;
    
    public:
        void    learnSpell(ASpell*);
        void    forgetSpell(std::string const &);
        ASpell* createSpell(std::string const &);

};

#endif

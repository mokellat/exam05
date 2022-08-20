#ifndef ATARGET_HPP
#define ATARGET_HPP

#include <iostream>
#include <vector>
#include "ASpell.hpp"


class SpellBook
{   
    
    public:
        SpellBook();
        ~SpellBook();

    private:
        std::vector<ASpell *> _store;
        SpellBook(SpellBook &cp);
        SpellBook &operator=(SpellBook &cp);
    
    public:
        void    learnSpell(ASpell*);
        void    forgetSpell(std::string const &);
        ASpell* createSpell(std::string const &);

};

#endif

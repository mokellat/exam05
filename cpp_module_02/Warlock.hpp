#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <iostream>
#include "SpellBook.hpp"
#include "ASpell.hpp"
#include "ATarget.hpp"
#include <vector>

class Warlock{

    public:
        Warlock(std::string, std::string);
        ~Warlock();
    
    private:
        std::string                 _name;
        std::string                 _title;
        std::vector<ASpell*>        _store;
        SpellBook                   _spellbook;
        Warlock(Warlock &cp);
        Warlock &operator=(Warlock &cp);


    public:
        const std::string           &getName() const;
        const std::string           &getTitle() const ;
        void                        setTitle(const std::string&);
        void                        introduce() const;
        void                        learnSpell(ASpell *);
        void                        forgetSpell(std::string);
        void                        launchSpell(std::string, ATarget&);
};

#endif
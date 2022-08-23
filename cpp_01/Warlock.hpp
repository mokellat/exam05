#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <iostream>
#include <vector>
#include "ASpell.hpp"

class Warlock
{
    private:
        std::string             _name;
        std::string             _title;
        std::vector<ASpell*>    _store;

        Warlock(Warlock &cp);
        Warlock &operator=(Warlock &cp);

    public:
        const std::string       &getName() const;
        const std::string       &getTitle() const;
        void                    setTitle(const std::string &);
        void                    introduce() const;

        void                    learnSpell(ASpell *) const;
        void                    forgetSpell(std::string) const;
        void                    launchSpell(std::string, ATarget &) const;

    public:
        Warlock(std::string, std::string);
        ~Warlock();
};

#endif
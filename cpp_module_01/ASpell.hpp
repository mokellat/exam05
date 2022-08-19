#ifndef ASPELL_HPP
#define ASPELL_HPP

#include <iostream>

class ASpell
{   
    public:
        ASpell(ASpell &cp);
        ASpell &operator=(ASpell &cp);

    protected:
        std::string name;
        std::string effects;

    public:
        const std::string           &getName() const;
        const std::string           &getEffects() const;
        virtual ASpell *pure() = 0;

    public:
        ASpell(std::string, std::string);
        ~ASpell();
};

#endif
#ifndef ASPELL_HPP
#define ASPELL_HPP

#include <iostream>
#include "ATarget.hpp"

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
        void                        launch(const ATarget &) const;
        virtual ASpell *pure() const = 0;

    public:
        ASpell(std::string, std::string);
        ~ASpell();
};

#endif
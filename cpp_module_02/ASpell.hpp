#ifndef ASPELL_HPP
#define ASPELL_HPP

#include <iostream>

class ATarget;

#include "ATarget.hpp"
class ASpell
{   
    public:
        ASpell(const ASpell &cp);
        ASpell &operator=(ASpell &cp);

    protected:
        std::string name;
        std::string effects;

    public:
        const std::string           &getName() const;
        const std::string           &getEffects() const;
        void                        launch(ATarget &) const;
        virtual                     ASpell *pure() const = 0;

    public:
        ASpell();
        ASpell(std::string, std::string);
        virtual ~ASpell();
};

#endif

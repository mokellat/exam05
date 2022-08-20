#include "Fwoosh.hpp"

Fwoosh::Fwoosh()
{
    this-name = "Fwoosh";
    this->effects = "fwooshed";
}

Aspell *Fwoosh::pure() const
{
    return (new Fwoosh());
}
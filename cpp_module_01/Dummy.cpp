#include "Dummy.hpp"

Dummy::Dummy()
{
    this->type = "Target Practice Dummy";
}

ATarget *Dummy::pure() const
{
    return (new Dummy());
}
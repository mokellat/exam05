#ifndef DUMMY_HPP
#define DUMMY_HPP

#include <iostream>
#include "ATarget.hpp"

class Dummy : ATarget
{
    public:
    Dummy();
    ~Dummy();
    virtual ATarget *pure() const;
}

#endif
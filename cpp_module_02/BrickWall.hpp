#ifndef DUMMY_HPP
#define DUMMY_HPP

#include <iostream>
#include "ATarget.hpp"

class BrickWall : public ATarget
{
    public:
        BrickWall();
        ~BrickWall();
        virtual ATarget *pure() const;
};

#endif
#ifndef BRICKWALL_HPP
#define BRICKWALL_HPP

#include "ATarget.hpp"
#include <iostream>

class BrickWall : public ATarget
{
    public:
        BrickWall();
        ~BrickWall();
        virtual ATarget *pure() const;
};

#endif
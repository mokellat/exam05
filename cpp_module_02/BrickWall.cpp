#include "BrickWall.hpp"

BrickWall::BrickWall()
{
    this->type = "Inconspicuous Red-brick Wall";
}

ATarget *BrickWall::pure() const
{
    return (new BrickWall());
}

BrickWall::~BrickWall(){}
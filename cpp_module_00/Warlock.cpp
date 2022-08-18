#include "Warlock.hpp"

Warlock::Warlock(std::string name, std::string title)
{
    std::cout << getName() + ": This looks like another boring day."<< std::endl
}

std::string Warlock::getName() const
{
    return this->_name;
}

std::string Warlock::getTitle() const
{
    return this->_title;
}
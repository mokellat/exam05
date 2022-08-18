#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <iostream>

class Warlock{

    Warlock(std::string, std::string);
    ~Warlock();
    private:
        std::string         _name;
        std::string         _title;

    public:
        std::string   &getName() const;
        std::string   &getTitle() const;
        void                setTiltle(const std::string&);
}

#endif
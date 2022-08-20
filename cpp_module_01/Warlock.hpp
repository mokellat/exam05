#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <iostream>

class Warlock{

    public:
        Warlock(std::string, std::string);
        ~Warlock();
    
    private:
        std::string                 _name;
        std::string                 _title;
        Warlock(Warlock &cp);
        Warlock &operator=(Warlock &cp);


    public:
        const std::string           &getName() const;
        const std::string           &getTitle() const ;
        void                        setTitle(const std::string&);
        void                        introduce() const;
};

#endif
#include "Warlock.hpp"

Warlock::Warlock(std::string name, std::string title)
{
    this->_name = name;
    this->_title = title;

    std::cout << this->_name << ": This looks like another boring day." << std::endl;
}

const std::string &Warlock::getName() const
{
    return this->_name;
}

const std::string &Warlock::getTitle() const
{
    return this->_title;
}

void        Warlock::setTitle(const std::string &t)
{
    this->_title = t;
}

void        Warlock::introduce() const
{
    std::cout << this->_name << ": I am " << this->_name << ", " << this->_title << "!" << std::endl;
}

Warlock::~Warlock()
{
    std::cout << this->_name << ": My job here is done!" << std::endl;
}

void    Warlock::learnSpell(ASpell *aspell)
{
    if(aspell)
    {
        std::vector<ASpell *>::iterator ite = this->_store.end();
        std::vector<ASpell *>::iterator it;
        for(it = this->_store.begin(); it != ite; it++)
        {
            if((*it)->getName() == aspell->getName())
                return ;
        }
        this->_store.push_back(aspell->clone());
    }
}

void    Warlock::forgetSpell(std::string name)
{
    std::vector<ASpell *>::iterator ite = this->_store.end();
    std::vector<ASpell *>::iterator it;
    for(it = this->_store.begin(); it != ite; it++)
    {
        if((*it)->getName() == name)
        {
            delete *it;
            it = this->_store.erase(it);
        }
    }
}

void    Warlock::launchSpell(std::string name, ATarget &atarget)
{
    std::vector<ASpell *>::iterator ite = this->_store.end();
    std::vector<ASpell *>::iterator it;
    for(it = this->_store.begin(); it != ite; it++)
    {
        if((*it)->getName() == name)
        {
            (*it)->launch(atarget);
            return ;
        }
    }
}
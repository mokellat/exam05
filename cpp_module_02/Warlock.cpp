#include "Warlock.hpp"

Warlock::Warlock(std::string name, std::string title)
{
    this->_name = name;
    this->_title = title;
    std::cout << getName() << ": This looks like another boring day." << std::endl;
}

const std::string &Warlock::getName() const
{
    return this->_name;
}

const std::string &Warlock::getTitle() const
{
    return this->_title;
}

void    Warlock::setTitle(const std::string &title)
{
    this->_title = title;
}

void    Warlock::introduce() const
{
    std::cout << getName() << ": I am "<< getName() << ", " << getTitle() << std::endl;
}

Warlock::~Warlock()
{
    std::cout << getName() << ": My job here is done!"<< std::endl;
    std::vector<ASpell*>::iterator ite = this->_store.end();
	for (std::vector<ASpell*>::iterator it = this->_store.begin(); it != ite; ++it)
		delete *it;
	this->_store.clear();
}

void Warlock::learnSpell(ASpell *spell) {
	if (spell) {
		std::vector<ASpell*>::iterator ite = this->_store.end();
		for (std::vector<ASpell*>::iterator it = this->_store.begin(); it != ite; ++it)
			if ((*it)->getName() == spell->getName())
				return ;
		this->_store.push_back(spell->pure());
	}
}

void Warlock::forgetSpell(std::string spellName) {
	std::vector<ASpell*>::iterator ite = this->_store.end();
	for (std::vector<ASpell*>::iterator it = this->_store.begin(); it != ite; ++it) {
		if ((*it)->getName() == spellName) {
			delete *it;
			it = this->_store.erase(it);
		}
	}
}

void Warlock::launchSpell(std::string spellName, ATarget &target) {
	std::vector<ASpell*>::iterator ite = this->_store.end();
	for (std::vector<ASpell*>::iterator it = this->_store.begin(); it != ite; ++it) {
		if ((*it)->getName() == spellName) {
			(*it)->launch(target);
			return ;
		}
	}
}
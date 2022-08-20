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
	this->_spellbook.learnSpell(spell);
}

void Warlock::forgetSpell(std::string spellName) {
	this->_spellbook.forgetSpell(spellName);
}

void Warlock::launchSpell(std::string spellName, ATarget &target) {
	ASpell *spell = this->_spellbook.createSpell(spellName);
	if (spell)
		spell->launch(target);
}
#include "SpellBook.hpp"

SpellBook::SpellBook(){}

void    SpellBook::learnSpell(ASpell *spell)
{
    if (spell) {
		std::vector<ASpell*>::iterator ite = this->_store.end();
		for (std::vector<ASpell*>::iterator it = this->_store.begin(); it != ite; ++it)
			if ((*it)->getName() == spell->getName())
				return ;
		this->_store.push_back(spell->pure());
	}
}

void    SpellBook::forgetSpell(std::string const &spellName)
{
    std::vector<ASpell*>::iterator ite = this->_store.end();
	for (std::vector<ASpell*>::iterator it = this->_store.begin(); it != ite; ++it) {
		if ((*it)->getName() == spellName) {
			delete *it;
			it = this->_store.erase(it);
		}
	}
}

ASpell  *SpellBook::createSpell(std::string const &spellName)
{
    std::vector<ASpell*>::iterator ite = this->_store.end();
	for (std::vector<ASpell*>::iterator it = this->_store.begin(); it != ite; ++it) {
		if ((*it)->getName() == spellName) {
			return (*it);
		}
	}
	return (nullptr);
}

SpellBook::~SpellBook(){}
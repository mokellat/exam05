#include "TargetGenerator.hpp"


TargetGenerator::TargetGenerator(){}

void TargetGenerator::learnTargetType(ATarget* type)
{
    if (type) {
		std::vector<ATarget*>::iterator ite = this->_store.end();
		for (std::vector<ATarget*>::iterator it = this->_store.begin(); it != ite; ++it)
			if ((*it)->getType() == type->getType())
				return ;
		this->_store.push_back(type->pure());
	}
}

void TargetGenerator::forgetTargetType(std::string const & name)
{
    std::vector<ATarget*>::iterator ite = this->_store.end();
	for (std::vector<ATarget*>::iterator it = this->_store.begin(); it != ite; ++it) {
		if ((*it)->getType() == name) {
			delete *it;
			it = this->_store.erase(it);
		}
	}
}

ATarget* TargetGenerator::createTarget(std::string const & name)
{
    std::vector<ATarget*>::iterator ite = this->_store.end();
	for (std::vector<ATarget*>::iterator it = this->_store.begin(); it != ite; ++it) {
		if ((*it)->getType() == name) {
			return (*it);
		}
	}
	return (nullptr);
}

TargetGenerator::~TargetGenerator()
{
    std::vector<ATarget*>::iterator ite = this->_store.end();
	for (std::vector<ATarget*>::iterator it = this->_store.begin(); it != ite; ++it)
		delete *it;
	this->_store.clear();
}
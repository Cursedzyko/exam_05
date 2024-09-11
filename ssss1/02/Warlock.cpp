#include "Warlock.hpp"

Warlock::Warlock(const std::string &name, const std::string &title)
{
	this->name = name;
	this->title = title;

	std::cout << this->name << ": This looks like another boring day." << std::endl;
}
Warlock::~Warlock()
{
	std::cout << this->name << ": My job here is done!" << std::endl;
}
const std::string &Warlock::getName() const
{
	return (this->name);
}
const std::string &Warlock::getTitle() const
{
	return (this->title);
}

void Warlock::setTitle(const std::string &title)
{
	this->title = title;
}

void Warlock::introduce() const
{
	std::cout << this->name << ": I am " << this->name << ", " << this->title << "!" <<std::endl;
}


void Warlock::learnSpell(ASpell *obj)
{
	this->book.learnSpell(obj);
}
void Warlock::forgetSpell(std::string spell_n)
{
	this->book.forgetSpell(spell_n);
}
void Warlock::launchSpell(std::string spell_n, const ATarget &obj)
{
	ASpell *tmp = this->book.createSpell(spell_n);
	if (tmp)
		tmp->launch(obj);
}
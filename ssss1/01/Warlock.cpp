#include "Warlock.hpp"

Warlock::Warlock(const std::string &name, const std::string &title)
{
	this->name = name;
	this->title = title;

	std::cout << this->name << ": This looks like another boring day." << std::endl;
}
Warlock::~Warlock()
{
	std::map<std::string, ASpell *>::iterator it_b = this->mp.begin();
	std::map<std::string, ASpell *>::iterator it_e = this->mp.end();
	while(it_b != it_e)
	{
		delete it_b->second;
		it_b++;
	}
	this->mp.clear();
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


void Warlock::learnSpell(const ASpell *obj){
	if (obj)
		this->mp.insert(std::pair<std::string, ASpell *>(obj->getName(), obj->clone()));
}
void Warlock::forgetSpell(std::string spell_n)
{
	std::map<std::string, ASpell *>::iterator it = this->mp.find(spell_n);
	if ( it != this->mp.end())
	{
		delete it->second;
	}
	this->mp.erase(spell_n);
}
void Warlock::launchSpell(std::string spell_n, const ATarget &obj)
{
	ASpell *spell = this->mp[spell_n];
	if (spell)
		spell->launch(obj);
}
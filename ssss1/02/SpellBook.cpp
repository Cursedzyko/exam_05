#include "SpellBook.hpp"

SpellBook::SpellBook(){}
SpellBook::~SpellBook(){
	std::map<std::string, ASpell *>::iterator it_b = this->mp.begin();
	std::map<std::string, ASpell *>::iterator it_e = this->mp.end();
	while(it_b != it_e)
	{
		delete it_b->second;
		it_b++;
	}
	this->mp.clear();
}

void SpellBook::learnSpell(ASpell* spell){
	if (spell)
		this->mp.insert(std::pair<std::string, ASpell *>(spell->getName(), spell->clone()));
}
void SpellBook::forgetSpell(std::string const & spell_n){
	std::map<std::string, ASpell *>::iterator it = this->mp.find(spell_n);
	if (it != this->mp.end())
	{
		delete it->second;
	}
	this->mp.erase(spell_n);
}
ASpell* SpellBook::createSpell(std::string const & spell_n){
	std::map<std::string, ASpell *>::iterator it = this->mp.find(spell_n);
	if (it != this->mp.end())
		return this->mp[spell_n];
	return NULL;
}
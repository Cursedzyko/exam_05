#pragma once

#include <map>
#include "ASpell.hpp"

class SpellBook
{
	private:

		std::map<std::string, ASpell *> mp;
		SpellBook(const SpellBook &obj);
		SpellBook &operator=(const SpellBook &obj);
	public:
		SpellBook();
		~SpellBook();

		void learnSpell(ASpell* spell);
		void forgetSpell(std::string const & spell_n);
		ASpell* createSpell(std::string const & spell_n);

};
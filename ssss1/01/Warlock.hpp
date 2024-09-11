#pragma once

#include <iostream>
#include "ASpell.hpp"
#include "ATarget.hpp"
#include <map>

class Warlock{
	private:
		std::string name;
		std::string title;

		std::map<std::string, ASpell *> mp;

		Warlock();
		Warlock &operator=(const Warlock &obj);
		Warlock(const Warlock &obj);
	public:
		Warlock(const std::string &name, const std::string &title);
		~Warlock();

		const std::string &getName() const;
		const std::string &getTitle() const;

		void setTitle(const std::string &title);

		void introduce() const;

		void learnSpell(const ASpell *obj);
		void forgetSpell(std::string spell_n);
		void launchSpell(std::string spell_n, const ATarget &obj);
};
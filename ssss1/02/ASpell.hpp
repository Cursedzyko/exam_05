#pragma once

#include <iostream>

class ATarget;

class ASpell
{
	protected:
		std::string name;
		std::string effects;
	public:
		ASpell();
		ASpell(std::string const &name, std::string const &effects);
		ASpell(const ASpell &obj);
		ASpell &operator=(const ASpell &obj);
		~ASpell();

		std::string const &getName() const;
		std::string const &getEffects() const;

		void launch(const ATarget &obj) const;

		virtual ASpell *clone() const = 0;
};

#include "ATarget.hpp"
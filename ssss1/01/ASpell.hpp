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
		virtual ~ASpell();

		const std::string &getName() const;
		const std::string &getEffects() const;

		void launch(const ATarget &obj) const;

		virtual ASpell *clone() const = 0;
};

#include "ATarget.hpp"
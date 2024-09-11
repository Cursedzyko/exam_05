#pragma once

#include <iostream>

class ASpell;

class ATarget
{
	private:
		std::string type;
	public:
		ATarget();
		ATarget(std::string const &type);
		ATarget(const ATarget &obj);
		ATarget &operator=(const ATarget &obj);
		virtual ~ATarget();

		std::string const &getType() const;

		void getHitBySpell(const ASpell &obj) const;

		virtual ATarget *clone() const = 0;
};

#include "ASpell.hpp"
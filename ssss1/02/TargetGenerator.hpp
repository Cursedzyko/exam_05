#pragma once 
#include <map>
#include "ATarget.hpp"

class TargetGenerator
{
	private:

		std::map<std::string, ATarget *> mp;
		TargetGenerator(const TargetGenerator &obj);
		TargetGenerator &operator=(const TargetGenerator &obj);
	public:
		TargetGenerator();
		~TargetGenerator();

		void learnTargetType(ATarget* target);
		void forgetTargetType(std::string const & type);
		ATarget* createTarget(std::string const &target);

};
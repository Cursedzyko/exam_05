#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator(){}
TargetGenerator::~TargetGenerator(){
	std::map<std::string, ATarget *>::iterator it_b = this->mp.begin();
	std::map<std::string, ATarget *>::iterator it_e = this->mp.end();
	while(it_b != it_e)
	{
		delete it_b->second;
		it_b++;
	}
	this->mp.clear();
}

void TargetGenerator::learnTargetType(ATarget* target){
	if (target)
		this->mp.insert(std::pair<std::string, ATarget *>(target->getType(), target->clone()));
}
void TargetGenerator::forgetTargetType(std::string const & type){
	std::map<std::string, ATarget *>::iterator it = this->mp.find(type);
	if (it != this->mp.end())
	{
		delete it->second;
	}
	this->mp.erase(type);
}
ATarget* TargetGenerator::createTarget(std::string const &target){
	std::map<std::string, ATarget *>::iterator it = this->mp.find(target);
	if (it != this->mp.end())
		return this->mp[target];
	return NULL;
}
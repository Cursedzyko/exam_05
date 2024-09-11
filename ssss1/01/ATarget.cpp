#include "ATarget.hpp"

ATarget::ATarget(){}
ATarget::ATarget(std::string const &type){
	this->type = type;
}
ATarget::ATarget(const ATarget &obj)
{
	*this = obj;
}
ATarget &ATarget::operator=(const ATarget &obj){
	this->type = obj.type;
	return (*this);
}
ATarget::~ATarget(){}

std::string const &ATarget::getType() const{
	return ( this->type);
}

void ATarget::getHitBySpell(const ASpell &obj) const{
	std::cout << this->type << " has been " << obj.getEffects() << "!\n";

}
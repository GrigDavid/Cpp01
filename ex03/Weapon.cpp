#include "Weapon.hpp"

Weapon::Weapon(const Weapon& weapon)
{
	this->_type = weapon._type;
}

const std::string& Weapon::getType()
{
	return (_type);
}
void Weapon::setType(std::string type)
{
	_type = type;
}
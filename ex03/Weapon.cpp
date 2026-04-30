#include "Weapon.hpp"

Weapon::Weapon(const Weapon& weapon)
{
	this->_type = weapon._type;
}


Weapon::~Weapon()
{}
Weapon::Weapon(const std::string& weapon)
{
	_type = weapon;
}

const std::string& Weapon::getType()
{
	return (_type);
}
void Weapon::setType(std::string type)
{
	_type = type;
}
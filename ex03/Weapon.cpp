#include "Weapon.hpp"

Weapon::Weapon(const Weapon& other) : _type(other._type)
{
}


Weapon::~Weapon()
{}
Weapon::Weapon(const std::string& weapon) : _type(weapon)
{
}

std::string& Weapon::getType() 
{
	return (_type);
}
void Weapon::setType(std::string type)
{
	_type = type;
}
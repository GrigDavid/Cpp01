#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB (std::string name)
{
	_name = name;
	_weapon = NULL;
}

HumanB::HumanB (std::string name, Weapon weapon): _name(name)
{
	_weapon = new Weapon(weapon);
}
void HumanB::setWeapon(Weapon weapon)
{
	if (_weapon)
		delete _weapon;
	_weapon = new Weapon(weapon);
}

HumanB::~HumanB()
{
	delete _weapon;
}

void HumanB::attack(){
	std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
}
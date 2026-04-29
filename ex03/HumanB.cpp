#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB (std::string name)
{
	_name = name;
}

HumanB::HumanB (std::string name, Weapon weapon): _name(name), _weapon(weapon)
{
	_name = name;
}

void HumanB::attack(){
	std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}
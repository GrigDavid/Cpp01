#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie() : _name("")
{
}

Zombie::~Zombie()
{
	std::cout << _name << " has been destroyed" << std::endl;
}

Zombie::Zombie(const std::string& name) : _name(name)
{
}

void	Zombie::announce( void ) const
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName(const std::string& name)
{
	_name = name;
}
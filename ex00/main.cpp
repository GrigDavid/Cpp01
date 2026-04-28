#include "Zombie.hpp"

Zombie*	newZombie( std::string name );

void	randomChump( std::string name );

int main()
{
	randomChump("Arsen");
	Zombie *alo = newZombie("Nazaretyan");
	alo->announce();
	delete alo;
}
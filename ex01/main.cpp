#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name );

int main()
{
	Zombie *alo = zombieHorde(6, "Nazaretyan");
	for (int i = 0; i < 6; i++)
		alo[i].announce();
	delete [] alo;
}
#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	if (N <= 0)
		return (NULL);
	Zombie *res = new Zombie[N]();
	for (int i = 0; i < N; i++)
	{
		res[i].setName(name);
	}
	return (res);
}
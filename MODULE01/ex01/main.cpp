#include "Zombie.hpp"

int	main()
{
	Zombie *z = zombieHorde(5, "GOGARA");
	for (int i = 0; i < 5; i++)
		z[i].anounce();
	delete[] z;
	return (0);
}

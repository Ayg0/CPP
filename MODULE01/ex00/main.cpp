#include "Zombie.hpp"

int	main()
{
	Zombie *r = newZombie("Alpha");
	r->anounce();
	randomChump("Beta");
	delete(r);
}
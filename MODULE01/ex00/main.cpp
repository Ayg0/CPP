#include "Zombie.hpp"

Zombie	*newZombie(std::string	name)
{
	Zombie *r = new Zombie(name);
	return (r);
}

void	randomChump(std::string	name)
{
	Zombie r(name);
	r.anounce();
}

int	main()
{
	Zombie *r = newZombie("Alpha");
	r->anounce();
	r = newZombie("56");
	r->anounce();
	randomChump("Beta");
	system("leaks zombie");
}
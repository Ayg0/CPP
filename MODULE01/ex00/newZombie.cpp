#include "Zombie.hpp"

Zombie	*newZombie(std::string	name)
{
	Zombie *r = new Zombie(name);
	return (r);
}
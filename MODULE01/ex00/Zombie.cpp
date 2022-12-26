#include "Zombie.hpp"

Zombie::Zombie(std::string	name)
{
	this->name = name;
}

Zombie::~Zombie()
{
	std::cout << "Head shot " + name << std::endl;
}

void	Zombie::anounce()
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
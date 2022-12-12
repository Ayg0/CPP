#include "Zombie.hpp"

void	Zombie::assign(std::string	name)
{
	this->name = name;
}

Zombie::Zombie()
{
	std::cout << "Spawned One Zombie" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "Die evil Die." << std::endl;
}

void	Zombie::anounce()
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
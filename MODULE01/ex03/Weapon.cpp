#include "Weapon.hpp"

Weapon::Weapon(std::string ty)
{
	type = ty;
	std::cout << "Constructor of the weapon Called" << std::endl;
}

void	Weapon::setType(std::string ty)
{
	type = ty;
}

std::string	&Weapon::getType()
{
	return(type);
}

Weapon::~Weapon()
{
	std::cout << "Destructor of the weapon Called" << std::endl;
}


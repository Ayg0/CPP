#include "HumanB.hpp"

HumanB::HumanB(std::string name, Weapon &weapon)
{
	this->weapon = weapon;
	this->name = name;
	std::cout << "Constructor of the HumanA Called" << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = weapon;
}

void	HumanB::attack()
{
	std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}

HumanB::~HumanB()
{
	std::cout << "Destructor of the HumanA Called" << std::endl;
}
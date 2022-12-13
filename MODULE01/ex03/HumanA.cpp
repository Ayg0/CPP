#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon)
{
	this->weapon = &weapon;
	this->name = name;
	std::cout << "Constructor of the HumanA Called" << std::endl;
}

void	HumanA::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}

void	HumanA::attack()
{
	std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}

HumanA::~HumanA()
{
	std::cout << "Destructor of the HumanA Called" << std::endl;
}
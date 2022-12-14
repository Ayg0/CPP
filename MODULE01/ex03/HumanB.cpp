#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->name = name;
	std::cout << "Constructor of the HumanB Called" << std::endl;
}

//void	HumanB::setWeapon(Weapon *weapon)
//{
//	this->weapon = weapon;
//}

//void	HumanB::setWeapon(Weapon &weapon)
//{
//	this->weapon = &weapon;
//}

void	HumanB::attack()
{
	std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}

HumanB::~HumanB()
{
	std::cout << "Destructor of the HumanB Called" << std::endl;
}
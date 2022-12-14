#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon):name(name), weapon(weapon)
{
	std::cout << "Constructor of the HumanA Called" << std::endl;
}

void	HumanA::setWeapon(Weapon &weapon)
{
	std::cout << &(this->weapon) << std::endl;
	this->weapon = weapon;
	std::cout << &(this->weapon) << std::endl;
}

void	HumanA::attack()
{
	std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}

HumanA::~HumanA()
{
	std::cout << "Destructor of the HumanA Called" << std::endl;
}

# include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name){
	this->name = name;
	hit_points = 10;
	energy_points = 10;
	attack_damage = 0;
	std::cout << "Constructor has been called" << std::endl;
}

void	ClapTrap::attack(const std::string& target){
	if (!energy_points)
		return ;
	std::cout << this->name << " atacked " << target << " resulted in " << this->attack_damage << " damage points." << std::endl;
	energy_points--;
}

void	ClapTrap::takeDamage(unsigned int amount){
	std::cout << this->name << "took " << amount << " of damage" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount){
	if (!energy_points)
		return ;
	std::cout << this->name << " repaired " << amount << " points" << std::endl;
	energy_points--;
}

ClapTrap::~ClapTrap(){
	std::cout << "Destructor has been called" << std::endl;
}
#include "ScavTrap.hpp"

ScavTrap::ScavTrap(){
	set_hit_points(100);
	set_energy_points(50);
	set_attack_points(20);
	std::cout << "Default ScavTrap Constructor Called." << std::endl;
}
ScavTrap   &ScavTrap::operator = (const ScavTrap &a){
	this->set_hit_points(a.get_hit_points());
	this->set_energy_points(a.get_energy_points());
	this->set_attack_points(a.get_attack_points());
	return (*this);
}
ScavTrap::ScavTrap(const ScavTrap &a){
	*this = a;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name){
	set_hit_points(100);
	set_energy_points(50);
	set_attack_points(20);
	std::cout << "ScavTrap Constructor Called." << std::endl;
}

void ScavTrap::guardGate(){
	std::cout << "ScavTrap is now in Gate keeper mode." << std::endl;
}

ScavTrap::~ScavTrap(){
	std::cout << "ScavTrap destructor called." << std::endl;
}
#include "ScavTrap.hpp"

ScavTrap::ScavTrap(){
	this->hit_points = 100;
	this->energy_points = 50;
	this->attack_damage = 20;
	std::cout << "Default ScavTrap Constructor Called." << std::endl;
}

ScavTrap   &ScavTrap::operator = (const ScavTrap &a){
	this->hit_points = a.hit_points;
	this->attack_damage = a.attack_damage;
	this->energy_points = a.energy_points;
	return (*this);
}

void	ScavTrap::attack(const std::string& target){
		if (!energy_points || hit_points <= 0){
		std::cout << this->name <<  "can't do any action. "<< std::endl;
		return ;
	}
	std::cout << "The ScavTrap " << this->name << " atacked " << target << ", resulted in " << this->attack_damage << " damage points." << std::endl;
	energy_points--;
}

ScavTrap::ScavTrap(const ScavTrap &a){
	*this = a;
}

ScavTrap::ScavTrap(std::string name):ClapTrap(name){
	this->hit_points = 100;
	this->energy_points = 50;
	this->attack_damage = 20;
	std::cout << "ScavTrap Constructor Called." << std::endl;
}

void ScavTrap::guardGate(){
	std::cout << "ScavTrap is now in Gate keeper mode." << std::endl;
}

ScavTrap::~ScavTrap(){
	std::cout << "ScavTrap destructor called." << std::endl;
}
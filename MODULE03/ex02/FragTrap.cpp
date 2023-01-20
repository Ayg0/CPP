#include "FragTrap.hpp"

FragTrap::FragTrap(){
	this->hit_points = 100;
	this->energy_points = 100;
	this->attack_damage = 30;
	std::cout << "Default FragTrap Constructor Called." << std::endl;
}
FragTrap   &FragTrap::operator = (const FragTrap &a){
	this->name = a.name;
	this->hit_points = a.hit_points;
	this->attack_damage = a.attack_damage;
	this->energy_points = a.energy_points;
	return (*this);
}
FragTrap::FragTrap(const FragTrap &a){
	*this = a;
}

FragTrap::FragTrap(std::string name):ClapTrap(name){
	this->hit_points = 100;
	this->energy_points = 100;
	this->attack_damage = 30;
	std::cout << "FragTrap Constructor Called." << std::endl;
}

void FragTrap::highFivesGuys(){
	std::cout << "High Five." << std::endl;
}

FragTrap::~FragTrap(){
	std::cout << "FragTrap destructor called." << std::endl;
}
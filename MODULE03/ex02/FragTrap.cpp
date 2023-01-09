#include "FragTrap.hpp"

FragTrap::FragTrap(){
	set_hit_points(100);
	set_energy_points(100);
	set_attack_points(0);
	std::cout << "Default FragTrap Constructor Called." << std::endl;
}
FragTrap   &FragTrap::operator = (const FragTrap &a){
	this->set_hit_points(a.get_hit_points());
	this->set_energy_points(a.get_energy_points());
	this->set_attack_points(a.get_attack_points());
	return (*this);
}
FragTrap::FragTrap(const FragTrap &a){
	*this = a;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name){
	set_hit_points(100);
	set_energy_points(100);
	set_attack_points(30);
	std::cout << "FragTrap Constructor Called." << std::endl;
}

void FragTrap::highFivesGuys(){
	std::cout << "High Five." << std::endl;
}

FragTrap::~FragTrap(){
	std::cout << "FragTrap destructor called." << std::endl;
}
# include "ClapTrap.hpp"

ClapTrap::ClapTrap(){
	this->name = "NONAME";
	hit_points = 10;
	energy_points = 10;
	attack_damage = 0;
	std::cout << "Default ClapTrap Constructor has been called" << std::endl;
}

ClapTrap::ClapTrap(std::string name){
	this->name = name;
	hit_points = 10;
	energy_points = 10;
	attack_damage = 0;
	std::cout << "ClapTrap Constructor has been called" << std::endl;
}

void	ClapTrap::attack(const std::string& target){
	if (!energy_points || hit_points <= 0){
		std::cout << this->name <<  "is incapable of doing any action. "<< std::endl;
		return ;
	}
	std::cout << this->name << " atacked " << target << " resulted in " << this->attack_damage << " damage points." << std::endl;
	energy_points--;
}

void	ClapTrap::takeDamage(unsigned int amount){
	if (hit_points <= 0){
		std::cout << this->name <<  "is already dead ... YOU monster"<< std::endl;
		return ;
	}
	hit_points -= amount;
	std::cout << this->name << "took " << amount << " of damage" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount){
	if (!energy_points || hit_points <= 0){
		std::cout << this->name <<  "is incapable of doing any action. "<< std::endl;
		return ;
	}
	hit_points += amount;
	std::cout << this->name << " repaired " << amount << " points" << std::endl;
	energy_points--;
}

ClapTrap   &ClapTrap::operator = (const ClapTrap &a){
	this->name = a.name;
	this->attack_damage = a.attack_damage;	
	this->energy_points = a.energy_points;
	this->hit_points = a.hit_points;
	return (*this);
}

ClapTrap::ClapTrap(const ClapTrap &a){
	*this = a;
}

ClapTrap::~ClapTrap(){
	std::cout << "Destructor has been called" << std::endl;
}
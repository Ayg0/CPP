# include "ClapTrap.hpp"

ClapTrap::ClapTrap(){
	this->name = "NONAME";
	hit_points = 0;
	energy_points = 0;
	attack_damage = 0;
	std::cout << "Default Constructor has been called" << std::endl;
}

ClapTrap::ClapTrap(std::string name){
	this->name = name;
	hit_points = 10;
	energy_points = 10;
	attack_damage = 0;
	std::cout << "ClapTrap Constructor has been called" << std::endl;
}

void	ClapTrap::attack(const std::string& target){
	if (!energy_points){
		std::cout << this->name << " needs energy." << std::endl;
		return ;
	}
	std::cout << this->name << " atacked " << target << " resulted in " << this->attack_damage << " damage points." << std::endl;
	energy_points--;
}

void	ClapTrap::takeDamage(unsigned int amount){
	std::cout << this->name << "took " << amount << " of damage" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount){
	if (!energy_points){
		std::cout << this->name << " needs energy." << std::endl;
		return ;
	}
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

void	ClapTrap::set_energy_points(int nu){
	this->energy_points = nu;
}
void	ClapTrap::set_hit_points(int nu){
	this->hit_points = nu;
}
void	ClapTrap::set_attack_points(int nu){
	this->attack_damage = nu;
}
int		ClapTrap::get_energy_points(void) const{
	return (this->energy_points);
}
int		ClapTrap::get_hit_points(void) const{
	return (this->hit_points);
}
int		ClapTrap::get_attack_points(void) const{
	return (this->attack_damage);
}


ClapTrap::~ClapTrap(){
	std::cout << "ClapTrap Destructor has been called" << std::endl;
}
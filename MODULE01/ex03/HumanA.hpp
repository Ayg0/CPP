#ifndef HUMANB_HPP
# define HUMANB_HPP
# include "Weapon.hpp"

class HumanA
{
private:
	std::string	name;
	Weapon		*weapon;
public:
	void	setWeapon(Weapon &weapon);
	void	attack();
	HumanA(std::string name, Weapon &weapon);
	~HumanA();
};
# endif

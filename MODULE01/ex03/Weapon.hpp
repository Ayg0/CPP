#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <iostream>

class Weapon
{
private:
	std::string	type;
public:
	std::string	&getType();
	void		setType(std::string ty);
	Weapon(std::string ty);
	~Weapon();
};
# endif

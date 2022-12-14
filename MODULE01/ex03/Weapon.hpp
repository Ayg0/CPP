#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <iostream>

class Weapon
{
private:
	std::string	type;
	int			r;
public:
	std::string	&getType();
	void		setType(std::string ty);
	Weapon(std::string ty);
	//void	set_r(int r);
	//void	get_r();
	Weapon();
	~Weapon();
};
# endif

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{	
public:
	ScavTrap();
	ScavTrap(const ScavTrap &a);
	ScavTrap   &operator = (const ScavTrap &a);
	ScavTrap(std::string name);
	void	attack(const std::string& target);
	void guardGate();
	~ScavTrap();
};

#endif
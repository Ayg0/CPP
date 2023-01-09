#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:
	
public:
	ScavTrap();
	ScavTrap(const ScavTrap &a);
	ScavTrap   &operator = (const ScavTrap &a);
	ScavTrap(std::string name);
	void guardGate();
	~ScavTrap();
};

#endif
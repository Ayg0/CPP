#ifndef FragTrap_HPP
# define FragTrap_HPP
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
private:
	
public:
	FragTrap();
	FragTrap(const FragTrap &a);
	FragTrap   &operator = (const FragTrap &a);
	FragTrap(std::string name);
	void highFivesGuys();
	~FragTrap();
};

#endif
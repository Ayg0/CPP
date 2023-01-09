#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(){
	ClapTrap l("Yano");
	ScavTrap d("yara");
	d.guardGate();
	FragTrap n("Jiro");
	n.highFivesGuys();
	n.attack("yara");
	d.takeDamage(10);
}
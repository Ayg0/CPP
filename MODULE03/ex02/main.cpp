#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(){
	ClapTrap l("ok");
	ScavTrap d("f");
	ScavTrap r(d);
	FragTrap k("nice");

	r.attack("ee");
	l.attack("r");
	k.attack("f");
	k.highFivesGuys();
	r.beRepaired(1);
	d.guardGate();
}
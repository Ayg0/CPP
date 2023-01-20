#include "ScavTrap.hpp"

int	main(){
	ClapTrap l("ok");
	ScavTrap d("f");
	ScavTrap r(d);

	r.attack("ee");
	l.attack("r");
	r.beRepaired(1);
	d.guardGate();
}
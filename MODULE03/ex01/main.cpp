#include "ScavTrap.hpp"

int	main(){
	ClapTrap l("ok");
	ScavTrap d("33");
	ScavTrap r;

	std::cout << r.get_attack_points() << std::endl;
	std::cout << r.get_attack_points() << std::endl;
	d.guardGate();
}
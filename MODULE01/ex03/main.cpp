#include "HumanA.hpp"

int	main()
{
	Weapon club = Weapon("sword");
	HumanA a = HumanA("Bob", club);
	a.attack();
	club.setType("spear");
	a.attack();
}
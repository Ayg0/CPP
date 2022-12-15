#include "HumanA.hpp"
#include "HumanB.hpp"

int	main()
{
	{
		Weapon club = Weapon("sword");
		HumanA mornang("mornang", club);
		mornang.attack();
		club.setType("spear");
		mornang.attack();
	}
	{
		Weapon club = Weapon("daggers");
		HumanB Jinrando("Jinrando");
		Jinrando.setWeapon(NULL);
		Jinrando.attack();
		Jinrando.setWeapon(club);
		club.setType("great axe");
		Jinrando.attack();
	}
return 0;
}

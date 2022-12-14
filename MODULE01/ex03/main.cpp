#include "HumanA.hpp"
#include "HumanB.hpp"

int	main()
{
	{
		Weapon koko = Weapon("sword");
		HumanA Mainran("Mainran", koko);
		Mainran.attack();
		koko.setType("spear");
		Mainran.attack();
	}
	{
		Weapon club = Weapon("batata");
		HumanB Jinrando("Jinrando");
		//Jinrando.setWeapon(club);
		Jinrando.attack();
		club.setType("axe");
		Jinrando.attack();
	}
return 0;
}

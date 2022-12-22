#include "Harl.hpp"

void	Harl::filter(std::string level){
	std::string	all[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int		index;
	index = !(level.compare(all[0])) * 1 + !(level.compare(all[1])) * 2 + !(level.compare(all[2])) * 3 + !(level.compare(all[3])) * 4;
	switch (index)
	{
	case 1:
		debug();
	case 2:
		info();
	case 3:
		warning();
	case 4:
		error();
		break;
	default:
		harlConfused();
	}
}

int	main(int ac, char **av){
	Harl hl;

	if (ac != 2)
		return 1;
	hl.filter(std::string(av[1]));
}
#include <iostream>
#include <cstring>

int	main(int ac, char **av)
{
	int		i;
	int		j;

	i = 1;
	j = -1;
	if (ac < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
		while (((av[i][++j]) || (av[++i] && (j = -1))))
			std::cout << (char )toupper(av[i][j]);
	std::cout << std::endl;
}
#include "iter.hpp"

int	main(){
	int		i[3] = {1, 234, 5};
	char	j[3] = {'c', 'o', 'l'};
	
	iter(i, 3, print_elem);
	iter(j, 3, print_elem);
}
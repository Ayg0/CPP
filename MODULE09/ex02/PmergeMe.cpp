#include "PmergeMe.hpp"

int	fill(char **av, std::vector<int> &vec, std::deque<int> &deq){
	long						tmp;
	char						*end;
	std::vector<int>::iterator	it;

	for (int i = 1; av[i]; i++)
	{
		tmp = strtol(av[i], &end, 10);
		it = std::find(vec.begin(), vec.end(), tmp);
		if (tmp < 0 || tmp > 2147483647 || *end || ((i != 1) && (it != vec.end())))
			return 1;
		vec.push_back(tmp);
		deq.push_back(tmp);
	}
	return (0);
}
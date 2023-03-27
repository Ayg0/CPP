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

int	main(int ac, char **av){
	std::vector<int>	vec;
	std::deque<int>		deq;
	std::vector<int>	tmp;
	struct timespec t1, t2;
	double		deq_t, vec_t;

	if (fill(av, vec, deq))
		goto PARSERR;
	if (std::is_sorted(vec.begin(), vec.end()))
		goto SORTED_LIST;
	tmp = vec;
	clock_gettime(CLOCK_REALTIME, &t1);
	mergeInsertionSort(vec);
	clock_gettime(CLOCK_REALTIME, &t2);
	clock();
	vec_t = (t2.tv_sec * 1000000000LL + t2.tv_nsec) - (t1.tv_sec * 1000000000LL + t1.tv_nsec);
	clock_gettime(CLOCK_REALTIME, &t2);
	mergeInsertionSort(deq);
	clock_gettime(CLOCK_REALTIME, &t1);
	deq_t = (t1.tv_sec * 1000000000LL + t1.tv_nsec) - (t2.tv_sec * 1000000000LL + t2.tv_nsec);
	std::cout << "Before: ";
	for (size_t i = 0; i < tmp.size(); i++)
		std::cout << tmp[i] << " ";
	std::cout << std::endl;
	std::cout << "After:  ";
	for (size_t i = 0; i < vec.size(); i++)
		std::cout << vec[i] << " ";
	std::cout << std::endl;
	std::cout << "Time to process a range of " << ac - 1 << " elements with std::vector : " << vec_t / 1000 << "us" << std::endl;
	std::cout << "Time to process a range of " << ac - 1 << " elements with std::deque  : " << deq_t / 1000 << "us" << std::endl;
	return (0);
	{
		PARSERR:
			std::cerr << "Error: Parsing Error" << std::endl;
			return (1);
		SORTED_LIST:
			std::cerr << "Error: A sorted List what a wonderful world." << std::endl;
			return (1);
	}
}
#include "whatever.hpp"

int	main(){
	
	int i = 2;
	int	j = 4;

	std::cout << ::max(i, j) << std::endl;
	std::cout << ::min(i, j) << std::endl;
	::swap(i, j);
	std::cout << ::max(i, j) << std::endl;
}
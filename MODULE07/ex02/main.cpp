#include "Array.hpp"

int	main(){
	try
	{
		Array<int>	l(5);
		Array<int>	k(2);
		

		for (size_t i = 0; i < 5; i++)
			l[i] = i;
		for (size_t i = 0; i < 5; i++)
			std::cout << l[i] << std::endl;
		k = l;
		for (size_t i = 0; i < 5; i++)
			std::cout << k[i] << std::endl;	
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
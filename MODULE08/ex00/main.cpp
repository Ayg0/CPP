#include "easyfind.hpp"

int	main(){
	std::vector<int> l;
	l.push_back(5);
	l.push_back(7);
	l.push_back(4);
	l.push_back(2);
	try{
		easyfind(l, 3);
	}
	catch(const std::exception& e){
		std::cerr << e.what() << std::endl;
	}
	 
}
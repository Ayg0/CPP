#include "Span.hpp"

int	main(){
	try
	{
		// max numbers
		//Span s(5);
		//s.addNumber(1);
		//s.addNumber(2);
		//s.addNumber(3);
		//s.addNumber(4);
		//s.addNumber(5);
		//s.addNumber(6);
	
		// longest / shortest span
		Span s(5);
		s.addNumber(1);
		s.addNumber(10);
		s.addNumber(11);
		s.addNumber(-6);
		s.addNumber(-8);
		std::cout << s.longest_span() << " : : "<< s.shortest_span() << std::endl;
		
		// insert multiple elements:
		Span v(5);
		int arr[] = {10, 11, -6, -8};
		v.addNumber(1);
		v.insertElements(arr, sizeof(arr) / sizeof(int));
		std::cout << v.longest_span() << " : : "<< v.shortest_span() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
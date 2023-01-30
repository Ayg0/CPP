#include "whatever.hpp"

int	main(){
	
	int i = 2;
	int	j = 4;

	std::cout << ::max(i, j) << std::endl;
	std::cout << ::min(i, j) << std::endl;
	::swap(i, j);
	std::cout << ::max(i, j) << std::endl;

	std::cout << "................................. Dyalhom ............................" << std::endl;
	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
}
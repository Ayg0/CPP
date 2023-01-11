#include "Fixed.hpp"

int main( void ) {
	Fixed a;
	Fixed b(a);
	Fixed c;

	c = b;
	a.setRawBits(8);
	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;
	return 0;
}
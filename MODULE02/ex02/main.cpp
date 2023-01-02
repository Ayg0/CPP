#include "Fixed.hpp"

std::ostream &operator << (std::ostream &os, const Fixed &a)
{
    os << a.toFloat();
    return os;
}

int main( void ) {
	Fixed a;
	Fixed const b(10);
	Fixed const c(42);
	Fixed const d(b);

	a = Fixed(1234.4321f);
	std::cout << "a + b: " << c * b << std::endl;
	std::cout << "a > b: " << (a > b) << std::endl;
	std::cout << "a != b: " << (a != b) << std::endl;
	std::cout << "a == b: " << (a == b) << std::endl;
	return 0;
}

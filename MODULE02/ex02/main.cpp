#include "Fixed.hpp"

std::ostream &operator << (std::ostream &os, const Fixed &a)
{
    os << a.toFloat();
    return os;
}

int main( void ) {
	Fixed a;
	Fixed const b( Fixed( 5.5f ) * Fixed( 3 ) );
	//Fixed c(3);

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	//std::cout << c * Fixed(2) << std::endl;
	std::cout << Fixed::max(a, b) << "\n" << Fixed::min(a, b) << std::endl;
	//std::cout << b / c << std::endl;
	return 0;
}

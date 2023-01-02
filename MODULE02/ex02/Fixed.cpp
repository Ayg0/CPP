#include "Fixed.hpp"

Fixed::Fixed(){
    nu_value = 0;
    std::cout << "default Constructor Called." << std::endl;
}

Fixed::Fixed(const int a){
	
    std::cout << "Int Constructor Called." << std::endl;
    setRawBits(a * (1 << bits));
}

Fixed::Fixed(const float a){
    std::cout << "Float Constructor Called." << std::endl;
	setRawBits(roundf(a * (1 << bits)));
}

float Fixed::toFloat( void ) const{
	return (nu_value / (float(1 << bits)));
}

int Fixed::toInt( void ) const{
	return (nu_value >> bits);
}

Fixed::Fixed(const Fixed &a){
    std::cout << "Copy Constructor Called." << std::endl;
    this->nu_value = a.getRawBits();
}

int		Fixed::getRawBits(void) const{
    std::cout << "getRawBits member function called." << std::endl;
    return (nu_value);
}

void	Fixed::setRawBits(int const raw){
    nu_value = raw;
}

Fixed::~Fixed(){
    std::cout << "Default Destructor Called." << std::endl;
}
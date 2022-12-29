#include "Fixed.hpp"

Fixed::Fixed(){
    nu_value = 0;
    std::cout << "default Constructor Called." << std::endl;
}

Fixed::Fixed(const Fixed &a){
    std::cout << "Copy Constructor Called." << std::endl;
    this->nu_value = a.getRawBits();
}

Fixed	&Fixed::operator = (const Fixed &a){
    std::cout << "Copy Assignement operator Called." << std::endl;
    this->nu_value = a.getRawBits();
    return (*this);
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
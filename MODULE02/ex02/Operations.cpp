#include "Fixed.hpp"

bool	Fixed::operator > (const Fixed &a){
	return (this->toFloat() > a.toFloat());
}
bool	Fixed::operator < (const Fixed &a){
	return (this->toFloat() < a.toFloat());
}
bool	Fixed::operator >= (const Fixed &a){
	return (this->toFloat() >= a.toFloat());
}
bool	Fixed::operator <= (const Fixed &a){
	return (this->toFloat() <= a.toFloat());
}
bool	Fixed::operator == (const Fixed &a){
	return (this->toFloat() == a.toFloat());
}
bool	Fixed::operator != (const Fixed &a){
	return (this->toFloat() != a.toFloat());
}

Fixed	&Fixed::operator = (const Fixed &a){
    std::cout << "Copy Assignement operator Called." << std::endl;
    this->nu_value = a.getRawBits();
    return (*this);
}

Fixed	Fixed::operator + (const Fixed &a) const{
	Fixed j(this->toFloat() + a.toFloat());
	return (j);
}

Fixed	Fixed::operator - (const Fixed &a) const{
	Fixed j(this->toFloat() - a.toFloat());
	return (j);
}

Fixed	Fixed::operator * (const Fixed &a) const{
	Fixed j(this->toFloat() * a.toFloat());
	return (j);
}

Fixed	Fixed::operator / (const Fixed &a) const{
	Fixed j(this->toFloat() / a.toFloat());
	return (j);
}
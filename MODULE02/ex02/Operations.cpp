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

Fixed	&Fixed::operator ++ (){
	this->nu_value++;
	return (*this);
}

Fixed	&Fixed::operator -- (){
	this->nu_value--;
	return (*this);
}

Fixed	Fixed::operator ++ (int){
	Fixed	tmp(*this);

	this->nu_value++;
	return (tmp);
}

Fixed	Fixed::operator -- (int){
	Fixed	tmp(*this);

	this->nu_value--;
	return (tmp);
}

Fixed	&Fixed::min(Fixed &a, Fixed &b){
	if (a < b)
		return (a);
	return (b);
}

Fixed	&Fixed::max(Fixed &a, Fixed &b){
	if (a > b)
		return (a);
	return (b);
}

const Fixed	&Fixed::min(const Fixed &a, const Fixed &b){
	if (a.toFloat() < b.toFloat())
		return (a);
	return (b);
}

const Fixed	&Fixed::max(const Fixed &a, const Fixed &b){
	if (a.toFloat() > b.toFloat())
		return (a);
	return (b);
}
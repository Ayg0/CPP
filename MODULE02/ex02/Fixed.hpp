#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <cmath>
class Fixed
{
private:
	int					nu_value;
	static const int	bits = 8;
public:
	Fixed();
	Fixed(const int a);
	Fixed(const float a);
	Fixed(const Fixed &a);
	float 	toFloat( void ) const;
	int		toInt( void ) const;
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	
	static Fixed	&min(Fixed &a, Fixed &b);
	static Fixed	&max(Fixed &a, Fixed &b);
	static const Fixed	&min(const Fixed &a, const Fixed &b);
	static const Fixed	&max(const Fixed &a, const Fixed &b);
	Fixed	&operator = (const Fixed &a);
	
	bool	operator > (const Fixed &a);
	bool	operator < (const Fixed &a);
	bool	operator >= (const Fixed &a);
	bool	operator <= (const Fixed &a);
	bool	operator == (const Fixed &a);
	bool	operator != (const Fixed &a);
	
	Fixed	operator + (const Fixed &a) const;
	Fixed	operator - (const Fixed &a) const;
	Fixed	operator * (const Fixed &a) const;
	Fixed	operator / (const Fixed &a) const;
	
	Fixed	&operator ++ ();
	Fixed	&operator -- ();
	Fixed	operator ++ (int);
	Fixed	operator -- (int);
	
	~Fixed();
};

# endif
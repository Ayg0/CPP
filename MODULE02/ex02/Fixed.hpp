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
	float toFloat( void ) const;
	int toInt( void ) const;
	Fixed(const Fixed &a);
	Fixed	&operator = (const Fixed &a);
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
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
	~Fixed();
};

# endif
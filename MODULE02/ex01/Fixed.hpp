#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
class Fixed
{
private:
	int					nu_value;
	static const int	bits = 8;
public:
	Fixed();
	Fixed(const Fixed &a);
	Fixed	&operator = (const Fixed &a);
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	~Fixed();
};

# endif
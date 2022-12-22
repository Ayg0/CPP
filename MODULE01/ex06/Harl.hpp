#ifndef HARL_HPP
# define HARL_HPP
# include <iostream>

class Harl
{
private:
	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);
	void	harlConfused(void);
public:
	void	filter(std::string level);
	//Harl();
	//~Harl();
};
#endif
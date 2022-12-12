#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>


class Zombie
{
private:
	std::string	name;
public:
	Zombie();
	~Zombie();
	void	assign(std::string	name);
	void	anounce(void);
};

void	randomChump(std::string	name);
Zombie	*zombieHorde(int N, std::string name);
Zombie	*newZombie(std::string	name);
#endif
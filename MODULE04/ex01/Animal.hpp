#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>
# include "Brain.hpp"

class Animal
{
	protected:
		std::string type;
	public:
		Animal();
		Animal(const Animal &copy);
		Animal(std::string type);
		Animal & operator=(const Animal &assign);
		std::string 	getType() const;
		virtual void	makeSound() const;
		virtual ~Animal();
};

#endif
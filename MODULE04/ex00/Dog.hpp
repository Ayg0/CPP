#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog: public Animal
{
	public:
		Dog();
		Dog(const Dog &copy);
		~Dog();
		void	makeSound() const;
		Dog & operator=(const Dog &assign);		
	private:
		
};

#endif
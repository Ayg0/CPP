#include "Dog.hpp"

Dog::Dog()
{
	brain = new Brain();
	this->type = "Dog";
	std::cout << "Default Constructor called of Dog" << std::endl;
}

Dog::Dog(const Dog &copy)
{
	*this = copy;
	std::cout << "Copy Constructor called of Dog" << std::endl;
}

Dog::~Dog()
{
	delete brain;
	std::cout << "Destructor called of Dog" << std::endl;
}

Dog & Dog::operator=(const Dog &assign)
{
	type = assign.type;
	*brain = *assign.brain; 
	std::cout << "Assignement opperator of Dog called" << std::endl;
	return *this;
}

void	Dog::makeSound() const{
	std::cout << "Woof Woof" << std::endl;
}
#include "Dog.hpp"

Dog::Dog()
{
	this->type = "Dog";
	std::cout << "Default Constructor called of Dog" << std::endl;
	brain = new Brain();
}

Dog::Dog(const Dog &copy)
{
	brain = NULL;
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
	if (!brain)
		brain = new Brain;
	brain->operator=(*assign.brain); 
	std::cout << "Assignement opperator of Dog called" << std::endl;
	return *this;
}

void	Dog::makeSound() const{
	std::cout << "Woof Woof" << std::endl;
}
#include "Cat.hpp"

Cat::Cat()
{
	this->type = "Cat";
	std::cout << "Default Constructor called of Cat" << std::endl;
	brain = new Brain();
}

Cat::Cat(const Cat &copy)
{
	brain = NULL;
	*this = copy;
	std::cout << "Copy Constructor called of Cat" << std::endl;
}

Cat::~Cat()
{
	delete brain;
	std::cout << "Destructor called of Cat" << std::endl;
}

Cat & Cat::operator=(const Cat &assign)
{
	type = assign.type;
	if (!brain)
		brain = new Brain;
	brain->operator=(*assign.brain);
	std::cout << "Assignement opperator of Cat called" << std::endl;
	return *this;
}

void	Cat::makeSound() const{
	std::cout << "Meow Meow" << std::endl;
}
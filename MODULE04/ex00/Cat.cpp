#include "Cat.hpp"

Cat::Cat()
{
	this->type = "Cat";
	std::cout << "Default Constructor called of Cat" << std::endl;
}

Cat::Cat(const Cat &copy)
{
	*this = copy;
	std::cout << "Copy Constructor called of Cat" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Destructor called of Cat" << std::endl;
}

Cat & Cat::operator=(const Cat &assign)
{
	this->type = assign.type; 
	std::cout << "Assignement opperator of Cat called" << std::endl;
	return *this;
}

void	Cat::makeSound() const{
	std::cout << "Meow Meow" << std::endl;
}
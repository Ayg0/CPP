#include "Animal.hpp"

Animal::Animal()
{
	type = "";
	std::cout << "Default Constructor called of Animal" << std::endl;
}

Animal::Animal(const Animal &copy)
{
	type = copy.getType();
	std::cout << "Copy Constructor called of Animal" << std::endl;
}

Animal::Animal(std::string type)
{
	this->type = type;
}

Animal::~Animal()
{
	std::cout << "Destructor called of Animal" << std::endl;
}

Animal & Animal::operator=(const Animal &assign)
{
	type = assign.getType();
	return *this;
}

std::string Animal::getType() const
{
	return type;
}
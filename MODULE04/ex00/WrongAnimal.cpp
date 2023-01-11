#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	type = "";
	std::cout << "Default Constructor called of WrongAnimal" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
	type = copy.getType();
	std::cout << "Copy Constructor called of WrongAnimal" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type)
{
	this->type = type;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Destructor called of WrongAnimal" << std::endl;
}

WrongAnimal & WrongAnimal::operator=(const WrongAnimal &assign)
{
	type = assign.getType();
	return *this;
}

std::string WrongAnimal::getType() const
{
	return type;
}

void	WrongAnimal::makeSound() const{
	std::cout << "unrecognizable noise ..." << std::endl;
}

WrongCat::WrongCat()
{
	this->type = "WrongCat";
	std::cout << "Default Constructor called of WrongCat" << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy)
{
	*this = copy;
	std::cout << "Copy Constructor called of WrongCat" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "Destructor called of WrongCat" << std::endl;
}

WrongCat & WrongCat::operator=(const WrongCat &assign)
{
	this->type = assign.type; 
	std::cout << "Assignement opperator of WrongCat called" << std::endl;
	return *this;
}

void	WrongCat::makeSound() const{
	std::cout << "Wrong mew mew \?\?!" << std::endl;
}
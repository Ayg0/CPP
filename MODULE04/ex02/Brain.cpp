#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Default Constructor called of Brain" << std::endl;
}

Brain::Brain(const Brain &copy)
{
	*this = copy;
	std::cout << "Copy Constructor called of Brain" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Destructor called of Brain" << std::endl;
}

Brain & Brain::operator=(const Brain &assign)
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = assign.ideas[i];
	std::cout << "Assignement opperator of Brain called" << std::endl;
	return *this;
}

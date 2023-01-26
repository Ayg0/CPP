#include "Intern.hpp"

Intern::Intern(){
	std::cout << "Default Constructor of Intern Called" << std::endl;
}

Intern::Intern(const Intern &){
	std::cout << "Copy Constructor of Intern Called" << std::endl;
}

Intern &Intern::operator=(const Intern &){
	std::cout << "Asignement Operator of Intern Called"<< std::endl;
	return (*this);
}

Intern::~Intern(){
	std::cout << "Default Destructor of Intern Called" << std::endl;
}

Form	*Intern::makeForm(std::string name,std::string target){
	int 	i;
	Form	*f;

	i = (name == "shrubberry creation") * 1 + (name == "robotomy request") * 2 + (name == "presidential pardon") * 3;
	switch (i)
	{
	case 1:
		f = new ShrubberyCreationForm(target);
		break;
	case 2:
		f = new RobotomyRequestForm(target);
		break;
	case 3:
		f = new PresidentialPardonForm(target);
		break;
	default:
		std::cerr << "Intern Confused ? Doesn't know the Form." << std::endl;
		return NULL;
	}	
	std::cout << "Intern creates " + name<< std::endl;
	return (f);
}

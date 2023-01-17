#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat():name("NONAME"){
	std::cout << "Default Constructor of Bureaucrat called." << std::endl;
	grade = 3;
}

const char *Bureaucrat::GradeTooHighException::what() const throw(){
	return ("The Grade is too High.");
}

const char *Bureaucrat::GradeTooLowException::what() const throw(){
	return ("The Grade is too Low.");
}

Bureaucrat::Bureaucrat(std::string name, int grade):name(name){
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	this->grade = grade;
	std::cout << "Constructor of Bureaucrat called." << std::endl;
}
Bureaucrat::Bureaucrat(const Bureaucrat &copy){
	std::cout << "Copy Constructor of Bureaucrat called." << std::endl;
	*this = copy;
}
std::string	Bureaucrat::getName() const{
	return (name);
}
int			Bureaucrat::getGrade() const{
	return (grade);
}
Bureaucrat &Bureaucrat::operator=(const Bureaucrat &assign){
	std::cout << "Copy assignement of Bureaucrat called." << std::endl;
	grade = assign.grade;
	return (*this);
}
Bureaucrat::~Bureaucrat(){
	std::cout << "Default Destructor of Bureaucrat called." << std::endl;
}

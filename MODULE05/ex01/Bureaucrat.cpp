#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat():name("NONAME"){
	std::cout << "Default Constructor of Bureaucrat called." << std::endl;
	grade = 150;
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

void		 Bureaucrat::increment(void){
		if (grade == 1)
			throw GradeTooHighException();
		grade--;
}

void		 Bureaucrat::decrement(void){
		if (grade == 150)
			throw GradeTooLowException();
		grade++;
}

void		Bureaucrat::signForm(class Form &Form){
	if (Form.isSigned())
		std::cout << name << " couldn't sign " << Form.getName() << ", because Form is already signed." << std::endl;
	else if (grade > Form.getReqSign())
		std::cout << name << " couldn't sign " << Form.getName() << ", because Grade is too low." << std::endl;
	else{
		std::cout << name << " signed " << Form.getName() << std::endl;
		Form.setIsSigned();
	}
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy):name(copy.name){
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


std::ostream& operator<<(std::ostream& stream, const Bureaucrat& bu)
{
    stream << bu.getName() << ", bureaucrat grade " << bu.getGrade();
    return (stream);
}
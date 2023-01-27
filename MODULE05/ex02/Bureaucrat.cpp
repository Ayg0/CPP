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

void		Bureaucrat::signForm(class Form &form){
	if (form.isSigned())
		std::cout << name << " couldn't sign " << form.getName() << ", because Form is already signed." << std::endl;
	else if (grade > form.getReqSign())
		std::cout << name << " couldn't sign " << form.getName() << ", because Grade is too low." << std::endl;
	else{
		std::cout << name << " signed " << form.getName() << std::endl;
		form.setIsSigned();
	}
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

void		Bureaucrat::execute(Form const &form){
	if (!form.isSigned())
		std::cerr << "The Form isn't signed." << std::endl;
	else if (grade > form.getReqExec())
		std::cerr << "Grade too low to execute." << std::endl;
	else
		form.execute(*this);
}

Bureaucrat::~Bureaucrat(){
	std::cout << "Default Destructor of Bureaucrat called." << std::endl;
}


std::ostream& operator<<(std::ostream& stream, const Bureaucrat& bu)
{
    stream << bu.getName() << ", bureaucrat grade " << bu.getGrade();
    return (stream);
}
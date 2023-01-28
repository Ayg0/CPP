#include "Form.hpp"

Form::Form():name("NONAME"), req_sign(150), req_exec(150){
	is_sign = 0;
	std::cout << "Default Constructor of Form called." << std::endl;
}

Form::Form(const Form &copy):name(copy.getName()), req_sign(copy.getReqSign()), req_exec(copy.getReqExec()){
	is_sign = 0;
	std::cout << "Copy Constructor of Form called." << std::endl;
}

Form::Form(std::string name, int req_sign, int req_exec):name(name), req_sign(req_sign), req_exec(req_exec){
	if (req_exec < 1 || req_sign < 1)
		throw	GradeTooHighException();
	if (req_exec > 150 || req_sign > 150)
		throw	GradeTooLowException();
	is_sign = 0;
	std::cout << "Constructor of Form called." << std::endl;
}

std::string	Form::getName() const{
	return (name);
}

bool		Form::isSigned() const{
	return (is_sign);
}

int	Form::getReqSign() const{
	return (req_sign);
}

int	Form::getReqExec() const{
	return (req_exec);
}

void	Form::setIsSigned(){
	is_sign = 1;
}

const char *Form::GradeTooHighException::what() const throw(){
	return ("The Grade is too High.");
}

const char *Form::GradeTooLowException::what() const throw(){
	return ("The Grade is too Low.");
}

void	Form::beSigned(Bureaucrat &bu){
	if (bu.getGrade() < req_sign)
		std::cout << bu.getName() << "has signed the Form" << std::endl;
	else
		throw GradeTooLowException();
}

Form &Form::operator=(const Form &assign){
	std::cout << "Copy assignement of Form called." << std::endl;
	is_sign = assign.is_sign;
	return (*this);
}

Form::~Form(){
	std::cout << "Default Destructor of Form called." << std::endl;
}

std::ostream& operator<<(std::ostream& stream, const Form& fu)
{
    stream	<< "----Form---\nname: " << fu.getName() \
			<< "\nis signed: " << fu.isSigned() \
			<< "\nrequired grade to sign: " << fu.getReqSign() \
			<< "\nrequired grade to execute: " << fu.getReqExec() << std::endl;
    return (stream);
}
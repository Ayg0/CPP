#include "Form.hpp"

Form::Form():name("NONAME"){
	std::cout << "Default Constructor of Form called." << std::endl;
}

const char *Form::GradeTooHighException::what() const throw(){
	return ("The Grade is too High.");
}

const char *Form::GradeTooLowException::what() const throw(){
	return ("The Grade is too Low.");
}

Form::Form(const Form &copy){
	std::cout << "Copy Constructor of Form called." << std::endl;
	*this = copy;
}

std::string	Form::getName() const{
	return (name);
}

Form &Form::operator=(const Form &assign):name(assign.name),required_to_exec(assign.required_to_exec), required_to_sign(assign.required_to_sign){
	std::cout << "Copy assignement of Form called." << std::endl;
	is_signed = assign.is_signed;
	return (*this);
}
Form::~Form(){
	std::cout << "Default Destructor of Form called." << std::endl;
}
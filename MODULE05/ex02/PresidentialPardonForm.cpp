#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm():Form("PresidentialPardonForm", "UnknownTarget", 25, 5){
	std::cout << "PresidentialPardonForm Default Constructor Called." << std::endl;
}
PresidentialPardonForm::PresidentialPardonForm(std::string target):Form("PresidentialPardonForm", target, 25, 5){
	std::cout << "PresidentialPardonForm Default Constructor Called." << std::endl;
}
PresidentialPardonForm::~PresidentialPardonForm(){
	std::cout << "PresidentialPardonForm Default Destructor Called." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy):Form(copy.getName(), copy.getTarget(), copy.getReqExec(), copy.getReqExec()){
	if (copy.isSigned())
		this->setIsSigned();
	std::cout << "PresidentialPardonForm Copy Destructor Called." << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &assign){
	this->setTarget(assign.getTarget());
	if (assign.isSigned())
		this->setIsSigned();
	std::cout << "PresidentialPardonForm Assignement Operator Called." << std::endl;
	return (*this);
}

void	PresidentialPardonForm::pardon() const{
	std::cout << getTarget() + " has been pardoned by Zaphod Beeblebrox" << std::endl;
}

void	PresidentialPardonForm::execute(Bureaucrat const &executor) const{
	if (!this->isSigned())
		throw	std::runtime_error("Form isn't signed.");
	if (executor.getGrade() > this->getReqExec())
		throw	GradeTooLowException();
	else
		pardon();
}
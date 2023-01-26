#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm():Form("RobotomyRequestForm", "UnknownTarget", 145, 137){
	std::cout << "RobotomyRequestForm Default Constructor Called." << std::endl;
}
RobotomyRequestForm::RobotomyRequestForm(std::string target):Form("RobotomyRequestForm", target, 145, 137){
	std::cout << "RobotomyRequestForm Default Constructor Called." << std::endl;
}
RobotomyRequestForm::~RobotomyRequestForm(){
	std::cout << "RobotomyRequestForm Default Destructor Called." << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy):Form(copy.getName(), copy.getTarget(), copy.getReqExec(), copy.getReqExec()){
	this->operator=(copy);
	std::cout << "RobotomyRequestForm Copy Destructor Called." << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &assign){
	this->setTarget(assign.getTarget());
	if (assign.isSigned())
		this->setIsSigned();
	std::cout << "RobotomyRequestForm Assignement Operator Called." << std::endl;
	return (*this);
}

void	RobotomyRequestForm::inform() const{
	std::cout << "brmrmrrmrmrrmmr ...." << std::endl;
	if (rand() % 2)
		std::cout << getTarget() + " has been robotomized successfully." << std::endl;
	else
		std::cout << getTarget() + " has failed to be robotomized." << std::endl;
		
		
}

void	RobotomyRequestForm::execute(Bureaucrat const &executor) const{
	if (!this->isSigned())
		throw	std::runtime_error("Form isn't signed.");
	if (executor.getGrade() > this->getReqExec())
		throw	GradeTooLowException();
	else
		inform();
}
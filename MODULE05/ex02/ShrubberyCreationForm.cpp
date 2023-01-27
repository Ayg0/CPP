#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm():Form("ShrubberyCreationForm", "UnknownTarget", 145, 137){
	std::cout << "ShrubberyCreationForm Default Constructor Called." << std::endl;
}
ShrubberyCreationForm::ShrubberyCreationForm(std::string target):Form("ShrubberyCreationForm", target, 145, 137){
	std::cout << "ShrubberyCreationForm Default Constructor Called." << std::endl;
}
ShrubberyCreationForm::~ShrubberyCreationForm(){
	std::cout << "ShrubberyCreationForm Default Destructor Called." << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy):Form(copy.getName(), copy.getTarget(), copy.getReqExec(), copy.getReqExec()){
	if (copy.isSigned())
		this->setIsSigned();
	std::cout << "ShrubberyCreationForm Copy Destructor Called." << std::endl;
}

void	ShrubberyCreationForm::writeAsciiTrees() const{
	std::ofstream	newfile(getTarget() + "_shrubbery");
	if (!newfile.is_open())
		throw	std::runtime_error("Couldn't open the file.");
	newfile	<<"	           ,@@@@@@@,\n"
			<<"       ,,,.   ,@@@@@@/@@,  .oo8888o.\n"
			<<"    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o\n"
			<<"   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'\n"
			<<"   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'\n"
			<<"   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'\n"
			<<"   `&%\\ ` /%&'    |.|        \\ '|8'\n"
			<<"       |o|        | |         | |\n"
			<<"       |.|        | |         | |\n"
			<<"    \\/ ._\\//_/__/  ,\\_//__\\/.  \\_//__/_\n";
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &assign){
	this->setTarget(assign.getTarget());
	if (assign.isSigned())
		this->setIsSigned();
	std::cout << "ShrubberyCreationForm Assignement Operator Called." << std::endl;
	return (*this);
}

void	ShrubberyCreationForm::execute(Bureaucrat const &executor) const{
	if (!this->isSigned())
		throw	std::runtime_error("Form isn't signed.");
	if (executor.getGrade() > this->getReqExec())
		throw	GradeTooLowException();
	else
		writeAsciiTrees();
}
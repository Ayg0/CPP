#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm():Form("ShrubberyCreationForm", 145, 137){
	target = "NotSpecified";
	std::cout << "ShrubberyCreationForm Default Constructor Called." << std::endl;
}
ShrubberyCreationForm::ShrubberyCreationForm(std::string target):Form("ShrubberyCreationForm", 145, 137){
	target = target;
	std::cout << "ShrubberyCreationForm Default Constructor Called." << std::endl;
}
ShrubberyCreationForm::~ShrubberyCreationForm(){
	std::cout << "ShrubberyCreationForm Default Destructor Called." << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy):Form(copy.getName(), copy.getReqExec(), copy.getReqExec()){
	this->operator=(copy);
	std::cout << "ShrubberyCreationForm Copy Destructor Called." << std::endl;
}

void	ShrubberyCreationForm::WriteAsciiTrees(){
	std::ofstream	newfile(target.append("_shrubbery"));
	newfile	<<"	               ,@@@@@@@,\n"
			<<"       ,,,.   ,@@@@@@/@@,  .oo8888o.\n"
			<<"    ,&%%&%&&%,@@@@@/@@@@@@,8888\88/8o\n"
			<<"   ,%&\%&&%&&%,@@@\@@@/@@@88\88888/88'\n"
			<<"   %&&%&%&/%&&%@@\@@/ /@@@88888\88888'\n"
			<<"   %&&%/ %&%%&&@@\ V /@@' `88\8 `/88'\n"
			<<"   `&%\ ` /%&'    |.|        \ '|8'\n"
			<<"       |o|        | |         | |\n"
			<<"       |.|        | |         | |\n"
			<<"jgs \\/ ._\//_/__/  ,\_//__\\/.  \_//__/_\n";
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &assign){
	this->target = assign.target;
	if (assign.isSigned())
		this->setIsSigned();
	std::cout << "ShrubberyCreationForm Assignement Operator Called." << std::endl;
}
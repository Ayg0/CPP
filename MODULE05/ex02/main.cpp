#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int	main(){
	try{
		Bureaucrat	s("Mayro", 1);
		ShrubberyCreationForm	a("Potato");
		RobotomyRequestForm	b("Potato");
		PresidentialPardonForm	c("Potato");

		s.signForm(a);
		s.signForm(b);
		s.signForm(c);
		//l.signForm(f);
		s.execute(b);
		a.execute(s);
		b.execute(s);
		c.execute(s);
	}
	catch (const std::exception& e) {
    	std::cerr << e.what() << std::endl;
		return (1);
	}
	return (0);
}
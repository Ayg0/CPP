#include "Bureaucrat.hpp"
#include "Intern.hpp"

int	main(){
	try{
		Bureaucrat	s("Mayro", 1);
		Intern		i;
		Form		*a, *b, *c, *d;

		a = i.makeForm("shrubberry creation", "ss");
		b = i.makeForm("robotomy request", "ss");
		c = i.makeForm("presidential pardon", "ss");
		d = i.makeForm("IDWADWADA", "dasdds");
		//s.signForm(a);
		//s.signForm(b);
		//s.signForm(c);

		//s.execute(b);
		//a.execute(s);
		//b.execute(s);
		//c.execute(s);
		std::cout << "----------------------- delete ----------------------" << std::endl;
		//delete d;
		delete a;
		delete b;
		delete c;
	}
	catch (const std::exception& e) {
    	std::cerr << e.what() << std::endl;
		return (1);
	}
	return (0);
}
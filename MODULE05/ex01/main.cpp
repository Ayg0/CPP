#include "Bureaucrat.hpp"

int	main(){
	try{
		Bureaucrat	l("Norji", 150);
		Bureaucrat	s("Mayro", 1);
		Form		f("OK", 5, 17);

	//	l.signForm(f);
	//	f.beSigned(l);
		f.beSigned(s);
		Form g(f);
		std::cout << l << std::endl;
		std::cout << g << std::endl;
		std::cout << s << std::endl;
		std::cout << f << std::endl;
	}
	catch (const std::exception& e) {
    	std::cerr << e.what() << std::endl;
		return (1);
	}
	return (0);
}
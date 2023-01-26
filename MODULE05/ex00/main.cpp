#include "Bureaucrat.hpp"

std::ostream& operator<<(std::ostream& stream, const Bureaucrat& bu)
{
    stream << bu.getName() << ", bureaucrat grade " << bu.getGrade();
    return (stream);
}

int	main(){
	try{
		Bureaucrat l("Norji", 150);
		Bureaucrat s(Bureaucrat("k", 2));
		
		l.increment();
		std::cout << l << std::endl;
		s.increment();
		std::cout << s << std::endl;
	}
	catch (const std::exception& e) {
    	std::cerr << e.what() << std::endl;
		return (1);
	}
	return (0);
}
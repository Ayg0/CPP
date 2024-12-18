#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include "Form.hpp"

class Bureaucrat
{
private:
	const std::string	name;
	int					grade;
public:
	Bureaucrat();
	Bureaucrat(std::string name, int grade);
	Bureaucrat(const Bureaucrat &copy);
	std::string	getName() const;
	int			getGrade() const;
	void		increment(void);
	void		decrement(void);
	void		signForm(class Form &Form);
	Bureaucrat &operator=(const Bureaucrat &assign);
	~Bureaucrat();
	class GradeTooHighException : public std::exception{
		const char* what() const throw();
	};
	class GradeTooLowException : public std::exception{
		const char* what() const throw();
	};
};

std::ostream& operator<<(std::ostream& stream, const Bureaucrat& bu);

#endif
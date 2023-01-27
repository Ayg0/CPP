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
	Bureaucrat &operator=(const Bureaucrat &assign);
	~Bureaucrat();

	std::string	getName() const;
	int			getGrade() const;
	void		signForm(class Form &form);
	void		execute(Form const &form);
	
	void	increment(void);
	void	decrement(void);
	class GradeTooHighException : public std::exception{
		const char* what() const throw();
	};
	class GradeTooLowException : public std::exception{
		const char* what() const throw();
	};
};

std::ostream& operator<<(std::ostream& stream, const Bureaucrat& bu);

#endif
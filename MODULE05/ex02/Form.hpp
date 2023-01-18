#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class Form
{
private:
	const std::string	name;
	bool				is_sign;
	const int			req_sign;
	const int			req_exec;
public:
	Form();
	Form(std::string name, int req_sign, int req_exec);
	Form(const Form &copy);
	std::string	getName() const;
	int	getReqSign() const;
	int	getReqExec() const;
	void		setIsSigned();
	bool		isSigned() const;
	void		beSigned(class Bureaucrat &bu);
	Form &operator=(const Form &assign);
	~Form();
	class GradeTooHighException : public std::exception{
		const char* what() const throw();
	};
	class GradeTooLowException : public std::exception{
		const char* what() const throw();
	};
};

std::ostream& operator<<(std::ostream& stream, const Form& fu);

#endif
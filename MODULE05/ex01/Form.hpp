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
	Form &operator=(const Form &assign);
	Form(const Form &copy);
	~Form();

	std::string	getName() const;
	int			getReqSign() const;
	int			getReqExec() const;
	bool		isSigned() const;
	void		setIsSigned();
	void		beSigned(class Bureaucrat &bu);
	class GradeTooHighException : public std::exception{
		const char* what() const throw();
	};
	class GradeTooLowException : public std::exception{
		const char* what() const throw();
	};
};

std::ostream& operator<<(std::ostream& stream, const Form& fu);

#endif
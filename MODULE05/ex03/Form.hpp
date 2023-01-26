#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class Form
{
private:
	const std::string	name;
	const int			req_sign;
	const int			req_exec;
	bool				is_sign;
	std::string			target;
public:
	Form();
	Form(std::string name, std::string target, int req_sign, int req_exec);
	Form(const Form &copy);
	Form &operator=(const Form &assign);
	virtual	~Form();

	std::string	getName() const;
	std::string	getTarget() const;
	int			getReqSign() const;
	int			getReqExec() const;
	void				setTarget(std::string target);
	void				setIsSigned();
	bool				isSigned() const;
	void				beSigned(class Bureaucrat &bu);
	virtual	void		execute(Bureaucrat const &executor) const = 0;

	class GradeTooHighException : public std::exception{
		const char* what() const throw();
	};
	class GradeTooLowException : public std::exception{
		const char* what() const throw();
	};
};

std::ostream& operator<<(std::ostream& stream, const Form& fu);

#endif
#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>

class Form
{
private:
	const std::string	name;
	bool				is_signed;
	const int			required_to_sign;
	const int			required_to_exec;
public:
	Form();
	Form(std::string name);
	Form(const Form &copy);
	std::string	getName() const;
	int			getGrade() const;
	Form &operator=(const Form &assign);
	~Form();
	class GradeTooHighException : public std::exception{
		const char* what() const throw();
	};
	class GradeTooLowException : public std::exception{
		const char* what() const throw();
	};
};

#endif
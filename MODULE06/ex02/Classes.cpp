#include "Classes.hpp"

Base	*generate(void){
	int	i;

	i = rand() % 4;
	printf("%d\n", i);
	switch (i)
	{
	case 0:
		return (new A());
	case 1:
		return (new B());
	case 2:
		return (new C());
	default:
		return (new Base());
	}
}

void	identify(Base* p){
	if (!p){
		std::cerr << "--> Null ? Identify nothing as nothing." << std::endl;
		return ;
	}
	int	i = !(!(dynamic_cast<A*>(p))) * 1 + !(!(dynamic_cast<B*>(p))) * 2 + !(!(dynamic_cast<C*>(p))) * 3;
	switch (i)
	{
	case 1:
		std::cout << "--> Is an A." << std::endl;
		break;
	case 2:
		std::cout << "--> Is a B." << std::endl;
		break;
	case 3:
		std::cout << "--> Is a C." << std::endl;
		break;
	default:
		std::cerr << "--> What ? is it the base ? or something totally defferent !?" << std::endl;
		break;
	}
}

void	identify(Base& p){
	try
	{
		(void)dynamic_cast<A&>(p);
	}
	catch(const std::exception& e)
	{
		try
		{
			(void)dynamic_cast<B&>(p);
		}
		catch(const std::exception& e)
		{
			try
			{
				(void)dynamic_cast<C&>(p);
			}
			catch(const std::exception& e)
			{
				std::cerr << "--> What ? is it the base ? or something totally defferent !?" << std::endl;
				return ;
			}
			std::cout << "--> It's an C." << '\n';
			return ;
		}
		std::cout << "--> It's a B." << '\n';
		return ;
	}
	std::cout << "--> It's an A." << '\n';
}

// desctuctors :

Base::~Base(){
	std::cout << "Desctructor of Base has been called" << std::endl;
}

A::~A(){
	std::cout << "Desctructor of A has been called" << std::endl;
}

B::~B(){
	std::cout << "Desctructor of B has been called" << std::endl;
}

C::~C(){
	std::cout << "Desctructor of C has been called" << std::endl;
}

#ifndef CLASSES_HPP
# define CLASSES_HPP

#include <iostream>

class Base
{
	public:
		virtual	~Base();
};

class A : public Base
{
	public:
		virtual	~A();
};

class B : public Base
{
	public:
		virtual	~B();
};

class C : public Base
{
	public:
		virtual	~C();
};

Base	*generate(void);
void	identify(Base* p);
void	identify(Base& p);


#endif
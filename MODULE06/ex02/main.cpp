#include "Classes.hpp"

int	main(){
	srand (time(NULL));
	//Base *bas;
	//A a;
	//B b;
	//C c;

	//bas = &a;
	//identify(bas);
	//bas = &b;
	//identify(bas);
	//bas = &c;
	//identify(bas);
	//bas = NULL;
	//identify(bas);
	Base *b = generate();
	identify(*b);
	delete b;
}
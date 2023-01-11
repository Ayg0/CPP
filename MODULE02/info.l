- Virtual Tables in C++
	-> virtual method table: mechanism used in a programming language to support dynamic dispatch
		-> dynamic dispatch: find the right function to call.
			-> more explanation: when we define a method inside a class, the compiler will remember its defintion
			|	class Example{ public: void myFn(){std::cout << "class parent" << std::endl}}; 
			|									--> the compiler create a routine for myFn() remember its &					|
			|									--> routine will be executed every time the compiler finds a call to myFn()	|
			|									/!\ only 1 routine per class method && shared by all instances of class		|
			|										*-----------------------this is the static dispatch-----------------*	|
			 ---------------------------------------------------------------------------------------------------------------
			
							/?!\ but there are cases where the compiler execute the wrong routine such as:
			 --------------																				  ------------------
			|	 class Example1: public Example { public: void myFn(){std::cout << "class child" << std::endl}};			|	
			|									--> Example *c = new Example1();											|
			|									--> c->myFn();																|
			|										using static dispatch:													|
			|									--> from the point of view of the compiler => c points to an object of		|
			|																				  type Example					|
			|									--> 			  c actually   			   => points to an object of		|
			|																				  type Example1					|
			|									--> output:																	|	
			|												> class parent													|
			|						~> solution:																			|
			|										using dynamic dispatch: => class Example{ public: virtual void myFn();}	|
			|									--> virtual functions can be redefined in subclasses						|
			|									--> compiler has to find the most specific function definition at runtime	|
			|									--> To implement virtual functions, C++ uses a special form of late binding	|
			|										known as the virtual table												|
			|									--> The virtual table: is a lookup table of functions used to resolve		|
			|										function calls in a dynamic/late binding manner							|
			|									-->	Lookup tables: arrays storing data for something						|
			|										which takes lots of processing power if done in real-time				|
			|										/?\ How does vtable works?												|
			|												-->	 -1- every class that uses virtual functions/is derived		|
			|													 	 from a class that uses virtual functions				|
			|													 	 is given its own virtual table(static array that		|
			|																		the compiler sets up at compile time)	|
			|													 -2- one entry for each virtual function					|
			|														 that can be called by objects of the class stored in	|
			|														 vtable													|
			|														 	-> Each entry in this table is a function pointer	|
			|															   that points to the most-derived function 		|
			|															   accessible by that class							|
			|													 -3- the compiler also adds a hidden pointer that is a 		|
			|												 		 member of the base class, "*__vptr" 					|
			|														 is set (automatically) when a class object is created 	|
			|														 so that it points to the virtual table for that class.	| 
			|														 Unlike the *this pointer, which is actually a function	|
			|														 parameter used by the compiler to resolve 				|
			|														 self-references, *__vptr is a real pointer. 			|
			|														 Consequently, it makes each class object allocated		| 
			|														 bigger by the size of one pointer. It also means 		|
			|														 that *__vptr is inherited by derived classes, 			|
			|														 which is important										|
			|more infos: * https://pabloariasal.github.io/2017/06/10/understanding-virtual-tables/							|
			|			 * https://refspecs.linuxfoundation.org/LSB_5.0.0/LSB-Core-generic/LSB-Core-generic/cxxclasses.html |
			|			 * https://www.learncpp.com/cpp-tutorial/the-virtual-table/											|
			|			 * https://www.delftstack.com/howto/cpp/cpp-lookup-table/											|
			 ---------------------------------------------------------------------------------------------------------------

- Polymorphism (Runtime Polymorphism)
	-> achieved by Function Overriding
	-> the compiler determines which function call to bind to the object after deducing it at runtime
	-> function Overriding: when a derived class has a definition for one of the member functions of the base class

- abstract class
	-> cannot be instantiated, but can be used as a base class
	/?\ how ?
			=> contains at least one pure virtual function.
			  |	->	pure virtual function: a virtual function that is required to be implemented by a derived class if		| 
			  |		the derived class is not abstract.																		|
			  | 		-> No definition is given in base class.															|
			  |			-> If derived class do not redefine virtual function of base class, then no compilation				| 
			  |			   error but derived class also becomes abstract just like the base class							|
			   -------------------------------------------------------------------------------------------------------------

- deep copies vs shallow copies
	-> shallow copy: default copy constructor and default assignment operators it provides use a copying method known as 
					 a memberwise copy
			-> means that C++ copies each member of the class individually
			/!\ When no dynamically allocated memory this works very well
				otherwise, shallow copies of a pointer just copy the address of the pointer

	-> deep copy: allocates memory for the copy and then copies the actual value
				  so that the copy lives in distinct memory from the source
			/!\ Doing deep copies requires that we write our own copy
				constructors and overloaded assignment operators
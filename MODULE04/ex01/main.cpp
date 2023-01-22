#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"

int main(){
//	const Animal* k = new Cat();
//	const Animal* l = new Dog();

//	delete k;
//	delete l;
//{
//	Animal *j[4];
//	for (int i = 0; i < 2; i++){
//		j[i] = new Dog();
//		j[i + 2] = new Cat();
//	}
//	for (int i = 0; i < 4; i++)
//		j[i]->makeSound();
//	for (int i = 0; i < 4; i++)
//		delete j[i];
//}

	{
			std::cout << "\n/*---------- potato salade --------------*/\n" << std::endl;
			Cat cat1;
			Cat cat2;
			Brain c;
			Dog a;
			Dog b(a);
			
			b.makeSound();
			cat1 = cat2;
	}
	system("leaks animals");
return 0;
}
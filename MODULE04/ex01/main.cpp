#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"

int main(){
	const Animal* k = new Cat();
	const Animal* l = new Dog();

	delete k;
	delete l;
{
	Animal *j[4];
	for (int i = 0; i < 2; i++)
		j[i] = new Dog();
	for (int i = 2; i < 4; i++)
		j[i] = new Cat();
	for (int i = 0; i < 4; i++)
		j[i]->makeSound();
	for (int i = 0; i < 4; i++)
		delete j[i];
}
	system("leaks animals");
return 0;
}
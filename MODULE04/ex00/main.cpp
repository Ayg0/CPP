#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"

int main(){
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const WrongAnimal* i = new WrongCat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();
	
	delete meta;
	delete i;
	delete j;
	return 0;
}
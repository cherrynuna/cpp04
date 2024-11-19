#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

#include <cstdlib>
void checkLeaks()
{
	system("leaks a.out");
}

int main()
{
	// atexit(checkLeaks);
	// const Animal*	meta = new Animal();//allocating an object of abstract class type 'Animal'
	const Animal*	j = new Dog();
	const Animal*	i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	// meta->makeSound();
	std::cout << std::endl;
	const WrongAnimal*	bad = new WrongAnimal();
	const WrongAnimal*	k = new WrongCat();
	k->makeSound();
	bad->makeSound();
	std::cout << std::endl;
	// delete meta;
	delete j;
	delete i;
	delete bad;
	delete k;
	return 0;
}

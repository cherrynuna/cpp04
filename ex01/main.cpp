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
	//create and fill an array of Animal objects, half Dog half Cat
	// const Animal* j = new Dog();
	// const Animal* i = new Cat();

	//test that your copies are deep copies!

	//loop over this array and delete every Animal, You must delete directly dogs and cats as Animals
	// delete j;//should not create a leak
	// delete i;

	Dog	a;
	Dog	b(a);
	Dog	c;

	a.setBrain("hello", 0);
	c = a;
	a.setBrain("world", 0);
	std::cout << c.getBrain(0) << std::endl;
	std::cout << b.getBrain(0) << std::endl;
	std::cout << a.getBrain(0) << std::endl;

	return 0;

	// std::string str;
	// Animal *meta[10];

	// for (size_t i = 0; i < 10; i++)
	// {
	// 	if (i % 2)
	// 	{
	// 		meta[i] = new Dog();
	// 	}
	// 	else
	// 	{
	// 		meta[i] = new Cat();
	// 	}
	// }
	// std::cout << std::endl;
	
	// for (size_t i = 0; i < 10; i++)
	// {
	// 	delete meta[i];
	// }
	// std::cout << std::endl;

	// Dog *d = new Dog();
	// Dog *d2 = new Dog();
	// std::cout << std::endl;
	// str = d->getBrain(0);
	// std::cout << "Dog1's first idea is "<< str << std::endl;

	// d->setBrain("something", 0);
	// str = d->getBrain(0);
	// std::cout << "Dog1's first idea is "<< str << std::endl;

	// *d2 = *d;
	// str = d2->getBrain(0);
	// std::cout << "Dog2's first idea is "<< str << std::endl;

	// std::cout << std::endl;
	// delete d;
	// d = NULL;
	// delete d2;
	// d2 = NULL;

	// return 0;
}

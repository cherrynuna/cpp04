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
	Animal	*meta[10];

	for (int i = 0; i < 10; i++)
	{
		if (i % 2 == 0)
			meta[i] = new Dog();
		else
			meta[i] = new Cat();
	}
	std::cout << std::endl;

	Dog	a;
	Dog	b(a);
	Dog	c;

	a.setBrain("hello", 0);
	c = a;
	a.setBrain("world", 0);
	std::cout << c.getBrain(0) << std::endl;
	std::cout << b.getBrain(0) << std::endl;
	std::cout << a.getBrain(0) << std::endl;
	std::cout << std::endl;

	for (int i = 0; i < 10; i++)
	{
		delete meta[i];
	}
	std::cout << std::endl;

	return 0;
}

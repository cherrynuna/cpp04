//you have to provide the most complete tests you can.

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
	const Animal*	meta = new Animal();//상위 클래스 포인터, std::vector<Animal*> zoo 이런 식으로 묶을수 있다=유연성,하위 클래스 객체를 다루는 다형성을 활용하는 동작, Dog에만 정의된 멤버에는 접근할 수 없다
	const Animal*	j = new Dog();
	const Animal*	i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	const WrongAnimal*	bad = new WrongAnimal();
	const WrongAnimal*	k = new WrongCat();
	k->makeSound();
	bad->makeSound();

	delete meta;
	delete j;
	delete i;
	delete bad;
	delete k;
	return 0;
}

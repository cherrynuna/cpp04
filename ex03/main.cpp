#include "MateriaSource.hpp"
#include "Character.hpp"

#include <cstdlib>
void checkLeaks()
{
	system("leaks a.out");
}

int main(void)
{
	// atexit(checkLeaks);
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	
	delete bob;
	delete me;
	delete src;
	delete tmp;

	return 0;
}

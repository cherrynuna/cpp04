#include "MateriaSource.hpp"
#include "Character.hpp"

int main(void)
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");

	AMateria* tmp;
	tmp = src->createMateria("ice");

	me->unequip(0);
	me->unequip(5);
	me->equip(tmp);
	delete tmp;

	// tmp = dynamic_cast<Character*>(me)->getSlot(0);
	// me->unequip(0);
	// delete tmp;

	tmp = src->createMateria("cure");
	me->equip(tmp);
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

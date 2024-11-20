#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void) : IMateriaSource()
{
}

MateriaSource::MateriaSource(const MateriaSource& obj) : IMateriaSource(obj)
{
}

MateriaSource&	MateriaSource::operator=(const MateriaSource& obj)
{
}

MateriaSource::~Character(void)
{
}

void	MateriaSource::learnMateria(AMateria* materia)
{
	if (materia->getType() == "ice")
		
	else if (materia->getType() == "cure")
		
	else
		
}

AMateria*	MateriaSource::createMateria(std::string const& type)
{
	if (type == "ice")
		return (new Ice());
	else if (type == "cure")
		return (new Cure());
	else
		return (0);
}

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)// : IMateriaSource()
{
	for (int i = 0; i < 4; ++i)
	{
		this->slot[i] = NULL;//처음엔 쓰레기값임
	}
}

MateriaSource::MateriaSource(const MateriaSource& obj)// : IMateriaSource(obj)
{
	*this = obj;
}

MateriaSource&	MateriaSource::operator=(const MateriaSource& obj)
{
	if (this != &obj)
	{
		for (int i = 0; i < 4; i++)
		{
			if (obj.slot[i]->getType() != "ice" && obj.slot[i]->getType() != "cure")
				this->slot[i] = NULL;
			else
			{
				delete this->slot[i];
				this->slot[i] = obj.slot[i]->clone();
			}
		}
	}
	return (*this);
}

MateriaSource::~MateriaSource(void)
{
	for (int i = 0; i < 4; i++)
	{
		delete this->slot[i];
		this->slot[i] = NULL;
	}
}

void	MateriaSource::learnMateria(AMateria* materia)
{
	if (!materia)
		return ;
	
	int	idx = 0;

	while (idx < 4)
	{
		if (this->slot[idx] == NULL)
		{
			if (materia->getType() != "ice" && materia->getType() != "cure")
				;
			else
				this->slot[idx] = materia;
			return ;
		}
		idx++;
	}
	delete materia;
}

AMateria*	MateriaSource::createMateria(std::string const& type)
{
	for (int i = 0; i < 4; i++)
	{
		if (type == this->slot[i]->getType())
			return (this->slot[i]->clone());
	}
	return (0);
}

#include "Character.hpp"

Character::Character(std::string name) : ICharacter()
{
	this->name = name;
	for (int i = 0; i < 4; ++i)
	{
		this->slot[i] = NULL;//처음엔 쓰레기값임
	}
}

Character::Character(const Character& obj) : ICharacter(obj)
{
	for (int i = 0; i < 4; i++)
	{
		// delete this->slot[i];//NULL이면 아무 동작 안함
		// this->slot[i] = obj.slot[i] ? obj.slot[i]->clone() : NULL;//if (obj.slot[i]) A B
		if (obj.slot[i])
			this->slot[i] = obj.slot[i]->clone();
		else
			this->slot[i] = NULL;
	}
}

Character&	Character::operator=(const Character& obj)
{
	if (this != &obj)
	{
		this->name = obj.name;
		for (int i = 0; i < 4; i++)
		{
			delete this->slot[i];
			if (obj.slot[i])
				this->slot[i] = obj.slot[i]->clone();
			else
				this->slot[i] = NULL;
		}
	}
	return (*this);
}

Character::~Character(void)
{
	for (int i = 0; i < 4; i++)
	{
		delete this->slot[i];
	}
}

std::string const&	Character::getName() const
{
	return (this->name);
}

AMateria*	Character::getSlot(int idx)
{
	if (0 <= idx && idx < 4)
		return this->slot[idx];
	return nullptr;
}


void	Character::equip(AMateria* m)//full inventory, don’t do anything
{
	if (!m)
		return ;
	
	int	idx = 0;

	while (idx < 4)
	{
		if (this->slot[idx] == NULL)
		{
			this->slot[idx] = m->clone();//AMateria*에서 자식 클래스로
			break;
		}
		idx++;
	}
	m = NULL;
}

void	Character::unequip(int idx)//an unexisting Materia, don’t do anything
{
	if (0 <= idx && idx < 4 && this->slot[idx])
		this->slot[idx] = NULL; //NOT delete the Materia, 주소 따로 저장하든가 해서 leak 막아라
}

void	Character::use(int idx, ICharacter& target)//an unexisting Materia, don’t do anything
{
	if (0 <= idx && idx < 4 && this->slot[idx])
		this->slot[idx]->use(target);
}

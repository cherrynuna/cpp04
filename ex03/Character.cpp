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
		delete this->slot[i];//NULL이면 아무 동작 안함
		this->slot[i] = obj.slot[i] ? obj.slot[i]->clone() : NULL;//if (obj.slot[i]) A B
	}
}

Character&	Character::operator=(const Character& obj)
{
	for (int i = 0; i < 4; i++)
	{
		if (obj.slot[i]->getType() == "Ice")
			this->slot[i] = new Ice();
		else if (obj.slot[i]->getType() == "Cure")

		else
			this->slot[i] = NULL;
	}
}

Character::~Character(void)
{

}

std::string const&	Character::getName() const
{
	return (this->name);
}

void	Character::equip(AMateria* m)//full inventory, don’t do anything
{
	int	idx = 0;

	if (idx < 4)
	{
		if (this->slot[idx] == NULL)
		{
			this->slot[idx] = m;
			return ;
		}
		idx++;
	}
}

void	Character::unequip(int idx)//an unexisting Materia, don’t do anything
{
	if (0 <= idx && idx < 4)
		//NOT delete the Materia, 주소 따로 저장하든가 해서 leak 막아라
}

void	Character::use(int idx, ICharacter& target)//an unexisting Materia, don’t do anything
{
	if (0 <= idx && idx < 4 && this->slot[idx] != NULL)
		this->slot[idx]->use(target);
}

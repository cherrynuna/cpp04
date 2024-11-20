#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure")
{
	
}

Cure::Cure(const Cure& obj) : AMateria(obj)
{
	
}

Cure&	Cure::operator=(const Cure& obj)
{
	if (this != &obj)
	{
		this->type = obj.type;

	}
	return (*this);
}

Cure::~Cure(void)
{
	
}

AMateria*	Cure::clone(void) const
{
	return new Cure(*this);// 복사 생성자를 사용하여 복사
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}

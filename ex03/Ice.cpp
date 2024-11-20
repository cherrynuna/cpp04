#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice")
{

}

Ice::Ice(const Ice& obj) : AMateria(obj)
{

}

Ice&	Ice::operator=(const Ice& obj)
{
	if (this != &obj)
	{
		this->type = obj.type;

	}
	return (*this);
}

Ice::~Ice(void)
{

}

AMateria*	Ice::clone(void) const
{
	return new Ice(*this);// 복사 생성자를 사용하여 복사
}

void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

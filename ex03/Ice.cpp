#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice")
{
	// std::cout << "Ice constructor called" << std::endl;
}

Ice::Ice(const Ice& obj) : AMateria(obj)
{
	// std::cout << "Ice copy constructor called" << std::endl;
}

Ice&	Ice::operator=(const Ice& obj)
{
	if (this != &obj)
	{
		this->type = obj.type;
		// std::cout << "Ice copy assignment operator called" << std::endl;
	}
	return (*this);
}

Ice::~Ice(void)
{
	// std::cout << "Ice destructor called" << std::endl;
}

AMateria*	Ice::clone(void) const
{
	return new Ice(*this);// 복사 생성자를 사용하여 복사
}

void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

#include "AMateria.hpp"

AMateria::AMateria(std::string const & type) : type(type)
{
}

AMateria::AMateria(const AMateria& obj) : type(obj.type)
{
}

AMateria&	AMateria::operator=(const AMateria& obj)
{
	if (this != &obj)
	{
		//
	}
	return (*this);
}

AMateria::~AMateria()
{

}


std::string const&	AMateria::getType() const
{
	return (this->type);
}

void		AMateria::use(ICharacter& target)//얘는 왜 순수 가상 함수가 아니지
{
	(void)target;
	std::cout << "why isn't this a pure virtual function?" << std::endl; 
}
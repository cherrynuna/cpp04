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

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{//std::string은 기본적으로 빈 문자열로 초기화
	std::cout << "Default WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) : type(type)
{
	std::cout << "WrongAnimal constructor called for " << type << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& obj) : type(obj.type)
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal& obj)
{
	if (this != &obj)
	{
		this->type = obj.type;
		std::cout << "WrongAnimal copy assignment operator called" << std::endl;
	}
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	if (this->type == "")
		std::cout << "WrongAnimal destructor called" << std::endl;
	else
		std::cout << "WrongAnimal destructor called for " << this->type << std::endl;
	
}

void	WrongAnimal::makeSound() const
{
	std::cout << "wrongzzz" << std::endl;
}

const std::string	&WrongAnimal::getType() const
{
	return (this->type);
}

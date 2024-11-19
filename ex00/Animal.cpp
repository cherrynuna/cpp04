#include "Animal.hpp"

Animal::Animal()
{//std::string은 기본적으로 빈 문자열로 초기화
	std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(std::string type) : type(type)
{
	std::cout << "Animal constructor called for " << type << std::endl;
}

Animal::Animal(const Animal& obj) : type(obj.type)
{
	std::cout << "Animal copy constructor called" << std::endl;
}

Animal&	Animal::operator=(const Animal& obj)
{
	if (this != &obj)
	{
		this->type = obj.type;
		std::cout << "Animal copy assignment operator called" << std::endl;
	}
	return (*this);
}

Animal::~Animal()
{
	if (this->type == "")
		std::cout << "Animal destructor called" << std::endl;
	else
		std::cout << "Animal destructor called for " << this->type << std::endl;
	
}

void	Animal::makeSound() const
{
	std::cout << "zzz" << std::endl;
}

const std::string	&Animal::getType() const
{
	return (this->type);
}

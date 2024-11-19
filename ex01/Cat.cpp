#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat")
{
	this->brain = new Brain;
	std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(const Cat& obj) : Animal(obj)
{
	this->brain = new Brain(*obj.brain);
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& obj)
{
	if (this != &obj)
	{
		this->type = obj.type;
		delete this->brain;
		this->brain = new Brain(*obj.brain);
		std::cout << "Cat copy assignment operator called" << std::endl;
	}
	return (*this);
}

Cat::~Cat(void)
{
	delete this->brain;
	std::cout << "Cat destructor called" << std::endl;
}

const std::string	&Cat::getBrain(const int n) const
{
	return (this->brain->getIdea(n));
}

void	Cat::setBrain(const std::string &idea, const int n)
{
	this->brain->setIdea(idea, n);
}

void	Cat::makeSound() const
{
	std::cout << "nyaong" << std::endl;
}

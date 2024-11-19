#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog")
{
	this->brain = new Brain;
	std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(const Dog& obj) : Animal(obj)
{
	this->brain = new Brain(*obj.brain);
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& obj)
{
	if (this != &obj)
	{
		this->type = obj.type;
		delete this->brain;
		this->brain = new Brain(*obj.brain);
		std::cout << "Dog copy assignment operator called" << std::endl;
	}
	return (*this);
}

Dog::~Dog(void)
{
	delete this->brain;
	std::cout << "Dog destructor called" << std::endl;
}

const std::string	&Dog::getBrain(const int n) const
{
	return (this->brain->getIdea(n));
}

void	Dog::setBrain(const std::string &idea, const int n)
{
	this->brain->setIdea(idea, n);
}


void	Dog::makeSound() const
{
	std::cout << "meongmeong" << std::endl;
}

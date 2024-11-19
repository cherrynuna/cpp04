#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain(const Brain& obj)
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = obj.ideas[i];
	std::cout << "Brain copy constructor called" << std::endl;
}

Brain&	Brain::operator=(const Brain& obj)
{
	if (this != &obj)
	{
		for (int i = 0; i < 100; i++)
			this->ideas[i] = obj.ideas[i];
		std::cout << "Brain copy assignment operator called" << std::endl;
	}
	return (*this);
}

Brain::~Brain(void)
{
	std::cout << "Brain destructor called" << std::endl;
}

const std::string	&Brain::getIdea(const int n) const
{
	if (0 <= n && n < 100)
		return (this->ideas[n]);
	std::cerr << "Error: Invalid index" << std::endl;
	std::exit(1);
}

void	Brain::setIdea(const std::string &idea, const int n)
{
	if (0 <= n && n < 100)
		this->ideas[n] = idea;
	else
	{
		std::cerr << "Error: Invalid index" << std::endl;
		std::exit(1);
	}
}

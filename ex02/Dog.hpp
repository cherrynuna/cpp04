#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain	*brain;
	public:
		Dog(void);
		Dog(const Dog& obj);
		Dog&	operator=(const Dog& obj);
		~Dog(void);

		const std::string	&getBrain(const int n) const;
		void				setBrain(const std::string &idea, const int n);

		void	makeSound() const;
};

#endif
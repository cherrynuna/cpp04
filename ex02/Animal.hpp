#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
	protected:
		std::string	type;
	public:
		Animal();
		Animal(std::string type);
		Animal(const Animal& obj);
		Animal&	operator=(const Animal& obj);
		virtual ~Animal();

		const std::string	&getType() const;

		virtual void	makeSound() const = 0;
};

//Constructors and destructors of each class must display specific messages. Don’t use the same message for all classes.

#endif

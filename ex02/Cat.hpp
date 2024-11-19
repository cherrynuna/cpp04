#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain	*brain;
	public:
		Cat(void);
		Cat(const Cat& obj);
		Cat&	operator=(const Cat& obj);
		~Cat(void);

		const std::string	&getBrain(const int n) const;
		void				setBrain(const std::string &idea, const int n);

		void	makeSound() const;
};

#endif

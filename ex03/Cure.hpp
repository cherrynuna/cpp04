#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"
// # include "ICharacter.hpp"

class Cure : public AMateria
{
	public:
		Cure(void);
		Cure(const Cure& obj);
		Cure&	operator=(const Cure& obj);
		~Cure(void);
		
		AMateria*	clone(void) const;//return a new instance of the same type
		void	use(ICharacter& target);
};

#endif

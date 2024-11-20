#ifndef ICE_HPP
# define ICE_HPP

# include "ICharacter.hpp"

class Ice : public AMateria
{
	public:
		Ice(void);
		Ice(const Ice& obj);
		Ice&	operator=(const Ice& obj);
		~Ice(void);

		AMateria*	clone(void) const;//return a new instance of the same type
		void	use(ICharacter& target);
};

#endif

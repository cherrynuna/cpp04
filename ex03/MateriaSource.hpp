#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <iostream>
# include "IMateriaSource.hpp"
# include "Ice.hpp"
# include "Cure.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		
	public:
		MateriaSource(void);
		MateriaSource(const MateriaSource& obj);
		MateriaSource&	operator=(const MateriaSource& obj);
		~MateriaSource(void);

		void		learnMateria(AMateria*);
		AMateria*	createMateria(std::string const & type);
};

#endif

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include "ICharacter.hpp"

class AMateria//순수가상함수를 하나 이상 포함하는 클래스로 객체를 생성할 수 없다
{
	protected:
		std::string	type;
		// [...]
	public:
		AMateria(std::string const & type);
		AMateria(const AMateria& obj);
		AMateria&	operator=(const AMateria& obj);
		virtual ~AMateria();
		// [...]
		
		std::string const&	getType() const; //Returns the materia type
		
		virtual AMateria*	clone() const = 0;
		virtual void		use(ICharacter& target);
};

#endif

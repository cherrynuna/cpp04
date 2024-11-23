#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

// # include "AMateria.hpp"
# include <iostream>


class AMateria;

class ICharacter//순수가상함수와 가상 소멸자로 이루어진 클래스이며 구현부가 없다
{
	public:
		virtual ~ICharacter() {}

		virtual std::string const&	getName() const = 0;

		virtual void	equip(AMateria* m) = 0;
		virtual void	unequip(int idx) = 0;
		virtual void	use(int idx, ICharacter& target) = 0;
};

#endif

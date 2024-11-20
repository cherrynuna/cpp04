#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"
# include "Ice.hpp"
# include "Cure.hpp"

class Character : public ICharacter
{
	private:
		std::string	name;
		AMateria	*slot[4];
	public:
		Character(std::string name);
		Character(const Character& obj);
		Character&	operator=(const Character& obj);
		~Character(void);

		std::string const&	getName() const = 0;

		void	equip(AMateria* m) = 0;
		void	unequip(int idx) = 0;
		void	use(int idx, ICharacter& target) = 0;
}

#endif

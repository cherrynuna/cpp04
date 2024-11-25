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

		std::string const&	getName() const;
		AMateria*			getSlot(int idx);
		
		void	equip(AMateria* m);
		void	unequip(int idx);
		void	use(int idx, ICharacter& target);
};

#endif

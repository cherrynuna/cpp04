#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <cstdlib>

class Brain
{
	private:
		std::string	ideas[100];
	public:
		Brain(void);
		Brain(const Brain& obj);
		Brain&	operator=(const Brain& obj);
		~Brain(void);

		const std::string	&getIdea(const int n) const;
		void	setIdea(const std::string &idea, const int n);
};

#endif

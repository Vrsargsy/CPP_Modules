#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:		
		FragTrap(void);
		FragTrap(const std::string name);
		FragTrap(const FragTrap &obj);
		FragTrap &operator=(const FragTrap &obj);
		~FragTrap(void);		

		void	attack(const std::string& target);
		void	highFivesGuys(void);
		std::string	getClassName(void);
};

#endif
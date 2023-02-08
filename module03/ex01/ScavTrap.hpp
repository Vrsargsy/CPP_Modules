#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:		
		ScavTrap(void);
		ScavTrap(const std::string name);
		ScavTrap(const ScavTrap &obj);
		ScavTrap &operator=(const ScavTrap &obj);
		~ScavTrap(void);

		void	attack(const std::string &target);
		void	guardGate();
		std::string	getClassName(void);
};

#endif
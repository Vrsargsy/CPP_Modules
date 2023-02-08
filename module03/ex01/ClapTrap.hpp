#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include <typeinfo>

#define uint unsigned int

class ClapTrap
{
	protected:
		std::string		name;
		uint			hitPoints;
		uint			energyPoints;
		uint			attackDamage;

	public:		
		ClapTrap(void);
		ClapTrap(const std::string name);
		ClapTrap(const ClapTrap &obj);
		ClapTrap &operator=(const ClapTrap &obj);
		~ClapTrap(void);							

		void		attack(const std::string &target);
		void		takeDamage(uint amount);
		void		beRepaired(uint amount);
		void		setHitPoints(uint amount);
		void		setAttackDamage(uint amount);
		void		setEnergyPoints(uint amount);
		std::string	getClassName(void);

};

#endif
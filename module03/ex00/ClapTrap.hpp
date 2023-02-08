#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#define uint unsigned int

class ClapTrap
{
private:
	std::string 	name;
	uint			hitPoints;
	uint			energyPoints;
	uint			attackDamage;	
public:
	ClapTrap &operator=(const ClapTrap &other);
	ClapTrap(const std::string name);
	ClapTrap(const ClapTrap &other);
	ClapTrap(void);
	~ClapTrap(void);		
	void attack(const std::string &target);
	void takeDamage(uint amount);
	void beRepaired(uint amount);
	void setName(std::string new_name);
	void setHitPoints(uint points);
	void setEnergyPoints(uint energy_p);
	void setAttackDamage(uint damage);
};


#endif
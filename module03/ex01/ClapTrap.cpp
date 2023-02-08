#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	this->name = "Without name";
	this->hitPoints = 10;
	this->energyPoints = 10;
	this->attackDamage = 0;
	std::cout << name << " " + this->getClassName() + " " << "created" << std::endl;
}

ClapTrap::ClapTrap(const std::string name)
{
	this->name = name;
	this->hitPoints = 10;
	this->attackDamage = 0;
	this->energyPoints = 10;
	std::cout << name << this->getClassName() << " created." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &obj)
{
	this->name = obj.name;
	this->hitPoints = obj.hitPoints;
	this->energyPoints = obj.energyPoints;
	this->attackDamage = obj.attackDamage;
	std::cout << "Copy constructor of " << this->getClassName() << " created" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &obj)
{
	std::cout << "Copy assignment operator of " << this->getClassName() << " called " << std::endl;
	if (this != &obj)
	{
		this->name = obj.name;
		this->hitPoints = obj.hitPoints;
		this->energyPoints = obj.energyPoints;
		this->attackDamage = obj.attackDamage;
	}
	return (*this);
}

ClapTrap::~ClapTrap(void)
{
	if (name.compare("Unnamed") == 0)
		std::cout << name << " " + this->getClassName() << " destroyed" << std::endl;
	else
		std::cout << this->getClassName() + " " << name << " destroyed" << std::endl;
}

void	ClapTrap::attack(const std::string &target)
{
	if ((hitPoints == 0 && energyPoints != 0) || (hitPoints != 0 && energyPoints == 0)
	|| (hitPoints == 0 && energyPoints == 0)|| (hitPoints == 0 || energyPoints == 0))
	{
		std::cout << this->getClassName() + " " << name << " can't attack " << std::endl;
		return ;
	}
	std::cout << this->getClassName() + " " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
	energyPoints--;
}

void	ClapTrap::takeDamage(uint amount)
{
	if (hitPoints <= amount)
	{
		hitPoints = 0;
		std::cout << name << " was killed " << std::endl;
		return ;
	}
	hitPoints -= amount;
	std::cout << name << " was damaged " << amount << " hit points" << std::endl;
}

void	ClapTrap::beRepaired(uint amount)
{
	if (energyPoints == 0)
	{
		std::cout << name << " have'nt energy to repair itself" << std::endl;
		return ;
	}
	if (hitPoints == 0)
	hitPoints += amount;
	energyPoints--;
	std::cout << name << "respawned" << std::endl;
	std::cout << "it got " << amount << " hit points" << std::endl;
}

void	ClapTrap::setHitPoints(uint amount)
{
	hitPoints = amount;
	std::cout << name << " hit points were set to  " << amount << std::endl;
}

void	ClapTrap::setEnergyPoints(uint amount)
{
	energyPoints = amount;
	std::cout << name << " energy points were set to " << amount <<std::endl;
}

void	ClapTrap::setAttackDamage(uint amount)
{
	attackDamage = amount;
	std::cout << name << " attack damage were set to " << amount << std::endl;
}

std::string	ClapTrap::getClassName(void)
{
	std::string s = typeid(*this).name();
	s = s.substr(1);
	return (s);
}

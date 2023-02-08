#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	this->name = "Unnamed";
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	std::cout << name << " " + this->getClassName() << " created" << std::endl;
}

ScavTrap::ScavTrap(const std::string name)
{
	this->name = name;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	std::cout << this->getClassName() << " named " << name << " created" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &obj) : ClapTrap(obj)
{
	this->name = obj.name;
	this->hitPoints = obj.hitPoints;
	this->energyPoints = obj.energyPoints;
	this->attackDamage = obj.attackDamage;
	std::cout << "Copy constructor of " << this->getClassName() << "called" << name << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &obj)
{
	std::cout << "Copy assignment operator of " << this->getClassName() << " called" << std::endl;
	if (this != &obj)
	{
		this->name = obj.name;
		this->hitPoints = obj.hitPoints;
		this->energyPoints = obj.energyPoints;
		this->attackDamage = obj.attackDamage;
	}
	return (*this);
}

ScavTrap::~ScavTrap(void)
{
	if (name.compare("Unnamed") == 0)
		std::cout << name << " " + this->getClassName() << " destroyed" << std::endl;
	else
	{
		std::cout << this->getClassName() << " destroyed" << std::endl;
	}
}

void	ScavTrap::attack(const std::string &target)
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

void	ScavTrap::guardGate()
{
	std::cout << name << " is now in Gate keeper mode." << std::endl;
}


std::string	ScavTrap::getClassName(void)
{
	std::string str = typeid(*this).name();
	str = str.substr(1);
	return (str);
}

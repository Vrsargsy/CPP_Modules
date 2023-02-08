#include "FragTrap.hpp"


FragTrap::FragTrap(void)
{
	this->name = "Unnamed";
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
	std::cout << name << " " + this->getClassName() << " created" << std::endl;
}

FragTrap::FragTrap(const std::string name)
{
	this->name = name;
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
	std::cout << this->getClassName() << " named " << name << " created." << std::endl;
}

FragTrap::FragTrap(const FragTrap &obj) : ClapTrap(obj)
{
	this->name = obj.name;
	this->hitPoints = obj.hitPoints;
	this->energyPoints = obj.energyPoints;
	this->attackDamage = obj.attackDamage;
	std::cout << "Copy constructor of " << this->getClassName() << " called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &obj)
{
	std::cout << "Copy assignment operator of " << this->getClassName() << " called"<< std::endl;
	if (this != &obj)
	{
		this->name = obj.name;
		this->hitPoints = obj.hitPoints;
		this->energyPoints = obj.energyPoints;
		this->attackDamage = obj.attackDamage;
	}
	return (*this);
}

FragTrap::~FragTrap(void)
{
	if (name.compare("Unnamed") == 0)
		std::cout << name << " " + this->getClassName() << " destroyed" << std::endl;
	else
		std::cout << this->getClassName() + " " << name << " destroyed" << std::endl;
}

void	FragTrap::attack(const std::string& target)
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

void	FragTrap::highFivesGuys(void)
{
	std::cout << name << " gives everyone high fives." << std::endl;
}


std::string	FragTrap::getClassName(void)
{
	std::string str = typeid(*this).name();
	str = str.substr(1);
	return (str);
}

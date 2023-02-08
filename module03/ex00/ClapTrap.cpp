#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) {
	this->name = "Without name";
	this->attackDamage = 0;
	this->energyPoints = 10;
	this->hitPoints = 10;
	std::cout << "Default constructor called" << std::endl;
}
ClapTrap::~ClapTrap(void) {
	std::cout << "Destructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string name) {
	this->name = name;
	this->attackDamage = 0;
	this->energyPoints = 10;
	this->hitPoints = 10;
	std::cout << "Constructor called" << std::endl;
}
ClapTrap::ClapTrap(const ClapTrap &obj) {
	this->name = obj.name;
	this->attackDamage = obj.attackDamage;
	this->energyPoints = obj.energyPoints;
	this->hitPoints = obj.hitPoints;
	std::cout << "Copy constructor called" << std::endl;
}
ClapTrap &ClapTrap::operator=(const ClapTrap &obj) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &obj)
	{
		this->name = obj.name;
		this->hitPoints = obj.hitPoints;
		this->energyPoints = obj.energyPoints;
		this->attackDamage = obj.attackDamage;		
	}
	return (*this);
}

void ClapTrap::attack(const std::string &target) {
	if(this->hitPoints == 0 || this->energyPoints == 0)
	{
		std::cout << "You are died dude, you cant attack" << std::endl;
		return ;
	}
	std::cout << this->name << " Attack's <" << target \
	<< ">, causing " << this->attackDamage << " points of damage!" \
	<< std::endl;
	this->energyPoints--;
}
void ClapTrap::takeDamage(uint amount) {
	if (this->hitPoints <= amount)
	{
		std::cout << this->name << " Killed" << std::endl;
		return ;
	}
		std::cout << this->name << " taked " << amount << " damage" << std::endl;
	this->hitPoints -= amount;
}
void ClapTrap::beRepaired(uint amount) {
	if (energyPoints == 0)
	{
		std::cout << name;
		std::cout << " not possible to repair itself because it has no energy!" << std::endl;
		return ;
	}
	if (hitPoints == 0)
		std::cout << "rose" << std::endl;
	hitPoints += amount;
	energyPoints--;
	std::cout << "repaired";
	std::cout << "its toke " << amount << " hit points" << std::endl;
} 
void ClapTrap::setName(std::string new_name) {
	this->name = new_name;
}
void ClapTrap::setHitPoints(uint points) {
	this->hitPoints = points;
}
void ClapTrap::setEnergyPoints(uint energy_p) {
	this->energyPoints = energy_p;
}
void ClapTrap::setAttackDamage(uint damage) {
	this->attackDamage = damage;
}


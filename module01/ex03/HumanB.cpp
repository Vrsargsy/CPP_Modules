#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->name = name;
	this->weapon = NULL;
}

HumanB::~HumanB(){}

void	HumanB::attack(void) const
{
	if (this->weapon->getType() !=  "" && this->weapon != NULL)
	{
		std::cout << name << " attacks with their ";
		std::cout << weapon->getType() << std::endl;
	}
	else
		std::cout << name << " without weapon" << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}
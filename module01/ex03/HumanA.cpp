#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : name(name), weapon(weapon) {}

HumanA::~HumanA(){}

void	HumanA::attack(void)
{
	if (this->weapon.getType() != "")
	{
		std::cout << name << " attacks with their ";
		std::cout << weapon.getType() << std::endl;
	}
	else
		std::cout << name << " without weapon" << std::endl;
}

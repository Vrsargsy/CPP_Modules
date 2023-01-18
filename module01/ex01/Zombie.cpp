#include "Zombie.hpp"

Zombie::Zombie() {
	std::cout << "Zombie Created !" << std::endl;
};

Zombie::~Zombie() {
	std::cout << name << " Zombie Deleted !" << std:: endl;
};

void	Zombie::announce(void) {
	std::cout << getZombie() << " : BraiiiiiiinnnzzzZ..." << std::endl;
};

std::string Zombie::getZombie() {
	return this->name;
};
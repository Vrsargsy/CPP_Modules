#include "Zombie.hpp"

/* Constructors */
Zombie::Zombie(void) {};
Zombie::Zombie(std::string name) {
	this->name = name;
};
/* Destructors */
Zombie::~Zombie() {};
void	Zombie::announce(void) {
	std::cout << getZombie() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

std::string Zombie::getZombie() {
	return this->name;
}
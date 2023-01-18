#include "Weapon.hpp"
Weapon::Weapon() {}
Weapon::Weapon(const std::string type) {
	this->setType(type);
}

Weapon::~Weapon() {}

const std::string &Weapon::getType(void) {
	return (this->type);
}

void	Weapon::setType(const std::string type)
{
	this->type = type;
}

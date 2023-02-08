#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal (void) {
	std::cout << "WrongAnimal constructor called!" << std::endl;
	this->type = "WrongAnimal";
}
WrongAnimal::~WrongAnimal(void) {
	std::cout << "WrongAnimal destructor called!" << std::endl;
}
WrongAnimal::WrongAnimal(const WrongAnimal &obj) {
	this->type = obj.type;
	std::cout << "Copy constructor of class WrongAnimal called!" << std::endl;
}
WrongAnimal &WrongAnimal::operator=(const WrongAnimal &obj) {
	std::cout << "Copy assignment operator of WrongAnimal called!" << std::endl;
	if(this != &obj)
	{
		this->type = obj.type;
		return (*this);
	}
	return (*this);
}
void WrongAnimal::makeSound(void) const {
	std::cout << this->type << std::endl;
}
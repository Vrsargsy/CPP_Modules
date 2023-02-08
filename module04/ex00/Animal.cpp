#include "Animal.hpp"

Animal::Animal (void) {
	std::cout << "Animal constructor called!" << std::endl;
	this->type = "Animal";
}
Animal::~Animal(void) {
	std::cout << "Animal destructor called!" << std::endl;
}
Animal::Animal(const Animal &obj) {
	this->type = obj.type;
	std::cout << "Copy constructor of class Animal called!" << std::endl;
}
Animal &Animal::operator=(const Animal &obj) {
	std::cout << "Copy assignment operator of Animal called!" << std::endl;
	if(this != &obj)
	{
		this->type = obj.type;
		return (*this);
	}
	return (*this);
}
void Animal::makeSound(void) const {
	std::cout << this->type << std::endl;
}
const std::string &Animal::getType(void) const {
	return this->type;
}

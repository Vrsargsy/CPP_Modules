#include "Cat.hpp"

Cat::Cat(void)	{
	this->type = "Cat";
	std::cout << "Default constructor of Cat called!" << std::endl;
}
Cat::Cat(const Cat &obj) {

	this->type = obj.type;
	std::cout << "Copy constructor of Cat called!" << std::endl;
}
Cat &Cat::operator=(const Cat &obj) {

std::cout << "Copy assignment operator of Cat called!" << std::endl;
	
	if (this != &obj)
	{
		this->type = obj.type;
		return (*this);
	}
	return (*this);
}

Cat::~Cat() {
	std::cout << "Cat Destructor called" << std::endl;
}

void Cat::makeSound(void) const {
	std::cout << "Cat: Meow" << std::endl;
}
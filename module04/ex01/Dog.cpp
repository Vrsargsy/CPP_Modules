#include "Dog.hpp"

Dog::Dog(void)	{
	this->brain = new Brain();
	this->type = "Dog";
	std::cout << "Default constructor of Dog called!" << std::endl;
}
Dog::Dog(const Dog &obj) {

	this->type = obj.type;
	std::cout << "Copy constructor of Dog called!" << std::endl;
}
Dog &Dog::operator=(const Dog &obj) {

std::cout << "Copy assignment operator of Dog called!" << std::endl;
	if (this != &obj)
	{
		delete brain;
		*this->brain = *obj.brain;
		this->type = obj.type;
		return (*this);
	}
	return (*this);
}

Dog::~Dog() {
	delete brain;
	std::cout << "Dog Destructor called" << std::endl;
}

void Dog::makeSound(void) const {
	std::cout << "Dog: Bark" << std::endl;
}
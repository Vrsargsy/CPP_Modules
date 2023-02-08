#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain(const Brain &copy) {
	std::cout << "Brain copy constructor called" << std::endl;
	for(int i = 0; i < 100; i++)
		this->_ideas[i] = copy._ideas[i];
}

Brain &Brain::operator=(const Brain &copy) {
	if (this != &copy)
		for(int i = 0; i < 100; i++)
			this->_ideas[i] = copy._ideas[i];
	return (*this);
}
const std::string Brain::getIdea(int nb) const {
	return this->_ideas[nb];
}
void  Brain::setIdea(int i, std::string idea) {
	this->_ideas[i] = idea;
}
Brain::~Brain(void) {
	std::cout << "Brain destructor called" << std::endl;
}
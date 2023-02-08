#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain
{
private:
	std::string _ideas[100];
public:
	Brain();
	Brain(const Brain &copy);
	Brain &operator=(const Brain &copy);
	const std::string getIdea(int nb) const;
	void  setIdea(int i, std::string idea);
	~Brain();
};



#endif
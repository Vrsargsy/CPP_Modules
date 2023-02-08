#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal	{

protected:
	std::string type;
public:
	Animal(void);
	virtual ~Animal(void);
	Animal(const Animal &obj);
	Animal &operator=(const Animal &obj);

	virtual void makeSound(void) const;
	const std::string &getType(void) const;
};


#endif
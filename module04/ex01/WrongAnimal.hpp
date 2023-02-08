#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>
#include "Dog.hpp"
#include "Cat.hpp"

class WrongAnimal	{

protected:
	std::string type;
public:
	WrongAnimal(void);
	~WrongAnimal(void);
	WrongAnimal(const WrongAnimal &obj);
	WrongAnimal &operator=(const WrongAnimal &obj);

	virtual void makeSound(void) const;
	std::string &getType(void) const;
};

#endif
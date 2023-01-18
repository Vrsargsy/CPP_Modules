#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>


class Zombie {
public:
	 Zombie(void);
	 Zombie(std::string name);
	~Zombie();

	void	announce( void );
	std::string getZombie();

private:
	std::string name;
};

	Zombie* newZombie(std::string name);
	void randomChump(std::string name);

#endif
#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie {
public:
	std::string name;
	Zombie();
	Zombie(int N, std::string name);
	~Zombie();
	void		announce(void);
	std::string getZombie(void);

};
Zombie* zombieHorde(int N, std::string name);

#endif

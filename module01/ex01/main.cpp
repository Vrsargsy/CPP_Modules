#include "Zombie.hpp"

int main(int ac, char **av)
{
	if (ac < 3)
	{
		std::cout << "Enter zombie count and name" << std::endl;
		return (0);
	}
	Zombie	*zombies = zombieHorde(atoi(av[1]), av[2]);
	for (int i = 0; i < atoi(av[1]) ; i++)
		zombies[i].announce();
	delete [] zombies;
	return (1);
}
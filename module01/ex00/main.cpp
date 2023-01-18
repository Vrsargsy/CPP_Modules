#include "Zombie.hpp"

int	main(void)
{
	Zombie *Heap_Zombie;
	Heap_Zombie = newZombie("Zombie_1");
	Heap_Zombie->announce();
	delete Heap_Zombie;

	randomChump("Zombie_2");

	return (0);
}
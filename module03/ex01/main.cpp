#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap player2("Player 2");
	ScavTrap player1("Player 1");
	ScavTrap copyPlayer(player1);
	player2 = player1;
	player1.guardGate();
	player1.attack("Player 2");
	player1.setEnergyPoints(5);
	player1.attack("Player 2");
	player1.setAttackDamage(21);
	for (int i = 0; i < 3; i++)
		player1.attack("Player 2");
	for (int i = 0; i < 2; i++)
		player1.attack("Player 2");
	player1.setEnergyPoints(3);
	player1.takeDamage(101);
	player1.attack("Player 2");
	player1.beRepaired(5);
	player1.beRepaired(5);
	player1.takeDamage(3);
	return (0);
}
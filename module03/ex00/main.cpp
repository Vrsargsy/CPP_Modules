#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap test_default;
	ClapTrap player2("Player 1");
	ClapTrap player1("Player 2");
	ClapTrap test_copy(player2);
	test_default = test_copy;
	player1.setEnergyPoints(5);
	player1.attack("Player 1");
	player1.setAttackDamage(2);
	for (int i = 0; i < 3; i++)
		player1.attack("Player 1");
	for (int i = 0; i < 2; i++)
		player1.attack("Player 1");
	player1.setEnergyPoints(3);
	player1.takeDamage(11);
	player1.attack("Player 1");
	player1.beRepaired(5);
	player1.beRepaired(5);
	player1.setEnergyPoints(0);
	player1.beRepaired(1);
	player1.takeDamage(3);

	return (0);
}
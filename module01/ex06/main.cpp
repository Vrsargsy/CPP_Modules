#include "Harl.hpp"

int main(int ac, char **av)
{
	Harl harl;
	std::string lvls[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int i = 0;
	if (ac > 1) {
		for(;i < 4 && lvls[i].compare(av[1]); i++) {}

		for(;i < 4; i++)
		{
			harl.complain(lvls[i]);
			std::cout << std::endl;
		}
	}
	else
		std::cout << "Error: Argument count must be 2" << std::endl;
	return 1;
}
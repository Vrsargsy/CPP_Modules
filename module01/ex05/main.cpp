#include "Harl.hpp"

int main(void)
{
	Harl harl;
	std::string cmd;
	
	while (1)
	{
		getline(std::cin,cmd);
		if (std::cin.eof())
		{
			std::cout << "Error: Bad input" << std::endl;
			return 0;
		}
		if (cmd == "CLOSE")
			return 0;
		harl.complain(cmd);
	}
	return 1;
}
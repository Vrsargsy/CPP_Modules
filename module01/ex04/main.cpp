#include "Sed.hpp"

int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cerr << "Error: Bad input" << std::endl;
		return (1);
	}
	std::string filename = av[1]; 
	std::string str_to_find = av[2];
	std::string str_to_replace = av[3];
	Sed sed(filename);
	sed.sedReplace(str_to_find, str_to_replace);
 	return (0);
}
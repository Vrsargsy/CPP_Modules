#include <iostream>

int main(int ac, char **av)
{
    if (ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    else
    {
        for(int i = 1; av[i] ; i++)
            for(int j = 0, rows_len = std::strlen(av[i]); j < rows_len; j++)
                std::cout << (char)(std::toupper(av[i][j]));
    }
    std::cout << std::endl;
    return (1);
}
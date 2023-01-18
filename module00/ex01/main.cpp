#include "phonebook.hpp"

std::string show_prompt(int i)
{
    if (i == 0)
        return ("Firstname: ");
    if (i == 1)
        return ("Lastname: ");
    if (i == 2)
        return ("Nickname: ");
    if (i == 3)
        return ("Phone number: ");
    if (i == 4)
        return ("Darkest secret: ");
    return (0);
}

int  is_valid_input(std::string input, int id)
{
    if (input.length() == 0)
    {
        std::cout << "Field cant be empty" << std::endl;
        return (0);
    }
    else if (id == 0 || id == 1)
    {
        for (unsigned int i = 0; i < input.length(); i++)
        {
            if (!isalpha(input[i]) && input[i] != '-')
            {
                std::cout << "You can use only 'A-Z' 'a-z' '-' symbols" << std::endl;
                return (0);
            }
        }
    }
    else if (id == 2 || id == 4)
    {
        for (unsigned int i = 0; i < input.length(); i++)
        {
            if (!isalnum(input[i]) && input[i] != '-')
            {
                std::cout << "You can use only alphabet letters, numeric symbols and '-'" << std::endl;
                return (0);
            }
        }
    }
    else if (id == 3)
    {
        for (unsigned int i = 0; i < input.length(); i++)
        {
            if (input[i] == '+'&& i != 0)
            {
                std::cout << "You can use '+' symbol only at the beginning nickname" << std::endl;
                return (0);       
            }
            if (!isdigit(input[i]) && input[i] != '+')
            {
                std::cout << "You can use only numeric symbols or '+' sign" << std::endl;
                return (0);
            }
        }
    }
    return (1);
}

void fill_and_check_fields(std::string *fields)
{
    for (int i = 0; i < 5; i++)
    {
        while (true)
        {
            std::cout << show_prompt(i);
            std::getline(std::cin, fields[i]);
            if (std::cin.fail())
            {
                std::cout << "Error 2: Bad bad inputs" << std::endl;
                exit(1);
            }
            if (is_valid_input(fields[i], i))
                break ;
        }
    }
}

int main(void)
{
    Phonebook   phonebook;
    std::string fields[5];
    std::string cmd;
    int         id;

    while(true)
    {
        std::cout << "Type ADD to add contact" << std::endl;
        std::cout << "Type SEARCH to search contact" << std::endl;
        std::cout << "Type EXIT to exit" << std::endl;
        std::getline(std::cin, cmd);
        if (std::cin.eof())
        {
            std::cout << "Error 1: Bad input" << std::endl;
            return (1);
        }
        if (cmd == "ADD")
        {
            std::cout << "Enter new contact" << std::endl;
            fill_and_check_fields(fields);
            phonebook.fillContact(fields);
            std::cout << "Contact successfully added in phonebook" << std::endl;
        }
        if (cmd == "SEARCH")
        {
            phonebook.showPhoneBook();
            std::cout << "Search is working " << std::endl;
            while (phonebook.get_size())
            {
                std::cout << "Enter index of contact to look it" << std::endl;
                std::cin >> id;
                if (std::cin.eof())
                {
                    std::cout << "Error 3: Bad input" << std::endl;
                    return (0);
                }
                if (std::cin.fail() || id < 0 || id >= phonebook.get_size())
                {
                    std::cout << "There is no contact under this index" << std::endl;
                    std::cin.clear();
                    std::cin.ignore(256, '\n');
                    continue ;
                }
                
                phonebook.showContact(id);
                std::cin.ignore(256, '\n');
                break ;
            }
        }
        if (cmd == "EXIT")
            return (0);
    }
    return (1);
}
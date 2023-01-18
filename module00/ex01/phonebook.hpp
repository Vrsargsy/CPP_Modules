#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
#include <cctype>
#include "contact.hpp"

class Phonebook
{
private:
    Contact contact[8];
    int size;
    int id;
public:
/* Constructor */
    Phonebook();
/* Methods */
    void    fillContact(std::string fields[5]);
    void    showContact(int id);
    void    showPhoneBook();
    int     get_size();
/* Destructor */
    ~Phonebook();
};

#endif

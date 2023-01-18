#include "phonebook.hpp"

#define PINK "\33[1;35m"
#define RESTORE "\33[0;m"

static void showField(std::string field) {
    if (field.length() > 10)
        std::cout << field.substr(0,9);
    else
        std::cout << std::setw(10) << field;
}

/* Constructor initiallizing values of phonebook object */
Phonebook::Phonebook() {
    size = 0;
    id = 0;
}
/* Destructor */
Phonebook::~Phonebook(){}

void    Phonebook::showPhoneBook() {
    for(int i = 0; i < size; i++)
    {
        std::cout << i;
        showField(contact[i].getFirstname());
        showField(contact[i].getLastname());
        showField(contact[i].getNickname());
        showField(contact[i].getPhoneNumber());
        showField(contact[i].getSecret());
        std::cout << std::endl;
    }
}
void    Phonebook::fillContact(std::string fields[5]) {
    contact[id].setFirstname(fields[0]);
    contact[id].setLastname(fields[1]);
    contact[id].setNickname(fields[2]);
    contact[id].setPhoneNumber(fields[3]);
    contact[id].setSecret(fields[4]);
    id++;
    if (id > 7)
        id = 0;
    if (size < 8)
        size++;
}
void    Phonebook::showContact(int id) {
    std::cout << PINK <<  "[First name] ";
    std::cout << contact[id].getFirstname() << std::endl;
    std::cout << PINK <<  "[Last name] ";
    std::cout << contact[id].getLastname() << std::endl;
    std::cout << PINK << "[Nick name] ";
    std::cout << contact[id].getNickname() << std::endl;
    std::cout << PINK << "[Phone number] ";
    std::cout << contact[id].getPhoneNumber() << std::endl;
    std::cout << PINK << "[Darkest secret] ";
    std::cout << contact[id].getSecret() << std::endl;
    std::cout << RESTORE;
}
int     Phonebook::get_size()   {
    return size;
}
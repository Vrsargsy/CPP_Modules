#include "contact.hpp"

/* Constructor */

Contact::Contact(){}
Contact::~Contact(){}

/* Destructor */

/* Getters */

std::string Contact::getFirstname() {
    return firstname;
}
std::string Contact::getLastname() {
    return lastname;
}
std::string Contact::getNickname() {
    return nickname;
}
std::string Contact::getPhoneNumber() {
    return phone_number;
}
std::string Contact::getSecret() {
    return darkest_secret;
}

/* Setters */

void        Contact::setFirstname(std::string fname) {
    firstname = fname;
}
void        Contact::setLastname(std::string lname) {
    lastname = lname;
}
void        Contact::setPhoneNumber(std::string nb) {
    phone_number = nb;
}
void        Contact::setNickname(std::string nick) {
    nickname = nick;
}
void        Contact::setSecret(std::string secret) {
    darkest_secret = secret;
}
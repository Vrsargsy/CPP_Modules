#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>

class Contact
{
private:
	std::string darkest_secret;
	std::string phone_number;
    std::string firstname;
    std::string lastname;
    std::string nickname;
public:
/* Constructor */
     Contact();
/* Getters */
	std::string getPhoneNumber();
	std::string getFirstname();
	std::string getLastname();
	std::string getNickname();
	std::string getSecret();
/* Setters */
	void	setFirstname(std::string fname);
	void	setLastname(std::string lname);
	void	setPhoneNumber(std::string nb);
	void	setNickname(std::string nick);
	void	setSecret(std::string secret);
/* Methods */
	void	showContact();
/* Destructor */	
    ~Contact();
};
#endif
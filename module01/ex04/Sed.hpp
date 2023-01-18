#ifndef SED_HPP
# define SED_HPP

#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

class Sed {
public:
	Sed	(std::string &file_name);
	~Sed(void);
	void	sedReplace(std::string &s1, std::string &s2);
private:
	std::string infile;
	std::string outfile;

};

#endif
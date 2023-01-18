#include "Sed.hpp"

Sed::Sed(std::string &file_name) {
	this->infile = file_name;
	this->outfile = this->infile + ".replace";
}
Sed::~Sed(void) {}

void Sed::sedReplace(std::string &s1, std::string &s2) {
	std::string data;
	size_t		pos = 0;
	size_t		id = 0;

	std::ifstream fileStream(infile.c_str()); //
	if (fileStream.is_open())
	{
		if (std::getline(fileStream, data, '\0'))
		{
			std::ofstream outfileStream(outfile.c_str());
			pos = data.find(s1);
			while (pos != std::string::npos)
			{
				outfileStream << data.substr(id, pos - id);
				outfileStream << s2;
				id = pos + s1.length();
				pos = data.find(s1, pos + 1);
			}
			outfileStream << data.substr(id);
			outfileStream.close();
		}
		else
			std::cerr << "Error: File is empty" << std::endl;
		fileStream.close();
	}
	else
	{
		std::cerr << "Error: Can't open this file" << std::endl;
		exit(1);
	}
}
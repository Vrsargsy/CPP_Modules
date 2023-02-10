#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "./Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
	const std::string _name;
	bool _signed;
	const int req_grade;
	const int exec_grade;

public:
	Form();
	~Form();
	Form(std::string name,int grade);
	void beSigned(Bureaucrat &bur);
	const std::string getName()const;
	 int getGrade()const;
	 bool ifSigned()const;
	 int get_req();
	 class GradeTooHighException : public std::exception
	{
		const char	*what() const throw();	
	};
	class GradeTooLowException : public std::exception
	{
		const char	*what() const throw();	
	};
};

	
std::ostream &operator<<(std::ostream &dst,const Form &src);


#endif
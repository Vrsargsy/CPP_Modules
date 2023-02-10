#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name)
{
	this->grade = grade;
	std:: cout << name << " custom cunstructor called " << std::endl;
}

Bureaucrat::Bureaucrat(): name("Bureacrat")
{
	
	this->grade = 0;
	std:: cout << name << " default construtor called" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << name << " destructor called " << std::endl;
}

const char	*Bureaucrat::GradeTooHighException::what() const throw() 
{ 
	return "too High"; 

}
const char	*Bureaucrat::GradeTooLowException::what() const throw() 
{
	 return "too Low"; 
}


int Bureaucrat::getGrade()const
{
	return(this->grade);
}

std::string Bureaucrat::getName()const
{
	return(this->name);
}

void Bureaucrat::increment( void )
{
	if(grade == 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->grade--;
}
void Bureaucrat::decrement( void )
{
	if(grade >= 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->grade++;
}

std::ostream&	operator << (std::ostream &dst,const Bureaucrat& src)
{
	dst << src.getName() << " GRADE " << src.getGrade();
	return dst;
}
void Bureaucrat::signForm(Form &form)
{
		if(form.ifSigned())
			std::cout << name << " sign the form" << std::endl;
		else
			std::cout << name << " could not sign the form" << std::endl;
}
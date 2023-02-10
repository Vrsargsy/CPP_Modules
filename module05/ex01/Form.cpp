#include "Form.hpp"

const std::string Form::getName()const
{
	return _name;
}

 int Form::getGrade()const
{
	return exec_grade;
}

std::ostream&	operator << (std::ostream &dst,const Form& src)
{
	dst << src.getName() << " GRADE " << src.getGrade();
	return dst;
}

Form::Form() :_name("default_Form"),req_grade(70),exec_grade(90)
{
	_signed = false;
	std::cout << _name << " default custrutor called" << std::endl;
}

Form::Form(std::string name,int grade):_name(name),req_grade(70),exec_grade(grade)
{
	std::cout << _name << " custom cunstructor called " << std::endl;
}

Form::~Form()
{
	std::cout << _name << " destructor called" << std::endl;
}

void Form::beSigned(Bureaucrat &bur)
{
	int i = bur.getGrade();
	if(i < 1)
		throw Form::GradeTooHighException();
	if(i > 150)
		throw Form::GradeTooLowException();
	if(i <  req_grade)
		_signed = true;
	else
		_signed = false;
	bur.signForm(*this);
}

const char	*Form::GradeTooHighException::what() const throw() 
{ 
	return "form : HIGHHHHHHHHHHH"; 

}
const char	*Form::GradeTooLowException::what() const throw() 
{
	 return "form : LOWWWWWW"; 
}

bool Form::ifSigned()const
{
	return _signed;
}

 int Form::get_req()
{
	return req_grade;
}
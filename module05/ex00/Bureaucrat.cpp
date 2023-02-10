#include "Bureaucrat.hpp"

/* This function help me to econome time for print message. */

inline static void msg(std::string msg) {
	std::cout << msg << std::endl;
}

/* Constructors */

Bureaucrat::Bureaucrat(void) {
	msg("Bureaucrat default constructor called !");
}
Bureaucrat::Bureaucrat(const Bureaucrat &obj) : _name(obj._name), _grade(obj._grade) {
	msg("Bureaucrat copy constructor called !");
}
Bureaucrat::Bureaucrat(const std::string &name, unsigned short grade) : _name(name), _grade(grade) {
	if (grade < 1)
		throw Bureaucrat::GradeToHighException();
	if (grade > 150)
		throw Bureaucrat::GradeToLowException();	
}

/* Desturctor */

Bureaucrat::~Bureaucrat(void) {
	msg("Bureaucrat destructor called!");
}

/* Methods */

const	std::string &Bureaucrat::getName(void) const {
	return this->_name;
}
const	unsigned short &Bureaucrat::getGrade(void) const {
	return this->_grade;
}

void	Bureaucrat::incrementGrade() {
	if (_grade - 1 < 1)
		throw Bureaucrat::GradeToHighException();
	_grade--;
}
void	Bureaucrat::decrementGrade() {
	if (_grade + 1 > 150)
		throw Bureaucrat::GradeToLowException();
	_grade++;
}

/* Overloads */

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &obj) {
	msg("Bureaucrat copy assignment operator called!"); // _name is const, we can't change it !, operator copies just _grade field
	if (this != &obj)
	{
		this->_grade = obj.getGrade();
		return (*this);
	}
	return (*this);
}
std::ostream &operator<<(Bureaucrat &src, std::ostream &dst) {
	dst << "," << src.getName() << " grade " << src.getGrade();
	return dst;	
}	
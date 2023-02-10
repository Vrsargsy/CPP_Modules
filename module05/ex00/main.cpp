#include "Bureaucrat.hpp"

int main(void)
{
	Bureaucrat *exo = new Bureaucrat("Exish", 51);
	Bureaucrat *grno = new Bureaucrat("Garnik", 150);
	Bureaucrat *chujoyPoxmel = new Bureaucrat(*grno);

	grno->decrementGrade();
	exo->incrementGrade();

	std::cout << chujoyPoxmel << " " <<chujoyPoxmel->getGrade() <<" " + chujoyPoxmel->getName() << std::endl;
	std::cout << exo << " " << exo->getGrade() <<" " + exo->getName() << std::endl;
	std::cout << grno << " "<< grno->getGrade() <<" " + grno->getName() << std::endl;
	
	delete grno;
	delete exo;
	delete chujoyPoxmel;
	return (0);
}
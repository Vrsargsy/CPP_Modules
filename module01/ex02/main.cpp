#include <iostream>

int main(void)
{
	std::string brain = "HI THIS IS BRAIN";
	std::string *ptr_brain = &brain;
	std::string &ref_brain = brain;

	std::cout <<"Memory of brain " << &brain << std::endl;
	std::cout <<"Memory of ptr_brain " << ptr_brain << std::endl;
	std::cout <<"Memory of ref_brain " << &ref_brain << std::endl << std::endl;
	
	std::cout <<"Value  of brain " << brain << std::endl;
	std::cout <<"Value  of ptr_brain " << *ptr_brain << std::endl;
	std::cout <<"Value  of ref_brain " << ref_brain << std::endl;

	return (1);
 
}

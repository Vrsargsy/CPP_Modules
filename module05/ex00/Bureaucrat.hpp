#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat {
	private:
		const std::string 	_name;
		unsigned short	_grade;

	public:
		Bureaucrat(void);
		Bureaucrat(std::string const &name, unsigned short grade);
		Bureaucrat(const Bureaucrat &obj);
		Bureaucrat &operator=(const Bureaucrat &obj);
		~Bureaucrat(void);


		const std::string 	 &getName() const;
		const unsigned short &getGrade() const;
		void	incrementGrade();
		void	decrementGrade();
		
		/*	Exceptions	*/
		class GradeToLowException : public std::exception {
			public:
				virtual const char *what() const throw() {
					return "Too low grade.";
				}
		};

		class GradeToHighException : public std::exception {
			public:	
				virtual const char *what() const throw() {
					return "Too High grade.";
				}
		};
		/*~~~~~~~~~~~~~~~~~~*/
};

std::ostream &operator<<(Bureaucrat &src, std::ostream &dst);
#endif
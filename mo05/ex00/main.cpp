#include "Bureaucrat.hpp"


int main( void )
{
    try {
        Bureaucrat bureaucrat("saad", 1);
		bureaucrat.increment();
        std::cout << bureaucrat << std::endl;
    } catch (Bureaucrat::GradeTooHighException &e) {
        std::cout << e.what() << std::endl;
    }
	try {
        Bureaucrat bureaucrat("adam", 149);
		bureaucrat.decrement();
        std::cout << bureaucrat << std::endl;
    } catch (Bureaucrat::GradeTooLowException &e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}
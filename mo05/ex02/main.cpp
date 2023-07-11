#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main( void )
{

    try {
        Bureaucrat bureaucrat("hamid", 2);
        ShrubberyCreationForm form1("S");
        RobotomyRequestForm form2("R");
        PresidentialPardonForm form3("P");
        std::cout << "\n( Shrubbery )" << std::endl;
        bureaucrat.signForm(form1);
        bureaucrat.executeForm(form1);
        std::cout << "\n( Robotomy ) " << std::endl;
        bureaucrat.signForm(form2);
        bureaucrat.executeForm(form2);
        std::cout << "\n ( President ) " << std::endl;
        bureaucrat.signForm(form3);
        bureaucrat.executeForm(form3);
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}
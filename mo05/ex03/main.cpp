#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main( void )
{


    Intern someRandomIntern;
    AForm* rrf;
    rrf = someRandomIntern.makeForm("robotomy request", "Bender");
    delete(rrf);
    Intern someRandomIntern1;
    AForm* rrf1;
    rrf1 = someRandomIntern1.makeForm("jajja", "saaad");
    delete(rrf1);
    return 0;
}

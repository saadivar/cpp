#include <iostream>

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
class AForm;
class Intern
{
    public:
        Intern();
        Intern(const Intern& i);
        Intern& operator=(const Intern& i);
        ~Intern();
        AForm *createrob(std::string target);
        AForm *createshu(std::string target);
        AForm *createpre(std::string target);

        AForm *makeForm(std::string f_name,std::string target);

};
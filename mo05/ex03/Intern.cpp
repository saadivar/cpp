#include "Intern.hpp"

Intern::Intern(){}
Intern::Intern(const Intern& i){
    *this  = i;
}
Intern& Intern::operator=(const Intern& i){
    (void)i;
    return *this;
}
Intern::~Intern(){}

AForm *Intern::makeForm(std::string f_name,std::string target)
{
    std::string forms[3];
    forms[0] = "Presidential Pardon";
    forms[1] = "robotomy request";
    forms[2] = "Shrubbery Creation";

    AForm* ptr[3];
    ptr[0] = new PresidentialPardonForm(target);
    ptr[1] = new RobotomyRequestForm(target);
    ptr[2] = new ShrubberyCreationForm(target);
    

    for(int i = 0;i < 3; i++)
    {
        if(forms[i] == f_name)
        {
            std::cout << "Intern creates " << forms[i] <<std::endl;
            return ptr[i];
        }
    }
    std::cout << "this " << f_name <<" form does not exist"<<std::endl;
    return NULL;
}
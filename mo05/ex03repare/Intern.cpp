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

AForm *Intern::createrob(std::string target)
{
    return ( new RobotomyRequestForm(target));
}
AForm *Intern::createshu(std::string target)
{
    return ( new ShrubberyCreationForm(target));
}
AForm *Intern::createpre(std::string target)
{
    return ( new PresidentialPardonForm(target));
}

AForm *Intern::makeForm(std::string f_name,std::string target)
{
    std::string forms[3];
    forms[0] = "Presidential Pardon";
    forms[1] = "robotomy request";
    forms[2] = "Shrubbery Creation";

    AForm *(Intern::*ptrfunc[3])(std::string);
    
    ptrfunc[0] = &Intern::createpre;
    ptrfunc[1] = &Intern::createrob;
    ptrfunc[2] = &Intern::createshu;

    for(int i = 0;i < 3; i++)
    {
        if(forms[i] == f_name)
        {
            std::cout << "Intern creates " << forms[i] <<std::endl;
            return ((this->*ptrfunc[i])(target));
        }
    }
    std::cout << "this " << f_name <<" form does not exist"<<std::endl;
    return NULL;
}
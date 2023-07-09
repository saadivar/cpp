#include "RobotomyRequestForm.hpp"



RobotomyRequestForm::RobotomyRequestForm() : AForm("saad"  , 72 , 45)
{
    
}

RobotomyRequestForm::RobotomyRequestForm(std::string tar) :AForm("saad"  , 72 , 45) ,target(tar)
{    
}


RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& bu) : AForm(bu) , target(bu.target){
    
}
RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& bu)
{
    AForm::operator=(bu);
    this->target = bu.target;
    return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    if (this->getsign())
    {
        if(executor.getGrade() > this->get_exgrade())
                throw AForm::GradeTooLowException();
        std::cout <<" noises " <<this->target << " has been robotomized successfully 50%/ of the time " <<std::endl;
    }
    else
            throw AForm::notsigned();
}

RobotomyRequestForm::~RobotomyRequestForm()
{

}   
    #include "PresidentialPardonForm.hpp"



    PresidentialPardonForm::PresidentialPardonForm() : AForm("saad"  , 25 , 5)
    {
        
    }

    PresidentialPardonForm::PresidentialPardonForm(std::string tar) :AForm("saad"  , 25 , 5) ,target(tar)
    {    
    }


    PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& bu) : AForm(bu) , target(bu.target){
        
    }
    PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& bu)
    {
        AForm::operator=(bu);
        this->target = bu.target;
        return *this;
    }

    void PresidentialPardonForm::execute(Bureaucrat const & executor) const
    {
        if (this->getsign())
        {
            if(executor.getGrade() > this->get_exgrade())
                throw AForm::GradeTooLowException();
            std::cout << this->target << " has been pardoned by Zaphod Beeblebrox " <<std::endl;
        }
        else
            throw AForm::notsigned();
    }

    PresidentialPardonForm::~PresidentialPardonForm()
    {

    }
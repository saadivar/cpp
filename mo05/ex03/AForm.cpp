#include "AForm.hpp"


AForm::AForm() : name("saad") ,  re_grade_si(1) , re_grade_ex(1)
{
    sign = false;
}

AForm::AForm(std::string name, int regrade,int exgrade) :name(name) ,  re_grade_si(regrade) , re_grade_ex(exgrade)
{
    sign = false;
    if(re_grade_si < 1)
        throw AForm::GradeTooHighException();
    else if(re_grade_si > 150)
        throw AForm::GradeTooLowException();
    if(re_grade_ex < 1)
        throw AForm::GradeTooHighException();
    else if(re_grade_ex > 150)
        throw AForm::GradeTooLowException();
}


AForm::AForm(const AForm& bu) : name(bu.getname()),re_grade_si(bu.get_signgrade()) , re_grade_ex(bu.get_exgrade()){
    sign = bu.getsign();
}
AForm& AForm::operator=(const AForm& bu)
{
    this->sign = bu.getsign();
    return *this;
}
AForm::~AForm()
{

}
std::string AForm::getname()const
{
    return this->name;
}

bool  AForm::getsign()const
{
    return this->sign;
}
int AForm::get_signgrade()const
{
    return this->re_grade_si;
}
int AForm::get_exgrade()const
{
    return this->re_grade_ex;
}

void AForm::beSigned(const Bureaucrat &bu)
{
    if(bu.getGrade() > this->get_signgrade())
        throw AForm::GradeTooLowException();
    this->sign = true;
}
const char* AForm::GradeTooHighException::what()const throw()
{
    return  "grade too high";
}
const char* AForm::GradeTooLowException::what() const throw()
{
    return  "grade too low";
}
const char* AForm::notsigned::what()const throw()
{
    return  "form not signed";
}

std::ostream& operator<<(std::ostream &out ,const AForm& right)
{
    out << "name : " << right.getname()<<std::endl;
    out << "is_signed : " << right.getsign()<<std::endl;
    out << "grade required to sign it : " << right.get_signgrade()<<std::endl;
    out << "grade required to execute it : " << right.get_exgrade();
    return out;
}
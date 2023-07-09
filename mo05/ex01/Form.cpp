#include "Form.hpp"


Form::Form() : name("saad") ,  re_grade_si(1) , re_grade_ex(1)
{
    
}

Form::Form(std::string name, int regrade,int exgrade) :name(name) ,  re_grade_si(regrade) , re_grade_ex(exgrade)
{
    if(re_grade_si < 1)
        throw Form::GradeTooHighException();
    else if(re_grade_si > 150)
        throw Form::GradeTooLowException();
    if(re_grade_ex < 1)
        throw Form::GradeTooHighException();
    else if(re_grade_ex > 150)
        throw Form::GradeTooLowException();
}


Form::Form(const Form& bu) : name(bu.getname()),re_grade_si(bu.get_signgrade()) , re_grade_ex(bu.get_exgrade()){
    
}
Form& Form::operator=(const Form& bu)
{
    this->sign = bu.getsign();
    return *this;
}
Form::~Form()
{

}
std::string Form::getname()const
{
    return this->name;
}

bool  Form::getsign()const
{
    return this->sign;
}
int Form::get_signgrade()const
{
    return this->re_grade_si;
}
int Form::get_exgrade()const
{
    return this->re_grade_ex;
}

void Form::beSigned(const Bureaucrat &bu)
{
    if(bu.getGrade() < this->get_signgrade())
        throw Form::GradeTooLowException();
    this->sign = true;
}
const char* Form::GradeTooHighException::what()const throw()
{
    return  "grade too high";
}
const char* Form::GradeTooLowException::what() const throw()
{
    return  "grade too low";
}

std::ostream& operator<<(std::ostream &out ,const Form& right)
{
    out << "name : " << right.getname()<<std::endl;
    out << "is_signed : " << right.getsign()<<std::endl;
    out << "grade required to sign it : " << right.get_signgrade()<<std::endl;
    out << "grade required to execute it : " << right.get_exgrade();
    return out;
}
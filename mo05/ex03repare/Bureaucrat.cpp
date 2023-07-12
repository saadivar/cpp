#include "Bureaucrat.hpp"


Bureaucrat::Bureaucrat()
{

}
Bureaucrat::Bureaucrat(std::string name,int gr) : _name(name)
{
    if(gr < 1)
        throw Bureaucrat::GradeTooHighException();
    else if(gr > 150)
        throw Bureaucrat::GradeTooLowException();
    this->_grade = gr;
}
Bureaucrat::Bureaucrat(const Bureaucrat& bu) :_name(bu._name)
{
    *this = bu;
}
Bureaucrat& Bureaucrat::operator=(const Bureaucrat& bu)
{
    this->_grade = bu._grade;
    return *this;
}
std::string Bureaucrat::getName()const
{
    return _name;
}
int Bureaucrat::getGrade()const
{
    return _grade;
}
const char* Bureaucrat::GradeTooHighException::what()const throw()
{
    return  "grade too high";
}
const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return  "grade too low";
}
void  Bureaucrat::increment()
{
    if(this->_grade-1 < 1)
        throw Bureaucrat::GradeTooHighException();
    else
        this->_grade--;
}
void Bureaucrat::decrement()
{
    if(this->_grade + 1  > 150)
        throw Bureaucrat::GradeTooLowException();
    else
        this->_grade++;
}
void Bureaucrat::signForm(AForm &form)
{
    try
    {
        form.beSigned(*this);
        std::cout << this->getName()  <<" signed " << form.getname()<<std::endl;
    }
    catch(AForm::GradeTooLowException &e)
    {
        std::cout << this->getName()  <<" couldn’t sign " << form.getname()<<" because " << e.what() <<std::endl;
    }
}
void Bureaucrat::executeForm(AForm const & form)
{
    try
    {
        form.execute(*this);
        std::cout << this->getName() << " executed " << form.getname() << std::endl;
    }
    catch(std::exception &e)
    {
        std::cout << this->getName() << " couldn’t sign " << form.getname() << " because " << e.what()<<std::endl;
    }
}
Bureaucrat::~Bureaucrat()
{

}

std::ostream& operator<<( std::ostream& out, const Bureaucrat& right ) {
    out << right.getName() << ", bureaucrat grade " << right.getGrade();
    return out;
}
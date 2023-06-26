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
    return  "too high";
}
const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return  "too low";
}
void  Bureaucrat::increment()
{
    try{
        if(this->_grade-1 < 1)
            throw Bureaucrat::GradeTooHighException();
        
    }
    catch (const Bureaucrat::GradeTooHighException & ex)
	{
		std::cout << ex.what() << std::endl;
	}
    this->_grade--;
}
void Bureaucrat::decrement()
{
    try{
        if(this->_grade+1 > 150)
            throw Bureaucrat::GradeTooLowException();
    }
    catch (const Bureaucrat::GradeTooLowException & ex)
	{
		std::cout << ex.what() << std::endl;
	}
    this->_grade++;
}
Bureaucrat::~Bureaucrat()
{

}

std::ostream& operator<<( std::ostream& out, const Bureaucrat& right ) {
    out << right.getName() << ", bureaucrat grade " << right.getGrade();
    return out;
}
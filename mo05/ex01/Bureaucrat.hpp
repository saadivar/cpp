#pragma once 

#include <iostream>
#include "Form.hpp"

class Form;
class  Bureaucrat 
{
    private:
        const std::string _name;
        int _grade;
    public:
        Bureaucrat();
        Bureaucrat(std::string name,int gr);
        Bureaucrat(const Bureaucrat& bu);
        Bureaucrat& operator=(const Bureaucrat& bu);
        std::string getName()const;
        int getGrade()const;
        void  increment();
        void decrement();
        void signForm(Form &form);
        ~Bureaucrat();
        class GradeTooHighException : public std::exception
        {
            public:
            const char* what()const throw();
        };
        class GradeTooLowException : public std::exception
        {
            public:
            const char* what()const throw();
        };


};

std::ostream&   operator<<( std::ostream& out, const Bureaucrat& right );
    


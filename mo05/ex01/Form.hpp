#pragma once
#include <iostream>
#include "Bureaucrat.hpp"


class Bureaucrat;
class Form
{
    private:
        const std::string name;
        bool    sign;
        const int     re_grade_si;
        const int     re_grade_ex;
    public:
    Form();
        Form(std::string name, int regrade,int exgrade);
        Form(const Form& bu);
        Form& operator=(const Form& bu);
        ~Form();
        std::string getname()const;
        bool  getsign()const;
        int get_signgrade()const;
        int get_exgrade()const;
        void beSigned(const Bureaucrat &bu);
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

std::ostream&   operator<<( std::ostream& out, const Form& right );
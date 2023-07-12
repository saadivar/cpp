#pragma once
#include <iostream>
#include "Bureaucrat.hpp"


class Bureaucrat;
class AForm
{
    private:
        const std::string name;
        bool    sign;
        const int     re_grade_si;
        const int     re_grade_ex;
    public:
        AForm();
        AForm(std::string name, int regrade,int exgrade);
        AForm(const AForm& bu);
        AForm& operator=(const AForm& bu);
        virtual ~AForm();
        std::string getname()const;
        bool  getsign()const;
        int get_signgrade()const;
        int get_exgrade()const;
        virtual void execute(Bureaucrat const & executor) const = 0;
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
        class notsigned : public std::exception
        {
            public:
            const char* what()const throw();
        };
};

std::ostream&   operator<<( std::ostream& out, const AForm& right );
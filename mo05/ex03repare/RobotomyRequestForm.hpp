#pragma once



#include "AForm.hpp"
#include <cmath>

class RobotomyRequestForm    : public AForm
{
    private:
        std::string target;
    public:
        RobotomyRequestForm ();
        RobotomyRequestForm (std::string tar);
        RobotomyRequestForm (const RobotomyRequestForm   & bu);
        RobotomyRequestForm & operator=(const RobotomyRequestForm    & bu);
        void execute(Bureaucrat const & executor) const;
        virtual ~RobotomyRequestForm    ();



};
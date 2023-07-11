#pragma once



#include "AForm.hpp"
#include <fstream>

class ShrubberyCreationForm    : public AForm
{
    private:
        std::string target;
    public:
        ShrubberyCreationForm ();
        ShrubberyCreationForm (std::string tar);
        ShrubberyCreationForm (const ShrubberyCreationForm   & bu);
        ShrubberyCreationForm & operator=(const ShrubberyCreationForm    & bu);
        void execute(Bureaucrat const & executor) const;
        virtual ~ShrubberyCreationForm    ();



};
    #pragma once



    #include "AForm.hpp"

    class PresidentialPardonForm : public AForm
    {
        private:
            std::string target;
        public:
            PresidentialPardonForm();
            PresidentialPardonForm(std::string tar);
            PresidentialPardonForm(const PresidentialPardonForm& bu);
            PresidentialPardonForm& operator=(const PresidentialPardonForm& bu);
            void execute(Bureaucrat const & executor) const;
            virtual ~PresidentialPardonForm();



    };
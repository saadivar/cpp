#include "ShrubberyCreationForm.hpp"



ShrubberyCreationForm::ShrubberyCreationForm() : AForm("saad"  , 145 , 137)
{
    
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string tar) :AForm("saad" , 145 , 137) ,target(tar)
{    
}


ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& bu) : AForm(bu) ,target(bu.target){
    
}
ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& bu)
{
    AForm::operator=(bu);
    this->target = bu.target;
    return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    if (this->getsign())
    {
        if(executor.getGrade() > this->get_exgrade())
                throw AForm::GradeTooLowException();
    std::string str = std::string(this->target) + "._shrubbery";
    std::ofstream outputFile(str);
    if(outputFile.is_open())
    {
    
        outputFile << "            /\\          " << std::endl;
        outputFile << "           /\\*\\          " << std::endl;
        outputFile << "          /\\O\\*\\          " << std::endl;
        outputFile << "         /*/\\/\\/\\       " << std::endl;
        outputFile << "        /\\O\\/\\*\\/\\           " << std::endl;
        outputFile << "       /\\*\\/\\*\\/\\/\\        " << std::endl;
        outputFile << "      /\\O\\/\\/*/\\/O/\\        " << std::endl;
        outputFile << "            ||        " << std::endl;
        outputFile << "            ||        " << std::endl;
        outputFile << "            ||        " << std::endl;
        outputFile.close();
    }
    }
    else
            throw AForm::notsigned();
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{

}   
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
    
        outputFile << "                      ___" << std::endl;
        outputFile << "                _,-'\"\"   \"\"\"\"`--." << std::endl;
        outputFile << "             ,-'          __,,-- \\" << std::endl;
        outputFile << "           ,\'    __,--\"\"\"\"dF      )" << std::endl;
        outputFile << "          /   .-\"Hb_,--\"\"dF      /" << std::endl;
        outputFile << "        ,\'       _Hb ___dF\"-._,-'" << std::endl;
        outputFile << "      ,'      _,-\"\"\"\"   \"\"--..__" << std::endl;
        outputFile << "     (     ,-'                  `." << std::endl;
        outputFile << "      `._,'     _   _             ;" << std::endl;
        outputFile << "       ,'     ,' `-'Hb-.___..._,-'" << std::endl;
        outputFile << "       \\    ,'\"Hb.-\'HH`-.dHF\"" << std::endl;
        outputFile << "        `--\'   \"Hb  HH  dF\"" << std::endl;
        outputFile << "                \"Hb HH dF" << std::endl;
        outputFile << "                 \"HbHHdF" << std::endl;
        outputFile << "                  |HHHF" << std::endl;
        outputFile << "                  |HHH|" << std::endl;
        outputFile << "                  |HHH|" << std::endl;
        outputFile << "                  |HHH|" << std::endl;
        outputFile << "                  |HHH|" << std::endl;
        outputFile << "                  dHHHb" << std::endl;
        outputFile << "                .dFd|bHb.               o" << std::endl;
        outputFile << "      o       .dHFdH|HbTHb.          o /" << std::endl;
        outputFile << "\\  Y  |  \\__,dHHFdHH|HHhoHHb.__Krogg  Y" << std::endl;
        outputFile << "##########################################" << std::endl;
        outputFile.close();
    }
    }
    else
            throw AForm::notsigned();
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{

}   
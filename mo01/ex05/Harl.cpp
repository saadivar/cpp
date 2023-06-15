#include "Harl.hpp"

void Harl::debug(void)
{
    std::cout <<  "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" <<std::endl;
}
void Harl::info(void)
{
    std::cout <<  "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" <<std::endl;
}
void Harl::warning(void)
{
    std::cout <<  "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." <<std::endl;
}
void Harl::error(void)
{
    std::cout <<  "This is unacceptable! I want to speak to the manager now." <<std::endl;
}

void Harl::complain(std::string level)
{
    std::string strings[4];
    void (Harl::*ptr_fun[4])();

    ptr_fun[0] =&Harl::debug;
    ptr_fun[1] = &Harl::info;
    ptr_fun[2] = &Harl::warning;
    ptr_fun[3] = &Harl::error;
    strings[0] ="debug";
    strings[1] = "info";
    strings[2] = "warning";
    strings[3] = "error";
    for(int i = 0;i < 4;i++)
    {
        if(strings[i] == level)
            (this->*ptr_fun[i])();
    }
}
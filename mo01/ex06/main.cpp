#include "Harl.hpp"

int main(int ac,char **av)
{

    if(ac != 2)
    {
        std::cout <<"bad args"<<std::endl;
        return 1;
    }

    std::string str = av[1];
    Harl h;
    h.complain(str);
    return 0;
    
    
}

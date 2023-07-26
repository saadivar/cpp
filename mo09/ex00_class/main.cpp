#include "BitcoinExchange.hpp"


int main(int ac,char **av)
{
    std::map<std::string , float>data ;

    if(ac == 2)
    {
        Btc s;
        s.converting(av[1]);
    }
    else
        std::cout <<"args" <<std::endl;

}
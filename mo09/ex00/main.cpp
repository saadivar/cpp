#include "BitcoinExchange.hpp"


int main(int ac,char **av)
{
    std::map<std::string , float>data ;

    if(ac == 2)
    {
        data = reading("data.csv");
        converting(av[1],data);
    }
    else
        std::cout <<"args" <<std::endl;

}
#include "BitcoinExchange.hpp"


int main(int ac,char **av)
{
    std::map<std::string , float>data ;

    if(ac == 2)
    {
        try{
            data = reading("data.csv");
            converting(av[1],data);
        }
        catch(::invalid_csv &e)
        {
            std::cout << e.what() <<std::endl;
        }
        
    }
    else
        std::cout <<"input file needed" <<std::endl;

}
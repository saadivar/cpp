#include "BitcoinExchange.hpp"


int main(int ac,char **av)
{
    std::map<std::string , float>data ;

    if(ac == 2)
    {
        try{
            std::string csv;
            std::cout << "enter the csv file please : " <<std::endl;
            std::getline(std::cin , csv);
            data = reading(csv);
            std::cout << "** converting **" <<std::endl;
            converting(av[1],data);
        }
        catch(::invalid_csv &e)
        {
            std::cout << e.what() <<std::endl;
        }
        
    }
    else
        std::cout <<"args" <<std::endl;

}
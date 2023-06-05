
#include <iostream>
#include "contact.hpp"
#include "phbook.hpp"

int main()
{
    int i = 0;
    int index ;
    std::string index_hold ;
    PhoneBook book;
    std::string input;
    std ::cout << "*   welcome to phonebook   *" << std::endl;

    while(input != "EXIT")
    {
        std::cout << "chose ur operation : " << std::endl;
        std::cout <<"**   ADD   SEARCH    EXIT  ***" << std::endl;
        std::getline(std::cin,input);
        if((std::cin.eof()))
            break;
        if(input == "ADD")
        {
            book.add_contact_tophone(&i);
        }
        else if ( input == "SEARCH")
        {
            book.printall();
            std::cout << "pelase chose an index in range [1 , 8] :" << std::endl;
            std::getline(std::cin,index_hold);
            if((std::cin.eof()))
                exit(1) ;
            while(str_digit(index_hold) != 0)
            {
                std::cout << "Invalid input. Please enter a valid integer!!!" << std::endl;
                std::getline(std::cin,index_hold);
                if((std::cin.eof()))
                    exit(1) ;
            }
            index = std::stoi(index_hold);
            while(  index > 8 || index < 1)
            {
                std::cout << "out of range !!! pelase chose an index in range [1 , 8] :" << std::endl;
                std::getline(std::cin,index_hold);
                if((std::cin.eof()))
                    exit(1) ;
                while(str_digit(index_hold) != 0)
                {
                    std::cout << "Invalid input. Please enter a valid integer!!!" << std::endl;
                    std::getline(std::cin,index_hold);
                    if((std::cin.eof()))
                        exit(1) ;
                }
                index = std::stoi(index_hold);
            }
            book.printone(index - 1);
        }
    }
    
}
#pragma once 

#include <iostream>

class WrongAnimal
{
    protected :
        std::string type;
    public :
        WrongAnimal();
        WrongAnimal(const WrongAnimal& an);
        WrongAnimal& operator=(const WrongAnimal& an);
        virtual ~WrongAnimal();
        void makeSound()const;
        std::string getType()const ;

};
#pragma once 

#include <iostream>

class Animal
{
    protected :
        std::string type;
    public :
        Animal();
        Animal(const Animal& animal);
        Animal& operator=(const Animal& animal);
        virtual ~Animal();
        virtual void makeSound()const = 0;
        std::string getType()const ;

};
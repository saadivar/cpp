#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    private:
        Brain *br;
    public:
        
        Dog();
        Dog(const Dog& dg);
        Dog& operator=(const Dog& dg);
        ~Dog();
        void makeSound()const;
};
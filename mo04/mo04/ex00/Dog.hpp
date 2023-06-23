#pragma once

#include "Animal.hpp"

class Dog : public Animal
{
    public:
        Dog();
        Dog(const Dog& dg);
        Dog& operator=(const Dog& dg);
        ~Dog();
        void makeSound()const;
};
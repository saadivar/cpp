#pragma once

#include "Animal.hpp"


class Cat : public Animal
{
    public:
        Cat();
        Cat(const Cat& meow);
        Cat& operator=(const Cat& meow);
        ~Cat();
        void makeSound()const;
};
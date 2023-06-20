#pragma once

#include "Animal.hpp"
#include "Brain.hpp"


class Cat : public Animal
{
    private:
        Brain *br;
    public:
        Cat();
        Cat(const Cat& meow);
        Cat& operator=(const Cat& meow);
        ~Cat();
        void makeSound()const;
};
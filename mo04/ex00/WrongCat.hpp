#pragma once

#include "WrongAnimal.hpp"


class WrongCat : public WrongAnimal
{
    public:
        WrongCat();
        WrongCat(const WrongCat& meow);
        WrongCat& operator=(const WrongCat& meow);
        ~WrongCat();
        void makeSound()const;
};
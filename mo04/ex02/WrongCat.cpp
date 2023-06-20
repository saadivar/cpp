#include "WrongCat.hpp"



WrongCat::WrongCat(){
    std::cout <<"WrongCat default constructor called" <<std::endl;
    this->type = "WrongCat";
}
WrongCat::WrongCat(const WrongCat& meow)
{
    std::cout <<"WrongCat copy constructor called" <<std::endl;
    *this = meow;
}
WrongCat& WrongCat::operator=(const WrongCat& meow)
{
    std::cout <<"WrongCat copy assign operator called" <<std::endl;
    WrongAnimal::operator=(meow);
    return *this;
}
WrongCat::~WrongCat()
{
    std::cout <<"WrongCat destroyed" <<std::endl;
}

void WrongCat::makeSound()const
{
    std::cout << this->type << " meoooooooow" <<std::endl;
}

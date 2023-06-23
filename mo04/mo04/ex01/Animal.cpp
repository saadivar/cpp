#include "Animal.hpp"


Animal::Animal(){
    std::cout <<"Animal default constructor called" <<std::endl;
}
Animal::Animal(const Animal& animal)
{
    std::cout <<"Animal copy constructor called" <<std::endl;
    *this = animal;
}
Animal& Animal::operator=(const Animal& animal)
{
    std::cout <<"Animal copy assign operator called" <<std::endl;
    this->type = animal.type;
    return *this;
}
Animal::~Animal()
{
    std::cout <<"Animal destroyed" <<std::endl;
}

void Animal::makeSound()const
{
    std::cout <<"Animal make sound called" <<std::endl;
}
std::string Animal::getType()const
{
    return this->type;
}


#include "Dog.hpp"



Dog::Dog(){
    std::cout <<"Dog default constructor called" <<std::endl;
    this->type = "Dog";
    br = new Brain();
}
Dog::Dog(const Dog& dg)
{
    std::cout <<"Dog copy constructor called" <<std::endl;
    *this = dg;
}
Dog& Dog::operator=(const Dog& dg)
{
    std::cout <<"Dog copy assign operator called" <<std::endl;
    Animal::operator=(dg);
    this->br = dg.br;
    return *this;
}
Dog::~Dog()
{
    delete this->br;
    std::cout <<"Dog destroyed" <<std::endl;
}

void Dog::makeSound()const
{
    std::cout << this->type << " barrrrrrrrrrrrrk" <<std::endl;
}
#include "Dog.hpp"



Dog::Dog(){
    std::cout <<"Dog default constructor called" <<std::endl;
    this->type = "Dog";
    br = new Brain();
    
}
Dog::Dog(const Dog& dg) : Animal(dg)
{
    std::cout <<"Dog copy constructor called" <<std::endl;
    this->br = new Brain(*dg.br);
}
Dog& Dog::operator=(const Dog& dg)
{
    std::cout <<"Dog copy assign operator called" <<std::endl;
    Animal::operator=(dg);
    delete br;
    this->br = new Brain(*dg.br);
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
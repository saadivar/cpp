#include "Dog.hpp"


Dog::Dog(){
    std::cout <<"Dog default constructor called" <<std::endl;
    this->type = "Dog";
}
Dog::Dog(const Dog& meow)
{
    std::cout <<"Dog copy constructor called" <<std::endl;
    *this = meow;
}
Dog& Dog::operator=(const Dog& meow)
{
    std::cout <<"Dog copy assign operator called" <<std::endl;
    Animal::operator=(meow);
    return *this;
}
Dog::~Dog()
{
    std::cout <<"Dog destroyed" <<std::endl;
}

void Dog::makeSound()const
{
    std::cout << this->type << " barrrrrrrrrrrrrk" <<std::endl;
}
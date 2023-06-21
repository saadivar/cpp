#include "Cat.hpp"



Cat::Cat(){
    std::cout <<"Cat default constructor called" <<std::endl;
    this->type = "Cat";
}
Cat::Cat(const Cat& meow)
{
    std::cout <<"Cat copy constructor called" <<std::endl;
    *this = meow;
}
Cat& Cat::operator=(const Cat& meow)
{
    std::cout <<"Cat copy assign operator called" <<std::endl;
    Animal::operator=(meow);
    return *this;
}
Cat::~Cat()
{
    std::cout <<"Cat destroyed" <<std::endl;
}

void Cat::makeSound()const
{
    std::cout << this->type << " meoooooooow" <<std::endl;
}

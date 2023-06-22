#include "Cat.hpp"



Cat::Cat(){
    std::cout <<"Cat default constructor called" <<std::endl;
    this->type = "Cat";
    br = new Brain();
}
Cat::Cat(const Cat& meow) : Animal(meow)
{
    std::cout <<"Cat copy constructor called" <<std::endl;
    this->br = new Brain(*meow.br);
}
Cat& Cat::operator=(const Cat& meow)
{
    std::cout <<"Cat copy assign operator called" <<std::endl;
    Animal::operator=(meow);
    delete br;
    this->br = new Brain(*meow.br);
    return *this;
}
Cat::~Cat()
{
    delete this->br;
    std::cout <<"Cat destroyed" <<std::endl;
}

void Cat::makeSound()const
{
    std::cout << this->type << " meoooooooow" <<std::endl;
}

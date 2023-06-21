#include "WrongAnimal.hpp"


WrongAnimal::WrongAnimal(){
    std::cout <<"WrongAnimal default constructor called" <<std::endl;
    this->type = "donkey";
}
WrongAnimal::WrongAnimal(const WrongAnimal& an)
{
    std::cout <<"WrongAnimal copy constructor called" <<std::endl;
    *this = an;
}
WrongAnimal& WrongAnimal::operator=(const WrongAnimal& an)
{
    std::cout <<"WrongAnimal copy assign operator called" <<std::endl;
    this->type = an.type;
    return *this;
}
WrongAnimal::~WrongAnimal()
{
    std::cout <<"WrongAnimal destroyed" <<std::endl;
}

void WrongAnimal::makeSound()const
{
    std::cout <<"WrongAnimal make sound called" <<std::endl;
}
std::string WrongAnimal::getType()const
{
    return this->type;
}
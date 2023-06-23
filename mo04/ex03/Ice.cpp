#include "Ice.hpp"

Ice::Ice()
{
    this->type = "ice";
}
Ice::~Ice()
{

}
Ice::Ice(const Ice& am) : AMateria(am)
{
    this->type = "ice";
}
Ice& Ice::operator=(const Ice& am)
{
    AMateria::operator=(am);
    this->type = "ice";
    return *this;
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an Ice bolt at "<<target.getName() <<" *" <<std::endl;
}


AMateria* Ice::clone() const
{
    return(new Ice(*this));
}
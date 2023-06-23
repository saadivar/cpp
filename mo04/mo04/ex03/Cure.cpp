#include "Cure.hpp"

Cure::Cure()
{
    this->type = "cure";
}
Cure::~Cure()
{

}
Cure::Cure(const Cure& am) : AMateria(am)
{
    this->type = "cure";
}
    Cure& Cure::operator=(const Cure& am)
    {
        AMateria::operator=(am);
        this->type = "cure";
        return *this;
    }
void Cure::use(ICharacter& target)
{
    std::cout << "* heals "<< target.getName() <<"’s wounds *"<<std::endl;
}
AMateria* Cure::clone() const
{
    return(new Cure(*this));
}
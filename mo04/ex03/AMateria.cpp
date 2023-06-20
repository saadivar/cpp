#include "AMetria.hpp"


AMateria(std::string const & type) : type(type)
{

}
AMateria()
{

}
~AMateria()
{

}
AMateria(const AMateria& am)
{
    this->type = am.type;
}
    Amateria& operator=(const AMateria& am)
    {
        this->type = am.type;
        return *this;
    }
std::string const & getType() const
{
    return this->type;
}
virtual void use(ICharacter& target)
{
    
}

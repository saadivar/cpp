#include "AMateria.hpp"
#include "Character.hpp"

AMateria::AMateria(std::string const & type)
{
    this->type = type;
}
AMateria::AMateria()
{
}
AMateria::~AMateria()
{
}
AMateria::AMateria(const AMateria& am)
{
    this->type = am.type;
}
    AMateria& AMateria::operator=(const AMateria& am)
    {
        this->type = am.type;
        return *this;
    }
std::string const & AMateria::getType() const
{
    return this->type;
}
void AMateria::use(ICharacter& target)
{
    (void)target;
}


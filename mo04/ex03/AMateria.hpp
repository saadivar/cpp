#pragma once 


#include <iostream>
class AMateria
{
protected:
    std::String type;
public:
    AMateria(std::string const & type);
    AMateria();
    ~AMateria();
    AMateria(const AMateria& am);
    Amateria& operator=(const AMateria& am);
    std::string const & getType() const; 
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target);
};
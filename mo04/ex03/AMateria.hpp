#pragma once 

#include <iostream>
#include "ICharacter.hpp"
class ICharacter;
class AMateria
{
    protected:
        std::string type;
    public:
        AMateria(std::string const & type);
        AMateria();
        virtual ~AMateria();
        AMateria(const AMateria& am);
        AMateria& operator=(const AMateria& am);
        std::string const & getType() const; 
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
};
#pragma once
#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter
{
    protected:
        std::string name;
        AMateria* inve[4];
    public:
        ~Character() ;
        Character() ;
        Character(std::string n) ;
        Character(const Character& ch) ;
        Character& operator=(const Character& ch) ;
        std::string const & getName() const;
        void equip(AMateria* m) ;
        void unequip(int idx) ;
        void use(int idx, ICharacter& target);
        AMateria* Getadd(int idx);

};

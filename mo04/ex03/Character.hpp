#pragma once
#include "ICharacter.hpp"
#include "ICharacter.hpp"

class Character : public ICharacter
{
    protected:
        std::string name
        AMateria inve[4];
    public:
        ~Character() {}
        Character() {}
        std::string const & getName() const;
        void equip(AMateria* m) ;
        void unequip(int idx) ;
        void use(int idx, ICharacter& target);
}

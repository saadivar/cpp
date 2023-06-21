#include "AMateria.hpp"

class Ice  : public AMateria
{
    public:
        Ice();
        ~Ice();
        Ice(const Ice& am);
        Ice& operator=(const Ice& am);
        AMateria* clone() const;
        void use(ICharacter& target);
};
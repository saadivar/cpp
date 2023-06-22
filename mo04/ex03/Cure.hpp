#include "AMateria.hpp"

class Cure  : public AMateria
{
    public:
        Cure();
        ~Cure();
        Cure(const Cure& am);
        Cure& operator=(const Cure& am);
        AMateria* clone() const;
        void use(ICharacter& target);
};
#pragma once 

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    private:
        AMaterias a[4];
    public:
        ~MateriaSource() {}
        MateriaSource() {}
        void learnMateria(AMateria*);
        AMateria* createMateria(std::string const & type) ;
}
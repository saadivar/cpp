#pragma once 

#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource : public IMateriaSource
{
    private:
        AMateria* a[4];
    public:
        ~MateriaSource() ;
        MateriaSource() ;
        MateriaSource(const MateriaSource& ma) ;
        MateriaSource& operator=(const MateriaSource& ma) ;
        void learnMateria(AMateria*);
        AMateria* createMateria(std::string const & type) ;
};
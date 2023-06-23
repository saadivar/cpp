#include "MateriaSource.hpp"


MateriaSource::MateriaSource() {
    for (int i = 0;i < 4;i++)
    {
        this->a[i] = NULL;
    }
}

MateriaSource::~MateriaSource() {
    for (int i = 0;i < 4;i++)
    {
        if(this->a[i])
            delete this->a[i];
    }
}
MateriaSource::MateriaSource(const MateriaSource& ma)
{
    *this = ma;
}
MateriaSource& MateriaSource::operator=(const MateriaSource& ma)
{
    for (int i = 0;i < 4;i++)
    {
        if(this->a[i])
            delete a[i];
        this->a[i] = ma.a[i]->clone();
    }
    return *this;
}
void MateriaSource::learnMateria(AMateria* b)
{
    for (int i = 0;i < 4;i++)
    {
        if(this->a[i] == NULL)
        {
            a[i] = b;
            return;
        }
    }
}
AMateria* MateriaSource::createMateria(std::string const & type)
{
    
for (int i = 0;i <4;i++)
    {
        
        if(this->a[i] && this->a[i]->getType() == type)
        {
            return(this->a[i]->clone());
        }
    }
    return 0;
}
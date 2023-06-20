#include "Character.hpp"
#include "AMetria.hpp"
Character() {}
~Character() {}
std::string const & getName() const
{
    return this->name;
}
void equip(AMateria* m) 
{

}
void unequip(int idx)
{
    if(this->inve[idx])
        delete this->inve[idx];
}
void use(int idx, ICharacter& target)
{
    if(this->inve[idx])
    {
        
    }
}

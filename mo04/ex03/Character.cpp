#include "Character.hpp"
#include "AMateria.hpp"
Character::Character() {
    for (int i=0 ; i< 4;i++)
        this->inve[i] = NULL;
}

Character::Character(std::string n) : name(n) {
    
    for (int i=0 ; i< 4;i++)
        this->inve[i] = NULL;
}
Character::Character(const Character& ch) {
    
    *this = ch;
}
Character& Character::operator=(const Character& ch) {
    this->name = ch.name;
    for (int i=0 ; i< 4;i++)
    {
        if(ch.inve[i])
        {
            this->inve[i] = ch.inve[i]->clone();
        }
            
        else 
            this->inve[i] = NULL;
    }
    return *this;
}

Character::~Character() {
    for (int i = 0;i < 4;i++)
    {
        if(this->inve[i]){
            delete this->inve[i];
            for (int j = i + 1; j < 4; j++){
                if (this->inve[i] == this->inve[j]){
                    this->inve[j] = NULL;
                }
            }
        }
            
    }
}
std::string const & Character::getName() const
{
    return this->name;
}
void Character::equip(AMateria* m) 
{
    if(!m)
    {
        std::cout << "no spells"  <<std::endl;
        return ;
    }
    for(int i = 0;i < 4;i++)
    {
        if(this->inve[i] ==NULL)
        {
            this->inve[i] = m;
            return ;
        }
    }
    delete m;
}
void Character::unequip(int idx)
{
    
    if(this->inve[idx])
    {
        this->inve[idx] = NULL;
    }
        
}
void Character::use(int idx, ICharacter& target)
{
    if(this->inve[idx])
    {
        this->inve[idx]->use(target);
    }
}

AMateria* Character::Getadd(int idx)
{
    return (inve[idx]);
}

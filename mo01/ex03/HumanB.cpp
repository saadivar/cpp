#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    this->name = name;
}
HumanB::~HumanB()
{
}

void HumanB::attack()
{
    if(!sla7)
        std::cout << this->name << " dont have a weapon to attack with"<<std::endl;
    else 
        std::cout << this->name << " attacks with their " << sla7->getType()<<std::endl;
}
void HumanB::setWeapon(Weapon& wea)
{
    this->sla7 = &wea;
}
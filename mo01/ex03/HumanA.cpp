#include "HumanA.hpp"

HumanA::HumanA(std::string name,Weapon const&  gun) : sla7(gun)
{
    this->name = name;
}
HumanA::~HumanA()
{
}

void HumanA::attack()
{
    std::cout << this->name << " attacks with their " << sla7.getType()<<std::endl;
}
#include "zombie.hpp"

Zombie::Zombie()
{
}
Zombie::~Zombie()
{
    std::cout << this->name << " has been detroyed" << std::endl;
}
void Zombie::announce(void)
{
    
    std::cout << this->name  << " :" << "BraiiiiiiinnnzzzZ..." <<std::endl;
}
void Zombie::setter_n(std::string name)
{
    this->name = name;
}

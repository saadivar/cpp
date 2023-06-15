#include "Zombie.hpp"

int main()
{
    std::string name;

    randomChump("stack");
    Zombie *saad = newZombie("heap");
    saad->announce();
    delete saad;
}
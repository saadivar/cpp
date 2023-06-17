#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

int main(void)
{
    ScavTrap saad("saad");
    ScavTrap saad2(saad);

    saad.attack("hamid");
    saad.takeDamage(10);
    saad.beRepaired(10);
    saad.guardGate();

    return EXIT_SUCCESS;
}
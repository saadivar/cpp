#include "FragTrap.hpp"
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{

    FragTrap saad("saad");
    ScavTrap saad3("hamid");
    FragTrap saad2;
    saad2 = saad;

    saad2.attack("hamid");
    saad3.attack("hamid");
    saad2.takeDamage(9);
    saad2.beRepaired(8);
    saad2.highFivesGuys();

    return EXIT_SUCCESS;
}
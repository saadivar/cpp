#include "FragTrap.hpp"
#include "ClapTrap.hpp"

// int main(void)
// {
//     ScavTrap yi("yi");
//     yi.attack("zaba");
//     yi.takeDamage(1000);
//     yi.beRepaired(10);
//     yi.guardGate();
    
    
// }

int main( void )
{
    FragTrap ash( "Ash" );
    FragTrap ash2( ash );

    ash.attack( "the air" );
    ash.takeDamage( 10 );
    ash.beRepaired( 10 );
    ash.highFivesGuys();

    return EXIT_SUCCESS;
}
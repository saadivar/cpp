#include "ScavTrap.hpp"
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
    ScavTrap ash( "Ash" );
    ScavTrap ash2( ash );

    ash.attack( "the air" );
    ash.takeDamage( 10 );
    ash.beRepaired( 10 );
    ash.guardGate();

    return EXIT_SUCCESS;
}
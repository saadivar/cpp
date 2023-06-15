#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
class Zombie{
    private :
        std::string name;
    public :
        
        void setter_n(std::string name);
        Zombie();
        ~Zombie();
        void announce(void);

};
Zombie* zombieHorde( int N, std::string name );
#endif
#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
    std::cout << "ScavTrap constructor called" <<std::endl;

}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap destroyed" <<std::endl;

}
ScavTrap::ScavTrap(std::string name):ClapTrap(name) 
    {
        std::cout << "ScavTrap constructor called" <<std::endl;
        this->_hit_p = 100;
        this->_Energy_p = 50;
        this->_Attack_d = 20;
    }
ScavTrap::ScavTrap(const ScavTrap &cl) 
{
    std::cout << "ScavTrap copy constructor called" <<std::endl;
    *this = cl;
}
ScavTrap &ScavTrap::operator=(const ScavTrap &cl) {
        std::cout << "ScavTrap copy assign operator" <<std::endl;
        ClapTrap::operator=(cl);
        return(*this);
}

void ScavTrap::guardGate()
{
    std::cout <<this->_name << " is now in gate keeper mode" << std::endl;
}

void ScavTrap::attack(const std::string& target)
    {
        if(this->_Energy_p)
        {
            std::cout <<"Scavtrap "  <<this->_name << " attacks " << target << " causing " << this->_Attack_d <<" attack dammage" <<std::endl;
            this->_Energy_p--;
        }
        else
        {
            std::cout <<this->_name << "out of energy" << std::endl;
        }
    }
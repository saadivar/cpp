#include "FragTrap.hpp"

FragTrap::FragTrap() {
    std::cout << "FragTrap constructor called" <<std::endl;

}

FragTrap::~FragTrap() {
    std::cout << "FragTrap destroyed" <<std::endl;

}
FragTrap::FragTrap(std::string name):ClapTrap(name) 
    {
        std::cout << "FragTrap constructor called" <<std::endl;
        this->_hit_p = 100;
        this->_Energy_p = 100;
        this->_Attack_d = 30;
    }
FragTrap::FragTrap(const FragTrap &cl) 
{
    std::cout << "FragTrap copy  constructor called" <<std::endl;
    *this = cl;
}
FragTrap &FragTrap::operator=(const FragTrap &cl) {
    std::cout << "FragTrap copy  assignement operator called" <<std::endl;
        ClapTrap::operator=(cl);
        return(*this);
}

void FragTrap::highFivesGuys()
{
    std::cout <<this->_name << " highFives to  you my friend :)" << std::endl;
}

void FragTrap::attack(const std::string& target)
    {
        if(this->_Energy_p)
        {
            std::cout <<"FragTrap "  <<this->_name << " attacks " << target << " causing " << this->_Attack_d <<" attack dammage" <<std::endl;
            this->_Energy_p--;
        }
        else
        {
            std::cout <<this->_name << "out of energy" << std::endl;
        }
    }
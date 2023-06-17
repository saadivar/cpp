#include "ClapTrap.hpp"


ClapTrap::ClapTrap()
{
    
}
    ClapTrap::ClapTrap(std::string name):_name(name),_hit_p(10), _Energy_p(10), _Attack_d(0)
    {
        std::cout << "ClapTrap constructor called" <<std::endl;
    }
    ClapTrap::~ClapTrap(){
        std::cout << "ClapTrap destroyed" <<std::endl;
    }
    ClapTrap::ClapTrap(const ClapTrap &cl)
    {
        *this = cl;
        std::cout << "ClapTrap copy constructor called" <<std::endl;
    }
    ClapTrap &ClapTrap::operator=(const ClapTrap &cl){
        std::cout << "ClapTrap copy assign operator" <<std::endl;
        this->_name = cl._name;
        this->_Attack_d = cl._Attack_d;
        this->_Energy_p = cl._Energy_p;
        this->_hit_p = cl._hit_p;
        return(*this);
    }
    void ClapTrap::attack(const std::string& target)
    {
        if(this->_Energy_p)
        {
            std::cout <<"ClapTrap " <<this->_name << " attacks " << target << " causing " << this->_Attack_d <<" attack dammage" <<std::endl;
            this->_Energy_p--;
        }
        else
        {
            std::cout <<this->_name << "out of energy" << std::endl;
        }
    }
    void ClapTrap::takeDamage(unsigned int amount)
    {
        if(amount >= this->_hit_p)
        {
            std::cout << this->_name << " is dead " << std::endl;
            this->_hit_p = 0;
        }
        else
        {
            std::cout <<this->_name << " getattacked " << "and lost " << amount  << " health "<< std::endl;
            this->_hit_p -= amount;
        }
    }
    void ClapTrap::beRepaired(unsigned int amount)
    {
        if(this->_Energy_p && this->_hit_p)
        {
            this->_Energy_p--;
            this->_hit_p += amount;
            std::cout <<this->_name << " is gaining " << amount  << " health "<< std::endl;
        }
        else
        {
            if(!this->_Energy_p)
                std::cout <<this->_name << " is out of energy"<< std::endl;
            else
                std::cout <<this->_name << " is already dead "<< std::endl;
        }
    }
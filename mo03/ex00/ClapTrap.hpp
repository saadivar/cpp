#pragma once

#include <iostream>



class ClapTrap{
private:
    std::string _name;
    unsigned int _hit_p;
    unsigned int _Energy_p;
    unsigned int _Attack_d;

public:
    ClapTrap();
    ClapTrap(std::string name);
    ~ClapTrap();
    ClapTrap(const ClapTrap &cl);
    ClapTrap &operator=(const ClapTrap &cl);
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

};
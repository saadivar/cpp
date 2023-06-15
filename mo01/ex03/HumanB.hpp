#pragma once
#include <iostream>
#include "Weapon.hpp"

class HumanB{
    private:
        Weapon* sla7;
        std::string name;
    public:
        void attack();
        HumanB(std::string name);
        ~HumanB();
        void setWeapon(Weapon& wea);
};
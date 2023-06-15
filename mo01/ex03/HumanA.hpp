#pragma once
#include <iostream>
#include "Weapon.hpp"

class HumanA{
    private:
        Weapon const& sla7;
        std::string name;
    public:
        void attack() ;
        HumanA(std::string name,Weapon const&  gun);
        ~HumanA();
};
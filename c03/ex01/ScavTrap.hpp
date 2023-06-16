#pragma once

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
    public:
        ScavTrap();
        ScavTrap(std::string name);
        ~ScavTrap();
        // ScavTrap(const ScavTrap &cl);
        // ScavTrap &operator=(const ScavTrap &cl);
        void attack(const std::string& target);
        void guardGate();

};
#pragma once

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
    public:
        FragTrap();
        FragTrap(std::string name);
        ~FragTrap();
        FragTrap(const FragTrap &cl);
        FragTrap &operator=(const FragTrap &cl);
        void attack(const std::string& target);
        void highFivesGuys(void);

};
#pragma once

#include <iostream>

class Brain
{
    private:
        std::string ideas[100];
    public:
        Brain();
        Brain(const Brain& br);
        Brain& operator=(const Brain& br);
        ~Brain();
};



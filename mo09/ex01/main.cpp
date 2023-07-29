#include "RPN.hpp"

int main(int ac, char **av)
{
    if (ac != 2)
        std::cout << "Error args" <<std::endl;
    else
        rpn(av[1]);
    return (0);
}
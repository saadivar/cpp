
#include "PmergeMe.hpp"
int main(int ac ,char **av)
{
    if(!parse(av,ac) || ac < 2)
    {
        std::cout << "Error " <<std::endl;
        return 0;
    }
    std::vector<int> vector;
    std::deque<int> deque;
    filling(deque,vector,ac,av);
    Pmerge_vec(vector);
    Pmerge_deque(deque);
}
#include "easyfind.hpp"

int main( )
{

    std::vector< int >      vect;
    std::list< int >        list;
    for(int i= 0 ; i < 20 ; i++)
    {
        vect.push_back(i);
        list.push_back(i);
    }
    easyfind( vect, 21);
    easyfind( list, 4);

    return 0;
}
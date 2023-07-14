#include "Classes.hpp"


int main()
{
    Base *ptr ;
    ptr = generate();
    Base &ref = *ptr;
    identify(ptr);
    identify(ref);
}
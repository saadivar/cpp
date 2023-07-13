#include "Classes.hpp"


Base::~Base(){

}
A::~A(){}
B::~B(){}
C::~C(){}
Base * generate(void)
{
    srand(time(0));
    if(rand() % 3 == 0)
        {return new A;}
    else if(rand() % 3 == 1)
        {return new B;}
    else
        {return new C;}
}

void identify(Base* p)
{

    if(dynamic_cast<A*>(p))
        std::cout << "this is pointing to A " <<std::endl;
    else if(dynamic_cast<B*>(p))
        std::cout << "this is pointing to B " <<std::endl;
    else 
        std::cout << "this is pointing to C " <<std::endl;
}

void identify(Base& p)
{
    try
    {
        A &a = dynamic_cast<A&>(p);
        (void)a;
        std::cout << "this is referencing to A " <<std::endl;
    }
    catch(const std::exception& e)
    {
    }
    try
    {
        B &b = dynamic_cast<B&>(p);
        (void)b;
        std::cout << "this is referencing to B " <<std::endl;
    }
    catch(const std::exception& e)
    {
    }
    try
    {
        C &c = dynamic_cast<C&>(p);
        (void)c;
        std::cout << "this is referencing to C " <<std::endl;
    }
    catch(const std::exception& e)
    {
    }
}